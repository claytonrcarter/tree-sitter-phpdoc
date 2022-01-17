#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 181
#define LARGE_STATE_COUNT 36
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum {
  sym_name = 1,
  sym__begin = 2,
  anon_sym_LBRACE = 3,
  anon_sym_ATinheritDoc = 4,
  anon_sym_RBRACE = 5,
  anon_sym_ATapi = 6,
  anon_sym_ATfilesource = 7,
  anon_sym_ATignore = 8,
  anon_sym_ATcategory = 9,
  anon_sym_ATcopyright = 10,
  anon_sym_ATtodo = 11,
  anon_sym_ATexample = 12,
  anon_sym_ATlicense = 13,
  anon_sym_ATpackage = 14,
  anon_sym_ATsource = 15,
  anon_sym_ATsubpackage = 16,
  anon_sym_ATuses = 17,
  anon_sym_ATauthor = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_ATglobal = 21,
  anon_sym_ATinternal = 22,
  anon_sym_ATlink = 23,
  anon_sym_LPAREN_RPAREN = 24,
  anon_sym_ATmethod = 25,
  anon_sym_ATparam = 26,
  anon_sym_ATproperty = 27,
  anon_sym_ATproperty_DASHread = 28,
  anon_sym_ATproperty_DASHwrite = 29,
  anon_sym_ATreturn = 30,
  anon_sym_ATsee = 31,
  anon_sym_ATthrows = 32,
  anon_sym_ATvar = 33,
  anon_sym_ATdeprecated = 34,
  anon_sym_ATsince = 35,
  anon_sym_ATversion = 36,
  anon_sym_ATafter = 37,
  anon_sym_ATafterClass = 38,
  anon_sym_ATannotation = 39,
  anon_sym_ATbackupGlobals = 40,
  anon_sym_ATbackupStaticAttributes = 41,
  anon_sym_ATbefore = 42,
  anon_sym_ATbeforeClass = 43,
  anon_sym_ATcodeCoverageIgnore = 44,
  anon_sym_ATcodeCoverageIgnore_STAR = 45,
  anon_sym_ATcodeCoverageIgnoreEnd = 46,
  anon_sym_ATcodeCoverageIgnoreStart = 47,
  anon_sym_ATcovers = 48,
  anon_sym_ATcoversDefaultClass = 49,
  anon_sym_ATcoversDefaultClasstoshortenannotations = 50,
  anon_sym_ATcoversNothing = 51,
  anon_sym_ATdataProvider = 52,
  anon_sym_ATdepends = 53,
  anon_sym_ATdependsannotationtoexpressdependencies = 54,
  anon_sym_ATdoesNotPerformAssertions = 55,
  anon_sym_ATgroup = 56,
  anon_sym_ATlarge = 57,
  anon_sym_ATmedium = 58,
  anon_sym_ATpreserveGlobalState = 59,
  anon_sym_ATrequires = 60,
  anon_sym_ATrequiresusages = 61,
  anon_sym_ATrunInSeparateProcess = 62,
  anon_sym_ATrunTestsInSeparateProcesses = 63,
  anon_sym_ATsmall = 64,
  anon_sym_ATtest = 65,
  anon_sym_ATtestWith = 66,
  anon_sym_ATtestdox = 67,
  anon_sym_ATticket = 68,
  anon_sym_LBRACK_RBRACK = 69,
  anon_sym_COMMA = 70,
  anon_sym_list = 71,
  anon_sym_BSLASH = 72,
  aux_sym_namespace_name_as_prefix_token1 = 73,
  anon_sym_QMARK = 74,
  anon_sym_array = 75,
  aux_sym_primitive_type_token1 = 76,
  anon_sym_iterable = 77,
  anon_sym_bool = 78,
  anon_sym_float = 79,
  anon_sym_int = 80,
  anon_sym_string = 81,
  anon_sym_void = 82,
  anon_sym_mixed = 83,
  anon_sym_static = 84,
  anon_sym_false = 85,
  anon_sym_null = 86,
  anon_sym_PIPE = 87,
  anon_sym_DOLLAR = 88,
  sym_author_name = 89,
  sym_email_address = 90,
  sym_text = 91,
  sym_version = 92,
  sym_uri = 93,
  anon_sym_LPAREN = 94,
  anon_sym_RPAREN = 95,
  anon_sym_EQ = 96,
  sym_default_value = 97,
  sym__end = 98,
  sym_document = 99,
  sym_tag = 100,
  sym_inline_tag = 101,
  sym__simple_tag_without_description = 102,
  sym__simple_tag_with_optional_description = 103,
  sym__simple_tag_with_required_description = 104,
  sym__currently_incomplete_tags = 105,
  sym__author_tag = 106,
  sym__global_tag = 107,
  sym__internal_tag = 108,
  sym__internal_inline_tag = 109,
  sym__link_tag = 110,
  sym__link_inline_tag = 111,
  sym__method_tag = 112,
  sym__param_tag = 113,
  sym__property_tag = 114,
  sym__return_tag = 115,
  sym__see_tag = 116,
  sym__see_inline_tag = 117,
  sym__throws_tag = 118,
  sym__var_tag = 119,
  sym__version_tag = 120,
  sym__phpunit_tag = 121,
  sym__type = 122,
  sym__types = 123,
  sym__regular_types = 124,
  sym__phpdoc_array_types = 125,
  sym__psalm_generic_array_types = 126,
  sym__psalm_list_array_types = 127,
  sym_named_type = 128,
  sym_namespace_name = 129,
  sym_namespace_name_as_prefix = 130,
  sym_optional_type = 131,
  sym_primitive_type = 132,
  sym_qualified_name = 133,
  sym_union_type = 134,
  sym_variable_name = 135,
  sym_description = 136,
  sym_parameters = 137,
  sym_parameter = 138,
  sym_static = 139,
  aux_sym_document_repeat1 = 140,
  aux_sym__phpdoc_array_types_repeat1 = 141,
  aux_sym_namespace_name_repeat1 = 142,
  aux_sym_union_type_repeat1 = 143,
  aux_sym_description_repeat1 = 144,
  aux_sym_parameters_repeat1 = 145,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [sym__begin] = "_begin",
  [anon_sym_LBRACE] = "{",
  [anon_sym_ATinheritDoc] = "tag_name",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATapi] = "tag_name",
  [anon_sym_ATfilesource] = "tag_name",
  [anon_sym_ATignore] = "tag_name",
  [anon_sym_ATcategory] = "tag_name",
  [anon_sym_ATcopyright] = "tag_name",
  [anon_sym_ATtodo] = "tag_name",
  [anon_sym_ATexample] = "@example",
  [anon_sym_ATlicense] = "@license",
  [anon_sym_ATpackage] = "@package",
  [anon_sym_ATsource] = "@source",
  [anon_sym_ATsubpackage] = "@subpackage",
  [anon_sym_ATuses] = "@uses",
  [anon_sym_ATauthor] = "tag_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_ATglobal] = "tag_name",
  [anon_sym_ATinternal] = "tag_name",
  [anon_sym_ATlink] = "tag_name",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_ATmethod] = "tag_name",
  [anon_sym_ATparam] = "tag_name",
  [anon_sym_ATproperty] = "tag_name",
  [anon_sym_ATproperty_DASHread] = "tag_name",
  [anon_sym_ATproperty_DASHwrite] = "tag_name",
  [anon_sym_ATreturn] = "tag_name",
  [anon_sym_ATsee] = "tag_name",
  [anon_sym_ATthrows] = "tag_name",
  [anon_sym_ATvar] = "tag_name",
  [anon_sym_ATdeprecated] = "tag_name",
  [anon_sym_ATsince] = "tag_name",
  [anon_sym_ATversion] = "tag_name",
  [anon_sym_ATafter] = "tag_name",
  [anon_sym_ATafterClass] = "tag_name",
  [anon_sym_ATannotation] = "tag_name",
  [anon_sym_ATbackupGlobals] = "tag_name",
  [anon_sym_ATbackupStaticAttributes] = "tag_name",
  [anon_sym_ATbefore] = "tag_name",
  [anon_sym_ATbeforeClass] = "tag_name",
  [anon_sym_ATcodeCoverageIgnore] = "tag_name",
  [anon_sym_ATcodeCoverageIgnore_STAR] = "tag_name",
  [anon_sym_ATcodeCoverageIgnoreEnd] = "tag_name",
  [anon_sym_ATcodeCoverageIgnoreStart] = "tag_name",
  [anon_sym_ATcovers] = "tag_name",
  [anon_sym_ATcoversDefaultClass] = "tag_name",
  [anon_sym_ATcoversDefaultClasstoshortenannotations] = "tag_name",
  [anon_sym_ATcoversNothing] = "tag_name",
  [anon_sym_ATdataProvider] = "tag_name",
  [anon_sym_ATdepends] = "tag_name",
  [anon_sym_ATdependsannotationtoexpressdependencies] = "tag_name",
  [anon_sym_ATdoesNotPerformAssertions] = "tag_name",
  [anon_sym_ATgroup] = "tag_name",
  [anon_sym_ATlarge] = "tag_name",
  [anon_sym_ATmedium] = "tag_name",
  [anon_sym_ATpreserveGlobalState] = "tag_name",
  [anon_sym_ATrequires] = "tag_name",
  [anon_sym_ATrequiresusages] = "tag_name",
  [anon_sym_ATrunInSeparateProcess] = "tag_name",
  [anon_sym_ATrunTestsInSeparateProcesses] = "tag_name",
  [anon_sym_ATsmall] = "tag_name",
  [anon_sym_ATtest] = "tag_name",
  [anon_sym_ATtestWith] = "tag_name",
  [anon_sym_ATtestdox] = "tag_name",
  [anon_sym_ATticket] = "tag_name",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_COMMA] = ",",
  [anon_sym_list] = "primitive_type",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_namespace_name_as_prefix_token1] = "namespace",
  [anon_sym_QMARK] = "\?",
  [anon_sym_array] = "array",
  [aux_sym_primitive_type_token1] = "callable",
  [anon_sym_iterable] = "iterable",
  [anon_sym_bool] = "bool",
  [anon_sym_float] = "float",
  [anon_sym_int] = "int",
  [anon_sym_string] = "string",
  [anon_sym_void] = "void",
  [anon_sym_mixed] = "mixed",
  [anon_sym_static] = "static",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_PIPE] = "|",
  [anon_sym_DOLLAR] = "$",
  [sym_author_name] = "author_name",
  [sym_email_address] = "email_address",
  [sym_text] = "text",
  [sym_version] = "version",
  [sym_uri] = "uri",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_default_value] = "default_value",
  [sym__end] = "_end",
  [sym_document] = "document",
  [sym_tag] = "tag",
  [sym_inline_tag] = "inline_tag",
  [sym__simple_tag_without_description] = "_simple_tag_without_description",
  [sym__simple_tag_with_optional_description] = "_simple_tag_with_optional_description",
  [sym__simple_tag_with_required_description] = "_simple_tag_with_required_description",
  [sym__currently_incomplete_tags] = "tag_name",
  [sym__author_tag] = "_author_tag",
  [sym__global_tag] = "_global_tag",
  [sym__internal_tag] = "_internal_tag",
  [sym__internal_inline_tag] = "_internal_inline_tag",
  [sym__link_tag] = "_link_tag",
  [sym__link_inline_tag] = "_link_inline_tag",
  [sym__method_tag] = "_method_tag",
  [sym__param_tag] = "_param_tag",
  [sym__property_tag] = "_property_tag",
  [sym__return_tag] = "_return_tag",
  [sym__see_tag] = "_see_tag",
  [sym__see_inline_tag] = "_see_inline_tag",
  [sym__throws_tag] = "_throws_tag",
  [sym__var_tag] = "_var_tag",
  [sym__version_tag] = "_version_tag",
  [sym__phpunit_tag] = "_phpunit_tag",
  [sym__type] = "_type",
  [sym__types] = "_types",
  [sym__regular_types] = "_regular_types",
  [sym__phpdoc_array_types] = "array_type",
  [sym__psalm_generic_array_types] = "array_type",
  [sym__psalm_list_array_types] = "array_type",
  [sym_named_type] = "named_type",
  [sym_namespace_name] = "namespace_name",
  [sym_namespace_name_as_prefix] = "namespace_name_as_prefix",
  [sym_optional_type] = "optional_type",
  [sym_primitive_type] = "primitive_type",
  [sym_qualified_name] = "qualified_name",
  [sym_union_type] = "type_list",
  [sym_variable_name] = "variable_name",
  [sym_description] = "description",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_static] = "static",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__phpdoc_array_types_repeat1] = "_phpdoc_array_types_repeat1",
  [aux_sym_namespace_name_repeat1] = "namespace_name_repeat1",
  [aux_sym_union_type_repeat1] = "union_type_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [sym__begin] = sym__begin,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_ATinheritDoc] = anon_sym_ATinheritDoc,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_ATapi] = anon_sym_ATinheritDoc,
  [anon_sym_ATfilesource] = anon_sym_ATinheritDoc,
  [anon_sym_ATignore] = anon_sym_ATinheritDoc,
  [anon_sym_ATcategory] = anon_sym_ATinheritDoc,
  [anon_sym_ATcopyright] = anon_sym_ATinheritDoc,
  [anon_sym_ATtodo] = anon_sym_ATinheritDoc,
  [anon_sym_ATexample] = anon_sym_ATexample,
  [anon_sym_ATlicense] = anon_sym_ATlicense,
  [anon_sym_ATpackage] = anon_sym_ATpackage,
  [anon_sym_ATsource] = anon_sym_ATsource,
  [anon_sym_ATsubpackage] = anon_sym_ATsubpackage,
  [anon_sym_ATuses] = anon_sym_ATuses,
  [anon_sym_ATauthor] = anon_sym_ATinheritDoc,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_ATglobal] = anon_sym_ATinheritDoc,
  [anon_sym_ATinternal] = anon_sym_ATinheritDoc,
  [anon_sym_ATlink] = anon_sym_ATinheritDoc,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_ATmethod] = anon_sym_ATinheritDoc,
  [anon_sym_ATparam] = anon_sym_ATinheritDoc,
  [anon_sym_ATproperty] = anon_sym_ATinheritDoc,
  [anon_sym_ATproperty_DASHread] = anon_sym_ATinheritDoc,
  [anon_sym_ATproperty_DASHwrite] = anon_sym_ATinheritDoc,
  [anon_sym_ATreturn] = anon_sym_ATinheritDoc,
  [anon_sym_ATsee] = anon_sym_ATinheritDoc,
  [anon_sym_ATthrows] = anon_sym_ATinheritDoc,
  [anon_sym_ATvar] = anon_sym_ATinheritDoc,
  [anon_sym_ATdeprecated] = anon_sym_ATinheritDoc,
  [anon_sym_ATsince] = anon_sym_ATinheritDoc,
  [anon_sym_ATversion] = anon_sym_ATinheritDoc,
  [anon_sym_ATafter] = anon_sym_ATinheritDoc,
  [anon_sym_ATafterClass] = anon_sym_ATinheritDoc,
  [anon_sym_ATannotation] = anon_sym_ATinheritDoc,
  [anon_sym_ATbackupGlobals] = anon_sym_ATinheritDoc,
  [anon_sym_ATbackupStaticAttributes] = anon_sym_ATinheritDoc,
  [anon_sym_ATbefore] = anon_sym_ATinheritDoc,
  [anon_sym_ATbeforeClass] = anon_sym_ATinheritDoc,
  [anon_sym_ATcodeCoverageIgnore] = anon_sym_ATinheritDoc,
  [anon_sym_ATcodeCoverageIgnore_STAR] = anon_sym_ATinheritDoc,
  [anon_sym_ATcodeCoverageIgnoreEnd] = anon_sym_ATinheritDoc,
  [anon_sym_ATcodeCoverageIgnoreStart] = anon_sym_ATinheritDoc,
  [anon_sym_ATcovers] = anon_sym_ATinheritDoc,
  [anon_sym_ATcoversDefaultClass] = anon_sym_ATinheritDoc,
  [anon_sym_ATcoversDefaultClasstoshortenannotations] = anon_sym_ATinheritDoc,
  [anon_sym_ATcoversNothing] = anon_sym_ATinheritDoc,
  [anon_sym_ATdataProvider] = anon_sym_ATinheritDoc,
  [anon_sym_ATdepends] = anon_sym_ATinheritDoc,
  [anon_sym_ATdependsannotationtoexpressdependencies] = anon_sym_ATinheritDoc,
  [anon_sym_ATdoesNotPerformAssertions] = anon_sym_ATinheritDoc,
  [anon_sym_ATgroup] = anon_sym_ATinheritDoc,
  [anon_sym_ATlarge] = anon_sym_ATinheritDoc,
  [anon_sym_ATmedium] = anon_sym_ATinheritDoc,
  [anon_sym_ATpreserveGlobalState] = anon_sym_ATinheritDoc,
  [anon_sym_ATrequires] = anon_sym_ATinheritDoc,
  [anon_sym_ATrequiresusages] = anon_sym_ATinheritDoc,
  [anon_sym_ATrunInSeparateProcess] = anon_sym_ATinheritDoc,
  [anon_sym_ATrunTestsInSeparateProcesses] = anon_sym_ATinheritDoc,
  [anon_sym_ATsmall] = anon_sym_ATinheritDoc,
  [anon_sym_ATtest] = anon_sym_ATinheritDoc,
  [anon_sym_ATtestWith] = anon_sym_ATinheritDoc,
  [anon_sym_ATtestdox] = anon_sym_ATinheritDoc,
  [anon_sym_ATticket] = anon_sym_ATinheritDoc,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_list] = sym_primitive_type,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_namespace_name_as_prefix_token1] = aux_sym_namespace_name_as_prefix_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_array] = anon_sym_array,
  [aux_sym_primitive_type_token1] = aux_sym_primitive_type_token1,
  [anon_sym_iterable] = anon_sym_iterable,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_mixed] = anon_sym_mixed,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_author_name] = sym_author_name,
  [sym_email_address] = sym_email_address,
  [sym_text] = sym_text,
  [sym_version] = sym_version,
  [sym_uri] = sym_uri,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_default_value] = sym_default_value,
  [sym__end] = sym__end,
  [sym_document] = sym_document,
  [sym_tag] = sym_tag,
  [sym_inline_tag] = sym_inline_tag,
  [sym__simple_tag_without_description] = sym__simple_tag_without_description,
  [sym__simple_tag_with_optional_description] = sym__simple_tag_with_optional_description,
  [sym__simple_tag_with_required_description] = sym__simple_tag_with_required_description,
  [sym__currently_incomplete_tags] = anon_sym_ATinheritDoc,
  [sym__author_tag] = sym__author_tag,
  [sym__global_tag] = sym__global_tag,
  [sym__internal_tag] = sym__internal_tag,
  [sym__internal_inline_tag] = sym__internal_inline_tag,
  [sym__link_tag] = sym__link_tag,
  [sym__link_inline_tag] = sym__link_inline_tag,
  [sym__method_tag] = sym__method_tag,
  [sym__param_tag] = sym__param_tag,
  [sym__property_tag] = sym__property_tag,
  [sym__return_tag] = sym__return_tag,
  [sym__see_tag] = sym__see_tag,
  [sym__see_inline_tag] = sym__see_inline_tag,
  [sym__throws_tag] = sym__throws_tag,
  [sym__var_tag] = sym__var_tag,
  [sym__version_tag] = sym__version_tag,
  [sym__phpunit_tag] = sym__phpunit_tag,
  [sym__type] = sym__type,
  [sym__types] = sym__types,
  [sym__regular_types] = sym__regular_types,
  [sym__phpdoc_array_types] = sym__phpdoc_array_types,
  [sym__psalm_generic_array_types] = sym__phpdoc_array_types,
  [sym__psalm_list_array_types] = sym__phpdoc_array_types,
  [sym_named_type] = sym_named_type,
  [sym_namespace_name] = sym_namespace_name,
  [sym_namespace_name_as_prefix] = sym_namespace_name_as_prefix,
  [sym_optional_type] = sym_optional_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_qualified_name] = sym_qualified_name,
  [sym_union_type] = sym_union_type,
  [sym_variable_name] = sym_variable_name,
  [sym_description] = sym_description,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_static] = sym_static,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__phpdoc_array_types_repeat1] = aux_sym__phpdoc_array_types_repeat1,
  [aux_sym_namespace_name_repeat1] = aux_sym_namespace_name_repeat1,
  [aux_sym_union_type_repeat1] = aux_sym_union_type_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATinheritDoc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATapi] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATfilesource] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATignore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcategory] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcopyright] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATtodo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATexample] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATlicense] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsubpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATuses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATauthor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATglobal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATinternal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATlink] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmethod] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATparam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATproperty] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATproperty_DASHread] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATproperty_DASHwrite] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATreturn] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsee] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATthrows] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATvar] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATdeprecated] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsince] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATversion] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATafter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATafterClass] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATannotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATbackupGlobals] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATbackupStaticAttributes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATbefore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATbeforeClass] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcodeCoverageIgnore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcodeCoverageIgnore_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcodeCoverageIgnoreEnd] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcodeCoverageIgnoreStart] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcovers] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcoversDefaultClass] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcoversDefaultClasstoshortenannotations] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcoversNothing] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATdataProvider] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATdepends] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATdependsannotationtoexpressdependencies] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATdoesNotPerformAssertions] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATgroup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATlarge] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATmedium] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATpreserveGlobalState] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATrequires] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATrequiresusages] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATrunInSeparateProcess] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATrunTestsInSeparateProcesses] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsmall] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATtest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATtestWith] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATtestdox] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATticket] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_namespace_name_as_prefix_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iterable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_author_name] = {
    .visible = true,
    .named = true,
  },
  [sym_email_address] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_tag_without_description] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_tag_with_optional_description] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_tag_with_required_description] = {
    .visible = false,
    .named = true,
  },
  [sym__currently_incomplete_tags] = {
    .visible = true,
    .named = true,
  },
  [sym__author_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__global_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__internal_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__internal_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__link_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__link_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__method_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__param_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__property_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__return_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__see_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__see_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__throws_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__var_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__version_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__phpunit_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__types] = {
    .visible = false,
    .named = true,
  },
  [sym__regular_types] = {
    .visible = false,
    .named = true,
  },
  [sym__phpdoc_array_types] = {
    .visible = true,
    .named = true,
  },
  [sym__psalm_generic_array_types] = {
    .visible = true,
    .named = true,
  },
  [sym__psalm_list_array_types] = {
    .visible = true,
    .named = true,
  },
  [sym_named_type] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_name_as_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_static] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__phpdoc_array_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespace_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_array = 1,
  field_key = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_array, 0, .inherited = true},
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [3] =
    {field_array, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [5] =
    {field_array, 0},
    {field_value, 2},
  [7] =
    {field_array, 0},
    {field_key, 2},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = sym_description,
  },
  [4] = {
    [2] = sym_description,
  },
  [5] = {
    [3] = sym_description,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(456);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(455)
      if (lookahead == '\r') SKIP(455)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(525);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == '?') ADVANCE(551);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '}') ADVANCE(460);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(525);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == '?') ADVANCE(551);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '}') ADVANCE(460);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(525);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == '?') ADVANCE(551);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '}') ADVANCE(460);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(3)
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') SKIP(3)
      if (lookahead == ',') ADVANCE(525);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == '?') ADVANCE(551);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(5)
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(7)
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 8:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 9:
      if (lookahead == '\t') SKIP(9)
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '{') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(11)
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '{') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(13)
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 15:
      if (lookahead == '\t') SKIP(15)
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == ' ') SKIP(15)
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 16:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(582);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 17:
      if (lookahead == '\t') SKIP(17)
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == ' ') SKIP(17)
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 18:
      if (lookahead == '\t') SKIP(18)
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == ' ') SKIP(18)
      if (lookahead == '*') SKIP(18)
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 19:
      if (lookahead == '\t') SKIP(19)
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(19)
      if (lookahead == ' ') SKIP(19)
      if (lookahead == '*') SKIP(19)
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '}') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(565);
      END_STATE();
    case 20:
      if (lookahead == '\t') SKIP(20)
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(20)
      if (lookahead == ' ') SKIP(20)
      if (lookahead == '(') ADVANCE(560);
      if (lookahead == '*') SKIP(20)
      if (lookahead == '}') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(565);
      END_STATE();
    case 21:
      if (lookahead == '\t') ADVANCE(580);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == '\r') ADVANCE(580);
      if (lookahead == ' ') SKIP(21)
      if (lookahead == '*') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(581);
      END_STATE();
    case 22:
      if (lookahead == '\t') SKIP(23)
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == ' ') SKIP(23)
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == '\t') SKIP(23)
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == ' ') SKIP(23)
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == '\t') SKIP(24)
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '*') ADVANCE(554);
      if (lookahead != 0) ADVANCE(558);
      END_STATE();
    case 25:
      if (lookahead == '\t') SKIP(24)
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(24)
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '*') ADVANCE(555);
      if (lookahead == '<') ADVANCE(558);
      if (lookahead != 0) ADVANCE(556);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(391);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(414);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(457);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '@') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '@') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(559);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '@') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == '@') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(412);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(392);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(279);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(245);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(287);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(246);
      if (lookahead == 'S') ADVANCE(410);
      END_STATE();
    case 45:
      if (lookahead == 'G') ADVANCE(247);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(202);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(253);
      if (lookahead == 'T') ADVANCE(178);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(276);
      END_STATE();
    case 49:
      if (lookahead == 'N') ADVANCE(289);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(340);
      END_STATE();
    case 51:
      if (lookahead == 'P') ADVANCE(341);
      END_STATE();
    case 52:
      if (lookahead == 'P') ADVANCE(171);
      END_STATE();
    case 53:
      if (lookahead == 'P') ADVANCE(353);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(180);
      END_STATE();
    case 55:
      if (lookahead == 'S') ADVANCE(430);
      END_STATE();
    case 56:
      if (lookahead == 'S') ADVANCE(187);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(524);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(386);
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(386);
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 97:
      if (lookahead == 'b') ADVANCE(313);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(440);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 100:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 101:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(480);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(489);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(483);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(451);
      if (lookahead == 'v') ADVANCE(181);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'h') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 188:
      if (lookahead == 'f') ADVANCE(405);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(211);
      if (lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 189:
      if (lookahead == 'f') ADVANCE(290);
      END_STATE();
    case 190:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 191:
      if (lookahead == 'f') ADVANCE(298);
      END_STATE();
    case 192:
      if (lookahead == 'g') ADVANCE(506);
      END_STATE();
    case 193:
      if (lookahead == 'g') ADVANCE(206);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(270);
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(270);
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 201:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 202:
      if (lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 203:
      if (lookahead == 'h') ADVANCE(521);
      END_STATE();
    case 204:
      if (lookahead == 'h') ADVANCE(285);
      END_STATE();
    case 205:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 206:
      if (lookahead == 'h') ADVANCE(398);
      END_STATE();
    case 207:
      if (lookahead == 'h') ADVANCE(293);
      END_STATE();
    case 208:
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 209:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 228:
      if (lookahead == 'k') ADVANCE(478);
      END_STATE();
    case 229:
      if (lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 230:
      if (lookahead == 'k') ADVANCE(155);
      END_STATE();
    case 231:
      if (lookahead == 'k') ADVANCE(436);
      END_STATE();
    case 232:
      if (lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(519);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 248:
      if (lookahead == 'm') ADVANCE(481);
      END_STATE();
    case 249:
      if (lookahead == 'm') ADVANCE(513);
      END_STATE();
    case 250:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 310:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 311:
      if (lookahead == 'p') ADVANCE(511);
      END_STATE();
    case 312:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 313:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 314:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 315:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 316:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 317:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 318:
      if (lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 319:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 320:
      if (lookahead == 'q') ADVANCE(433);
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 341:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 343:
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 'w') ADVANCE(336);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 357:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 358:
      if (lookahead == 's') ADVANCE(472);
      END_STATE();
    case 359:
      if (lookahead == 's') ADVANCE(503);
      END_STATE();
    case 360:
      if (lookahead == 's') ADVANCE(487);
      END_STATE();
    case 361:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 362:
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 363:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 364:
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 365:
      if (lookahead == 's') ADVANCE(498);
      END_STATE();
    case 366:
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 367:
      if (lookahead == 's') ADVANCE(516);
      END_STATE();
    case 368:
      if (lookahead == 's') ADVANCE(504);
      END_STATE();
    case 369:
      if (lookahead == 's') ADVANCE(517);
      END_STATE();
    case 370:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 371:
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(518);
      END_STATE();
    case 373:
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 374:
      if (lookahead == 's') ADVANCE(509);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 377:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 378:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 379:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(365);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(369);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(389);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 396:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(465);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 401:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 403:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 404:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 432:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 433:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 434:
      if (lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 435:
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 436:
      if (lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 437:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 438:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 439:
      if (lookahead == 'u') ADVANCE(393);
      END_STATE();
    case 440:
      if (lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 441:
      if (lookahead == 'u') ADVANCE(347);
      END_STATE();
    case 442:
      if (lookahead == 'v') ADVANCE(215);
      END_STATE();
    case 443:
      if (lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 444:
      if (lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 445:
      if (lookahead == 'w') ADVANCE(360);
      END_STATE();
    case 446:
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 447:
      if (lookahead == 'x') ADVANCE(522);
      END_STATE();
    case 448:
      if (lookahead == 'x') ADVANCE(318);
      END_STATE();
    case 449:
      if (lookahead == 'y') ADVANCE(464);
      END_STATE();
    case 450:
      if (lookahead == 'y') ADVANCE(482);
      END_STATE();
    case 451:
      if (lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 452:
      if (lookahead == '*' ||
          lookahead == 'x') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 453:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 454:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(557);
      END_STATE();
    case 455:
      if (eof) ADVANCE(456);
      if (lookahead == '\t') SKIP(455)
      if (lookahead == '\n') SKIP(455)
      if (lookahead == '\r') SKIP(455)
      if (lookahead == ' ') SKIP(455)
      if (lookahead == '$') ADVANCE(553);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == ',') ADVANCE(525);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '=') ADVANCE(579);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == '?') ADVANCE(551);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '}') ADVANCE(460);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_ATinheritDoc);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(343);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_ATafter);
      if (lookahead == 'C') ADVANCE(239);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_ATafterClass);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_ATbackupGlobals);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_ATbackupStaticAttributes);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_ATbefore);
      if (lookahead == 'C') ADVANCE(244);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_ATbeforeClass);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnore);
      if (lookahead == '*') ADVANCE(500);
      if (lookahead == 'E') ADVANCE(264);
      if (lookahead == 'S') ADVANCE(422);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnore_STAR);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnoreEnd);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnoreStart);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_ATcovers);
      if (lookahead == 'D') ADVANCE(146);
      if (lookahead == 'N') ADVANCE(294);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_ATcoversDefaultClass);
      if (lookahead == ' ') ADVANCE(413);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_ATcoversDefaultClasstoshortenannotations);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_ATcoversNothing);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_ATdataProvider);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_ATdepends);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_ATdependsannotationtoexpressdependencies);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_ATdoesNotPerformAssertions);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_ATgroup);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_ATlarge);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_ATmedium);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_ATpreserveGlobalState);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_ATrequires);
      if (lookahead == ' ') ADVANCE(439);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_ATrequiresusages);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_ATrunInSeparateProcess);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_ATrunTestsInSeparateProcesses);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_ATsmall);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_ATtest);
      if (lookahead == 'W') ADVANCE(218);
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_ATtestWith);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_ATtestdox);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_ATticket);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '*') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(558);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '*') ADVANCE(555);
      if (lookahead == '<') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(556);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(454);
      if (lookahead == '<') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '@') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(572);
      if (lookahead == 'x') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == 'x') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ']') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(564);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(564);
      if (lookahead == '.') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(564);
      if (lookahead == '.') ADVANCE(562);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(564);
      if (lookahead == '.') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(453);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead == '.') ADVANCE(452);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '-') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead == '\t') ADVANCE(580);
      if (lookahead == '\n') ADVANCE(580);
      if (lookahead == '\r') ADVANCE(580);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == ')') ADVANCE(581);
      if (lookahead == '*') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '*') SKIP(0)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') SKIP(12)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') SKIP(12)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '\t') SKIP(24)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '*') SKIP(12)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == '\t') SKIP(24)
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ' ') SKIP(24)
      if (lookahead == '*') SKIP(0)
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_iterable);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 21},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 18},
  [167] = {.lex_state = 19},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 18},
  [179] = {.lex_state = 24},
  [180] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_ATinheritDoc] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ATapi] = ACTIONS(1),
    [anon_sym_ATfilesource] = ACTIONS(1),
    [anon_sym_ATignore] = ACTIONS(1),
    [anon_sym_ATcategory] = ACTIONS(1),
    [anon_sym_ATcopyright] = ACTIONS(1),
    [anon_sym_ATtodo] = ACTIONS(1),
    [anon_sym_ATexample] = ACTIONS(1),
    [anon_sym_ATlicense] = ACTIONS(1),
    [anon_sym_ATpackage] = ACTIONS(1),
    [anon_sym_ATsource] = ACTIONS(1),
    [anon_sym_ATsubpackage] = ACTIONS(1),
    [anon_sym_ATuses] = ACTIONS(1),
    [anon_sym_ATauthor] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_ATglobal] = ACTIONS(1),
    [anon_sym_ATinternal] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [anon_sym_ATmethod] = ACTIONS(1),
    [anon_sym_ATparam] = ACTIONS(1),
    [anon_sym_ATproperty] = ACTIONS(1),
    [anon_sym_ATproperty_DASHread] = ACTIONS(1),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
    [anon_sym_ATsee] = ACTIONS(1),
    [anon_sym_ATthrows] = ACTIONS(1),
    [anon_sym_ATvar] = ACTIONS(1),
    [anon_sym_ATdeprecated] = ACTIONS(1),
    [anon_sym_ATsince] = ACTIONS(1),
    [anon_sym_ATversion] = ACTIONS(1),
    [anon_sym_ATafter] = ACTIONS(1),
    [anon_sym_ATafterClass] = ACTIONS(1),
    [anon_sym_ATannotation] = ACTIONS(1),
    [anon_sym_ATbackupGlobals] = ACTIONS(1),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(1),
    [anon_sym_ATbefore] = ACTIONS(1),
    [anon_sym_ATbeforeClass] = ACTIONS(1),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(1),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(1),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(1),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(1),
    [anon_sym_ATcovers] = ACTIONS(1),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(1),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(1),
    [anon_sym_ATcoversNothing] = ACTIONS(1),
    [anon_sym_ATdataProvider] = ACTIONS(1),
    [anon_sym_ATdepends] = ACTIONS(1),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(1),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(1),
    [anon_sym_ATgroup] = ACTIONS(1),
    [anon_sym_ATlarge] = ACTIONS(1),
    [anon_sym_ATmedium] = ACTIONS(1),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(1),
    [anon_sym_ATrequires] = ACTIONS(1),
    [anon_sym_ATrequiresusages] = ACTIONS(1),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(1),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(1),
    [anon_sym_ATsmall] = ACTIONS(1),
    [anon_sym_ATtest] = ACTIONS(1),
    [anon_sym_ATtestWith] = ACTIONS(1),
    [anon_sym_ATtestdox] = ACTIONS(1),
    [anon_sym_ATticket] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_namespace_name_as_prefix_token1] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [aux_sym_primitive_type_token1] = ACTIONS(1),
    [anon_sym_iterable] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_mixed] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(160),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_tag] = STATE(3),
    [sym_inline_tag] = STATE(33),
    [sym__simple_tag_without_description] = STATE(58),
    [sym__simple_tag_with_optional_description] = STATE(58),
    [sym__simple_tag_with_required_description] = STATE(58),
    [sym__currently_incomplete_tags] = STATE(23),
    [sym__author_tag] = STATE(58),
    [sym__global_tag] = STATE(58),
    [sym__internal_tag] = STATE(58),
    [sym__link_tag] = STATE(58),
    [sym__method_tag] = STATE(58),
    [sym__param_tag] = STATE(58),
    [sym__property_tag] = STATE(58),
    [sym__return_tag] = STATE(58),
    [sym__see_tag] = STATE(58),
    [sym__throws_tag] = STATE(58),
    [sym__var_tag] = STATE(58),
    [sym__version_tag] = STATE(58),
    [sym__phpunit_tag] = STATE(58),
    [sym_description] = STATE(4),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(7),
    [anon_sym_ATfilesource] = ACTIONS(7),
    [anon_sym_ATignore] = ACTIONS(9),
    [anon_sym_ATcategory] = ACTIONS(11),
    [anon_sym_ATcopyright] = ACTIONS(11),
    [anon_sym_ATtodo] = ACTIONS(11),
    [anon_sym_ATexample] = ACTIONS(13),
    [anon_sym_ATlicense] = ACTIONS(13),
    [anon_sym_ATpackage] = ACTIONS(13),
    [anon_sym_ATsource] = ACTIONS(13),
    [anon_sym_ATsubpackage] = ACTIONS(13),
    [anon_sym_ATuses] = ACTIONS(13),
    [anon_sym_ATauthor] = ACTIONS(15),
    [anon_sym_ATglobal] = ACTIONS(17),
    [anon_sym_ATinternal] = ACTIONS(19),
    [anon_sym_ATlink] = ACTIONS(21),
    [anon_sym_ATmethod] = ACTIONS(23),
    [anon_sym_ATparam] = ACTIONS(25),
    [anon_sym_ATproperty] = ACTIONS(27),
    [anon_sym_ATproperty_DASHread] = ACTIONS(29),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(29),
    [anon_sym_ATreturn] = ACTIONS(31),
    [anon_sym_ATsee] = ACTIONS(33),
    [anon_sym_ATthrows] = ACTIONS(35),
    [anon_sym_ATvar] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(39),
    [anon_sym_ATsince] = ACTIONS(39),
    [anon_sym_ATversion] = ACTIONS(39),
    [anon_sym_ATafter] = ACTIONS(41),
    [anon_sym_ATafterClass] = ACTIONS(43),
    [anon_sym_ATannotation] = ACTIONS(43),
    [anon_sym_ATbackupGlobals] = ACTIONS(43),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(43),
    [anon_sym_ATbefore] = ACTIONS(41),
    [anon_sym_ATbeforeClass] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(41),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(43),
    [anon_sym_ATcovers] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(43),
    [anon_sym_ATcoversNothing] = ACTIONS(43),
    [anon_sym_ATdataProvider] = ACTIONS(43),
    [anon_sym_ATdepends] = ACTIONS(41),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(43),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(43),
    [anon_sym_ATgroup] = ACTIONS(43),
    [anon_sym_ATlarge] = ACTIONS(43),
    [anon_sym_ATmedium] = ACTIONS(43),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(43),
    [anon_sym_ATrequires] = ACTIONS(41),
    [anon_sym_ATrequiresusages] = ACTIONS(43),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(43),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(43),
    [anon_sym_ATsmall] = ACTIONS(43),
    [anon_sym_ATtest] = ACTIONS(41),
    [anon_sym_ATtestWith] = ACTIONS(43),
    [anon_sym_ATtestdox] = ACTIONS(43),
    [anon_sym_ATticket] = ACTIONS(43),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(47),
  },
  [3] = {
    [sym_tag] = STATE(5),
    [sym__simple_tag_without_description] = STATE(58),
    [sym__simple_tag_with_optional_description] = STATE(58),
    [sym__simple_tag_with_required_description] = STATE(58),
    [sym__currently_incomplete_tags] = STATE(23),
    [sym__author_tag] = STATE(58),
    [sym__global_tag] = STATE(58),
    [sym__internal_tag] = STATE(58),
    [sym__link_tag] = STATE(58),
    [sym__method_tag] = STATE(58),
    [sym__param_tag] = STATE(58),
    [sym__property_tag] = STATE(58),
    [sym__return_tag] = STATE(58),
    [sym__see_tag] = STATE(58),
    [sym__throws_tag] = STATE(58),
    [sym__var_tag] = STATE(58),
    [sym__version_tag] = STATE(58),
    [sym__phpunit_tag] = STATE(58),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATapi] = ACTIONS(7),
    [anon_sym_ATfilesource] = ACTIONS(7),
    [anon_sym_ATignore] = ACTIONS(9),
    [anon_sym_ATcategory] = ACTIONS(11),
    [anon_sym_ATcopyright] = ACTIONS(11),
    [anon_sym_ATtodo] = ACTIONS(11),
    [anon_sym_ATexample] = ACTIONS(13),
    [anon_sym_ATlicense] = ACTIONS(13),
    [anon_sym_ATpackage] = ACTIONS(13),
    [anon_sym_ATsource] = ACTIONS(13),
    [anon_sym_ATsubpackage] = ACTIONS(13),
    [anon_sym_ATuses] = ACTIONS(13),
    [anon_sym_ATauthor] = ACTIONS(15),
    [anon_sym_ATglobal] = ACTIONS(17),
    [anon_sym_ATinternal] = ACTIONS(19),
    [anon_sym_ATlink] = ACTIONS(21),
    [anon_sym_ATmethod] = ACTIONS(23),
    [anon_sym_ATparam] = ACTIONS(25),
    [anon_sym_ATproperty] = ACTIONS(27),
    [anon_sym_ATproperty_DASHread] = ACTIONS(29),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(29),
    [anon_sym_ATreturn] = ACTIONS(31),
    [anon_sym_ATsee] = ACTIONS(33),
    [anon_sym_ATthrows] = ACTIONS(35),
    [anon_sym_ATvar] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(39),
    [anon_sym_ATsince] = ACTIONS(39),
    [anon_sym_ATversion] = ACTIONS(39),
    [anon_sym_ATafter] = ACTIONS(41),
    [anon_sym_ATafterClass] = ACTIONS(43),
    [anon_sym_ATannotation] = ACTIONS(43),
    [anon_sym_ATbackupGlobals] = ACTIONS(43),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(43),
    [anon_sym_ATbefore] = ACTIONS(41),
    [anon_sym_ATbeforeClass] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(41),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(43),
    [anon_sym_ATcovers] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(43),
    [anon_sym_ATcoversNothing] = ACTIONS(43),
    [anon_sym_ATdataProvider] = ACTIONS(43),
    [anon_sym_ATdepends] = ACTIONS(41),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(43),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(43),
    [anon_sym_ATgroup] = ACTIONS(43),
    [anon_sym_ATlarge] = ACTIONS(43),
    [anon_sym_ATmedium] = ACTIONS(43),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(43),
    [anon_sym_ATrequires] = ACTIONS(41),
    [anon_sym_ATrequiresusages] = ACTIONS(43),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(43),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(43),
    [anon_sym_ATsmall] = ACTIONS(43),
    [anon_sym_ATtest] = ACTIONS(41),
    [anon_sym_ATtestWith] = ACTIONS(43),
    [anon_sym_ATtestdox] = ACTIONS(43),
    [anon_sym_ATticket] = ACTIONS(43),
    [sym__end] = ACTIONS(49),
  },
  [4] = {
    [sym_tag] = STATE(6),
    [sym__simple_tag_without_description] = STATE(58),
    [sym__simple_tag_with_optional_description] = STATE(58),
    [sym__simple_tag_with_required_description] = STATE(58),
    [sym__currently_incomplete_tags] = STATE(23),
    [sym__author_tag] = STATE(58),
    [sym__global_tag] = STATE(58),
    [sym__internal_tag] = STATE(58),
    [sym__link_tag] = STATE(58),
    [sym__method_tag] = STATE(58),
    [sym__param_tag] = STATE(58),
    [sym__property_tag] = STATE(58),
    [sym__return_tag] = STATE(58),
    [sym__see_tag] = STATE(58),
    [sym__throws_tag] = STATE(58),
    [sym__var_tag] = STATE(58),
    [sym__version_tag] = STATE(58),
    [sym__phpunit_tag] = STATE(58),
    [aux_sym_document_repeat1] = STATE(6),
    [anon_sym_ATapi] = ACTIONS(7),
    [anon_sym_ATfilesource] = ACTIONS(7),
    [anon_sym_ATignore] = ACTIONS(9),
    [anon_sym_ATcategory] = ACTIONS(11),
    [anon_sym_ATcopyright] = ACTIONS(11),
    [anon_sym_ATtodo] = ACTIONS(11),
    [anon_sym_ATexample] = ACTIONS(13),
    [anon_sym_ATlicense] = ACTIONS(13),
    [anon_sym_ATpackage] = ACTIONS(13),
    [anon_sym_ATsource] = ACTIONS(13),
    [anon_sym_ATsubpackage] = ACTIONS(13),
    [anon_sym_ATuses] = ACTIONS(13),
    [anon_sym_ATauthor] = ACTIONS(15),
    [anon_sym_ATglobal] = ACTIONS(17),
    [anon_sym_ATinternal] = ACTIONS(19),
    [anon_sym_ATlink] = ACTIONS(21),
    [anon_sym_ATmethod] = ACTIONS(23),
    [anon_sym_ATparam] = ACTIONS(25),
    [anon_sym_ATproperty] = ACTIONS(27),
    [anon_sym_ATproperty_DASHread] = ACTIONS(29),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(29),
    [anon_sym_ATreturn] = ACTIONS(31),
    [anon_sym_ATsee] = ACTIONS(33),
    [anon_sym_ATthrows] = ACTIONS(35),
    [anon_sym_ATvar] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(39),
    [anon_sym_ATsince] = ACTIONS(39),
    [anon_sym_ATversion] = ACTIONS(39),
    [anon_sym_ATafter] = ACTIONS(41),
    [anon_sym_ATafterClass] = ACTIONS(43),
    [anon_sym_ATannotation] = ACTIONS(43),
    [anon_sym_ATbackupGlobals] = ACTIONS(43),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(43),
    [anon_sym_ATbefore] = ACTIONS(41),
    [anon_sym_ATbeforeClass] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(41),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(43),
    [anon_sym_ATcovers] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(43),
    [anon_sym_ATcoversNothing] = ACTIONS(43),
    [anon_sym_ATdataProvider] = ACTIONS(43),
    [anon_sym_ATdepends] = ACTIONS(41),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(43),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(43),
    [anon_sym_ATgroup] = ACTIONS(43),
    [anon_sym_ATlarge] = ACTIONS(43),
    [anon_sym_ATmedium] = ACTIONS(43),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(43),
    [anon_sym_ATrequires] = ACTIONS(41),
    [anon_sym_ATrequiresusages] = ACTIONS(43),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(43),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(43),
    [anon_sym_ATsmall] = ACTIONS(43),
    [anon_sym_ATtest] = ACTIONS(41),
    [anon_sym_ATtestWith] = ACTIONS(43),
    [anon_sym_ATtestdox] = ACTIONS(43),
    [anon_sym_ATticket] = ACTIONS(43),
    [sym__end] = ACTIONS(49),
  },
  [5] = {
    [sym_tag] = STATE(5),
    [sym__simple_tag_without_description] = STATE(58),
    [sym__simple_tag_with_optional_description] = STATE(58),
    [sym__simple_tag_with_required_description] = STATE(58),
    [sym__currently_incomplete_tags] = STATE(23),
    [sym__author_tag] = STATE(58),
    [sym__global_tag] = STATE(58),
    [sym__internal_tag] = STATE(58),
    [sym__link_tag] = STATE(58),
    [sym__method_tag] = STATE(58),
    [sym__param_tag] = STATE(58),
    [sym__property_tag] = STATE(58),
    [sym__return_tag] = STATE(58),
    [sym__see_tag] = STATE(58),
    [sym__throws_tag] = STATE(58),
    [sym__var_tag] = STATE(58),
    [sym__version_tag] = STATE(58),
    [sym__phpunit_tag] = STATE(58),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATapi] = ACTIONS(51),
    [anon_sym_ATfilesource] = ACTIONS(51),
    [anon_sym_ATignore] = ACTIONS(54),
    [anon_sym_ATcategory] = ACTIONS(57),
    [anon_sym_ATcopyright] = ACTIONS(57),
    [anon_sym_ATtodo] = ACTIONS(57),
    [anon_sym_ATexample] = ACTIONS(60),
    [anon_sym_ATlicense] = ACTIONS(60),
    [anon_sym_ATpackage] = ACTIONS(60),
    [anon_sym_ATsource] = ACTIONS(60),
    [anon_sym_ATsubpackage] = ACTIONS(60),
    [anon_sym_ATuses] = ACTIONS(60),
    [anon_sym_ATauthor] = ACTIONS(63),
    [anon_sym_ATglobal] = ACTIONS(66),
    [anon_sym_ATinternal] = ACTIONS(69),
    [anon_sym_ATlink] = ACTIONS(72),
    [anon_sym_ATmethod] = ACTIONS(75),
    [anon_sym_ATparam] = ACTIONS(78),
    [anon_sym_ATproperty] = ACTIONS(81),
    [anon_sym_ATproperty_DASHread] = ACTIONS(84),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(84),
    [anon_sym_ATreturn] = ACTIONS(87),
    [anon_sym_ATsee] = ACTIONS(90),
    [anon_sym_ATthrows] = ACTIONS(93),
    [anon_sym_ATvar] = ACTIONS(96),
    [anon_sym_ATdeprecated] = ACTIONS(99),
    [anon_sym_ATsince] = ACTIONS(99),
    [anon_sym_ATversion] = ACTIONS(99),
    [anon_sym_ATafter] = ACTIONS(102),
    [anon_sym_ATafterClass] = ACTIONS(105),
    [anon_sym_ATannotation] = ACTIONS(105),
    [anon_sym_ATbackupGlobals] = ACTIONS(105),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(105),
    [anon_sym_ATbefore] = ACTIONS(102),
    [anon_sym_ATbeforeClass] = ACTIONS(105),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(102),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(105),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(105),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(105),
    [anon_sym_ATcovers] = ACTIONS(102),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(102),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(105),
    [anon_sym_ATcoversNothing] = ACTIONS(105),
    [anon_sym_ATdataProvider] = ACTIONS(105),
    [anon_sym_ATdepends] = ACTIONS(102),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(105),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(105),
    [anon_sym_ATgroup] = ACTIONS(105),
    [anon_sym_ATlarge] = ACTIONS(105),
    [anon_sym_ATmedium] = ACTIONS(105),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(105),
    [anon_sym_ATrequires] = ACTIONS(102),
    [anon_sym_ATrequiresusages] = ACTIONS(105),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(105),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(105),
    [anon_sym_ATsmall] = ACTIONS(105),
    [anon_sym_ATtest] = ACTIONS(102),
    [anon_sym_ATtestWith] = ACTIONS(105),
    [anon_sym_ATtestdox] = ACTIONS(105),
    [anon_sym_ATticket] = ACTIONS(105),
    [sym__end] = ACTIONS(108),
  },
  [6] = {
    [sym_tag] = STATE(5),
    [sym__simple_tag_without_description] = STATE(58),
    [sym__simple_tag_with_optional_description] = STATE(58),
    [sym__simple_tag_with_required_description] = STATE(58),
    [sym__currently_incomplete_tags] = STATE(23),
    [sym__author_tag] = STATE(58),
    [sym__global_tag] = STATE(58),
    [sym__internal_tag] = STATE(58),
    [sym__link_tag] = STATE(58),
    [sym__method_tag] = STATE(58),
    [sym__param_tag] = STATE(58),
    [sym__property_tag] = STATE(58),
    [sym__return_tag] = STATE(58),
    [sym__see_tag] = STATE(58),
    [sym__throws_tag] = STATE(58),
    [sym__var_tag] = STATE(58),
    [sym__version_tag] = STATE(58),
    [sym__phpunit_tag] = STATE(58),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATapi] = ACTIONS(7),
    [anon_sym_ATfilesource] = ACTIONS(7),
    [anon_sym_ATignore] = ACTIONS(9),
    [anon_sym_ATcategory] = ACTIONS(11),
    [anon_sym_ATcopyright] = ACTIONS(11),
    [anon_sym_ATtodo] = ACTIONS(11),
    [anon_sym_ATexample] = ACTIONS(13),
    [anon_sym_ATlicense] = ACTIONS(13),
    [anon_sym_ATpackage] = ACTIONS(13),
    [anon_sym_ATsource] = ACTIONS(13),
    [anon_sym_ATsubpackage] = ACTIONS(13),
    [anon_sym_ATuses] = ACTIONS(13),
    [anon_sym_ATauthor] = ACTIONS(15),
    [anon_sym_ATglobal] = ACTIONS(17),
    [anon_sym_ATinternal] = ACTIONS(19),
    [anon_sym_ATlink] = ACTIONS(21),
    [anon_sym_ATmethod] = ACTIONS(23),
    [anon_sym_ATparam] = ACTIONS(25),
    [anon_sym_ATproperty] = ACTIONS(27),
    [anon_sym_ATproperty_DASHread] = ACTIONS(29),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(29),
    [anon_sym_ATreturn] = ACTIONS(31),
    [anon_sym_ATsee] = ACTIONS(33),
    [anon_sym_ATthrows] = ACTIONS(35),
    [anon_sym_ATvar] = ACTIONS(37),
    [anon_sym_ATdeprecated] = ACTIONS(39),
    [anon_sym_ATsince] = ACTIONS(39),
    [anon_sym_ATversion] = ACTIONS(39),
    [anon_sym_ATafter] = ACTIONS(41),
    [anon_sym_ATafterClass] = ACTIONS(43),
    [anon_sym_ATannotation] = ACTIONS(43),
    [anon_sym_ATbackupGlobals] = ACTIONS(43),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(43),
    [anon_sym_ATbefore] = ACTIONS(41),
    [anon_sym_ATbeforeClass] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(41),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(43),
    [anon_sym_ATcovers] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(41),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(43),
    [anon_sym_ATcoversNothing] = ACTIONS(43),
    [anon_sym_ATdataProvider] = ACTIONS(43),
    [anon_sym_ATdepends] = ACTIONS(41),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(43),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(43),
    [anon_sym_ATgroup] = ACTIONS(43),
    [anon_sym_ATlarge] = ACTIONS(43),
    [anon_sym_ATmedium] = ACTIONS(43),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(43),
    [anon_sym_ATrequires] = ACTIONS(41),
    [anon_sym_ATrequiresusages] = ACTIONS(43),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(43),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(43),
    [anon_sym_ATsmall] = ACTIONS(43),
    [anon_sym_ATtest] = ACTIONS(41),
    [anon_sym_ATtestWith] = ACTIONS(43),
    [anon_sym_ATtestdox] = ACTIONS(43),
    [anon_sym_ATticket] = ACTIONS(43),
    [sym__end] = ACTIONS(110),
  },
  [7] = {
    [aux_sym_namespace_name_repeat1] = STATE(134),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_ATapi] = ACTIONS(112),
    [anon_sym_ATfilesource] = ACTIONS(112),
    [anon_sym_ATignore] = ACTIONS(112),
    [anon_sym_ATcategory] = ACTIONS(112),
    [anon_sym_ATcopyright] = ACTIONS(112),
    [anon_sym_ATtodo] = ACTIONS(112),
    [anon_sym_ATexample] = ACTIONS(112),
    [anon_sym_ATlicense] = ACTIONS(112),
    [anon_sym_ATpackage] = ACTIONS(112),
    [anon_sym_ATsource] = ACTIONS(112),
    [anon_sym_ATsubpackage] = ACTIONS(112),
    [anon_sym_ATuses] = ACTIONS(112),
    [anon_sym_ATauthor] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_ATglobal] = ACTIONS(112),
    [anon_sym_ATinternal] = ACTIONS(112),
    [anon_sym_ATlink] = ACTIONS(112),
    [anon_sym_ATmethod] = ACTIONS(112),
    [anon_sym_ATparam] = ACTIONS(112),
    [anon_sym_ATproperty] = ACTIONS(114),
    [anon_sym_ATproperty_DASHread] = ACTIONS(112),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(112),
    [anon_sym_ATreturn] = ACTIONS(112),
    [anon_sym_ATsee] = ACTIONS(112),
    [anon_sym_ATthrows] = ACTIONS(112),
    [anon_sym_ATvar] = ACTIONS(112),
    [anon_sym_ATdeprecated] = ACTIONS(112),
    [anon_sym_ATsince] = ACTIONS(112),
    [anon_sym_ATversion] = ACTIONS(112),
    [anon_sym_ATafter] = ACTIONS(114),
    [anon_sym_ATafterClass] = ACTIONS(112),
    [anon_sym_ATannotation] = ACTIONS(112),
    [anon_sym_ATbackupGlobals] = ACTIONS(112),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(112),
    [anon_sym_ATbefore] = ACTIONS(114),
    [anon_sym_ATbeforeClass] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(114),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(112),
    [anon_sym_ATcovers] = ACTIONS(114),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(114),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(112),
    [anon_sym_ATcoversNothing] = ACTIONS(112),
    [anon_sym_ATdataProvider] = ACTIONS(112),
    [anon_sym_ATdepends] = ACTIONS(114),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(112),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(112),
    [anon_sym_ATgroup] = ACTIONS(112),
    [anon_sym_ATlarge] = ACTIONS(112),
    [anon_sym_ATmedium] = ACTIONS(112),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(112),
    [anon_sym_ATrequires] = ACTIONS(114),
    [anon_sym_ATrequiresusages] = ACTIONS(112),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(112),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(112),
    [anon_sym_ATsmall] = ACTIONS(112),
    [anon_sym_ATtest] = ACTIONS(114),
    [anon_sym_ATtestWith] = ACTIONS(112),
    [anon_sym_ATtestdox] = ACTIONS(112),
    [anon_sym_ATticket] = ACTIONS(112),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(112),
    [anon_sym_BSLASH] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(112),
    [sym_text] = ACTIONS(114),
    [sym__end] = ACTIONS(112),
  },
  [8] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_ATapi] = ACTIONS(119),
    [anon_sym_ATfilesource] = ACTIONS(119),
    [anon_sym_ATignore] = ACTIONS(119),
    [anon_sym_ATcategory] = ACTIONS(119),
    [anon_sym_ATcopyright] = ACTIONS(119),
    [anon_sym_ATtodo] = ACTIONS(119),
    [anon_sym_ATexample] = ACTIONS(119),
    [anon_sym_ATlicense] = ACTIONS(119),
    [anon_sym_ATpackage] = ACTIONS(119),
    [anon_sym_ATsource] = ACTIONS(119),
    [anon_sym_ATsubpackage] = ACTIONS(119),
    [anon_sym_ATuses] = ACTIONS(119),
    [anon_sym_ATauthor] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_ATglobal] = ACTIONS(119),
    [anon_sym_ATinternal] = ACTIONS(119),
    [anon_sym_ATlink] = ACTIONS(119),
    [anon_sym_ATmethod] = ACTIONS(119),
    [anon_sym_ATparam] = ACTIONS(119),
    [anon_sym_ATproperty] = ACTIONS(123),
    [anon_sym_ATproperty_DASHread] = ACTIONS(119),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(119),
    [anon_sym_ATreturn] = ACTIONS(119),
    [anon_sym_ATsee] = ACTIONS(119),
    [anon_sym_ATthrows] = ACTIONS(119),
    [anon_sym_ATvar] = ACTIONS(119),
    [anon_sym_ATdeprecated] = ACTIONS(119),
    [anon_sym_ATsince] = ACTIONS(119),
    [anon_sym_ATversion] = ACTIONS(119),
    [anon_sym_ATafter] = ACTIONS(123),
    [anon_sym_ATafterClass] = ACTIONS(119),
    [anon_sym_ATannotation] = ACTIONS(119),
    [anon_sym_ATbackupGlobals] = ACTIONS(119),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(119),
    [anon_sym_ATbefore] = ACTIONS(123),
    [anon_sym_ATbeforeClass] = ACTIONS(119),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(123),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(119),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(119),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(119),
    [anon_sym_ATcovers] = ACTIONS(123),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(123),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(119),
    [anon_sym_ATcoversNothing] = ACTIONS(119),
    [anon_sym_ATdataProvider] = ACTIONS(119),
    [anon_sym_ATdepends] = ACTIONS(123),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(119),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(119),
    [anon_sym_ATgroup] = ACTIONS(119),
    [anon_sym_ATlarge] = ACTIONS(119),
    [anon_sym_ATmedium] = ACTIONS(119),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(119),
    [anon_sym_ATrequires] = ACTIONS(123),
    [anon_sym_ATrequiresusages] = ACTIONS(119),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(119),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(119),
    [anon_sym_ATsmall] = ACTIONS(119),
    [anon_sym_ATtest] = ACTIONS(123),
    [anon_sym_ATtestWith] = ACTIONS(119),
    [anon_sym_ATtestdox] = ACTIONS(119),
    [anon_sym_ATticket] = ACTIONS(119),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(119),
    [sym_text] = ACTIONS(123),
    [sym__end] = ACTIONS(119),
  },
  [9] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(64),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(127),
    [anon_sym_ATfilesource] = ACTIONS(127),
    [anon_sym_ATignore] = ACTIONS(127),
    [anon_sym_ATcategory] = ACTIONS(127),
    [anon_sym_ATcopyright] = ACTIONS(127),
    [anon_sym_ATtodo] = ACTIONS(127),
    [anon_sym_ATexample] = ACTIONS(127),
    [anon_sym_ATlicense] = ACTIONS(127),
    [anon_sym_ATpackage] = ACTIONS(127),
    [anon_sym_ATsource] = ACTIONS(127),
    [anon_sym_ATsubpackage] = ACTIONS(127),
    [anon_sym_ATuses] = ACTIONS(127),
    [anon_sym_ATauthor] = ACTIONS(127),
    [anon_sym_ATglobal] = ACTIONS(127),
    [anon_sym_ATinternal] = ACTIONS(127),
    [anon_sym_ATlink] = ACTIONS(127),
    [anon_sym_ATmethod] = ACTIONS(127),
    [anon_sym_ATparam] = ACTIONS(127),
    [anon_sym_ATproperty] = ACTIONS(129),
    [anon_sym_ATproperty_DASHread] = ACTIONS(127),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(127),
    [anon_sym_ATreturn] = ACTIONS(127),
    [anon_sym_ATsee] = ACTIONS(127),
    [anon_sym_ATthrows] = ACTIONS(127),
    [anon_sym_ATvar] = ACTIONS(127),
    [anon_sym_ATdeprecated] = ACTIONS(127),
    [anon_sym_ATsince] = ACTIONS(127),
    [anon_sym_ATversion] = ACTIONS(127),
    [anon_sym_ATafter] = ACTIONS(129),
    [anon_sym_ATafterClass] = ACTIONS(127),
    [anon_sym_ATannotation] = ACTIONS(127),
    [anon_sym_ATbackupGlobals] = ACTIONS(127),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(127),
    [anon_sym_ATbefore] = ACTIONS(129),
    [anon_sym_ATbeforeClass] = ACTIONS(127),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(129),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(127),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(127),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(127),
    [anon_sym_ATcovers] = ACTIONS(129),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(129),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(127),
    [anon_sym_ATcoversNothing] = ACTIONS(127),
    [anon_sym_ATdataProvider] = ACTIONS(127),
    [anon_sym_ATdepends] = ACTIONS(129),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(127),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(127),
    [anon_sym_ATgroup] = ACTIONS(127),
    [anon_sym_ATlarge] = ACTIONS(127),
    [anon_sym_ATmedium] = ACTIONS(127),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(127),
    [anon_sym_ATrequires] = ACTIONS(129),
    [anon_sym_ATrequiresusages] = ACTIONS(127),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(127),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(127),
    [anon_sym_ATsmall] = ACTIONS(127),
    [anon_sym_ATtest] = ACTIONS(129),
    [anon_sym_ATtestWith] = ACTIONS(127),
    [anon_sym_ATtestdox] = ACTIONS(127),
    [anon_sym_ATticket] = ACTIONS(127),
    [sym_text] = ACTIONS(45),
    [sym_version] = ACTIONS(131),
    [sym__end] = ACTIONS(127),
  },
  [10] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(60),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(133),
    [anon_sym_ATfilesource] = ACTIONS(133),
    [anon_sym_ATignore] = ACTIONS(133),
    [anon_sym_ATcategory] = ACTIONS(133),
    [anon_sym_ATcopyright] = ACTIONS(133),
    [anon_sym_ATtodo] = ACTIONS(133),
    [anon_sym_ATexample] = ACTIONS(133),
    [anon_sym_ATlicense] = ACTIONS(133),
    [anon_sym_ATpackage] = ACTIONS(133),
    [anon_sym_ATsource] = ACTIONS(133),
    [anon_sym_ATsubpackage] = ACTIONS(133),
    [anon_sym_ATuses] = ACTIONS(133),
    [anon_sym_ATauthor] = ACTIONS(133),
    [anon_sym_ATglobal] = ACTIONS(133),
    [anon_sym_ATinternal] = ACTIONS(133),
    [anon_sym_ATlink] = ACTIONS(133),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(135),
    [anon_sym_ATmethod] = ACTIONS(133),
    [anon_sym_ATparam] = ACTIONS(133),
    [anon_sym_ATproperty] = ACTIONS(137),
    [anon_sym_ATproperty_DASHread] = ACTIONS(133),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(133),
    [anon_sym_ATreturn] = ACTIONS(133),
    [anon_sym_ATsee] = ACTIONS(133),
    [anon_sym_ATthrows] = ACTIONS(133),
    [anon_sym_ATvar] = ACTIONS(133),
    [anon_sym_ATdeprecated] = ACTIONS(133),
    [anon_sym_ATsince] = ACTIONS(133),
    [anon_sym_ATversion] = ACTIONS(133),
    [anon_sym_ATafter] = ACTIONS(137),
    [anon_sym_ATafterClass] = ACTIONS(133),
    [anon_sym_ATannotation] = ACTIONS(133),
    [anon_sym_ATbackupGlobals] = ACTIONS(133),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(133),
    [anon_sym_ATbefore] = ACTIONS(137),
    [anon_sym_ATbeforeClass] = ACTIONS(133),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(137),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(133),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(133),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(133),
    [anon_sym_ATcovers] = ACTIONS(137),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(137),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(133),
    [anon_sym_ATcoversNothing] = ACTIONS(133),
    [anon_sym_ATdataProvider] = ACTIONS(133),
    [anon_sym_ATdepends] = ACTIONS(137),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(133),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(133),
    [anon_sym_ATgroup] = ACTIONS(133),
    [anon_sym_ATlarge] = ACTIONS(133),
    [anon_sym_ATmedium] = ACTIONS(133),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(133),
    [anon_sym_ATrequires] = ACTIONS(137),
    [anon_sym_ATrequiresusages] = ACTIONS(133),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(133),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(133),
    [anon_sym_ATsmall] = ACTIONS(133),
    [anon_sym_ATtest] = ACTIONS(137),
    [anon_sym_ATtestWith] = ACTIONS(133),
    [anon_sym_ATtestdox] = ACTIONS(133),
    [anon_sym_ATticket] = ACTIONS(133),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(133),
  },
  [11] = {
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_ATapi] = ACTIONS(139),
    [anon_sym_ATfilesource] = ACTIONS(139),
    [anon_sym_ATignore] = ACTIONS(139),
    [anon_sym_ATcategory] = ACTIONS(139),
    [anon_sym_ATcopyright] = ACTIONS(139),
    [anon_sym_ATtodo] = ACTIONS(139),
    [anon_sym_ATexample] = ACTIONS(139),
    [anon_sym_ATlicense] = ACTIONS(139),
    [anon_sym_ATpackage] = ACTIONS(139),
    [anon_sym_ATsource] = ACTIONS(139),
    [anon_sym_ATsubpackage] = ACTIONS(139),
    [anon_sym_ATuses] = ACTIONS(139),
    [anon_sym_ATauthor] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_ATglobal] = ACTIONS(139),
    [anon_sym_ATinternal] = ACTIONS(139),
    [anon_sym_ATlink] = ACTIONS(139),
    [anon_sym_ATmethod] = ACTIONS(139),
    [anon_sym_ATparam] = ACTIONS(139),
    [anon_sym_ATproperty] = ACTIONS(141),
    [anon_sym_ATproperty_DASHread] = ACTIONS(139),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(139),
    [anon_sym_ATreturn] = ACTIONS(139),
    [anon_sym_ATsee] = ACTIONS(139),
    [anon_sym_ATthrows] = ACTIONS(139),
    [anon_sym_ATvar] = ACTIONS(139),
    [anon_sym_ATdeprecated] = ACTIONS(139),
    [anon_sym_ATsince] = ACTIONS(139),
    [anon_sym_ATversion] = ACTIONS(139),
    [anon_sym_ATafter] = ACTIONS(141),
    [anon_sym_ATafterClass] = ACTIONS(139),
    [anon_sym_ATannotation] = ACTIONS(139),
    [anon_sym_ATbackupGlobals] = ACTIONS(139),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(139),
    [anon_sym_ATbefore] = ACTIONS(141),
    [anon_sym_ATbeforeClass] = ACTIONS(139),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(141),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(139),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(139),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(139),
    [anon_sym_ATcovers] = ACTIONS(141),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(141),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(139),
    [anon_sym_ATcoversNothing] = ACTIONS(139),
    [anon_sym_ATdataProvider] = ACTIONS(139),
    [anon_sym_ATdepends] = ACTIONS(141),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(139),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(139),
    [anon_sym_ATgroup] = ACTIONS(139),
    [anon_sym_ATlarge] = ACTIONS(139),
    [anon_sym_ATmedium] = ACTIONS(139),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(139),
    [anon_sym_ATrequires] = ACTIONS(141),
    [anon_sym_ATrequiresusages] = ACTIONS(139),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(139),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(139),
    [anon_sym_ATsmall] = ACTIONS(139),
    [anon_sym_ATtest] = ACTIONS(141),
    [anon_sym_ATtestWith] = ACTIONS(139),
    [anon_sym_ATtestdox] = ACTIONS(139),
    [anon_sym_ATticket] = ACTIONS(139),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [sym_text] = ACTIONS(141),
    [sym__end] = ACTIONS(139),
  },
  [12] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(69),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(143),
    [anon_sym_ATfilesource] = ACTIONS(143),
    [anon_sym_ATignore] = ACTIONS(143),
    [anon_sym_ATcategory] = ACTIONS(143),
    [anon_sym_ATcopyright] = ACTIONS(143),
    [anon_sym_ATtodo] = ACTIONS(143),
    [anon_sym_ATexample] = ACTIONS(143),
    [anon_sym_ATlicense] = ACTIONS(143),
    [anon_sym_ATpackage] = ACTIONS(143),
    [anon_sym_ATsource] = ACTIONS(143),
    [anon_sym_ATsubpackage] = ACTIONS(143),
    [anon_sym_ATuses] = ACTIONS(143),
    [anon_sym_ATauthor] = ACTIONS(143),
    [anon_sym_ATglobal] = ACTIONS(143),
    [anon_sym_ATinternal] = ACTIONS(143),
    [anon_sym_ATlink] = ACTIONS(143),
    [anon_sym_ATmethod] = ACTIONS(143),
    [anon_sym_ATparam] = ACTIONS(143),
    [anon_sym_ATproperty] = ACTIONS(145),
    [anon_sym_ATproperty_DASHread] = ACTIONS(143),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(143),
    [anon_sym_ATreturn] = ACTIONS(143),
    [anon_sym_ATsee] = ACTIONS(143),
    [anon_sym_ATthrows] = ACTIONS(143),
    [anon_sym_ATvar] = ACTIONS(143),
    [anon_sym_ATdeprecated] = ACTIONS(143),
    [anon_sym_ATsince] = ACTIONS(143),
    [anon_sym_ATversion] = ACTIONS(143),
    [anon_sym_ATafter] = ACTIONS(145),
    [anon_sym_ATafterClass] = ACTIONS(143),
    [anon_sym_ATannotation] = ACTIONS(143),
    [anon_sym_ATbackupGlobals] = ACTIONS(143),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(143),
    [anon_sym_ATbefore] = ACTIONS(145),
    [anon_sym_ATbeforeClass] = ACTIONS(143),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(145),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(143),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(143),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(143),
    [anon_sym_ATcovers] = ACTIONS(145),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(145),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(143),
    [anon_sym_ATcoversNothing] = ACTIONS(143),
    [anon_sym_ATdataProvider] = ACTIONS(143),
    [anon_sym_ATdepends] = ACTIONS(145),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(143),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(143),
    [anon_sym_ATgroup] = ACTIONS(143),
    [anon_sym_ATlarge] = ACTIONS(143),
    [anon_sym_ATmedium] = ACTIONS(143),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(143),
    [anon_sym_ATrequires] = ACTIONS(145),
    [anon_sym_ATrequiresusages] = ACTIONS(143),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(143),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(143),
    [anon_sym_ATsmall] = ACTIONS(143),
    [anon_sym_ATtest] = ACTIONS(145),
    [anon_sym_ATtestWith] = ACTIONS(143),
    [anon_sym_ATtestdox] = ACTIONS(143),
    [anon_sym_ATticket] = ACTIONS(143),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(143),
  },
  [13] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(59),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(147),
    [anon_sym_ATfilesource] = ACTIONS(147),
    [anon_sym_ATignore] = ACTIONS(147),
    [anon_sym_ATcategory] = ACTIONS(147),
    [anon_sym_ATcopyright] = ACTIONS(147),
    [anon_sym_ATtodo] = ACTIONS(147),
    [anon_sym_ATexample] = ACTIONS(147),
    [anon_sym_ATlicense] = ACTIONS(147),
    [anon_sym_ATpackage] = ACTIONS(147),
    [anon_sym_ATsource] = ACTIONS(147),
    [anon_sym_ATsubpackage] = ACTIONS(147),
    [anon_sym_ATuses] = ACTIONS(147),
    [anon_sym_ATauthor] = ACTIONS(147),
    [anon_sym_ATglobal] = ACTIONS(147),
    [anon_sym_ATinternal] = ACTIONS(147),
    [anon_sym_ATlink] = ACTIONS(147),
    [anon_sym_ATmethod] = ACTIONS(147),
    [anon_sym_ATparam] = ACTIONS(147),
    [anon_sym_ATproperty] = ACTIONS(149),
    [anon_sym_ATproperty_DASHread] = ACTIONS(147),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(147),
    [anon_sym_ATreturn] = ACTIONS(147),
    [anon_sym_ATsee] = ACTIONS(147),
    [anon_sym_ATthrows] = ACTIONS(147),
    [anon_sym_ATvar] = ACTIONS(147),
    [anon_sym_ATdeprecated] = ACTIONS(147),
    [anon_sym_ATsince] = ACTIONS(147),
    [anon_sym_ATversion] = ACTIONS(147),
    [anon_sym_ATafter] = ACTIONS(149),
    [anon_sym_ATafterClass] = ACTIONS(147),
    [anon_sym_ATannotation] = ACTIONS(147),
    [anon_sym_ATbackupGlobals] = ACTIONS(147),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(147),
    [anon_sym_ATbefore] = ACTIONS(149),
    [anon_sym_ATbeforeClass] = ACTIONS(147),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(149),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(147),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(147),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(147),
    [anon_sym_ATcovers] = ACTIONS(149),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(149),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(147),
    [anon_sym_ATcoversNothing] = ACTIONS(147),
    [anon_sym_ATdataProvider] = ACTIONS(147),
    [anon_sym_ATdepends] = ACTIONS(149),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(147),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(147),
    [anon_sym_ATgroup] = ACTIONS(147),
    [anon_sym_ATlarge] = ACTIONS(147),
    [anon_sym_ATmedium] = ACTIONS(147),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(147),
    [anon_sym_ATrequires] = ACTIONS(149),
    [anon_sym_ATrequiresusages] = ACTIONS(147),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(147),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(147),
    [anon_sym_ATsmall] = ACTIONS(147),
    [anon_sym_ATtest] = ACTIONS(149),
    [anon_sym_ATtestWith] = ACTIONS(147),
    [anon_sym_ATtestdox] = ACTIONS(147),
    [anon_sym_ATticket] = ACTIONS(147),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(147),
  },
  [14] = {
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_ATapi] = ACTIONS(112),
    [anon_sym_ATfilesource] = ACTIONS(112),
    [anon_sym_ATignore] = ACTIONS(112),
    [anon_sym_ATcategory] = ACTIONS(112),
    [anon_sym_ATcopyright] = ACTIONS(112),
    [anon_sym_ATtodo] = ACTIONS(112),
    [anon_sym_ATexample] = ACTIONS(112),
    [anon_sym_ATlicense] = ACTIONS(112),
    [anon_sym_ATpackage] = ACTIONS(112),
    [anon_sym_ATsource] = ACTIONS(112),
    [anon_sym_ATsubpackage] = ACTIONS(112),
    [anon_sym_ATuses] = ACTIONS(112),
    [anon_sym_ATauthor] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_ATglobal] = ACTIONS(112),
    [anon_sym_ATinternal] = ACTIONS(112),
    [anon_sym_ATlink] = ACTIONS(112),
    [anon_sym_ATmethod] = ACTIONS(112),
    [anon_sym_ATparam] = ACTIONS(112),
    [anon_sym_ATproperty] = ACTIONS(114),
    [anon_sym_ATproperty_DASHread] = ACTIONS(112),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(112),
    [anon_sym_ATreturn] = ACTIONS(112),
    [anon_sym_ATsee] = ACTIONS(112),
    [anon_sym_ATthrows] = ACTIONS(112),
    [anon_sym_ATvar] = ACTIONS(112),
    [anon_sym_ATdeprecated] = ACTIONS(112),
    [anon_sym_ATsince] = ACTIONS(112),
    [anon_sym_ATversion] = ACTIONS(112),
    [anon_sym_ATafter] = ACTIONS(114),
    [anon_sym_ATafterClass] = ACTIONS(112),
    [anon_sym_ATannotation] = ACTIONS(112),
    [anon_sym_ATbackupGlobals] = ACTIONS(112),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(112),
    [anon_sym_ATbefore] = ACTIONS(114),
    [anon_sym_ATbeforeClass] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(114),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(112),
    [anon_sym_ATcovers] = ACTIONS(114),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(114),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(112),
    [anon_sym_ATcoversNothing] = ACTIONS(112),
    [anon_sym_ATdataProvider] = ACTIONS(112),
    [anon_sym_ATdepends] = ACTIONS(114),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(112),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(112),
    [anon_sym_ATgroup] = ACTIONS(112),
    [anon_sym_ATlarge] = ACTIONS(112),
    [anon_sym_ATmedium] = ACTIONS(112),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(112),
    [anon_sym_ATrequires] = ACTIONS(114),
    [anon_sym_ATrequiresusages] = ACTIONS(112),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(112),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(112),
    [anon_sym_ATsmall] = ACTIONS(112),
    [anon_sym_ATtest] = ACTIONS(114),
    [anon_sym_ATtestWith] = ACTIONS(112),
    [anon_sym_ATtestdox] = ACTIONS(112),
    [anon_sym_ATticket] = ACTIONS(112),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [sym_text] = ACTIONS(114),
    [sym__end] = ACTIONS(112),
  },
  [15] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(56),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(151),
    [anon_sym_ATfilesource] = ACTIONS(151),
    [anon_sym_ATignore] = ACTIONS(151),
    [anon_sym_ATcategory] = ACTIONS(151),
    [anon_sym_ATcopyright] = ACTIONS(151),
    [anon_sym_ATtodo] = ACTIONS(151),
    [anon_sym_ATexample] = ACTIONS(151),
    [anon_sym_ATlicense] = ACTIONS(151),
    [anon_sym_ATpackage] = ACTIONS(151),
    [anon_sym_ATsource] = ACTIONS(151),
    [anon_sym_ATsubpackage] = ACTIONS(151),
    [anon_sym_ATuses] = ACTIONS(151),
    [anon_sym_ATauthor] = ACTIONS(151),
    [anon_sym_ATglobal] = ACTIONS(151),
    [anon_sym_ATinternal] = ACTIONS(151),
    [anon_sym_ATlink] = ACTIONS(151),
    [anon_sym_ATmethod] = ACTIONS(151),
    [anon_sym_ATparam] = ACTIONS(151),
    [anon_sym_ATproperty] = ACTIONS(153),
    [anon_sym_ATproperty_DASHread] = ACTIONS(151),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(151),
    [anon_sym_ATreturn] = ACTIONS(151),
    [anon_sym_ATsee] = ACTIONS(151),
    [anon_sym_ATthrows] = ACTIONS(151),
    [anon_sym_ATvar] = ACTIONS(151),
    [anon_sym_ATdeprecated] = ACTIONS(151),
    [anon_sym_ATsince] = ACTIONS(151),
    [anon_sym_ATversion] = ACTIONS(151),
    [anon_sym_ATafter] = ACTIONS(153),
    [anon_sym_ATafterClass] = ACTIONS(151),
    [anon_sym_ATannotation] = ACTIONS(151),
    [anon_sym_ATbackupGlobals] = ACTIONS(151),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(151),
    [anon_sym_ATbefore] = ACTIONS(153),
    [anon_sym_ATbeforeClass] = ACTIONS(151),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(153),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(151),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(151),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(151),
    [anon_sym_ATcovers] = ACTIONS(153),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(153),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(151),
    [anon_sym_ATcoversNothing] = ACTIONS(151),
    [anon_sym_ATdataProvider] = ACTIONS(151),
    [anon_sym_ATdepends] = ACTIONS(153),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(151),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(151),
    [anon_sym_ATgroup] = ACTIONS(151),
    [anon_sym_ATlarge] = ACTIONS(151),
    [anon_sym_ATmedium] = ACTIONS(151),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(151),
    [anon_sym_ATrequires] = ACTIONS(153),
    [anon_sym_ATrequiresusages] = ACTIONS(151),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(151),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(151),
    [anon_sym_ATsmall] = ACTIONS(151),
    [anon_sym_ATtest] = ACTIONS(153),
    [anon_sym_ATtestWith] = ACTIONS(151),
    [anon_sym_ATtestdox] = ACTIONS(151),
    [anon_sym_ATticket] = ACTIONS(151),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(151),
  },
  [16] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(62),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(155),
    [anon_sym_ATfilesource] = ACTIONS(155),
    [anon_sym_ATignore] = ACTIONS(155),
    [anon_sym_ATcategory] = ACTIONS(155),
    [anon_sym_ATcopyright] = ACTIONS(155),
    [anon_sym_ATtodo] = ACTIONS(155),
    [anon_sym_ATexample] = ACTIONS(155),
    [anon_sym_ATlicense] = ACTIONS(155),
    [anon_sym_ATpackage] = ACTIONS(155),
    [anon_sym_ATsource] = ACTIONS(155),
    [anon_sym_ATsubpackage] = ACTIONS(155),
    [anon_sym_ATuses] = ACTIONS(155),
    [anon_sym_ATauthor] = ACTIONS(155),
    [anon_sym_ATglobal] = ACTIONS(155),
    [anon_sym_ATinternal] = ACTIONS(155),
    [anon_sym_ATlink] = ACTIONS(155),
    [anon_sym_ATmethod] = ACTIONS(155),
    [anon_sym_ATparam] = ACTIONS(155),
    [anon_sym_ATproperty] = ACTIONS(157),
    [anon_sym_ATproperty_DASHread] = ACTIONS(155),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(155),
    [anon_sym_ATreturn] = ACTIONS(155),
    [anon_sym_ATsee] = ACTIONS(155),
    [anon_sym_ATthrows] = ACTIONS(155),
    [anon_sym_ATvar] = ACTIONS(155),
    [anon_sym_ATdeprecated] = ACTIONS(155),
    [anon_sym_ATsince] = ACTIONS(155),
    [anon_sym_ATversion] = ACTIONS(155),
    [anon_sym_ATafter] = ACTIONS(157),
    [anon_sym_ATafterClass] = ACTIONS(155),
    [anon_sym_ATannotation] = ACTIONS(155),
    [anon_sym_ATbackupGlobals] = ACTIONS(155),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(155),
    [anon_sym_ATbefore] = ACTIONS(157),
    [anon_sym_ATbeforeClass] = ACTIONS(155),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(157),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(155),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(155),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(155),
    [anon_sym_ATcovers] = ACTIONS(157),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(157),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(155),
    [anon_sym_ATcoversNothing] = ACTIONS(155),
    [anon_sym_ATdataProvider] = ACTIONS(155),
    [anon_sym_ATdepends] = ACTIONS(157),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(155),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(155),
    [anon_sym_ATgroup] = ACTIONS(155),
    [anon_sym_ATlarge] = ACTIONS(155),
    [anon_sym_ATmedium] = ACTIONS(155),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(155),
    [anon_sym_ATrequires] = ACTIONS(157),
    [anon_sym_ATrequiresusages] = ACTIONS(155),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(155),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(155),
    [anon_sym_ATsmall] = ACTIONS(155),
    [anon_sym_ATtest] = ACTIONS(157),
    [anon_sym_ATtestWith] = ACTIONS(155),
    [anon_sym_ATtestdox] = ACTIONS(155),
    [anon_sym_ATticket] = ACTIONS(155),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(155),
  },
  [17] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(53),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(159),
    [anon_sym_ATfilesource] = ACTIONS(159),
    [anon_sym_ATignore] = ACTIONS(159),
    [anon_sym_ATcategory] = ACTIONS(159),
    [anon_sym_ATcopyright] = ACTIONS(159),
    [anon_sym_ATtodo] = ACTIONS(159),
    [anon_sym_ATexample] = ACTIONS(159),
    [anon_sym_ATlicense] = ACTIONS(159),
    [anon_sym_ATpackage] = ACTIONS(159),
    [anon_sym_ATsource] = ACTIONS(159),
    [anon_sym_ATsubpackage] = ACTIONS(159),
    [anon_sym_ATuses] = ACTIONS(159),
    [anon_sym_ATauthor] = ACTIONS(159),
    [anon_sym_ATglobal] = ACTIONS(159),
    [anon_sym_ATinternal] = ACTIONS(159),
    [anon_sym_ATlink] = ACTIONS(159),
    [anon_sym_ATmethod] = ACTIONS(159),
    [anon_sym_ATparam] = ACTIONS(159),
    [anon_sym_ATproperty] = ACTIONS(161),
    [anon_sym_ATproperty_DASHread] = ACTIONS(159),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(159),
    [anon_sym_ATreturn] = ACTIONS(159),
    [anon_sym_ATsee] = ACTIONS(159),
    [anon_sym_ATthrows] = ACTIONS(159),
    [anon_sym_ATvar] = ACTIONS(159),
    [anon_sym_ATdeprecated] = ACTIONS(159),
    [anon_sym_ATsince] = ACTIONS(159),
    [anon_sym_ATversion] = ACTIONS(159),
    [anon_sym_ATafter] = ACTIONS(161),
    [anon_sym_ATafterClass] = ACTIONS(159),
    [anon_sym_ATannotation] = ACTIONS(159),
    [anon_sym_ATbackupGlobals] = ACTIONS(159),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(159),
    [anon_sym_ATbefore] = ACTIONS(161),
    [anon_sym_ATbeforeClass] = ACTIONS(159),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(161),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(159),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(159),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(159),
    [anon_sym_ATcovers] = ACTIONS(161),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(161),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(159),
    [anon_sym_ATcoversNothing] = ACTIONS(159),
    [anon_sym_ATdataProvider] = ACTIONS(159),
    [anon_sym_ATdepends] = ACTIONS(161),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(159),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(159),
    [anon_sym_ATgroup] = ACTIONS(159),
    [anon_sym_ATlarge] = ACTIONS(159),
    [anon_sym_ATmedium] = ACTIONS(159),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(159),
    [anon_sym_ATrequires] = ACTIONS(161),
    [anon_sym_ATrequiresusages] = ACTIONS(159),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(159),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(159),
    [anon_sym_ATsmall] = ACTIONS(159),
    [anon_sym_ATtest] = ACTIONS(161),
    [anon_sym_ATtestWith] = ACTIONS(159),
    [anon_sym_ATtestdox] = ACTIONS(159),
    [anon_sym_ATticket] = ACTIONS(159),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(159),
  },
  [18] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(67),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(163),
    [anon_sym_ATfilesource] = ACTIONS(163),
    [anon_sym_ATignore] = ACTIONS(163),
    [anon_sym_ATcategory] = ACTIONS(163),
    [anon_sym_ATcopyright] = ACTIONS(163),
    [anon_sym_ATtodo] = ACTIONS(163),
    [anon_sym_ATexample] = ACTIONS(163),
    [anon_sym_ATlicense] = ACTIONS(163),
    [anon_sym_ATpackage] = ACTIONS(163),
    [anon_sym_ATsource] = ACTIONS(163),
    [anon_sym_ATsubpackage] = ACTIONS(163),
    [anon_sym_ATuses] = ACTIONS(163),
    [anon_sym_ATauthor] = ACTIONS(163),
    [anon_sym_ATglobal] = ACTIONS(163),
    [anon_sym_ATinternal] = ACTIONS(163),
    [anon_sym_ATlink] = ACTIONS(163),
    [anon_sym_ATmethod] = ACTIONS(163),
    [anon_sym_ATparam] = ACTIONS(163),
    [anon_sym_ATproperty] = ACTIONS(165),
    [anon_sym_ATproperty_DASHread] = ACTIONS(163),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(163),
    [anon_sym_ATreturn] = ACTIONS(163),
    [anon_sym_ATsee] = ACTIONS(163),
    [anon_sym_ATthrows] = ACTIONS(163),
    [anon_sym_ATvar] = ACTIONS(163),
    [anon_sym_ATdeprecated] = ACTIONS(163),
    [anon_sym_ATsince] = ACTIONS(163),
    [anon_sym_ATversion] = ACTIONS(163),
    [anon_sym_ATafter] = ACTIONS(165),
    [anon_sym_ATafterClass] = ACTIONS(163),
    [anon_sym_ATannotation] = ACTIONS(163),
    [anon_sym_ATbackupGlobals] = ACTIONS(163),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(163),
    [anon_sym_ATbefore] = ACTIONS(165),
    [anon_sym_ATbeforeClass] = ACTIONS(163),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(165),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(163),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(163),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(163),
    [anon_sym_ATcovers] = ACTIONS(165),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(165),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(163),
    [anon_sym_ATcoversNothing] = ACTIONS(163),
    [anon_sym_ATdataProvider] = ACTIONS(163),
    [anon_sym_ATdepends] = ACTIONS(165),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(163),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(163),
    [anon_sym_ATgroup] = ACTIONS(163),
    [anon_sym_ATlarge] = ACTIONS(163),
    [anon_sym_ATmedium] = ACTIONS(163),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(163),
    [anon_sym_ATrequires] = ACTIONS(165),
    [anon_sym_ATrequiresusages] = ACTIONS(163),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(163),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(163),
    [anon_sym_ATsmall] = ACTIONS(163),
    [anon_sym_ATtest] = ACTIONS(165),
    [anon_sym_ATtestWith] = ACTIONS(163),
    [anon_sym_ATtestdox] = ACTIONS(163),
    [anon_sym_ATticket] = ACTIONS(163),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(163),
  },
  [19] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(63),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(167),
    [anon_sym_ATfilesource] = ACTIONS(167),
    [anon_sym_ATignore] = ACTIONS(167),
    [anon_sym_ATcategory] = ACTIONS(167),
    [anon_sym_ATcopyright] = ACTIONS(167),
    [anon_sym_ATtodo] = ACTIONS(167),
    [anon_sym_ATexample] = ACTIONS(167),
    [anon_sym_ATlicense] = ACTIONS(167),
    [anon_sym_ATpackage] = ACTIONS(167),
    [anon_sym_ATsource] = ACTIONS(167),
    [anon_sym_ATsubpackage] = ACTIONS(167),
    [anon_sym_ATuses] = ACTIONS(167),
    [anon_sym_ATauthor] = ACTIONS(167),
    [anon_sym_ATglobal] = ACTIONS(167),
    [anon_sym_ATinternal] = ACTIONS(167),
    [anon_sym_ATlink] = ACTIONS(167),
    [anon_sym_ATmethod] = ACTIONS(167),
    [anon_sym_ATparam] = ACTIONS(167),
    [anon_sym_ATproperty] = ACTIONS(169),
    [anon_sym_ATproperty_DASHread] = ACTIONS(167),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(167),
    [anon_sym_ATreturn] = ACTIONS(167),
    [anon_sym_ATsee] = ACTIONS(167),
    [anon_sym_ATthrows] = ACTIONS(167),
    [anon_sym_ATvar] = ACTIONS(167),
    [anon_sym_ATdeprecated] = ACTIONS(167),
    [anon_sym_ATsince] = ACTIONS(167),
    [anon_sym_ATversion] = ACTIONS(167),
    [anon_sym_ATafter] = ACTIONS(169),
    [anon_sym_ATafterClass] = ACTIONS(167),
    [anon_sym_ATannotation] = ACTIONS(167),
    [anon_sym_ATbackupGlobals] = ACTIONS(167),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(167),
    [anon_sym_ATbefore] = ACTIONS(169),
    [anon_sym_ATbeforeClass] = ACTIONS(167),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(169),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(167),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(167),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(167),
    [anon_sym_ATcovers] = ACTIONS(169),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(169),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(167),
    [anon_sym_ATcoversNothing] = ACTIONS(167),
    [anon_sym_ATdataProvider] = ACTIONS(167),
    [anon_sym_ATdepends] = ACTIONS(169),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(167),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(167),
    [anon_sym_ATgroup] = ACTIONS(167),
    [anon_sym_ATlarge] = ACTIONS(167),
    [anon_sym_ATmedium] = ACTIONS(167),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(167),
    [anon_sym_ATrequires] = ACTIONS(169),
    [anon_sym_ATrequiresusages] = ACTIONS(167),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(167),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(167),
    [anon_sym_ATsmall] = ACTIONS(167),
    [anon_sym_ATtest] = ACTIONS(169),
    [anon_sym_ATtestWith] = ACTIONS(167),
    [anon_sym_ATtestdox] = ACTIONS(167),
    [anon_sym_ATticket] = ACTIONS(167),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(167),
  },
  [20] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(65),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(171),
    [anon_sym_ATfilesource] = ACTIONS(171),
    [anon_sym_ATignore] = ACTIONS(171),
    [anon_sym_ATcategory] = ACTIONS(171),
    [anon_sym_ATcopyright] = ACTIONS(171),
    [anon_sym_ATtodo] = ACTIONS(171),
    [anon_sym_ATexample] = ACTIONS(171),
    [anon_sym_ATlicense] = ACTIONS(171),
    [anon_sym_ATpackage] = ACTIONS(171),
    [anon_sym_ATsource] = ACTIONS(171),
    [anon_sym_ATsubpackage] = ACTIONS(171),
    [anon_sym_ATuses] = ACTIONS(171),
    [anon_sym_ATauthor] = ACTIONS(171),
    [anon_sym_ATglobal] = ACTIONS(171),
    [anon_sym_ATinternal] = ACTIONS(171),
    [anon_sym_ATlink] = ACTIONS(171),
    [anon_sym_ATmethod] = ACTIONS(171),
    [anon_sym_ATparam] = ACTIONS(171),
    [anon_sym_ATproperty] = ACTIONS(173),
    [anon_sym_ATproperty_DASHread] = ACTIONS(171),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(171),
    [anon_sym_ATreturn] = ACTIONS(171),
    [anon_sym_ATsee] = ACTIONS(171),
    [anon_sym_ATthrows] = ACTIONS(171),
    [anon_sym_ATvar] = ACTIONS(171),
    [anon_sym_ATdeprecated] = ACTIONS(171),
    [anon_sym_ATsince] = ACTIONS(171),
    [anon_sym_ATversion] = ACTIONS(171),
    [anon_sym_ATafter] = ACTIONS(173),
    [anon_sym_ATafterClass] = ACTIONS(171),
    [anon_sym_ATannotation] = ACTIONS(171),
    [anon_sym_ATbackupGlobals] = ACTIONS(171),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(171),
    [anon_sym_ATbefore] = ACTIONS(173),
    [anon_sym_ATbeforeClass] = ACTIONS(171),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(173),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(171),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(171),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(171),
    [anon_sym_ATcovers] = ACTIONS(173),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(173),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(171),
    [anon_sym_ATcoversNothing] = ACTIONS(171),
    [anon_sym_ATdataProvider] = ACTIONS(171),
    [anon_sym_ATdepends] = ACTIONS(173),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(171),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(171),
    [anon_sym_ATgroup] = ACTIONS(171),
    [anon_sym_ATlarge] = ACTIONS(171),
    [anon_sym_ATmedium] = ACTIONS(171),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(171),
    [anon_sym_ATrequires] = ACTIONS(173),
    [anon_sym_ATrequiresusages] = ACTIONS(171),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(171),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(171),
    [anon_sym_ATsmall] = ACTIONS(171),
    [anon_sym_ATtest] = ACTIONS(173),
    [anon_sym_ATtestWith] = ACTIONS(171),
    [anon_sym_ATtestdox] = ACTIONS(171),
    [anon_sym_ATticket] = ACTIONS(171),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(171),
  },
  [21] = {
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_ATapi] = ACTIONS(175),
    [anon_sym_ATfilesource] = ACTIONS(175),
    [anon_sym_ATignore] = ACTIONS(175),
    [anon_sym_ATcategory] = ACTIONS(175),
    [anon_sym_ATcopyright] = ACTIONS(175),
    [anon_sym_ATtodo] = ACTIONS(175),
    [anon_sym_ATexample] = ACTIONS(175),
    [anon_sym_ATlicense] = ACTIONS(175),
    [anon_sym_ATpackage] = ACTIONS(175),
    [anon_sym_ATsource] = ACTIONS(175),
    [anon_sym_ATsubpackage] = ACTIONS(175),
    [anon_sym_ATuses] = ACTIONS(175),
    [anon_sym_ATauthor] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_ATglobal] = ACTIONS(175),
    [anon_sym_ATinternal] = ACTIONS(175),
    [anon_sym_ATlink] = ACTIONS(175),
    [anon_sym_ATmethod] = ACTIONS(175),
    [anon_sym_ATparam] = ACTIONS(175),
    [anon_sym_ATproperty] = ACTIONS(177),
    [anon_sym_ATproperty_DASHread] = ACTIONS(175),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(175),
    [anon_sym_ATreturn] = ACTIONS(175),
    [anon_sym_ATsee] = ACTIONS(175),
    [anon_sym_ATthrows] = ACTIONS(175),
    [anon_sym_ATvar] = ACTIONS(175),
    [anon_sym_ATdeprecated] = ACTIONS(175),
    [anon_sym_ATsince] = ACTIONS(175),
    [anon_sym_ATversion] = ACTIONS(175),
    [anon_sym_ATafter] = ACTIONS(177),
    [anon_sym_ATafterClass] = ACTIONS(175),
    [anon_sym_ATannotation] = ACTIONS(175),
    [anon_sym_ATbackupGlobals] = ACTIONS(175),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(175),
    [anon_sym_ATbefore] = ACTIONS(177),
    [anon_sym_ATbeforeClass] = ACTIONS(175),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(177),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(175),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(175),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(175),
    [anon_sym_ATcovers] = ACTIONS(177),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(177),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(175),
    [anon_sym_ATcoversNothing] = ACTIONS(175),
    [anon_sym_ATdataProvider] = ACTIONS(175),
    [anon_sym_ATdepends] = ACTIONS(177),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(175),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(175),
    [anon_sym_ATgroup] = ACTIONS(175),
    [anon_sym_ATlarge] = ACTIONS(175),
    [anon_sym_ATmedium] = ACTIONS(175),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(175),
    [anon_sym_ATrequires] = ACTIONS(177),
    [anon_sym_ATrequiresusages] = ACTIONS(175),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(175),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(175),
    [anon_sym_ATsmall] = ACTIONS(175),
    [anon_sym_ATtest] = ACTIONS(177),
    [anon_sym_ATtestWith] = ACTIONS(175),
    [anon_sym_ATtestdox] = ACTIONS(175),
    [anon_sym_ATticket] = ACTIONS(175),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(175),
    [sym_text] = ACTIONS(177),
    [sym__end] = ACTIONS(175),
  },
  [22] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(49),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(179),
    [anon_sym_ATfilesource] = ACTIONS(179),
    [anon_sym_ATignore] = ACTIONS(179),
    [anon_sym_ATcategory] = ACTIONS(179),
    [anon_sym_ATcopyright] = ACTIONS(179),
    [anon_sym_ATtodo] = ACTIONS(179),
    [anon_sym_ATexample] = ACTIONS(179),
    [anon_sym_ATlicense] = ACTIONS(179),
    [anon_sym_ATpackage] = ACTIONS(179),
    [anon_sym_ATsource] = ACTIONS(179),
    [anon_sym_ATsubpackage] = ACTIONS(179),
    [anon_sym_ATuses] = ACTIONS(179),
    [anon_sym_ATauthor] = ACTIONS(179),
    [anon_sym_ATglobal] = ACTIONS(179),
    [anon_sym_ATinternal] = ACTIONS(179),
    [anon_sym_ATlink] = ACTIONS(179),
    [anon_sym_ATmethod] = ACTIONS(179),
    [anon_sym_ATparam] = ACTIONS(179),
    [anon_sym_ATproperty] = ACTIONS(181),
    [anon_sym_ATproperty_DASHread] = ACTIONS(179),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(179),
    [anon_sym_ATreturn] = ACTIONS(179),
    [anon_sym_ATsee] = ACTIONS(179),
    [anon_sym_ATthrows] = ACTIONS(179),
    [anon_sym_ATvar] = ACTIONS(179),
    [anon_sym_ATdeprecated] = ACTIONS(179),
    [anon_sym_ATsince] = ACTIONS(179),
    [anon_sym_ATversion] = ACTIONS(179),
    [anon_sym_ATafter] = ACTIONS(181),
    [anon_sym_ATafterClass] = ACTIONS(179),
    [anon_sym_ATannotation] = ACTIONS(179),
    [anon_sym_ATbackupGlobals] = ACTIONS(179),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(179),
    [anon_sym_ATbefore] = ACTIONS(181),
    [anon_sym_ATbeforeClass] = ACTIONS(179),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(181),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(179),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(179),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(179),
    [anon_sym_ATcovers] = ACTIONS(181),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(181),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(179),
    [anon_sym_ATcoversNothing] = ACTIONS(179),
    [anon_sym_ATdataProvider] = ACTIONS(179),
    [anon_sym_ATdepends] = ACTIONS(181),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(179),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(179),
    [anon_sym_ATgroup] = ACTIONS(179),
    [anon_sym_ATlarge] = ACTIONS(179),
    [anon_sym_ATmedium] = ACTIONS(179),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(179),
    [anon_sym_ATrequires] = ACTIONS(181),
    [anon_sym_ATrequiresusages] = ACTIONS(179),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(179),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(179),
    [anon_sym_ATsmall] = ACTIONS(179),
    [anon_sym_ATtest] = ACTIONS(181),
    [anon_sym_ATtestWith] = ACTIONS(179),
    [anon_sym_ATtestdox] = ACTIONS(179),
    [anon_sym_ATticket] = ACTIONS(179),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(179),
  },
  [23] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(66),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(183),
    [anon_sym_ATfilesource] = ACTIONS(183),
    [anon_sym_ATignore] = ACTIONS(183),
    [anon_sym_ATcategory] = ACTIONS(183),
    [anon_sym_ATcopyright] = ACTIONS(183),
    [anon_sym_ATtodo] = ACTIONS(183),
    [anon_sym_ATexample] = ACTIONS(183),
    [anon_sym_ATlicense] = ACTIONS(183),
    [anon_sym_ATpackage] = ACTIONS(183),
    [anon_sym_ATsource] = ACTIONS(183),
    [anon_sym_ATsubpackage] = ACTIONS(183),
    [anon_sym_ATuses] = ACTIONS(183),
    [anon_sym_ATauthor] = ACTIONS(183),
    [anon_sym_ATglobal] = ACTIONS(183),
    [anon_sym_ATinternal] = ACTIONS(183),
    [anon_sym_ATlink] = ACTIONS(183),
    [anon_sym_ATmethod] = ACTIONS(183),
    [anon_sym_ATparam] = ACTIONS(183),
    [anon_sym_ATproperty] = ACTIONS(185),
    [anon_sym_ATproperty_DASHread] = ACTIONS(183),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(183),
    [anon_sym_ATreturn] = ACTIONS(183),
    [anon_sym_ATsee] = ACTIONS(183),
    [anon_sym_ATthrows] = ACTIONS(183),
    [anon_sym_ATvar] = ACTIONS(183),
    [anon_sym_ATdeprecated] = ACTIONS(183),
    [anon_sym_ATsince] = ACTIONS(183),
    [anon_sym_ATversion] = ACTIONS(183),
    [anon_sym_ATafter] = ACTIONS(185),
    [anon_sym_ATafterClass] = ACTIONS(183),
    [anon_sym_ATannotation] = ACTIONS(183),
    [anon_sym_ATbackupGlobals] = ACTIONS(183),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(183),
    [anon_sym_ATbefore] = ACTIONS(185),
    [anon_sym_ATbeforeClass] = ACTIONS(183),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(185),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(183),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(183),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(183),
    [anon_sym_ATcovers] = ACTIONS(185),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(185),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(183),
    [anon_sym_ATcoversNothing] = ACTIONS(183),
    [anon_sym_ATdataProvider] = ACTIONS(183),
    [anon_sym_ATdepends] = ACTIONS(185),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(183),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(183),
    [anon_sym_ATgroup] = ACTIONS(183),
    [anon_sym_ATlarge] = ACTIONS(183),
    [anon_sym_ATmedium] = ACTIONS(183),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(183),
    [anon_sym_ATrequires] = ACTIONS(185),
    [anon_sym_ATrequiresusages] = ACTIONS(183),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(183),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(183),
    [anon_sym_ATsmall] = ACTIONS(183),
    [anon_sym_ATtest] = ACTIONS(185),
    [anon_sym_ATtestWith] = ACTIONS(183),
    [anon_sym_ATtestdox] = ACTIONS(183),
    [anon_sym_ATticket] = ACTIONS(183),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(183),
  },
  [24] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(57),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(187),
    [anon_sym_ATfilesource] = ACTIONS(187),
    [anon_sym_ATignore] = ACTIONS(187),
    [anon_sym_ATcategory] = ACTIONS(187),
    [anon_sym_ATcopyright] = ACTIONS(187),
    [anon_sym_ATtodo] = ACTIONS(187),
    [anon_sym_ATexample] = ACTIONS(187),
    [anon_sym_ATlicense] = ACTIONS(187),
    [anon_sym_ATpackage] = ACTIONS(187),
    [anon_sym_ATsource] = ACTIONS(187),
    [anon_sym_ATsubpackage] = ACTIONS(187),
    [anon_sym_ATuses] = ACTIONS(187),
    [anon_sym_ATauthor] = ACTIONS(187),
    [anon_sym_ATglobal] = ACTIONS(187),
    [anon_sym_ATinternal] = ACTIONS(187),
    [anon_sym_ATlink] = ACTIONS(187),
    [anon_sym_ATmethod] = ACTIONS(187),
    [anon_sym_ATparam] = ACTIONS(187),
    [anon_sym_ATproperty] = ACTIONS(189),
    [anon_sym_ATproperty_DASHread] = ACTIONS(187),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(187),
    [anon_sym_ATreturn] = ACTIONS(187),
    [anon_sym_ATsee] = ACTIONS(187),
    [anon_sym_ATthrows] = ACTIONS(187),
    [anon_sym_ATvar] = ACTIONS(187),
    [anon_sym_ATdeprecated] = ACTIONS(187),
    [anon_sym_ATsince] = ACTIONS(187),
    [anon_sym_ATversion] = ACTIONS(187),
    [anon_sym_ATafter] = ACTIONS(189),
    [anon_sym_ATafterClass] = ACTIONS(187),
    [anon_sym_ATannotation] = ACTIONS(187),
    [anon_sym_ATbackupGlobals] = ACTIONS(187),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(187),
    [anon_sym_ATbefore] = ACTIONS(189),
    [anon_sym_ATbeforeClass] = ACTIONS(187),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(189),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(187),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(187),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(187),
    [anon_sym_ATcovers] = ACTIONS(189),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(189),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(187),
    [anon_sym_ATcoversNothing] = ACTIONS(187),
    [anon_sym_ATdataProvider] = ACTIONS(187),
    [anon_sym_ATdepends] = ACTIONS(189),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(187),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(187),
    [anon_sym_ATgroup] = ACTIONS(187),
    [anon_sym_ATlarge] = ACTIONS(187),
    [anon_sym_ATmedium] = ACTIONS(187),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(187),
    [anon_sym_ATrequires] = ACTIONS(189),
    [anon_sym_ATrequiresusages] = ACTIONS(187),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(187),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(187),
    [anon_sym_ATsmall] = ACTIONS(187),
    [anon_sym_ATtest] = ACTIONS(189),
    [anon_sym_ATtestWith] = ACTIONS(187),
    [anon_sym_ATtestdox] = ACTIONS(187),
    [anon_sym_ATticket] = ACTIONS(187),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(187),
  },
  [25] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(55),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(191),
    [anon_sym_ATfilesource] = ACTIONS(191),
    [anon_sym_ATignore] = ACTIONS(191),
    [anon_sym_ATcategory] = ACTIONS(191),
    [anon_sym_ATcopyright] = ACTIONS(191),
    [anon_sym_ATtodo] = ACTIONS(191),
    [anon_sym_ATexample] = ACTIONS(191),
    [anon_sym_ATlicense] = ACTIONS(191),
    [anon_sym_ATpackage] = ACTIONS(191),
    [anon_sym_ATsource] = ACTIONS(191),
    [anon_sym_ATsubpackage] = ACTIONS(191),
    [anon_sym_ATuses] = ACTIONS(191),
    [anon_sym_ATauthor] = ACTIONS(191),
    [anon_sym_ATglobal] = ACTIONS(191),
    [anon_sym_ATinternal] = ACTIONS(191),
    [anon_sym_ATlink] = ACTIONS(191),
    [anon_sym_ATmethod] = ACTIONS(191),
    [anon_sym_ATparam] = ACTIONS(191),
    [anon_sym_ATproperty] = ACTIONS(193),
    [anon_sym_ATproperty_DASHread] = ACTIONS(191),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(191),
    [anon_sym_ATreturn] = ACTIONS(191),
    [anon_sym_ATsee] = ACTIONS(191),
    [anon_sym_ATthrows] = ACTIONS(191),
    [anon_sym_ATvar] = ACTIONS(191),
    [anon_sym_ATdeprecated] = ACTIONS(191),
    [anon_sym_ATsince] = ACTIONS(191),
    [anon_sym_ATversion] = ACTIONS(191),
    [anon_sym_ATafter] = ACTIONS(193),
    [anon_sym_ATafterClass] = ACTIONS(191),
    [anon_sym_ATannotation] = ACTIONS(191),
    [anon_sym_ATbackupGlobals] = ACTIONS(191),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(191),
    [anon_sym_ATbefore] = ACTIONS(193),
    [anon_sym_ATbeforeClass] = ACTIONS(191),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(193),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(191),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(191),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(191),
    [anon_sym_ATcovers] = ACTIONS(193),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(193),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(191),
    [anon_sym_ATcoversNothing] = ACTIONS(191),
    [anon_sym_ATdataProvider] = ACTIONS(191),
    [anon_sym_ATdepends] = ACTIONS(193),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(191),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(191),
    [anon_sym_ATgroup] = ACTIONS(191),
    [anon_sym_ATlarge] = ACTIONS(191),
    [anon_sym_ATmedium] = ACTIONS(191),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(191),
    [anon_sym_ATrequires] = ACTIONS(193),
    [anon_sym_ATrequiresusages] = ACTIONS(191),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(191),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(191),
    [anon_sym_ATsmall] = ACTIONS(191),
    [anon_sym_ATtest] = ACTIONS(193),
    [anon_sym_ATtestWith] = ACTIONS(191),
    [anon_sym_ATtestdox] = ACTIONS(191),
    [anon_sym_ATticket] = ACTIONS(191),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(191),
  },
  [26] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_ATapi] = ACTIONS(195),
    [anon_sym_ATfilesource] = ACTIONS(195),
    [anon_sym_ATignore] = ACTIONS(195),
    [anon_sym_ATcategory] = ACTIONS(195),
    [anon_sym_ATcopyright] = ACTIONS(195),
    [anon_sym_ATtodo] = ACTIONS(195),
    [anon_sym_ATexample] = ACTIONS(195),
    [anon_sym_ATlicense] = ACTIONS(195),
    [anon_sym_ATpackage] = ACTIONS(195),
    [anon_sym_ATsource] = ACTIONS(195),
    [anon_sym_ATsubpackage] = ACTIONS(195),
    [anon_sym_ATuses] = ACTIONS(195),
    [anon_sym_ATauthor] = ACTIONS(195),
    [anon_sym_ATglobal] = ACTIONS(195),
    [anon_sym_ATinternal] = ACTIONS(195),
    [anon_sym_ATlink] = ACTIONS(195),
    [anon_sym_ATmethod] = ACTIONS(195),
    [anon_sym_ATparam] = ACTIONS(195),
    [anon_sym_ATproperty] = ACTIONS(197),
    [anon_sym_ATproperty_DASHread] = ACTIONS(195),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(195),
    [anon_sym_ATreturn] = ACTIONS(195),
    [anon_sym_ATsee] = ACTIONS(195),
    [anon_sym_ATthrows] = ACTIONS(195),
    [anon_sym_ATvar] = ACTIONS(195),
    [anon_sym_ATdeprecated] = ACTIONS(195),
    [anon_sym_ATsince] = ACTIONS(195),
    [anon_sym_ATversion] = ACTIONS(195),
    [anon_sym_ATafter] = ACTIONS(197),
    [anon_sym_ATafterClass] = ACTIONS(195),
    [anon_sym_ATannotation] = ACTIONS(195),
    [anon_sym_ATbackupGlobals] = ACTIONS(195),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(195),
    [anon_sym_ATbefore] = ACTIONS(197),
    [anon_sym_ATbeforeClass] = ACTIONS(195),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(197),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(195),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(195),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(195),
    [anon_sym_ATcovers] = ACTIONS(197),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(197),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(195),
    [anon_sym_ATcoversNothing] = ACTIONS(195),
    [anon_sym_ATdataProvider] = ACTIONS(195),
    [anon_sym_ATdepends] = ACTIONS(197),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(195),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(195),
    [anon_sym_ATgroup] = ACTIONS(195),
    [anon_sym_ATlarge] = ACTIONS(195),
    [anon_sym_ATmedium] = ACTIONS(195),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(195),
    [anon_sym_ATrequires] = ACTIONS(197),
    [anon_sym_ATrequiresusages] = ACTIONS(195),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(195),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(195),
    [anon_sym_ATsmall] = ACTIONS(195),
    [anon_sym_ATtest] = ACTIONS(197),
    [anon_sym_ATtestWith] = ACTIONS(195),
    [anon_sym_ATtestdox] = ACTIONS(195),
    [anon_sym_ATticket] = ACTIONS(195),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(195),
    [sym_text] = ACTIONS(197),
    [sym__end] = ACTIONS(195),
  },
  [27] = {
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_ATapi] = ACTIONS(201),
    [anon_sym_ATfilesource] = ACTIONS(201),
    [anon_sym_ATignore] = ACTIONS(201),
    [anon_sym_ATcategory] = ACTIONS(201),
    [anon_sym_ATcopyright] = ACTIONS(201),
    [anon_sym_ATtodo] = ACTIONS(201),
    [anon_sym_ATexample] = ACTIONS(201),
    [anon_sym_ATlicense] = ACTIONS(201),
    [anon_sym_ATpackage] = ACTIONS(201),
    [anon_sym_ATsource] = ACTIONS(201),
    [anon_sym_ATsubpackage] = ACTIONS(201),
    [anon_sym_ATuses] = ACTIONS(201),
    [anon_sym_ATauthor] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_ATglobal] = ACTIONS(201),
    [anon_sym_ATinternal] = ACTIONS(201),
    [anon_sym_ATlink] = ACTIONS(201),
    [anon_sym_ATmethod] = ACTIONS(201),
    [anon_sym_ATparam] = ACTIONS(201),
    [anon_sym_ATproperty] = ACTIONS(203),
    [anon_sym_ATproperty_DASHread] = ACTIONS(201),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(201),
    [anon_sym_ATreturn] = ACTIONS(201),
    [anon_sym_ATsee] = ACTIONS(201),
    [anon_sym_ATthrows] = ACTIONS(201),
    [anon_sym_ATvar] = ACTIONS(201),
    [anon_sym_ATdeprecated] = ACTIONS(201),
    [anon_sym_ATsince] = ACTIONS(201),
    [anon_sym_ATversion] = ACTIONS(201),
    [anon_sym_ATafter] = ACTIONS(203),
    [anon_sym_ATafterClass] = ACTIONS(201),
    [anon_sym_ATannotation] = ACTIONS(201),
    [anon_sym_ATbackupGlobals] = ACTIONS(201),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(201),
    [anon_sym_ATbefore] = ACTIONS(203),
    [anon_sym_ATbeforeClass] = ACTIONS(201),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(203),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(201),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(201),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(201),
    [anon_sym_ATcovers] = ACTIONS(203),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(203),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(201),
    [anon_sym_ATcoversNothing] = ACTIONS(201),
    [anon_sym_ATdataProvider] = ACTIONS(201),
    [anon_sym_ATdepends] = ACTIONS(203),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(201),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(201),
    [anon_sym_ATgroup] = ACTIONS(201),
    [anon_sym_ATlarge] = ACTIONS(201),
    [anon_sym_ATmedium] = ACTIONS(201),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(201),
    [anon_sym_ATrequires] = ACTIONS(203),
    [anon_sym_ATrequiresusages] = ACTIONS(201),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(201),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(201),
    [anon_sym_ATsmall] = ACTIONS(201),
    [anon_sym_ATtest] = ACTIONS(203),
    [anon_sym_ATtestWith] = ACTIONS(201),
    [anon_sym_ATtestdox] = ACTIONS(201),
    [anon_sym_ATticket] = ACTIONS(201),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(201),
    [sym_text] = ACTIONS(203),
    [sym__end] = ACTIONS(201),
  },
  [28] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(54),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(205),
    [anon_sym_ATfilesource] = ACTIONS(205),
    [anon_sym_ATignore] = ACTIONS(205),
    [anon_sym_ATcategory] = ACTIONS(205),
    [anon_sym_ATcopyright] = ACTIONS(205),
    [anon_sym_ATtodo] = ACTIONS(205),
    [anon_sym_ATexample] = ACTIONS(205),
    [anon_sym_ATlicense] = ACTIONS(205),
    [anon_sym_ATpackage] = ACTIONS(205),
    [anon_sym_ATsource] = ACTIONS(205),
    [anon_sym_ATsubpackage] = ACTIONS(205),
    [anon_sym_ATuses] = ACTIONS(205),
    [anon_sym_ATauthor] = ACTIONS(205),
    [anon_sym_ATglobal] = ACTIONS(205),
    [anon_sym_ATinternal] = ACTIONS(205),
    [anon_sym_ATlink] = ACTIONS(205),
    [anon_sym_ATmethod] = ACTIONS(205),
    [anon_sym_ATparam] = ACTIONS(205),
    [anon_sym_ATproperty] = ACTIONS(207),
    [anon_sym_ATproperty_DASHread] = ACTIONS(205),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(205),
    [anon_sym_ATreturn] = ACTIONS(205),
    [anon_sym_ATsee] = ACTIONS(205),
    [anon_sym_ATthrows] = ACTIONS(205),
    [anon_sym_ATvar] = ACTIONS(205),
    [anon_sym_ATdeprecated] = ACTIONS(205),
    [anon_sym_ATsince] = ACTIONS(205),
    [anon_sym_ATversion] = ACTIONS(205),
    [anon_sym_ATafter] = ACTIONS(207),
    [anon_sym_ATafterClass] = ACTIONS(205),
    [anon_sym_ATannotation] = ACTIONS(205),
    [anon_sym_ATbackupGlobals] = ACTIONS(205),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(205),
    [anon_sym_ATbefore] = ACTIONS(207),
    [anon_sym_ATbeforeClass] = ACTIONS(205),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(207),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(205),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(205),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(205),
    [anon_sym_ATcovers] = ACTIONS(207),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(207),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(205),
    [anon_sym_ATcoversNothing] = ACTIONS(205),
    [anon_sym_ATdataProvider] = ACTIONS(205),
    [anon_sym_ATdepends] = ACTIONS(207),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(205),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(205),
    [anon_sym_ATgroup] = ACTIONS(205),
    [anon_sym_ATlarge] = ACTIONS(205),
    [anon_sym_ATmedium] = ACTIONS(205),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(205),
    [anon_sym_ATrequires] = ACTIONS(207),
    [anon_sym_ATrequiresusages] = ACTIONS(205),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(205),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(205),
    [anon_sym_ATsmall] = ACTIONS(205),
    [anon_sym_ATtest] = ACTIONS(207),
    [anon_sym_ATtestWith] = ACTIONS(205),
    [anon_sym_ATtestdox] = ACTIONS(205),
    [anon_sym_ATticket] = ACTIONS(205),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(205),
  },
  [29] = {
    [sym_inline_tag] = STATE(33),
    [sym_description] = STATE(60),
    [aux_sym_description_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(133),
    [anon_sym_ATfilesource] = ACTIONS(133),
    [anon_sym_ATignore] = ACTIONS(133),
    [anon_sym_ATcategory] = ACTIONS(133),
    [anon_sym_ATcopyright] = ACTIONS(133),
    [anon_sym_ATtodo] = ACTIONS(133),
    [anon_sym_ATexample] = ACTIONS(133),
    [anon_sym_ATlicense] = ACTIONS(133),
    [anon_sym_ATpackage] = ACTIONS(133),
    [anon_sym_ATsource] = ACTIONS(133),
    [anon_sym_ATsubpackage] = ACTIONS(133),
    [anon_sym_ATuses] = ACTIONS(133),
    [anon_sym_ATauthor] = ACTIONS(133),
    [anon_sym_ATglobal] = ACTIONS(133),
    [anon_sym_ATinternal] = ACTIONS(133),
    [anon_sym_ATlink] = ACTIONS(133),
    [anon_sym_ATmethod] = ACTIONS(133),
    [anon_sym_ATparam] = ACTIONS(133),
    [anon_sym_ATproperty] = ACTIONS(137),
    [anon_sym_ATproperty_DASHread] = ACTIONS(133),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(133),
    [anon_sym_ATreturn] = ACTIONS(133),
    [anon_sym_ATsee] = ACTIONS(133),
    [anon_sym_ATthrows] = ACTIONS(133),
    [anon_sym_ATvar] = ACTIONS(133),
    [anon_sym_ATdeprecated] = ACTIONS(133),
    [anon_sym_ATsince] = ACTIONS(133),
    [anon_sym_ATversion] = ACTIONS(133),
    [anon_sym_ATafter] = ACTIONS(137),
    [anon_sym_ATafterClass] = ACTIONS(133),
    [anon_sym_ATannotation] = ACTIONS(133),
    [anon_sym_ATbackupGlobals] = ACTIONS(133),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(133),
    [anon_sym_ATbefore] = ACTIONS(137),
    [anon_sym_ATbeforeClass] = ACTIONS(133),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(137),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(133),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(133),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(133),
    [anon_sym_ATcovers] = ACTIONS(137),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(137),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(133),
    [anon_sym_ATcoversNothing] = ACTIONS(133),
    [anon_sym_ATdataProvider] = ACTIONS(133),
    [anon_sym_ATdepends] = ACTIONS(137),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(133),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(133),
    [anon_sym_ATgroup] = ACTIONS(133),
    [anon_sym_ATlarge] = ACTIONS(133),
    [anon_sym_ATmedium] = ACTIONS(133),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(133),
    [anon_sym_ATrequires] = ACTIONS(137),
    [anon_sym_ATrequiresusages] = ACTIONS(133),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(133),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(133),
    [anon_sym_ATsmall] = ACTIONS(133),
    [anon_sym_ATtest] = ACTIONS(137),
    [anon_sym_ATtestWith] = ACTIONS(133),
    [anon_sym_ATtestdox] = ACTIONS(133),
    [anon_sym_ATticket] = ACTIONS(133),
    [sym_text] = ACTIONS(45),
    [sym__end] = ACTIONS(133),
  },
  [30] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_ATapi] = ACTIONS(209),
    [anon_sym_ATfilesource] = ACTIONS(209),
    [anon_sym_ATignore] = ACTIONS(209),
    [anon_sym_ATcategory] = ACTIONS(209),
    [anon_sym_ATcopyright] = ACTIONS(209),
    [anon_sym_ATtodo] = ACTIONS(209),
    [anon_sym_ATexample] = ACTIONS(209),
    [anon_sym_ATlicense] = ACTIONS(209),
    [anon_sym_ATpackage] = ACTIONS(209),
    [anon_sym_ATsource] = ACTIONS(209),
    [anon_sym_ATsubpackage] = ACTIONS(209),
    [anon_sym_ATuses] = ACTIONS(209),
    [anon_sym_ATauthor] = ACTIONS(209),
    [anon_sym_ATglobal] = ACTIONS(209),
    [anon_sym_ATinternal] = ACTIONS(209),
    [anon_sym_ATlink] = ACTIONS(209),
    [anon_sym_ATmethod] = ACTIONS(209),
    [anon_sym_ATparam] = ACTIONS(209),
    [anon_sym_ATproperty] = ACTIONS(211),
    [anon_sym_ATproperty_DASHread] = ACTIONS(209),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(209),
    [anon_sym_ATreturn] = ACTIONS(209),
    [anon_sym_ATsee] = ACTIONS(209),
    [anon_sym_ATthrows] = ACTIONS(209),
    [anon_sym_ATvar] = ACTIONS(209),
    [anon_sym_ATdeprecated] = ACTIONS(209),
    [anon_sym_ATsince] = ACTIONS(209),
    [anon_sym_ATversion] = ACTIONS(209),
    [anon_sym_ATafter] = ACTIONS(211),
    [anon_sym_ATafterClass] = ACTIONS(209),
    [anon_sym_ATannotation] = ACTIONS(209),
    [anon_sym_ATbackupGlobals] = ACTIONS(209),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(209),
    [anon_sym_ATbefore] = ACTIONS(211),
    [anon_sym_ATbeforeClass] = ACTIONS(209),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(211),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(209),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(209),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(209),
    [anon_sym_ATcovers] = ACTIONS(211),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(211),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(209),
    [anon_sym_ATcoversNothing] = ACTIONS(209),
    [anon_sym_ATdataProvider] = ACTIONS(209),
    [anon_sym_ATdepends] = ACTIONS(211),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(209),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(209),
    [anon_sym_ATgroup] = ACTIONS(209),
    [anon_sym_ATlarge] = ACTIONS(209),
    [anon_sym_ATmedium] = ACTIONS(209),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(209),
    [anon_sym_ATrequires] = ACTIONS(211),
    [anon_sym_ATrequiresusages] = ACTIONS(209),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(209),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(209),
    [anon_sym_ATsmall] = ACTIONS(209),
    [anon_sym_ATtest] = ACTIONS(211),
    [anon_sym_ATtestWith] = ACTIONS(209),
    [anon_sym_ATtestdox] = ACTIONS(209),
    [anon_sym_ATticket] = ACTIONS(209),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(209),
    [sym_text] = ACTIONS(211),
    [sym__end] = ACTIONS(209),
  },
  [31] = {
    [aux_sym_union_type_repeat1] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_ATapi] = ACTIONS(216),
    [anon_sym_ATfilesource] = ACTIONS(216),
    [anon_sym_ATignore] = ACTIONS(216),
    [anon_sym_ATcategory] = ACTIONS(216),
    [anon_sym_ATcopyright] = ACTIONS(216),
    [anon_sym_ATtodo] = ACTIONS(216),
    [anon_sym_ATexample] = ACTIONS(216),
    [anon_sym_ATlicense] = ACTIONS(216),
    [anon_sym_ATpackage] = ACTIONS(216),
    [anon_sym_ATsource] = ACTIONS(216),
    [anon_sym_ATsubpackage] = ACTIONS(216),
    [anon_sym_ATuses] = ACTIONS(216),
    [anon_sym_ATauthor] = ACTIONS(216),
    [anon_sym_ATglobal] = ACTIONS(216),
    [anon_sym_ATinternal] = ACTIONS(216),
    [anon_sym_ATlink] = ACTIONS(216),
    [anon_sym_ATmethod] = ACTIONS(216),
    [anon_sym_ATparam] = ACTIONS(216),
    [anon_sym_ATproperty] = ACTIONS(218),
    [anon_sym_ATproperty_DASHread] = ACTIONS(216),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(216),
    [anon_sym_ATreturn] = ACTIONS(216),
    [anon_sym_ATsee] = ACTIONS(216),
    [anon_sym_ATthrows] = ACTIONS(216),
    [anon_sym_ATvar] = ACTIONS(216),
    [anon_sym_ATdeprecated] = ACTIONS(216),
    [anon_sym_ATsince] = ACTIONS(216),
    [anon_sym_ATversion] = ACTIONS(216),
    [anon_sym_ATafter] = ACTIONS(218),
    [anon_sym_ATafterClass] = ACTIONS(216),
    [anon_sym_ATannotation] = ACTIONS(216),
    [anon_sym_ATbackupGlobals] = ACTIONS(216),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(216),
    [anon_sym_ATbefore] = ACTIONS(218),
    [anon_sym_ATbeforeClass] = ACTIONS(216),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(218),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(216),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(216),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(216),
    [anon_sym_ATcovers] = ACTIONS(218),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(218),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(216),
    [anon_sym_ATcoversNothing] = ACTIONS(216),
    [anon_sym_ATdataProvider] = ACTIONS(216),
    [anon_sym_ATdepends] = ACTIONS(218),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(216),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(216),
    [anon_sym_ATgroup] = ACTIONS(216),
    [anon_sym_ATlarge] = ACTIONS(216),
    [anon_sym_ATmedium] = ACTIONS(216),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(216),
    [anon_sym_ATrequires] = ACTIONS(218),
    [anon_sym_ATrequiresusages] = ACTIONS(216),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(216),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(216),
    [anon_sym_ATsmall] = ACTIONS(216),
    [anon_sym_ATtest] = ACTIONS(218),
    [anon_sym_ATtestWith] = ACTIONS(216),
    [anon_sym_ATtestdox] = ACTIONS(216),
    [anon_sym_ATticket] = ACTIONS(216),
    [anon_sym_PIPE] = ACTIONS(220),
    [sym_text] = ACTIONS(218),
    [sym__end] = ACTIONS(216),
  },
  [32] = {
    [aux_sym_union_type_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_ATapi] = ACTIONS(222),
    [anon_sym_ATfilesource] = ACTIONS(222),
    [anon_sym_ATignore] = ACTIONS(222),
    [anon_sym_ATcategory] = ACTIONS(222),
    [anon_sym_ATcopyright] = ACTIONS(222),
    [anon_sym_ATtodo] = ACTIONS(222),
    [anon_sym_ATexample] = ACTIONS(222),
    [anon_sym_ATlicense] = ACTIONS(222),
    [anon_sym_ATpackage] = ACTIONS(222),
    [anon_sym_ATsource] = ACTIONS(222),
    [anon_sym_ATsubpackage] = ACTIONS(222),
    [anon_sym_ATuses] = ACTIONS(222),
    [anon_sym_ATauthor] = ACTIONS(222),
    [anon_sym_ATglobal] = ACTIONS(222),
    [anon_sym_ATinternal] = ACTIONS(222),
    [anon_sym_ATlink] = ACTIONS(222),
    [anon_sym_ATmethod] = ACTIONS(222),
    [anon_sym_ATparam] = ACTIONS(222),
    [anon_sym_ATproperty] = ACTIONS(224),
    [anon_sym_ATproperty_DASHread] = ACTIONS(222),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(222),
    [anon_sym_ATreturn] = ACTIONS(222),
    [anon_sym_ATsee] = ACTIONS(222),
    [anon_sym_ATthrows] = ACTIONS(222),
    [anon_sym_ATvar] = ACTIONS(222),
    [anon_sym_ATdeprecated] = ACTIONS(222),
    [anon_sym_ATsince] = ACTIONS(222),
    [anon_sym_ATversion] = ACTIONS(222),
    [anon_sym_ATafter] = ACTIONS(224),
    [anon_sym_ATafterClass] = ACTIONS(222),
    [anon_sym_ATannotation] = ACTIONS(222),
    [anon_sym_ATbackupGlobals] = ACTIONS(222),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(222),
    [anon_sym_ATbefore] = ACTIONS(224),
    [anon_sym_ATbeforeClass] = ACTIONS(222),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(224),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(222),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(222),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(222),
    [anon_sym_ATcovers] = ACTIONS(224),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(224),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(222),
    [anon_sym_ATcoversNothing] = ACTIONS(222),
    [anon_sym_ATdataProvider] = ACTIONS(222),
    [anon_sym_ATdepends] = ACTIONS(224),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(222),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(222),
    [anon_sym_ATgroup] = ACTIONS(222),
    [anon_sym_ATlarge] = ACTIONS(222),
    [anon_sym_ATmedium] = ACTIONS(222),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(222),
    [anon_sym_ATrequires] = ACTIONS(224),
    [anon_sym_ATrequiresusages] = ACTIONS(222),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(222),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(222),
    [anon_sym_ATsmall] = ACTIONS(222),
    [anon_sym_ATtest] = ACTIONS(224),
    [anon_sym_ATtestWith] = ACTIONS(222),
    [anon_sym_ATtestdox] = ACTIONS(222),
    [anon_sym_ATticket] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(220),
    [sym_text] = ACTIONS(224),
    [sym__end] = ACTIONS(222),
  },
  [33] = {
    [sym_inline_tag] = STATE(35),
    [aux_sym_description_repeat1] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATapi] = ACTIONS(226),
    [anon_sym_ATfilesource] = ACTIONS(226),
    [anon_sym_ATignore] = ACTIONS(226),
    [anon_sym_ATcategory] = ACTIONS(226),
    [anon_sym_ATcopyright] = ACTIONS(226),
    [anon_sym_ATtodo] = ACTIONS(226),
    [anon_sym_ATexample] = ACTIONS(226),
    [anon_sym_ATlicense] = ACTIONS(226),
    [anon_sym_ATpackage] = ACTIONS(226),
    [anon_sym_ATsource] = ACTIONS(226),
    [anon_sym_ATsubpackage] = ACTIONS(226),
    [anon_sym_ATuses] = ACTIONS(226),
    [anon_sym_ATauthor] = ACTIONS(226),
    [anon_sym_ATglobal] = ACTIONS(226),
    [anon_sym_ATinternal] = ACTIONS(226),
    [anon_sym_ATlink] = ACTIONS(226),
    [anon_sym_ATmethod] = ACTIONS(226),
    [anon_sym_ATparam] = ACTIONS(226),
    [anon_sym_ATproperty] = ACTIONS(228),
    [anon_sym_ATproperty_DASHread] = ACTIONS(226),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(226),
    [anon_sym_ATreturn] = ACTIONS(226),
    [anon_sym_ATsee] = ACTIONS(226),
    [anon_sym_ATthrows] = ACTIONS(226),
    [anon_sym_ATvar] = ACTIONS(226),
    [anon_sym_ATdeprecated] = ACTIONS(226),
    [anon_sym_ATsince] = ACTIONS(226),
    [anon_sym_ATversion] = ACTIONS(226),
    [anon_sym_ATafter] = ACTIONS(228),
    [anon_sym_ATafterClass] = ACTIONS(226),
    [anon_sym_ATannotation] = ACTIONS(226),
    [anon_sym_ATbackupGlobals] = ACTIONS(226),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(226),
    [anon_sym_ATbefore] = ACTIONS(228),
    [anon_sym_ATbeforeClass] = ACTIONS(226),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(228),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(226),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(226),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(226),
    [anon_sym_ATcovers] = ACTIONS(228),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(228),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(226),
    [anon_sym_ATcoversNothing] = ACTIONS(226),
    [anon_sym_ATdataProvider] = ACTIONS(226),
    [anon_sym_ATdepends] = ACTIONS(228),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(226),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(226),
    [anon_sym_ATgroup] = ACTIONS(226),
    [anon_sym_ATlarge] = ACTIONS(226),
    [anon_sym_ATmedium] = ACTIONS(226),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(226),
    [anon_sym_ATrequires] = ACTIONS(228),
    [anon_sym_ATrequiresusages] = ACTIONS(226),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(226),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(226),
    [anon_sym_ATsmall] = ACTIONS(226),
    [anon_sym_ATtest] = ACTIONS(228),
    [anon_sym_ATtestWith] = ACTIONS(226),
    [anon_sym_ATtestdox] = ACTIONS(226),
    [anon_sym_ATticket] = ACTIONS(226),
    [sym_text] = ACTIONS(230),
    [sym__end] = ACTIONS(226),
  },
  [34] = {
    [aux_sym_union_type_repeat1] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(232),
    [anon_sym_ATapi] = ACTIONS(232),
    [anon_sym_ATfilesource] = ACTIONS(232),
    [anon_sym_ATignore] = ACTIONS(232),
    [anon_sym_ATcategory] = ACTIONS(232),
    [anon_sym_ATcopyright] = ACTIONS(232),
    [anon_sym_ATtodo] = ACTIONS(232),
    [anon_sym_ATexample] = ACTIONS(232),
    [anon_sym_ATlicense] = ACTIONS(232),
    [anon_sym_ATpackage] = ACTIONS(232),
    [anon_sym_ATsource] = ACTIONS(232),
    [anon_sym_ATsubpackage] = ACTIONS(232),
    [anon_sym_ATuses] = ACTIONS(232),
    [anon_sym_ATauthor] = ACTIONS(232),
    [anon_sym_ATglobal] = ACTIONS(232),
    [anon_sym_ATinternal] = ACTIONS(232),
    [anon_sym_ATlink] = ACTIONS(232),
    [anon_sym_ATmethod] = ACTIONS(232),
    [anon_sym_ATparam] = ACTIONS(232),
    [anon_sym_ATproperty] = ACTIONS(234),
    [anon_sym_ATproperty_DASHread] = ACTIONS(232),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(232),
    [anon_sym_ATreturn] = ACTIONS(232),
    [anon_sym_ATsee] = ACTIONS(232),
    [anon_sym_ATthrows] = ACTIONS(232),
    [anon_sym_ATvar] = ACTIONS(232),
    [anon_sym_ATdeprecated] = ACTIONS(232),
    [anon_sym_ATsince] = ACTIONS(232),
    [anon_sym_ATversion] = ACTIONS(232),
    [anon_sym_ATafter] = ACTIONS(234),
    [anon_sym_ATafterClass] = ACTIONS(232),
    [anon_sym_ATannotation] = ACTIONS(232),
    [anon_sym_ATbackupGlobals] = ACTIONS(232),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(232),
    [anon_sym_ATbefore] = ACTIONS(234),
    [anon_sym_ATbeforeClass] = ACTIONS(232),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(234),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(232),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(232),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(232),
    [anon_sym_ATcovers] = ACTIONS(234),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(234),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(232),
    [anon_sym_ATcoversNothing] = ACTIONS(232),
    [anon_sym_ATdataProvider] = ACTIONS(232),
    [anon_sym_ATdepends] = ACTIONS(234),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(232),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(232),
    [anon_sym_ATgroup] = ACTIONS(232),
    [anon_sym_ATlarge] = ACTIONS(232),
    [anon_sym_ATmedium] = ACTIONS(232),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(232),
    [anon_sym_ATrequires] = ACTIONS(234),
    [anon_sym_ATrequiresusages] = ACTIONS(232),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(232),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(232),
    [anon_sym_ATsmall] = ACTIONS(232),
    [anon_sym_ATtest] = ACTIONS(234),
    [anon_sym_ATtestWith] = ACTIONS(232),
    [anon_sym_ATtestdox] = ACTIONS(232),
    [anon_sym_ATticket] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_text] = ACTIONS(234),
    [sym__end] = ACTIONS(232),
  },
  [35] = {
    [sym_inline_tag] = STATE(35),
    [aux_sym_description_repeat1] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_ATapi] = ACTIONS(242),
    [anon_sym_ATfilesource] = ACTIONS(242),
    [anon_sym_ATignore] = ACTIONS(242),
    [anon_sym_ATcategory] = ACTIONS(242),
    [anon_sym_ATcopyright] = ACTIONS(242),
    [anon_sym_ATtodo] = ACTIONS(242),
    [anon_sym_ATexample] = ACTIONS(242),
    [anon_sym_ATlicense] = ACTIONS(242),
    [anon_sym_ATpackage] = ACTIONS(242),
    [anon_sym_ATsource] = ACTIONS(242),
    [anon_sym_ATsubpackage] = ACTIONS(242),
    [anon_sym_ATuses] = ACTIONS(242),
    [anon_sym_ATauthor] = ACTIONS(242),
    [anon_sym_ATglobal] = ACTIONS(242),
    [anon_sym_ATinternal] = ACTIONS(242),
    [anon_sym_ATlink] = ACTIONS(242),
    [anon_sym_ATmethod] = ACTIONS(242),
    [anon_sym_ATparam] = ACTIONS(242),
    [anon_sym_ATproperty] = ACTIONS(244),
    [anon_sym_ATproperty_DASHread] = ACTIONS(242),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(242),
    [anon_sym_ATreturn] = ACTIONS(242),
    [anon_sym_ATsee] = ACTIONS(242),
    [anon_sym_ATthrows] = ACTIONS(242),
    [anon_sym_ATvar] = ACTIONS(242),
    [anon_sym_ATdeprecated] = ACTIONS(242),
    [anon_sym_ATsince] = ACTIONS(242),
    [anon_sym_ATversion] = ACTIONS(242),
    [anon_sym_ATafter] = ACTIONS(244),
    [anon_sym_ATafterClass] = ACTIONS(242),
    [anon_sym_ATannotation] = ACTIONS(242),
    [anon_sym_ATbackupGlobals] = ACTIONS(242),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(242),
    [anon_sym_ATbefore] = ACTIONS(244),
    [anon_sym_ATbeforeClass] = ACTIONS(242),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(244),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(242),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(242),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(242),
    [anon_sym_ATcovers] = ACTIONS(244),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(244),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(242),
    [anon_sym_ATcoversNothing] = ACTIONS(242),
    [anon_sym_ATdataProvider] = ACTIONS(242),
    [anon_sym_ATdepends] = ACTIONS(244),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(242),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(242),
    [anon_sym_ATgroup] = ACTIONS(242),
    [anon_sym_ATlarge] = ACTIONS(242),
    [anon_sym_ATmedium] = ACTIONS(242),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(242),
    [anon_sym_ATrequires] = ACTIONS(244),
    [anon_sym_ATrequiresusages] = ACTIONS(242),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(242),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(242),
    [anon_sym_ATsmall] = ACTIONS(242),
    [anon_sym_ATtest] = ACTIONS(244),
    [anon_sym_ATtestWith] = ACTIONS(242),
    [anon_sym_ATtestdox] = ACTIONS(242),
    [anon_sym_ATticket] = ACTIONS(242),
    [sym_text] = ACTIONS(246),
    [sym__end] = ACTIONS(242),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(251), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(249), 54,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      anon_sym_PIPE,
      sym__end,
  [69] = 2,
    ACTIONS(255), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(253), 54,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      anon_sym_PIPE,
      sym__end,
  [138] = 2,
    ACTIONS(234), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(232), 54,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      anon_sym_PIPE,
      sym__end,
  [207] = 2,
    ACTIONS(177), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(175), 54,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_LPAREN_RPAREN,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [276] = 2,
    ACTIONS(259), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(257), 54,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      anon_sym_PIPE,
      sym__end,
  [345] = 2,
    ACTIONS(263), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(261), 54,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      anon_sym_PIPE,
      sym__end,
  [414] = 2,
    ACTIONS(267), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(265), 53,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [482] = 2,
    ACTIONS(271), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(269), 53,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [550] = 2,
    ACTIONS(275), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(273), 53,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [618] = 2,
    ACTIONS(279), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(277), 53,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [686] = 2,
    ACTIONS(283), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(281), 53,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [754] = 2,
    ACTIONS(287), 10,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
      sym_text,
    ACTIONS(285), 53,
      anon_sym_LBRACE,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [822] = 3,
    ACTIONS(291), 1,
      anon_sym_LT,
    ACTIONS(293), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(289), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [891] = 2,
    ACTIONS(169), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(167), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [957] = 2,
    ACTIONS(297), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(295), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1023] = 2,
    ACTIONS(301), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(299), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1089] = 2,
    ACTIONS(305), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(303), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1155] = 2,
    ACTIONS(309), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(307), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1221] = 2,
    ACTIONS(313), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(311), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1287] = 2,
    ACTIONS(317), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(315), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1353] = 2,
    ACTIONS(321), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(319), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1419] = 2,
    ACTIONS(325), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(323), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1485] = 2,
    ACTIONS(185), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(183), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1551] = 2,
    ACTIONS(329), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(327), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1617] = 2,
    ACTIONS(189), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(187), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1683] = 2,
    ACTIONS(333), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(331), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1749] = 2,
    ACTIONS(337), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(335), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1815] = 2,
    ACTIONS(341), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(339), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1881] = 2,
    ACTIONS(153), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(151), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [1947] = 2,
    ACTIONS(345), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(343), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [2013] = 2,
    ACTIONS(349), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(347), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [2079] = 2,
    ACTIONS(149), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(147), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [2145] = 2,
    ACTIONS(353), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(351), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [2211] = 2,
    ACTIONS(357), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(355), 52,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATcategory,
      anon_sym_ATcopyright,
      anon_sym_ATtodo,
      anon_sym_ATexample,
      anon_sym_ATlicense,
      anon_sym_ATpackage,
      anon_sym_ATsource,
      anon_sym_ATsubpackage,
      anon_sym_ATuses,
      anon_sym_ATauthor,
      anon_sym_ATglobal,
      anon_sym_ATinternal,
      anon_sym_ATlink,
      anon_sym_ATmethod,
      anon_sym_ATparam,
      anon_sym_ATproperty_DASHread,
      anon_sym_ATproperty_DASHwrite,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATthrows,
      anon_sym_ATvar,
      anon_sym_ATdeprecated,
      anon_sym_ATsince,
      anon_sym_ATversion,
      anon_sym_ATafterClass,
      anon_sym_ATannotation,
      anon_sym_ATbackupGlobals,
      anon_sym_ATbackupStaticAttributes,
      anon_sym_ATbeforeClass,
      anon_sym_ATcodeCoverageIgnore_STAR,
      anon_sym_ATcodeCoverageIgnoreEnd,
      anon_sym_ATcodeCoverageIgnoreStart,
      anon_sym_ATcoversDefaultClasstoshortenannotations,
      anon_sym_ATcoversNothing,
      anon_sym_ATdataProvider,
      anon_sym_ATdependsannotationtoexpressdependencies,
      anon_sym_ATdoesNotPerformAssertions,
      anon_sym_ATgroup,
      anon_sym_ATlarge,
      anon_sym_ATmedium,
      anon_sym_ATpreserveGlobalState,
      anon_sym_ATrequiresusages,
      anon_sym_ATrunInSeparateProcess,
      anon_sym_ATrunTestsInSeparateProcesses,
      anon_sym_ATsmall,
      anon_sym_ATtestWith,
      anon_sym_ATtestdox,
      anon_sym_ATticket,
      sym__end,
  [2277] = 18,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_list,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    ACTIONS(371), 1,
      anon_sym_DOLLAR,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_qualified_name,
    STATE(109), 1,
      sym_parameter,
    STATE(114), 1,
      sym__psalm_generic_array_types,
    STATE(115), 1,
      sym__psalm_list_array_types,
    STATE(121), 1,
      sym_variable_name,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(107), 2,
      sym__types,
      sym__phpdoc_array_types,
    STATE(132), 2,
      sym__type,
      sym_union_type,
    STATE(99), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2348] = 17,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_list,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    ACTIONS(371), 1,
      anon_sym_DOLLAR,
    STATE(95), 1,
      sym_qualified_name,
    STATE(114), 1,
      sym__psalm_generic_array_types,
    STATE(115), 1,
      sym__psalm_list_array_types,
    STATE(121), 1,
      sym_variable_name,
    STATE(122), 1,
      sym_parameter,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(107), 2,
      sym__types,
      sym__phpdoc_array_types,
    STATE(132), 2,
      sym__type,
      sym_union_type,
    STATE(99), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2416] = 16,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_list,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    ACTIONS(375), 1,
      anon_sym_DOLLAR,
    STATE(22), 1,
      sym_variable_name,
    STATE(95), 1,
      sym_qualified_name,
    STATE(114), 1,
      sym__psalm_generic_array_types,
    STATE(115), 1,
      sym__psalm_list_array_types,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(107), 2,
      sym__types,
      sym__phpdoc_array_types,
    STATE(130), 2,
      sym__type,
      sym_union_type,
    STATE(99), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2481] = 16,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_list,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    ACTIONS(377), 1,
      anon_sym_static,
    STATE(74), 1,
      sym_static,
    STATE(95), 1,
      sym_qualified_name,
    STATE(114), 1,
      sym__psalm_generic_array_types,
    STATE(115), 1,
      sym__psalm_list_array_types,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(107), 2,
      sym__types,
      sym__phpdoc_array_types,
    STATE(155), 2,
      sym__type,
      sym_union_type,
    STATE(99), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 11,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_false,
      anon_sym_null,
  [2545] = 14,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_list,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(114), 1,
      sym__psalm_generic_array_types,
    STATE(115), 1,
      sym__psalm_list_array_types,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(107), 2,
      sym__types,
      sym__phpdoc_array_types,
    STATE(162), 2,
      sym__type,
      sym_union_type,
    STATE(99), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2604] = 14,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_list,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(114), 1,
      sym__psalm_generic_array_types,
    STATE(115), 1,
      sym__psalm_list_array_types,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(107), 2,
      sym__types,
      sym__phpdoc_array_types,
    STATE(135), 2,
      sym__type,
      sym_union_type,
    STATE(99), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2663] = 14,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_list,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(114), 1,
      sym__psalm_generic_array_types,
    STATE(115), 1,
      sym__psalm_list_array_types,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(107), 2,
      sym__types,
      sym__phpdoc_array_types,
    STATE(126), 2,
      sym__type,
      sym_union_type,
    STATE(99), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2722] = 14,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_list,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(114), 1,
      sym__psalm_generic_array_types,
    STATE(115), 1,
      sym__psalm_list_array_types,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(107), 2,
      sym__types,
      sym__phpdoc_array_types,
    STATE(133), 2,
      sym__type,
      sym_union_type,
    STATE(99), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2781] = 14,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      sym_name,
    ACTIONS(381), 1,
      anon_sym_list,
    ACTIONS(383), 1,
      anon_sym_QMARK,
    STATE(14), 1,
      sym_qualified_name,
    STATE(36), 1,
      sym__psalm_generic_array_types,
    STATE(37), 1,
      sym__psalm_list_array_types,
    STATE(158), 1,
      sym_namespace_name,
    STATE(175), 1,
      sym_namespace_name_as_prefix,
    STATE(17), 2,
      sym__type,
      sym_union_type,
    STATE(32), 2,
      sym__types,
      sym__phpdoc_array_types,
    STATE(8), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(385), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2840] = 14,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      sym_name,
    ACTIONS(381), 1,
      anon_sym_list,
    ACTIONS(383), 1,
      anon_sym_QMARK,
    STATE(14), 1,
      sym_qualified_name,
    STATE(36), 1,
      sym__psalm_generic_array_types,
    STATE(37), 1,
      sym__psalm_list_array_types,
    STATE(158), 1,
      sym_namespace_name,
    STATE(175), 1,
      sym_namespace_name_as_prefix,
    STATE(16), 2,
      sym__type,
      sym_union_type,
    STATE(32), 2,
      sym__types,
      sym__phpdoc_array_types,
    STATE(8), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(385), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2899] = 13,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(361), 1,
      anon_sym_list,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(114), 1,
      sym__psalm_generic_array_types,
    STATE(115), 1,
      sym__psalm_list_array_types,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(113), 2,
      sym__types,
      sym__phpdoc_array_types,
    STATE(99), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [2954] = 13,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      sym_name,
    ACTIONS(381), 1,
      anon_sym_list,
    ACTIONS(383), 1,
      anon_sym_QMARK,
    STATE(14), 1,
      sym_qualified_name,
    STATE(36), 1,
      sym__psalm_generic_array_types,
    STATE(37), 1,
      sym__psalm_list_array_types,
    STATE(158), 1,
      sym_namespace_name,
    STATE(175), 1,
      sym_namespace_name_as_prefix,
    STATE(38), 2,
      sym__types,
      sym__phpdoc_array_types,
    STATE(8), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(385), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3009] = 9,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(172), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3051] = 9,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(174), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3093] = 9,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(127), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3135] = 9,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(164), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3177] = 9,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(124), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3219] = 9,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(367), 1,
      anon_sym_QMARK,
    STATE(95), 1,
      sym_qualified_name,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(152), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3261] = 8,
    ACTIONS(359), 1,
      sym_name,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    STATE(95), 1,
      sym_qualified_name,
    STATE(157), 1,
      sym_namespace_name_as_prefix,
    STATE(158), 1,
      sym_namespace_name,
    STATE(96), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(369), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3298] = 8,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(379), 1,
      sym_name,
    STATE(14), 1,
      sym_qualified_name,
    STATE(158), 1,
      sym_namespace_name,
    STATE(175), 1,
      sym_namespace_name_as_prefix,
    STATE(27), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(385), 12,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3335] = 4,
    ACTIONS(387), 1,
      sym_name,
    ACTIONS(392), 2,
      anon_sym_BSLASH,
      anon_sym_QMARK,
    ACTIONS(139), 3,
      anon_sym_LT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
    ACTIONS(390), 14,
      anon_sym_list,
      aux_sym_namespace_name_as_prefix_token1,
      anon_sym_array,
      aux_sym_primitive_type_token1,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_static,
      anon_sym_false,
      anon_sym_null,
  [3364] = 3,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    STATE(134), 1,
      aux_sym_namespace_name_repeat1,
    ACTIONS(112), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3380] = 1,
    ACTIONS(175), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3390] = 7,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(394), 1,
      sym_name,
    ACTIONS(396), 1,
      sym_uri,
    STATE(10), 1,
      sym_qualified_name,
    STATE(158), 1,
      sym_namespace_name,
    STATE(170), 1,
      sym_namespace_name_as_prefix,
  [3412] = 7,
    ACTIONS(363), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(394), 1,
      sym_name,
    ACTIONS(398), 1,
      sym_uri,
    STATE(118), 1,
      sym_qualified_name,
    STATE(158), 1,
      sym_namespace_name,
    STATE(176), 1,
      sym_namespace_name_as_prefix,
  [3434] = 1,
    ACTIONS(112), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3444] = 1,
    ACTIONS(201), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3454] = 5,
    ACTIONS(400), 1,
      anon_sym_ATinheritDoc,
    ACTIONS(402), 1,
      anon_sym_ATinternal,
    ACTIONS(404), 1,
      anon_sym_ATlink,
    ACTIONS(406), 1,
      anon_sym_ATsee,
    STATE(168), 3,
      sym__internal_inline_tag,
      sym__link_inline_tag,
      sym__see_inline_tag,
  [3472] = 1,
    ACTIONS(139), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3482] = 4,
    ACTIONS(408), 1,
      anon_sym_LT,
    ACTIONS(410), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(104), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(119), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3497] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      sym_text,
    STATE(51), 1,
      sym_description,
    STATE(33), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3511] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      sym_text,
    STATE(52), 1,
      sym_description,
    STATE(33), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3525] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      sym_text,
    STATE(68), 1,
      sym_description,
    STATE(33), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3539] = 3,
    ACTIONS(414), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(103), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(209), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3551] = 3,
    ACTIONS(417), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(103), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(195), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3563] = 3,
    ACTIONS(419), 1,
      anon_sym_PIPE,
    STATE(106), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(216), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3574] = 3,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    STATE(106), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(232), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3585] = 3,
    ACTIONS(419), 1,
      anon_sym_PIPE,
    STATE(105), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(222), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3596] = 2,
    ACTIONS(426), 1,
      anon_sym_EQ,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3604] = 3,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_parameters_repeat1,
  [3614] = 2,
    ACTIONS(177), 1,
      sym_text,
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN_RPAREN,
  [3622] = 3,
    ACTIONS(432), 1,
      sym_name,
    ACTIONS(434), 1,
      anon_sym_BSLASH,
    STATE(153), 1,
      sym_namespace_name,
  [3632] = 1,
    ACTIONS(277), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [3638] = 1,
    ACTIONS(232), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3644] = 1,
    ACTIONS(249), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3650] = 1,
    ACTIONS(253), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3656] = 3,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_parameters_repeat1,
  [3666] = 1,
    ACTIONS(257), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3672] = 3,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(445), 1,
      sym_text,
  [3682] = 3,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_parameters_repeat1,
  [3692] = 1,
    ACTIONS(261), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3698] = 2,
    ACTIONS(451), 1,
      anon_sym_EQ,
    ACTIONS(449), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3706] = 1,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3711] = 1,
    ACTIONS(453), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3716] = 2,
    ACTIONS(455), 1,
      anon_sym_GT,
    ACTIONS(457), 1,
      anon_sym_COMMA,
  [3723] = 2,
    ACTIONS(459), 1,
      sym_name,
    STATE(153), 1,
      sym_namespace_name,
  [3730] = 2,
    ACTIONS(375), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_variable_name,
  [3737] = 2,
    ACTIONS(462), 1,
      anon_sym_GT,
    ACTIONS(464), 1,
      anon_sym_COMMA,
  [3744] = 2,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_parameters,
  [3751] = 2,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    STATE(134), 1,
      aux_sym_namespace_name_repeat1,
  [3758] = 2,
    ACTIONS(375), 1,
      anon_sym_DOLLAR,
    STATE(19), 1,
      sym_variable_name,
  [3765] = 2,
    ACTIONS(468), 1,
      sym_name,
    STATE(163), 1,
      sym_namespace_name,
  [3772] = 2,
    ACTIONS(371), 1,
      anon_sym_DOLLAR,
    STATE(108), 1,
      sym_variable_name,
  [3779] = 2,
    ACTIONS(375), 1,
      anon_sym_DOLLAR,
    STATE(12), 1,
      sym_variable_name,
  [3786] = 2,
    ACTIONS(471), 1,
      anon_sym_BSLASH,
    STATE(140), 1,
      aux_sym_namespace_name_repeat1,
  [3793] = 2,
    ACTIONS(375), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym_variable_name,
  [3800] = 2,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(474), 1,
      sym_text,
  [3807] = 2,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_parameters,
  [3814] = 1,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3819] = 2,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    ACTIONS(480), 1,
      sym_text,
  [3826] = 2,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    STATE(140), 1,
      aux_sym_namespace_name_repeat1,
  [3833] = 2,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    ACTIONS(487), 1,
      sym_text,
  [3840] = 1,
    ACTIONS(489), 1,
      sym_default_value,
  [3844] = 1,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
  [3848] = 1,
    ACTIONS(493), 1,
      sym_email_address,
  [3852] = 1,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
  [3856] = 1,
    ACTIONS(497), 1,
      sym_default_value,
  [3860] = 1,
    ACTIONS(499), 1,
      anon_sym_BSLASH,
  [3864] = 1,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
  [3868] = 1,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
  [3872] = 1,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
  [3876] = 1,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
  [3880] = 1,
    ACTIONS(509), 1,
      anon_sym_GT,
  [3884] = 1,
    ACTIONS(511), 1,
      anon_sym_BSLASH,
  [3888] = 1,
    ACTIONS(513), 1,
      sym_name,
  [3892] = 1,
    ACTIONS(515), 1,
      sym_name,
  [3896] = 1,
    ACTIONS(517), 1,
      sym_name,
  [3900] = 1,
    ACTIONS(519), 1,
      sym_name,
  [3904] = 1,
    ACTIONS(521), 1,
      anon_sym_BSLASH,
  [3908] = 1,
    ACTIONS(523), 1,
      sym_name,
  [3912] = 1,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
  [3916] = 1,
    ACTIONS(527), 1,
      sym_name,
  [3920] = 1,
    ACTIONS(529), 1,
      sym_name,
  [3924] = 1,
    ACTIONS(531), 1,
      anon_sym_BSLASH,
  [3928] = 1,
    ACTIONS(462), 1,
      anon_sym_GT,
  [3932] = 1,
    ACTIONS(533), 1,
      anon_sym_LT,
  [3936] = 1,
    ACTIONS(535), 1,
      sym_uri,
  [3940] = 1,
    ACTIONS(537), 1,
      sym_text,
  [3944] = 1,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
  [3948] = 1,
    ACTIONS(541), 1,
      sym_name,
  [3952] = 1,
    ACTIONS(543), 1,
      sym_name,
  [3956] = 1,
    ACTIONS(545), 1,
      sym_name,
  [3960] = 1,
    ACTIONS(455), 1,
      anon_sym_GT,
  [3964] = 1,
    ACTIONS(547), 1,
      anon_sym_GT,
  [3968] = 1,
    ACTIONS(549), 1,
      anon_sym_GT,
  [3972] = 1,
    ACTIONS(551), 1,
      sym_name,
  [3976] = 1,
    ACTIONS(553), 1,
      sym_name,
  [3980] = 1,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
  [3984] = 1,
    ACTIONS(557), 1,
      sym_uri,
  [3988] = 1,
    ACTIONS(559), 1,
      sym_author_name,
  [3992] = 1,
    ACTIONS(561), 1,
      anon_sym_LT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(36)] = 0,
  [SMALL_STATE(37)] = 69,
  [SMALL_STATE(38)] = 138,
  [SMALL_STATE(39)] = 207,
  [SMALL_STATE(40)] = 276,
  [SMALL_STATE(41)] = 345,
  [SMALL_STATE(42)] = 414,
  [SMALL_STATE(43)] = 482,
  [SMALL_STATE(44)] = 550,
  [SMALL_STATE(45)] = 618,
  [SMALL_STATE(46)] = 686,
  [SMALL_STATE(47)] = 754,
  [SMALL_STATE(48)] = 822,
  [SMALL_STATE(49)] = 891,
  [SMALL_STATE(50)] = 957,
  [SMALL_STATE(51)] = 1023,
  [SMALL_STATE(52)] = 1089,
  [SMALL_STATE(53)] = 1155,
  [SMALL_STATE(54)] = 1221,
  [SMALL_STATE(55)] = 1287,
  [SMALL_STATE(56)] = 1353,
  [SMALL_STATE(57)] = 1419,
  [SMALL_STATE(58)] = 1485,
  [SMALL_STATE(59)] = 1551,
  [SMALL_STATE(60)] = 1617,
  [SMALL_STATE(61)] = 1683,
  [SMALL_STATE(62)] = 1749,
  [SMALL_STATE(63)] = 1815,
  [SMALL_STATE(64)] = 1881,
  [SMALL_STATE(65)] = 1947,
  [SMALL_STATE(66)] = 2013,
  [SMALL_STATE(67)] = 2079,
  [SMALL_STATE(68)] = 2145,
  [SMALL_STATE(69)] = 2211,
  [SMALL_STATE(70)] = 2277,
  [SMALL_STATE(71)] = 2348,
  [SMALL_STATE(72)] = 2416,
  [SMALL_STATE(73)] = 2481,
  [SMALL_STATE(74)] = 2545,
  [SMALL_STATE(75)] = 2604,
  [SMALL_STATE(76)] = 2663,
  [SMALL_STATE(77)] = 2722,
  [SMALL_STATE(78)] = 2781,
  [SMALL_STATE(79)] = 2840,
  [SMALL_STATE(80)] = 2899,
  [SMALL_STATE(81)] = 2954,
  [SMALL_STATE(82)] = 3009,
  [SMALL_STATE(83)] = 3051,
  [SMALL_STATE(84)] = 3093,
  [SMALL_STATE(85)] = 3135,
  [SMALL_STATE(86)] = 3177,
  [SMALL_STATE(87)] = 3219,
  [SMALL_STATE(88)] = 3261,
  [SMALL_STATE(89)] = 3298,
  [SMALL_STATE(90)] = 3335,
  [SMALL_STATE(91)] = 3364,
  [SMALL_STATE(92)] = 3380,
  [SMALL_STATE(93)] = 3390,
  [SMALL_STATE(94)] = 3412,
  [SMALL_STATE(95)] = 3434,
  [SMALL_STATE(96)] = 3444,
  [SMALL_STATE(97)] = 3454,
  [SMALL_STATE(98)] = 3472,
  [SMALL_STATE(99)] = 3482,
  [SMALL_STATE(100)] = 3497,
  [SMALL_STATE(101)] = 3511,
  [SMALL_STATE(102)] = 3525,
  [SMALL_STATE(103)] = 3539,
  [SMALL_STATE(104)] = 3551,
  [SMALL_STATE(105)] = 3563,
  [SMALL_STATE(106)] = 3574,
  [SMALL_STATE(107)] = 3585,
  [SMALL_STATE(108)] = 3596,
  [SMALL_STATE(109)] = 3604,
  [SMALL_STATE(110)] = 3614,
  [SMALL_STATE(111)] = 3622,
  [SMALL_STATE(112)] = 3632,
  [SMALL_STATE(113)] = 3638,
  [SMALL_STATE(114)] = 3644,
  [SMALL_STATE(115)] = 3650,
  [SMALL_STATE(116)] = 3656,
  [SMALL_STATE(117)] = 3666,
  [SMALL_STATE(118)] = 3672,
  [SMALL_STATE(119)] = 3682,
  [SMALL_STATE(120)] = 3692,
  [SMALL_STATE(121)] = 3698,
  [SMALL_STATE(122)] = 3706,
  [SMALL_STATE(123)] = 3711,
  [SMALL_STATE(124)] = 3716,
  [SMALL_STATE(125)] = 3723,
  [SMALL_STATE(126)] = 3730,
  [SMALL_STATE(127)] = 3737,
  [SMALL_STATE(128)] = 3744,
  [SMALL_STATE(129)] = 3751,
  [SMALL_STATE(130)] = 3758,
  [SMALL_STATE(131)] = 3765,
  [SMALL_STATE(132)] = 3772,
  [SMALL_STATE(133)] = 3779,
  [SMALL_STATE(134)] = 3786,
  [SMALL_STATE(135)] = 3793,
  [SMALL_STATE(136)] = 3800,
  [SMALL_STATE(137)] = 3807,
  [SMALL_STATE(138)] = 3814,
  [SMALL_STATE(139)] = 3819,
  [SMALL_STATE(140)] = 3826,
  [SMALL_STATE(141)] = 3833,
  [SMALL_STATE(142)] = 3840,
  [SMALL_STATE(143)] = 3844,
  [SMALL_STATE(144)] = 3848,
  [SMALL_STATE(145)] = 3852,
  [SMALL_STATE(146)] = 3856,
  [SMALL_STATE(147)] = 3860,
  [SMALL_STATE(148)] = 3864,
  [SMALL_STATE(149)] = 3868,
  [SMALL_STATE(150)] = 3872,
  [SMALL_STATE(151)] = 3876,
  [SMALL_STATE(152)] = 3880,
  [SMALL_STATE(153)] = 3884,
  [SMALL_STATE(154)] = 3888,
  [SMALL_STATE(155)] = 3892,
  [SMALL_STATE(156)] = 3896,
  [SMALL_STATE(157)] = 3900,
  [SMALL_STATE(158)] = 3904,
  [SMALL_STATE(159)] = 3908,
  [SMALL_STATE(160)] = 3912,
  [SMALL_STATE(161)] = 3916,
  [SMALL_STATE(162)] = 3920,
  [SMALL_STATE(163)] = 3924,
  [SMALL_STATE(164)] = 3928,
  [SMALL_STATE(165)] = 3932,
  [SMALL_STATE(166)] = 3936,
  [SMALL_STATE(167)] = 3940,
  [SMALL_STATE(168)] = 3944,
  [SMALL_STATE(169)] = 3948,
  [SMALL_STATE(170)] = 3952,
  [SMALL_STATE(171)] = 3956,
  [SMALL_STATE(172)] = 3960,
  [SMALL_STATE(173)] = 3964,
  [SMALL_STATE(174)] = 3968,
  [SMALL_STATE(175)] = 3972,
  [SMALL_STATE(176)] = 3976,
  [SMALL_STATE(177)] = 3980,
  [SMALL_STATE(178)] = 3984,
  [SMALL_STATE(179)] = 3988,
  [SMALL_STATE(180)] = 3992,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(101),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(178),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type, 1),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 1), SHIFT(161),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__types, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpunit_tag, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpunit_tag, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag_with_optional_description, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag_with_optional_description, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpdoc_array_types, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpdoc_array_types, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(30),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(81),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(97),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(35),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 1, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__types, 1, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 1, .production_id = 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__types, 1, .production_id = 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__psalm_generic_array_types, 6, .production_id = 7),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__psalm_generic_array_types, 6, .production_id = 7),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__psalm_list_array_types, 4, .production_id = 6),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__psalm_list_array_types, 4, .production_id = 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__currently_incomplete_tags, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__currently_incomplete_tags, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_tag, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__global_tag, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__internal_tag, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__internal_tag, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag_with_optional_description, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag_with_optional_description, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 6),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 6),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 5),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 5),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpunit_tag, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpunit_tag, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag_with_required_description, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag_with_required_description, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primitive_type, 1), REDUCE(sym_static, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(103),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(80),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(71),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 1), SHIFT(129),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2), SHIFT(129),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 2), SHIFT(161),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_inline_tag, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2), SHIFT_REPEAT(161),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 4, .production_id = 5),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_inline_tag, 3, .production_id = 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__internal_inline_tag, 2, .production_id = 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_inline_tag, 3, .production_id = 4),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 4),
  [525] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_phpdoc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_name,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
