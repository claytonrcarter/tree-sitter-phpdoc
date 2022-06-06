const PHP = require('tree-sitter-php/grammar');

// PHPDoc reference: https://docs.phpdoc.org/3.0/guide/references/phpdoc/index.html
// PHPDoc tags: https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/index.html#tag-reference
// PHPDoc docs appear to use these conventions
//
// TODO array return types https://docs.phpdoc.org/3.0/guide/references/phpdoc/types.html#arrays
//   @verbatimElement [required element] [<optional element>]

module.exports = grammar({
  name: 'phpdoc',

  extras: $ => [
    token(choice(
      // Skip over stars at the beginnings of lines
      seq(/\r?\n/, /[ \t]*/, repeat(seq('*', /[ \t]*/))),
      /\s/
    ))
  ],

  conflicts: $ => [
    [$.primitive_type, $.static],
    [$.namespace_name],
    [$.namespace_name_as_prefix],
    [$.named_type, $.generic_type],
    [$._type_argument_list]
  ],

  // Note:
  // 1. External scanners receive text with `extras` not removed yet. So
  //    whitespace must be detected and skipped appropriately with lexer->skip().
  //
  // 2. External scanners are triggered with highest precedence whenever possible.
  //    For example a rule like:
  //      seq(
  //        optional($.variable_name),
  //        optional($.text)
  //      )
  //    would not even start scanning for $.variable but immediately call the
  //    external scanner for $.text, because both tokens are optional. This can't
  //    be fixed with prec() either.
  //
  //    That's why you see weird looking external tokens like $._text_after_type
  //    which allows us to restate the above rule like:
  //
  //      choice(
  //        $._text_after_type,
  //        seq($.variable, $text)
  //      )
  externals: $ => [
    $.text,

    // Must not start with $variable
    $._text_after_type,

    // Text ends at }
    $._text_in_inline_tag,

    // Must not start with
    //   \d+\.
    //   '@package_version@'
    //   'git: $Id$'   (or any other form of 'name-of-vcs: $vector$')
    $._text_not_version,
  ],

  word: $ => $.name,

  rules: {
    document: $ => seq(
      $._begin,
      optional($.description),
      repeat($.tag),
      $._end,
    ),

    _begin: $ => token(seq('/**', repeat('*'))),

    description: $ => repeat1(
      choice(
        $.text,
        $.inline_tag
      )
    ),

    _description_after_type: $ => alias(
      repeat1(
        choice(
          alias($._text_after_type, $.text),
          $.inline_tag
        )
      ),
      $.description
    ),

    _description_not_version: $ => alias(
      repeat1(
        choice(
          alias($._text_not_version, $.text),
          $.inline_tag
        )
      ),
      $.description
    ),

    _description_in_inline_tag: $ => alias(
      repeat1(
        alias($._text_in_inline_tag, $.text),
      ),
      $.description
    ),

    _description_in_inline_tag_with_nesting: $ => alias(
      repeat1(
        choice(
          alias($._text_in_inline_tag, $.text),
          $.inline_tag
        )
      ),
      $.description
    ),

    tag: $ => choice(

      $._tag_without_description,
      $._tag_with_optional_description,
      $._tag_with_required_description,

      $._author_tag,
      $._deprecated_tag,
      $._global_tag,
      $._link_tag,
      $._method_tag,
      $._param_tag,
      $._property_tag,
      $._return_tag,
      $._see_tag,
      $._since_tag,
      $._throws_tag,
      $._var_tag,
      $._version_tag,

      $._phpunit_tag,

      // TODO eliminate this
      $._tag_with_incomplete_implementation,

      $._generic_template_tag,
      $._generic_implements_tag,
      $._generic_extends_tag,
      $._generic_use_tag
    ),

    inline_tag: $ => seq(
      '{',
      choice(
        alias('@inheritdoc', $.tag_name),
        alias('@inheritDoc', $.tag_name),
        $._inline_internal_tag,
        $._inline_link_tag,
        $._inline_see_tag,
      ),
      '}'
    ),

    // @api
    // @filesource
    // @inheritdoc
    // @inheritDoc
    _tag_without_description: $ => alias(
      choice(
        '@api',
        '@filesource',
        '@inheritdoc',
        '@inheritDoc',
      ),
      $.tag_name
    ),

    // @ignore [<description>]
    // @internal [<description>]
    _tag_with_optional_description: $ => seq(
      alias(
        choice(
          '@ignore',
          '@internal'
        ),
        $.tag_name
      ),
      optional($.description)
    ),

    // @category [description]
    // @copyright [description]
    // @todo [description]
    _tag_with_required_description: $ => seq(
      alias(
        choice(
          '@category',
          '@copyright',
          '@todo',
        ),
        $.tag_name
      ),
      $.description
    ),

    // TODO complete implementation for these tags
    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/subpackage.html
    // @subpackage [name]

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/example.html
    // @example [location] [<start-line> [<number-of-lines>] ] [<description>]
    // (also inline)

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/license.html
    // @license [<url>] [name]
    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/package.html
    // @package [level 1]\\[level 2]\\[etc.]
    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/source.html
    // @source [<start-line> [<number-of-lines>] ] [<description>]
    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/uses.html
    // @uses [FQSEN] [<description>]
    _tag_with_incomplete_implementation: $ => seq(
      alias(
        choice(
          '@example',
          '@license',
          '@package',
          '@source',
          '@subpackage',
          '@uses'
        ),
        $.tag_name
      ),
      optional($.description)
    ),

    // @author [name] [<email address>]
    // specs require email address to be wrapped in angle brackets
    _author_tag: $ => seq(
      alias('@author', $.tag_name),
      $.author_name,
      optional(seq('<', $.email_address, '>'))
    ),

    // @global [Type] [name] (name w/o $)
    // @global [Type] [description]
    _global_tag: $ => seq(
      alias('@global', $.tag_name),
      $._type,
      $.variable_name
    ),

    // @internal [description]
    _inline_internal_tag: $ => seq(
      alias('@internal', $.tag_name),
      optional($._description_in_inline_tag_with_nesting)
    ),

    // @link [URI] [<description>]
    _link_tag: $ => seq(
      alias('@link', $.tag_name),
      $.uri,
      optional($.description)
    ),
    _inline_link_tag: $ => seq(
      alias('@link', $.tag_name),
      $.uri,
      optional($._description_in_inline_tag)
    ),

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/method.html#method
    // @method [[static] return type] [name]([[type] [parameter]<, ...>]) [<description>]
    _method_tag: $ => seq(
      alias('@method', $.tag_name),
      // `[static]` is interpreted as optional despite not being in [<...>]
      optional($.static),
      $._type,
      $.name,
      $.parameters,
      optional($.description),
    ),

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/param.html
    // @param [<Type>] [name] [<description>]
    _param_tag: $ => seq(
      alias('@param', $.tag_name),
      optional($._type),
      $.variable_name,
      optional($.description),
    ),

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/property.html
    // @property[<-read|-write>] [Type] [name] [<description>]
    _property_tag: $ => seq(
      alias(choice(
        '@property',
        '@property-read',
        '@property-write',
      ), $.tag_name),
      $._type,
      $.variable_name,
      optional($.description),
    ),

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/return.html
    // @return [Type] [<description>]
    _return_tag: $ => seq(
      alias('@return', $.tag_name),
      $._type,
      optional($._description_after_type),
    ),

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/see.html
    // @see [URI | FQSEN] [<description>]
    // TODO Implement FQSEN support
    // Docs on FQSEN are unclear:
    // https://docs.phpdoc.org/classes/phpDocumentor-Descriptor-DescriptorAbstract.html#property_fqsen
    // "Fully Qualified Structural Element Name; the FQCN including method, property or constant name"
    // So FQSEN must always use FQCN (fully qualified class name). But the examples don't:
    //   @see number_of()
    //   @see MyClass::$items
    //   @see MyClass::setItems()
    _see_tag: $ => seq(
      alias('@see', $.tag_name),
      choice(
        $.uri,
        $.fqsen
      ),
      optional($.description)
    ),
    _inline_see_tag: $ => seq(
      alias('@see', $.tag_name),
      choice(
        $.uri,
        $.fqsen
      ),
      optional($._description_in_inline_tag)
    ),

    // @throws [Type] [<description>]
    _throws_tag: $ => seq(
      alias('@throws', $.tag_name),
      $._type,
      optional($._description_after_type),
    ),

    // https://docs.phpdoc.org/3.0/guide/references/phpdoc/tags/var.html
    // @var ["Type"] [element_name] [<description>]
    _var_tag: $ => seq(
      alias('@var', $.tag_name),
      choice(
        // @var int|string[]|array<string, int> description
        seq($._type, $._description_after_type),
        // @var int|string[]|array<string, int>
        seq($._type, $.variable_name),
        // @var int|string[]|array<string, int> $foo description
        seq($._type, $.variable_name, $.description),
      )
    ),

    // @deprecated [<Semantic Version>] [<description>]
    _deprecated_tag: $ => seq(
      alias('@deprecated', $.tag_name),
      optional(
        choice(
          $.version,
          $._description_not_version,
          seq($.version, $.description)
        )
      )
    ),

    // @since [<Semantic Version>] [<description>]
    _since_tag: $ => seq(
      alias('@since', $.tag_name),
      choice(
        $.version,
        $._description_not_version,
        seq($.version, $.description)
      )
    ),

    // @version [<Semantic Version>] [<description>]
    _version_tag: $ => seq(
      alias('@version', $.tag_name),
      choice(
        $.version,
        $._description_not_version,
        seq($.version, $.description)
      )
    ),

    // @template [Type] <of [Type]>
    // @psalm-template [Type] <of [Type]>
    // @phpstan-template [Type] <of [Type]>
    _generic_template_tag: $ => seq(
      alias(choice(
        '@template',
        '@psalm-template',
        '@phpstan-template'
      ), $.tag_name),
      choice(
        $._type,
        seq($._type, 'of', $._type),
      )
    ),

    // @implements [Type]
    // @template-implements [Type]
    _generic_implements_tag: $ => seq(
      alias(choice(
        '@implements',
        '@template-implements'
      ), $.tag_name),
      $._type,
    ),

    // @extends [Type]
    // @template-extends [Type]
    _generic_extends_tag: $ => seq(
      alias(choice(
        '@extends',
        '@template-extends'
      ), $.tag_name),
      $._type,
    ),

    // @use [Type]
    // @template-use [Type]
    _generic_use_tag: $ => seq(
      alias(choice(
        '@use',
        '@template-use'
      ), $.tag_name),
      $._type,
    ),

    // partial support for phpunit tags
    // TODO id the "core" tags and flesh out their support (ie some tags take
    // no text, some take types, etc)
    // curl https://phpunit.readthedocs.io/en/9.5/annotations.html | grep '&#64;' | sed 's/&#64;/@/g' | sed -E 's/^.+@/@/' | sed -E 's/<.+$//' | sort | uniq
    _phpunit_tag: $ => seq(
      alias(
        choice(
          '@after',
          '@afterClass',
          '@annotation',
          // '@author', // already part of phpdoc
          '@backupGlobals',
          '@backupStaticAttributes',
          '@before',
          '@beforeClass',
          '@codeCoverageIgnore',
          '@codeCoverageIgnore*',
          '@codeCoverageIgnoreEnd',
          '@codeCoverageIgnoreStart',
          '@covers',
          '@coversDefaultClass',
          '@coversDefaultClass to shorten annotations',
          '@coversNothing',
          '@dataProvider',
          '@depends',
          '@depends annotation to express dependencies',
          '@doesNotPerformAssertions',
          '@group',
          '@large',
          '@medium',
          '@preserveGlobalState',
          '@requires',
          '@requires usages',
          '@runInSeparateProcess',
          '@runTestsInSeparateProcesses',
          '@small',
          '@test',
          '@testWith',
          '@testdox',
          '@ticket',
          // '@uses', // already part of phpdoc
        ),
        $.tag_name
      ),
      optional($.description),
    ),

    // PHP.rules._type creates an alias for $.type_list
    _type: $ => PHP.rules._type,
    // union_type uses _types, so we override it to be "regular" types (which
    // aren't grouped under a parent node) or array types (which are)
    _types: $ => choice(
      $._regular_types,
      $.pseudo_type,
      alias($._phpdoc_array_types, $.array_type),
      alias($._psalm_generic_array_types, $.array_type),
      alias($._psalm_list_array_types, $.array_type)
    ),
    _regular_types: $ => PHP.rules._types,
    _phpdoc_array_types: $ => seq(
      $._regular_types,
      repeat1("[]")
    ),
    _psalm_generic_array_types: $ => seq(
      field('array', $._regular_types),
      "<",
      field('key', $._regular_types),
      ",",
      field('value', $._regular_types),
      ">"
    ),
    _psalm_list_array_types: $ => seq(
      field('array', choice(alias("list", $.primitive_type), $._regular_types)),
      "<",
      field('value', $._regular_types),
      ">"
    ),

    pseudo_type: $ => choice(
      seq(
        'class-string',
        "<",
        field('value', $.named_type),
        ">"
      )
    ),

    generic_type: $ => seq(PHP.rules.named_type, $._type_argument_list),

    _type_argument_list: $ => seq(
      '<',
      choice(
        repeat(','),
        sep(',', $._type),
      ),
      '>'
    ),

    name: $ => PHP.rules.name,
    named_type: $ => choice(PHP.rules.named_type, $.generic_type),
    namespace_name: $ => PHP.rules.namespace_name,
    namespace_name_as_prefix: $ => PHP.rules.namespace_name_as_prefix,
    optional_type: $ => PHP.rules.optional_type,
    primitive_type: $ => PHP.rules.primitive_type,
    qualified_name: $ => PHP.rules.qualified_name,
    union_type: $ => PHP.rules.union_type,
    variable_name: $ => PHP.rules.variable_name,

    // Match as many words as possible, where a word is just a sequence of
    // non-whitespace and non-< characters, separated by a space. (The non-<
    // requirement makes sure this regex doesn't consume the <email> field.)
    author_name: $ => /\S+( [^\s<]+)*/,

    // Simplisitic regex to match anything@anything.anything, where the last
    // anything also doesn't include a closing angle bracket
    email_address: $ => /\S+@\S+\.[^\s>]+/,

    version: $ => choice(
      // phpDoc does only recommend semantic versioning but it's not mandatory.
      // So we gracefully accept every word (i.e. no space included) that
      // starts with a number + dot as version.
      /\d+\.[^\s]+/,
      // Version vectors:
      //   $Id$
      //   name-of-vcs: $Id$
      $._version_vector,
      seq(/[a-zA-Z-_]+: */, $._version_vector),
      // Used by PEAR
      '@package_version@'
    ),
    _version_vector: $ => /\$[a-zA-Z_][a-zA-Z0-9-_]*\$/,

    uri: $ => /https?:\/\/[^\s}]+/,

    fqsen: $ => choice(
      $.named_type,
      $.variable_name,
      seq($.name, '()'),
      seq($.named_type, '::', $.name),
      seq($.named_type, '::', $.name, '()'),
      seq($.named_type, '::', $.variable_name)
    ),

    parameters: $ => seq(
      '(',
      sep($.parameter, ','),
      ')',
    ),

    parameter: $ => seq(
      optional($._type),
      $.variable_name,
      optional(seq(
        '=',
        $.default_value,
      )),
    ),

    default_value: $ => /[^, ][^,)]*/,

    static: $ => 'static',

    _end: $ => '*/',
  },
})

function sep1(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sep(rule, sep) {
  return optional(sep1(rule, sep));
}
