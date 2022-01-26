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

#define LANGUAGE_VERSION 12
#define STATE_COUNT 231
#define LARGE_STATE_COUNT 58
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 0
#define TOKEN_COUNT 106
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_name = 1,
  sym__begin = 2,
  anon_sym_LBRACE = 3,
  anon_sym_ATinheritdoc = 4,
  anon_sym_ATinheritDoc = 5,
  anon_sym_RBRACE = 6,
  anon_sym_ATapi = 7,
  anon_sym_ATfilesource = 8,
  anon_sym_ATignore = 9,
  anon_sym_ATinternal = 10,
  anon_sym_ATcategory = 11,
  anon_sym_ATcopyright = 12,
  anon_sym_ATtodo = 13,
  anon_sym_ATexample = 14,
  anon_sym_ATlicense = 15,
  anon_sym_ATpackage = 16,
  anon_sym_ATsource = 17,
  anon_sym_ATsubpackage = 18,
  anon_sym_ATuses = 19,
  anon_sym_ATauthor = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_ATglobal = 23,
  anon_sym_ATlink = 24,
  anon_sym_ATmethod = 25,
  anon_sym_ATparam = 26,
  anon_sym_ATproperty = 27,
  anon_sym_ATproperty_DASHread = 28,
  anon_sym_ATproperty_DASHwrite = 29,
  anon_sym_ATreturn = 30,
  anon_sym_ATsee = 31,
  anon_sym_LPAREN_RPAREN = 32,
  anon_sym_ATthrows = 33,
  anon_sym_ATvar = 34,
  anon_sym_ATdeprecated = 35,
  anon_sym_ATsince = 36,
  anon_sym_ATversion = 37,
  anon_sym_ATafter = 38,
  anon_sym_ATafterClass = 39,
  anon_sym_ATannotation = 40,
  anon_sym_ATbackupGlobals = 41,
  anon_sym_ATbackupStaticAttributes = 42,
  anon_sym_ATbefore = 43,
  anon_sym_ATbeforeClass = 44,
  anon_sym_ATcodeCoverageIgnore = 45,
  anon_sym_ATcodeCoverageIgnore_STAR = 46,
  anon_sym_ATcodeCoverageIgnoreEnd = 47,
  anon_sym_ATcodeCoverageIgnoreStart = 48,
  anon_sym_ATcovers = 49,
  anon_sym_ATcoversDefaultClass = 50,
  anon_sym_ATcoversDefaultClasstoshortenannotations = 51,
  anon_sym_ATcoversNothing = 52,
  anon_sym_ATdataProvider = 53,
  anon_sym_ATdepends = 54,
  anon_sym_ATdependsannotationtoexpressdependencies = 55,
  anon_sym_ATdoesNotPerformAssertions = 56,
  anon_sym_ATgroup = 57,
  anon_sym_ATlarge = 58,
  anon_sym_ATmedium = 59,
  anon_sym_ATpreserveGlobalState = 60,
  anon_sym_ATrequires = 61,
  anon_sym_ATrequiresusages = 62,
  anon_sym_ATrunInSeparateProcess = 63,
  anon_sym_ATrunTestsInSeparateProcesses = 64,
  anon_sym_ATsmall = 65,
  anon_sym_ATtest = 66,
  anon_sym_ATtestWith = 67,
  anon_sym_ATtestdox = 68,
  anon_sym_ATticket = 69,
  anon_sym_LBRACK_RBRACK = 70,
  anon_sym_COMMA = 71,
  anon_sym_list = 72,
  anon_sym_BSLASH = 73,
  aux_sym_namespace_name_as_prefix_token1 = 74,
  anon_sym_QMARK = 75,
  anon_sym_array = 76,
  anon_sym_callable = 77,
  anon_sym_iterable = 78,
  anon_sym_bool = 79,
  anon_sym_float = 80,
  anon_sym_int = 81,
  anon_sym_string = 82,
  anon_sym_void = 83,
  anon_sym_mixed = 84,
  anon_sym_static = 85,
  anon_sym_false = 86,
  anon_sym_null = 87,
  anon_sym_PIPE = 88,
  anon_sym_DOLLAR = 89,
  sym_author_name = 90,
  sym_email_address = 91,
  aux_sym_version_token1 = 92,
  aux_sym_version_token2 = 93,
  anon_sym_ATpackage_version_AT = 94,
  sym__version_vector = 95,
  sym_uri = 96,
  anon_sym_LPAREN = 97,
  anon_sym_RPAREN = 98,
  anon_sym_EQ = 99,
  sym_default_value = 100,
  sym__end = 101,
  sym_text = 102,
  sym__text_after_type = 103,
  sym__text_in_inline_tag = 104,
  sym__text_not_version = 105,
  sym_document = 106,
  sym_description = 107,
  sym__description_after_type = 108,
  sym__description_not_version = 109,
  sym__description_in_inline_tag = 110,
  sym__description_in_inline_tag_with_nesting = 111,
  sym_tag = 112,
  sym_inline_tag = 113,
  sym__tag_without_description = 114,
  sym__tag_with_optional_description = 115,
  sym__tag_with_required_description = 116,
  sym__tag_with_incomplete_implementation = 117,
  sym__author_tag = 118,
  sym__global_tag = 119,
  sym__inline_internal_tag = 120,
  sym__link_tag = 121,
  sym__inline_link_tag = 122,
  sym__method_tag = 123,
  sym__param_tag = 124,
  sym__property_tag = 125,
  sym__return_tag = 126,
  sym__see_tag = 127,
  sym__inline_see_tag = 128,
  sym__throws_tag = 129,
  sym__var_tag = 130,
  sym__deprecated_tag = 131,
  sym__since_tag = 132,
  sym__version_tag = 133,
  sym__phpunit_tag = 134,
  sym__type = 135,
  sym__types = 136,
  sym__regular_types = 137,
  sym__phpdoc_array_types = 138,
  sym__psalm_generic_array_types = 139,
  sym__psalm_list_array_types = 140,
  sym_named_type = 141,
  sym_namespace_name = 142,
  sym_namespace_name_as_prefix = 143,
  sym_optional_type = 144,
  sym_primitive_type = 145,
  sym_qualified_name = 146,
  sym_union_type = 147,
  sym_variable_name = 148,
  sym_version = 149,
  sym_parameters = 150,
  sym_parameter = 151,
  sym_static = 152,
  aux_sym_document_repeat1 = 153,
  aux_sym_description_repeat1 = 154,
  aux_sym__description_after_type_repeat1 = 155,
  aux_sym__description_not_version_repeat1 = 156,
  aux_sym__description_in_inline_tag_repeat1 = 157,
  aux_sym__description_in_inline_tag_with_nesting_repeat1 = 158,
  aux_sym__phpdoc_array_types_repeat1 = 159,
  aux_sym_namespace_name_repeat1 = 160,
  aux_sym_union_type_repeat1 = 161,
  aux_sym_parameters_repeat1 = 162,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [sym__begin] = "_begin",
  [anon_sym_LBRACE] = "{",
  [anon_sym_ATinheritdoc] = "tag_name",
  [anon_sym_ATinheritDoc] = "tag_name",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATapi] = "tag_name",
  [anon_sym_ATfilesource] = "tag_name",
  [anon_sym_ATignore] = "tag_name",
  [anon_sym_ATinternal] = "tag_name",
  [anon_sym_ATcategory] = "tag_name",
  [anon_sym_ATcopyright] = "tag_name",
  [anon_sym_ATtodo] = "tag_name",
  [anon_sym_ATexample] = "tag_name",
  [anon_sym_ATlicense] = "tag_name",
  [anon_sym_ATpackage] = "tag_name",
  [anon_sym_ATsource] = "tag_name",
  [anon_sym_ATsubpackage] = "tag_name",
  [anon_sym_ATuses] = "tag_name",
  [anon_sym_ATauthor] = "tag_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_ATglobal] = "tag_name",
  [anon_sym_ATlink] = "tag_name",
  [anon_sym_ATmethod] = "tag_name",
  [anon_sym_ATparam] = "tag_name",
  [anon_sym_ATproperty] = "tag_name",
  [anon_sym_ATproperty_DASHread] = "tag_name",
  [anon_sym_ATproperty_DASHwrite] = "tag_name",
  [anon_sym_ATreturn] = "tag_name",
  [anon_sym_ATsee] = "tag_name",
  [anon_sym_LPAREN_RPAREN] = "fqsen",
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
  [anon_sym_callable] = "callable",
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
  [aux_sym_version_token1] = "version_token1",
  [aux_sym_version_token2] = "version_token2",
  [anon_sym_ATpackage_version_AT] = "@package_version@",
  [sym__version_vector] = "_version_vector",
  [sym_uri] = "uri",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_default_value] = "default_value",
  [sym__end] = "_end",
  [sym_text] = "text",
  [sym__text_after_type] = "text",
  [sym__text_in_inline_tag] = "text",
  [sym__text_not_version] = "text",
  [sym_document] = "document",
  [sym_description] = "description",
  [sym__description_after_type] = "_description_after_type",
  [sym__description_not_version] = "_description_not_version",
  [sym__description_in_inline_tag] = "_description_in_inline_tag",
  [sym__description_in_inline_tag_with_nesting] = "_description_in_inline_tag_with_nesting",
  [sym_tag] = "tag",
  [sym_inline_tag] = "inline_tag",
  [sym__tag_without_description] = "_tag_without_description",
  [sym__tag_with_optional_description] = "_tag_with_optional_description",
  [sym__tag_with_required_description] = "_tag_with_required_description",
  [sym__tag_with_incomplete_implementation] = "_tag_with_incomplete_implementation",
  [sym__author_tag] = "_author_tag",
  [sym__global_tag] = "_global_tag",
  [sym__inline_internal_tag] = "_inline_internal_tag",
  [sym__link_tag] = "_link_tag",
  [sym__inline_link_tag] = "_inline_link_tag",
  [sym__method_tag] = "_method_tag",
  [sym__param_tag] = "_param_tag",
  [sym__property_tag] = "_property_tag",
  [sym__return_tag] = "_return_tag",
  [sym__see_tag] = "_see_tag",
  [sym__inline_see_tag] = "_inline_see_tag",
  [sym__throws_tag] = "_throws_tag",
  [sym__var_tag] = "_var_tag",
  [sym__deprecated_tag] = "_deprecated_tag",
  [sym__since_tag] = "_since_tag",
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
  [sym_version] = "version",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_static] = "static",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym__description_after_type_repeat1] = "_description_after_type_repeat1",
  [aux_sym__description_not_version_repeat1] = "_description_not_version_repeat1",
  [aux_sym__description_in_inline_tag_repeat1] = "_description_in_inline_tag_repeat1",
  [aux_sym__description_in_inline_tag_with_nesting_repeat1] = "_description_in_inline_tag_with_nesting_repeat1",
  [aux_sym__phpdoc_array_types_repeat1] = "_phpdoc_array_types_repeat1",
  [aux_sym_namespace_name_repeat1] = "namespace_name_repeat1",
  [aux_sym_union_type_repeat1] = "union_type_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [sym__begin] = sym__begin,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_ATinheritdoc] = anon_sym_ATinheritdoc,
  [anon_sym_ATinheritDoc] = anon_sym_ATinheritdoc,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_ATapi] = anon_sym_ATinheritdoc,
  [anon_sym_ATfilesource] = anon_sym_ATinheritdoc,
  [anon_sym_ATignore] = anon_sym_ATinheritdoc,
  [anon_sym_ATinternal] = anon_sym_ATinheritdoc,
  [anon_sym_ATcategory] = anon_sym_ATinheritdoc,
  [anon_sym_ATcopyright] = anon_sym_ATinheritdoc,
  [anon_sym_ATtodo] = anon_sym_ATinheritdoc,
  [anon_sym_ATexample] = anon_sym_ATinheritdoc,
  [anon_sym_ATlicense] = anon_sym_ATinheritdoc,
  [anon_sym_ATpackage] = anon_sym_ATinheritdoc,
  [anon_sym_ATsource] = anon_sym_ATinheritdoc,
  [anon_sym_ATsubpackage] = anon_sym_ATinheritdoc,
  [anon_sym_ATuses] = anon_sym_ATinheritdoc,
  [anon_sym_ATauthor] = anon_sym_ATinheritdoc,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_ATglobal] = anon_sym_ATinheritdoc,
  [anon_sym_ATlink] = anon_sym_ATinheritdoc,
  [anon_sym_ATmethod] = anon_sym_ATinheritdoc,
  [anon_sym_ATparam] = anon_sym_ATinheritdoc,
  [anon_sym_ATproperty] = anon_sym_ATinheritdoc,
  [anon_sym_ATproperty_DASHread] = anon_sym_ATinheritdoc,
  [anon_sym_ATproperty_DASHwrite] = anon_sym_ATinheritdoc,
  [anon_sym_ATreturn] = anon_sym_ATinheritdoc,
  [anon_sym_ATsee] = anon_sym_ATinheritdoc,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_ATthrows] = anon_sym_ATinheritdoc,
  [anon_sym_ATvar] = anon_sym_ATinheritdoc,
  [anon_sym_ATdeprecated] = anon_sym_ATinheritdoc,
  [anon_sym_ATsince] = anon_sym_ATinheritdoc,
  [anon_sym_ATversion] = anon_sym_ATinheritdoc,
  [anon_sym_ATafter] = anon_sym_ATinheritdoc,
  [anon_sym_ATafterClass] = anon_sym_ATinheritdoc,
  [anon_sym_ATannotation] = anon_sym_ATinheritdoc,
  [anon_sym_ATbackupGlobals] = anon_sym_ATinheritdoc,
  [anon_sym_ATbackupStaticAttributes] = anon_sym_ATinheritdoc,
  [anon_sym_ATbefore] = anon_sym_ATinheritdoc,
  [anon_sym_ATbeforeClass] = anon_sym_ATinheritdoc,
  [anon_sym_ATcodeCoverageIgnore] = anon_sym_ATinheritdoc,
  [anon_sym_ATcodeCoverageIgnore_STAR] = anon_sym_ATinheritdoc,
  [anon_sym_ATcodeCoverageIgnoreEnd] = anon_sym_ATinheritdoc,
  [anon_sym_ATcodeCoverageIgnoreStart] = anon_sym_ATinheritdoc,
  [anon_sym_ATcovers] = anon_sym_ATinheritdoc,
  [anon_sym_ATcoversDefaultClass] = anon_sym_ATinheritdoc,
  [anon_sym_ATcoversDefaultClasstoshortenannotations] = anon_sym_ATinheritdoc,
  [anon_sym_ATcoversNothing] = anon_sym_ATinheritdoc,
  [anon_sym_ATdataProvider] = anon_sym_ATinheritdoc,
  [anon_sym_ATdepends] = anon_sym_ATinheritdoc,
  [anon_sym_ATdependsannotationtoexpressdependencies] = anon_sym_ATinheritdoc,
  [anon_sym_ATdoesNotPerformAssertions] = anon_sym_ATinheritdoc,
  [anon_sym_ATgroup] = anon_sym_ATinheritdoc,
  [anon_sym_ATlarge] = anon_sym_ATinheritdoc,
  [anon_sym_ATmedium] = anon_sym_ATinheritdoc,
  [anon_sym_ATpreserveGlobalState] = anon_sym_ATinheritdoc,
  [anon_sym_ATrequires] = anon_sym_ATinheritdoc,
  [anon_sym_ATrequiresusages] = anon_sym_ATinheritdoc,
  [anon_sym_ATrunInSeparateProcess] = anon_sym_ATinheritdoc,
  [anon_sym_ATrunTestsInSeparateProcesses] = anon_sym_ATinheritdoc,
  [anon_sym_ATsmall] = anon_sym_ATinheritdoc,
  [anon_sym_ATtest] = anon_sym_ATinheritdoc,
  [anon_sym_ATtestWith] = anon_sym_ATinheritdoc,
  [anon_sym_ATtestdox] = anon_sym_ATinheritdoc,
  [anon_sym_ATticket] = anon_sym_ATinheritdoc,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_list] = sym_primitive_type,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_namespace_name_as_prefix_token1] = aux_sym_namespace_name_as_prefix_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_callable] = anon_sym_callable,
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
  [aux_sym_version_token1] = aux_sym_version_token1,
  [aux_sym_version_token2] = aux_sym_version_token2,
  [anon_sym_ATpackage_version_AT] = anon_sym_ATpackage_version_AT,
  [sym__version_vector] = sym__version_vector,
  [sym_uri] = sym_uri,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_default_value] = sym_default_value,
  [sym__end] = sym__end,
  [sym_text] = sym_text,
  [sym__text_after_type] = sym_text,
  [sym__text_in_inline_tag] = sym_text,
  [sym__text_not_version] = sym_text,
  [sym_document] = sym_document,
  [sym_description] = sym_description,
  [sym__description_after_type] = sym__description_after_type,
  [sym__description_not_version] = sym__description_not_version,
  [sym__description_in_inline_tag] = sym__description_in_inline_tag,
  [sym__description_in_inline_tag_with_nesting] = sym__description_in_inline_tag_with_nesting,
  [sym_tag] = sym_tag,
  [sym_inline_tag] = sym_inline_tag,
  [sym__tag_without_description] = sym__tag_without_description,
  [sym__tag_with_optional_description] = sym__tag_with_optional_description,
  [sym__tag_with_required_description] = sym__tag_with_required_description,
  [sym__tag_with_incomplete_implementation] = sym__tag_with_incomplete_implementation,
  [sym__author_tag] = sym__author_tag,
  [sym__global_tag] = sym__global_tag,
  [sym__inline_internal_tag] = sym__inline_internal_tag,
  [sym__link_tag] = sym__link_tag,
  [sym__inline_link_tag] = sym__inline_link_tag,
  [sym__method_tag] = sym__method_tag,
  [sym__param_tag] = sym__param_tag,
  [sym__property_tag] = sym__property_tag,
  [sym__return_tag] = sym__return_tag,
  [sym__see_tag] = sym__see_tag,
  [sym__inline_see_tag] = sym__inline_see_tag,
  [sym__throws_tag] = sym__throws_tag,
  [sym__var_tag] = sym__var_tag,
  [sym__deprecated_tag] = sym__deprecated_tag,
  [sym__since_tag] = sym__since_tag,
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
  [sym_version] = sym_version,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_static] = sym_static,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym__description_after_type_repeat1] = aux_sym__description_after_type_repeat1,
  [aux_sym__description_not_version_repeat1] = aux_sym__description_not_version_repeat1,
  [aux_sym__description_in_inline_tag_repeat1] = aux_sym__description_in_inline_tag_repeat1,
  [aux_sym__description_in_inline_tag_with_nesting_repeat1] = aux_sym__description_in_inline_tag_with_nesting_repeat1,
  [aux_sym__phpdoc_array_types_repeat1] = aux_sym__phpdoc_array_types_repeat1,
  [aux_sym_namespace_name_repeat1] = aux_sym_namespace_name_repeat1,
  [aux_sym_union_type_repeat1] = aux_sym_union_type_repeat1,
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
  [anon_sym_ATinheritdoc] = {
    .visible = true,
    .named = true,
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
  [anon_sym_ATinternal] = {
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
    .named = true,
  },
  [anon_sym_ATlicense] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATpackage] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsource] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsubpackage] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATuses] = {
    .visible = true,
    .named = true,
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
  [anon_sym_ATlink] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LPAREN_RPAREN] = {
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
  [anon_sym_callable] = {
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
  [aux_sym_version_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATpackage_version_AT] = {
    .visible = true,
    .named = false,
  },
  [sym__version_vector] = {
    .visible = false,
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__text_after_type] = {
    .visible = true,
    .named = true,
  },
  [sym__text_in_inline_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__text_not_version] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym__description_after_type] = {
    .visible = false,
    .named = true,
  },
  [sym__description_not_version] = {
    .visible = false,
    .named = true,
  },
  [sym__description_in_inline_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__description_in_inline_tag_with_nesting] = {
    .visible = false,
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
  [sym__tag_without_description] = {
    .visible = false,
    .named = true,
  },
  [sym__tag_with_optional_description] = {
    .visible = false,
    .named = true,
  },
  [sym__tag_with_required_description] = {
    .visible = false,
    .named = true,
  },
  [sym__tag_with_incomplete_implementation] = {
    .visible = false,
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
  [sym__inline_internal_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__link_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_link_tag] = {
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
  [sym__inline_see_tag] = {
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
  [sym__deprecated_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__since_tag] = {
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
  [sym_version] = {
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
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__description_after_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__description_not_version_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__description_in_inline_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__description_in_inline_tag_with_nesting_repeat1] = {
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

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_array] = "array",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[5] = {
  [3] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_array, 0},
    {field_value, 2},
  [2] =
    {field_array, 0},
    {field_key, 2},
    {field_value, 4},
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_sym_LPAREN_RPAREN,
  },
  [2] = {
    [0] = sym_description,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_qualified_name, 2,
    sym_qualified_name,
    anon_sym_LPAREN_RPAREN,
  aux_sym__description_after_type_repeat1, 2,
    aux_sym__description_after_type_repeat1,
    sym_description,
  aux_sym__description_not_version_repeat1, 2,
    aux_sym__description_not_version_repeat1,
    sym_description,
  aux_sym__description_in_inline_tag_repeat1, 2,
    aux_sym__description_in_inline_tag_repeat1,
    sym_description,
  aux_sym__description_in_inline_tag_with_nesting_repeat1, 2,
    aux_sym__description_in_inline_tag_with_nesting_repeat1,
    sym_description,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(468);
      if (lookahead == '\n') SKIP(467)
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ')') ADVANCE(574);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == ',') ADVANCE(538);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(488);
      if (lookahead == '=') ADVANCE(575);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == '?') ADVANCE(558);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(557);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '|') ADVANCE(559);
      if (lookahead == '}') ADVANCE(473);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '$') ADVANCE(464);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '*') SKIP(1)
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '}') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '$') ADVANCE(464);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '}') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '$') ADVANCE(464);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(574);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == ',') ADVANCE(538);
      if (lookahead == '/') ADVANCE(579);
      if (lookahead == '<') ADVANCE(488);
      if (lookahead == '=') ADVANCE(575);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(557);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '|') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '$') ADVANCE(464);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(574);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == ',') ADVANCE(538);
      if (lookahead == '<') ADVANCE(488);
      if (lookahead == '=') ADVANCE(575);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(557);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '|') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '$') ADVANCE(464);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(574);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == ',') ADVANCE(538);
      if (lookahead == '<') ADVANCE(488);
      if (lookahead == '=') ADVANCE(575);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(557);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '|') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '*') SKIP(6)
      if (lookahead == '\\') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\\') ADVANCE(557);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '*') ADVANCE(565);
      if (lookahead == '<') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(578);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ')') ADVANCE(574);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == ',') ADVANCE(538);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(488);
      if (lookahead == '=') ADVANCE(575);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == '?') ADVANCE(558);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(557);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '|') ADVANCE(559);
      if (lookahead == '}') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(14)
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ')') ADVANCE(574);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == ',') ADVANCE(538);
      if (lookahead == '/') ADVANCE(580);
      if (lookahead == '<') ADVANCE(488);
      if (lookahead == '=') ADVANCE(575);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == '?') ADVANCE(558);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(557);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '|') ADVANCE(559);
      if (lookahead == '}') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ')') ADVANCE(574);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == ',') ADVANCE(538);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(488);
      if (lookahead == '=') ADVANCE(575);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == '?') ADVANCE(558);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(557);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '|') ADVANCE(559);
      if (lookahead == '}') ADVANCE(473);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(17)
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(427);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(499);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(469);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(566);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(579);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '@') ADVANCE(569);
      END_STATE();
    case 35:
      if (lookahead == '@') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == '@') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(424);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(404);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(286);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(251);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(294);
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 42:
      if (lookahead == 'G') ADVANCE(252);
      if (lookahead == 'S') ADVANCE(422);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(253);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(206);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(181);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(283);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(296);
      END_STATE();
    case 48:
      if (lookahead == 'P') ADVANCE(350);
      END_STATE();
    case 49:
      if (lookahead == 'P') ADVANCE(352);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(173);
      END_STATE();
    case 51:
      if (lookahead == 'P') ADVANCE(364);
      END_STATE();
    case 52:
      if (lookahead == 'S') ADVANCE(183);
      END_STATE();
    case 53:
      if (lookahead == 'S') ADVANCE(441);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(191);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(537);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(456);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(397);
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 97:
      if (lookahead == 'b') ADVANCE(322);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(451);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 100:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 101:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(235);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(495);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 'v') ADVANCE(184);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'h') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 192:
      if (lookahead == 'f') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 193:
      if (lookahead == 'f') ADVANCE(298);
      END_STATE();
    case 194:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 195:
      if (lookahead == 'f') ADVANCE(307);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(519);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 201:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 202:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 203:
      if (lookahead == 'g') ADVANCE(277);
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 204:
      if (lookahead == 'g') ADVANCE(306);
      END_STATE();
    case 205:
      if (lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 206:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 207:
      if (lookahead == 'h') ADVANCE(534);
      END_STATE();
    case 208:
      if (lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 209:
      if (lookahead == 'h') ADVANCE(223);
      END_STATE();
    case 210:
      if (lookahead == 'h') ADVANCE(410);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 212:
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 213:
      if (lookahead == 'h') ADVANCE(308);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 233:
      if (lookahead == 'k') ADVANCE(491);
      END_STATE();
    case 234:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 235:
      if (lookahead == 'k') ADVANCE(158);
      END_STATE();
    case 236:
      if (lookahead == 'k') ADVANCE(447);
      END_STATE();
    case 237:
      if (lookahead == 'k') ADVANCE(84);
      END_STATE();
    case 238:
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(532);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 254:
      if (lookahead == 'm') ADVANCE(493);
      END_STATE();
    case 255:
      if (lookahead == 'm') ADVANCE(526);
      END_STATE();
    case 256:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 257:
      if (lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(459);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 310:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 319:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 320:
      if (lookahead == 'p') ADVANCE(524);
      END_STATE();
    case 321:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 322:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 323:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 324:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 325:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 326:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 327:
      if (lookahead == 'p') ADVANCE(361);
      END_STATE();
    case 328:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 329:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 330:
      if (lookahead == 'q') ADVANCE(444);
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 341:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 343:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(346);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 368:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 369:
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 370:
      if (lookahead == 's') ADVANCE(516);
      END_STATE();
    case 371:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(521);
      END_STATE();
    case 373:
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 374:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(506);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(511);
      END_STATE();
    case 377:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 378:
      if (lookahead == 's') ADVANCE(529);
      END_STATE();
    case 379:
      if (lookahead == 's') ADVANCE(517);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(530);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(509);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(523);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(518);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(522);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(380);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 443:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 445:
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 446:
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 447:
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 448:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 449:
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 450:
      if (lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 451:
      if (lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 452:
      if (lookahead == 'u') ADVANCE(358);
      END_STATE();
    case 453:
      if (lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 454:
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 455:
      if (lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 456:
      if (lookahead == 'v') ADVANCE(189);
      END_STATE();
    case 457:
      if (lookahead == 'w') ADVANCE(371);
      END_STATE();
    case 458:
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 459:
      if (lookahead == 'x') ADVANCE(535);
      END_STATE();
    case 460:
      if (lookahead == 'x') ADVANCE(327);
      END_STATE();
    case 461:
      if (lookahead == 'y') ADVANCE(478);
      END_STATE();
    case 462:
      if (lookahead == 'y') ADVANCE(494);
      END_STATE();
    case 463:
      if (lookahead == 'y') ADVANCE(340);
      END_STATE();
    case 464:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 465:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(567);
      END_STATE();
    case 466:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(563);
      END_STATE();
    case 467:
      if (eof) ADVANCE(468);
      if (lookahead == '\n') SKIP(467)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '$') ADVANCE(560);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ')') ADVANCE(574);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == ',') ADVANCE(538);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(488);
      if (lookahead == '=') ADVANCE(575);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == '?') ADVANCE(558);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(557);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '|') ADVANCE(559);
      if (lookahead == '}') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(467)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_ATinheritdoc);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_ATinheritDoc);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      if (lookahead == '_') ADVANCE(456);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(353);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_ATafter);
      if (lookahead == 'C') ADVANCE(245);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_ATafterClass);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_ATbackupGlobals);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_ATbackupStaticAttributes);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_ATbefore);
      if (lookahead == 'C') ADVANCE(250);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_ATbeforeClass);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnore);
      if (lookahead == '*') ADVANCE(513);
      if (lookahead == 'E') ADVANCE(270);
      if (lookahead == 'S') ADVANCE(434);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnore_STAR);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnoreEnd);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnoreStart);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_ATcovers);
      if (lookahead == 'D') ADVANCE(149);
      if (lookahead == 'N') ADVANCE(302);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_ATcoversDefaultClass);
      if (lookahead == ' ') ADVANCE(426);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_ATcoversDefaultClasstoshortenannotations);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_ATcoversNothing);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_ATdataProvider);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_ATdepends);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_ATdependsannotationtoexpressdependencies);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_ATdoesNotPerformAssertions);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_ATgroup);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_ATlarge);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_ATmedium);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_ATpreserveGlobalState);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_ATrequires);
      if (lookahead == ' ') ADVANCE(450);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_ATrequiresusages);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_ATrunInSeparateProcess);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_ATrunTestsInSeparateProcesses);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_ATsmall);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_ATtest);
      if (lookahead == 'W') ADVANCE(222);
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_ATtestWith);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_ATtestdox);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_ATticket);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(466);
      if (lookahead == '<') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(562);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '*') ADVANCE(565);
      if (lookahead == '<') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(561);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '.') ADVANCE(566);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (lookahead == ' ') ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_ATpackage_version_AT);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__version_vector);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead == '\t') ADVANCE(576);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == '\r') ADVANCE(577);
      if (lookahead == ' ') ADVANCE(576);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(578);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == ' ') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(578);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(25);
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
      if (lookahead == '\n') SKIP(1)
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '*') SKIP(12)
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '*') SKIP(12)
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
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
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_callable);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_iterable);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 5, .external_lex_state = 2},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5, .external_lex_state = 3},
  [8] = {.lex_state = 5, .external_lex_state = 2},
  [9] = {.lex_state = 5, .external_lex_state = 2},
  [10] = {.lex_state = 5, .external_lex_state = 2},
  [11] = {.lex_state = 5, .external_lex_state = 2},
  [12] = {.lex_state = 5, .external_lex_state = 2},
  [13] = {.lex_state = 5, .external_lex_state = 2},
  [14] = {.lex_state = 5, .external_lex_state = 2},
  [15] = {.lex_state = 5, .external_lex_state = 2},
  [16] = {.lex_state = 5, .external_lex_state = 2},
  [17] = {.lex_state = 5, .external_lex_state = 2},
  [18] = {.lex_state = 5, .external_lex_state = 2},
  [19] = {.lex_state = 5, .external_lex_state = 2},
  [20] = {.lex_state = 5, .external_lex_state = 2},
  [21] = {.lex_state = 5, .external_lex_state = 2},
  [22] = {.lex_state = 5, .external_lex_state = 2},
  [23] = {.lex_state = 5, .external_lex_state = 2},
  [24] = {.lex_state = 5, .external_lex_state = 2},
  [25] = {.lex_state = 5, .external_lex_state = 2},
  [26] = {.lex_state = 5, .external_lex_state = 2},
  [27] = {.lex_state = 5, .external_lex_state = 2},
  [28] = {.lex_state = 5, .external_lex_state = 2},
  [29] = {.lex_state = 5, .external_lex_state = 2},
  [30] = {.lex_state = 5, .external_lex_state = 2},
  [31] = {.lex_state = 5, .external_lex_state = 2},
  [32] = {.lex_state = 5, .external_lex_state = 2},
  [33] = {.lex_state = 5, .external_lex_state = 2},
  [34] = {.lex_state = 5, .external_lex_state = 3},
  [35] = {.lex_state = 5, .external_lex_state = 2},
  [36] = {.lex_state = 5, .external_lex_state = 4},
  [37] = {.lex_state = 5, .external_lex_state = 2},
  [38] = {.lex_state = 5, .external_lex_state = 2},
  [39] = {.lex_state = 5, .external_lex_state = 2},
  [40] = {.lex_state = 5, .external_lex_state = 4},
  [41] = {.lex_state = 5, .external_lex_state = 2},
  [42] = {.lex_state = 5, .external_lex_state = 3},
  [43] = {.lex_state = 5, .external_lex_state = 2},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5, .external_lex_state = 2},
  [46] = {.lex_state = 5, .external_lex_state = 2},
  [47] = {.lex_state = 5, .external_lex_state = 4},
  [48] = {.lex_state = 5, .external_lex_state = 2},
  [49] = {.lex_state = 5, .external_lex_state = 2},
  [50] = {.lex_state = 5, .external_lex_state = 3},
  [51] = {.lex_state = 5, .external_lex_state = 2},
  [52] = {.lex_state = 5, .external_lex_state = 2},
  [53] = {.lex_state = 5, .external_lex_state = 2},
  [54] = {.lex_state = 5, .external_lex_state = 3},
  [55] = {.lex_state = 5, .external_lex_state = 2},
  [56] = {.lex_state = 5, .external_lex_state = 4},
  [57] = {.lex_state = 5, .external_lex_state = 2},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 2, .external_lex_state = 3},
  [112] = {.lex_state = 2, .external_lex_state = 3},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0, .external_lex_state = 4},
  [132] = {.lex_state = 0, .external_lex_state = 5},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 5},
  [136] = {.lex_state = 0, .external_lex_state = 4},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 5},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 2, .external_lex_state = 5},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0, .external_lex_state = 5},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0, .external_lex_state = 5},
  [150] = {.lex_state = 0, .external_lex_state = 5},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0, .external_lex_state = 5},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0, .external_lex_state = 5},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0, .external_lex_state = 5},
  [164] = {.lex_state = 0, .external_lex_state = 5},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 2, .external_lex_state = 5},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0, .external_lex_state = 5},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
};

enum {
  ts_external_token_text = 0,
  ts_external_token__text_after_type = 1,
  ts_external_token__text_in_inline_tag = 2,
  ts_external_token__text_not_version = 3,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_text] = sym_text,
  [ts_external_token__text_after_type] = sym__text_after_type,
  [ts_external_token__text_in_inline_tag] = sym__text_in_inline_tag,
  [ts_external_token__text_not_version] = sym__text_not_version,
};

static bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_text] = true,
    [ts_external_token__text_after_type] = true,
    [ts_external_token__text_in_inline_tag] = true,
    [ts_external_token__text_not_version] = true,
  },
  [2] = {
    [ts_external_token_text] = true,
  },
  [3] = {
    [ts_external_token__text_not_version] = true,
  },
  [4] = {
    [ts_external_token__text_after_type] = true,
  },
  [5] = {
    [ts_external_token__text_in_inline_tag] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_ATinheritdoc] = ACTIONS(1),
    [anon_sym_ATinheritDoc] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ATapi] = ACTIONS(1),
    [anon_sym_ATfilesource] = ACTIONS(1),
    [anon_sym_ATignore] = ACTIONS(1),
    [anon_sym_ATinternal] = ACTIONS(1),
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
    [anon_sym_callable] = ACTIONS(1),
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
    [aux_sym_version_token1] = ACTIONS(1),
    [anon_sym_ATpackage_version_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym__text_after_type] = ACTIONS(1),
    [sym__text_in_inline_tag] = ACTIONS(1),
    [sym__text_not_version] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(211),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_description] = STATE(6),
    [sym_tag] = STATE(3),
    [sym_inline_tag] = STATE(38),
    [sym__tag_without_description] = STATE(74),
    [sym__tag_with_optional_description] = STATE(74),
    [sym__tag_with_required_description] = STATE(74),
    [sym__tag_with_incomplete_implementation] = STATE(74),
    [sym__author_tag] = STATE(74),
    [sym__global_tag] = STATE(74),
    [sym__link_tag] = STATE(74),
    [sym__method_tag] = STATE(74),
    [sym__param_tag] = STATE(74),
    [sym__property_tag] = STATE(74),
    [sym__return_tag] = STATE(74),
    [sym__see_tag] = STATE(74),
    [sym__throws_tag] = STATE(74),
    [sym__var_tag] = STATE(74),
    [sym__deprecated_tag] = STATE(74),
    [sym__since_tag] = STATE(74),
    [sym__version_tag] = STATE(74),
    [sym__phpunit_tag] = STATE(74),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(7),
    [anon_sym_ATinheritDoc] = ACTIONS(7),
    [anon_sym_ATapi] = ACTIONS(7),
    [anon_sym_ATfilesource] = ACTIONS(7),
    [anon_sym_ATignore] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(9),
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
    [anon_sym_ATlink] = ACTIONS(19),
    [anon_sym_ATmethod] = ACTIONS(21),
    [anon_sym_ATparam] = ACTIONS(23),
    [anon_sym_ATproperty] = ACTIONS(25),
    [anon_sym_ATproperty_DASHread] = ACTIONS(27),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(27),
    [anon_sym_ATreturn] = ACTIONS(29),
    [anon_sym_ATsee] = ACTIONS(31),
    [anon_sym_ATthrows] = ACTIONS(33),
    [anon_sym_ATvar] = ACTIONS(35),
    [anon_sym_ATdeprecated] = ACTIONS(37),
    [anon_sym_ATsince] = ACTIONS(39),
    [anon_sym_ATversion] = ACTIONS(41),
    [anon_sym_ATafter] = ACTIONS(43),
    [anon_sym_ATafterClass] = ACTIONS(45),
    [anon_sym_ATannotation] = ACTIONS(45),
    [anon_sym_ATbackupGlobals] = ACTIONS(45),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(45),
    [anon_sym_ATbefore] = ACTIONS(43),
    [anon_sym_ATbeforeClass] = ACTIONS(45),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(45),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(45),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(45),
    [anon_sym_ATcovers] = ACTIONS(43),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(43),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(45),
    [anon_sym_ATcoversNothing] = ACTIONS(45),
    [anon_sym_ATdataProvider] = ACTIONS(45),
    [anon_sym_ATdepends] = ACTIONS(43),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(45),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(45),
    [anon_sym_ATgroup] = ACTIONS(45),
    [anon_sym_ATlarge] = ACTIONS(45),
    [anon_sym_ATmedium] = ACTIONS(45),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(45),
    [anon_sym_ATrequires] = ACTIONS(43),
    [anon_sym_ATrequiresusages] = ACTIONS(45),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(45),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(45),
    [anon_sym_ATsmall] = ACTIONS(45),
    [anon_sym_ATtest] = ACTIONS(43),
    [anon_sym_ATtestWith] = ACTIONS(45),
    [anon_sym_ATtestdox] = ACTIONS(45),
    [anon_sym_ATticket] = ACTIONS(45),
    [sym__end] = ACTIONS(47),
    [sym_text] = ACTIONS(49),
  },
  [3] = {
    [sym_tag] = STATE(5),
    [sym__tag_without_description] = STATE(74),
    [sym__tag_with_optional_description] = STATE(74),
    [sym__tag_with_required_description] = STATE(74),
    [sym__tag_with_incomplete_implementation] = STATE(74),
    [sym__author_tag] = STATE(74),
    [sym__global_tag] = STATE(74),
    [sym__link_tag] = STATE(74),
    [sym__method_tag] = STATE(74),
    [sym__param_tag] = STATE(74),
    [sym__property_tag] = STATE(74),
    [sym__return_tag] = STATE(74),
    [sym__see_tag] = STATE(74),
    [sym__throws_tag] = STATE(74),
    [sym__var_tag] = STATE(74),
    [sym__deprecated_tag] = STATE(74),
    [sym__since_tag] = STATE(74),
    [sym__version_tag] = STATE(74),
    [sym__phpunit_tag] = STATE(74),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATinheritdoc] = ACTIONS(7),
    [anon_sym_ATinheritDoc] = ACTIONS(7),
    [anon_sym_ATapi] = ACTIONS(7),
    [anon_sym_ATfilesource] = ACTIONS(7),
    [anon_sym_ATignore] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(9),
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
    [anon_sym_ATlink] = ACTIONS(19),
    [anon_sym_ATmethod] = ACTIONS(21),
    [anon_sym_ATparam] = ACTIONS(23),
    [anon_sym_ATproperty] = ACTIONS(25),
    [anon_sym_ATproperty_DASHread] = ACTIONS(27),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(27),
    [anon_sym_ATreturn] = ACTIONS(29),
    [anon_sym_ATsee] = ACTIONS(31),
    [anon_sym_ATthrows] = ACTIONS(33),
    [anon_sym_ATvar] = ACTIONS(35),
    [anon_sym_ATdeprecated] = ACTIONS(37),
    [anon_sym_ATsince] = ACTIONS(39),
    [anon_sym_ATversion] = ACTIONS(41),
    [anon_sym_ATafter] = ACTIONS(43),
    [anon_sym_ATafterClass] = ACTIONS(45),
    [anon_sym_ATannotation] = ACTIONS(45),
    [anon_sym_ATbackupGlobals] = ACTIONS(45),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(45),
    [anon_sym_ATbefore] = ACTIONS(43),
    [anon_sym_ATbeforeClass] = ACTIONS(45),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(45),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(45),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(45),
    [anon_sym_ATcovers] = ACTIONS(43),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(43),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(45),
    [anon_sym_ATcoversNothing] = ACTIONS(45),
    [anon_sym_ATdataProvider] = ACTIONS(45),
    [anon_sym_ATdepends] = ACTIONS(43),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(45),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(45),
    [anon_sym_ATgroup] = ACTIONS(45),
    [anon_sym_ATlarge] = ACTIONS(45),
    [anon_sym_ATmedium] = ACTIONS(45),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(45),
    [anon_sym_ATrequires] = ACTIONS(43),
    [anon_sym_ATrequiresusages] = ACTIONS(45),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(45),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(45),
    [anon_sym_ATsmall] = ACTIONS(45),
    [anon_sym_ATtest] = ACTIONS(43),
    [anon_sym_ATtestWith] = ACTIONS(45),
    [anon_sym_ATtestdox] = ACTIONS(45),
    [anon_sym_ATticket] = ACTIONS(45),
    [sym__end] = ACTIONS(51),
  },
  [4] = {
    [sym_tag] = STATE(5),
    [sym__tag_without_description] = STATE(74),
    [sym__tag_with_optional_description] = STATE(74),
    [sym__tag_with_required_description] = STATE(74),
    [sym__tag_with_incomplete_implementation] = STATE(74),
    [sym__author_tag] = STATE(74),
    [sym__global_tag] = STATE(74),
    [sym__link_tag] = STATE(74),
    [sym__method_tag] = STATE(74),
    [sym__param_tag] = STATE(74),
    [sym__property_tag] = STATE(74),
    [sym__return_tag] = STATE(74),
    [sym__see_tag] = STATE(74),
    [sym__throws_tag] = STATE(74),
    [sym__var_tag] = STATE(74),
    [sym__deprecated_tag] = STATE(74),
    [sym__since_tag] = STATE(74),
    [sym__version_tag] = STATE(74),
    [sym__phpunit_tag] = STATE(74),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATinheritdoc] = ACTIONS(7),
    [anon_sym_ATinheritDoc] = ACTIONS(7),
    [anon_sym_ATapi] = ACTIONS(7),
    [anon_sym_ATfilesource] = ACTIONS(7),
    [anon_sym_ATignore] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(9),
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
    [anon_sym_ATlink] = ACTIONS(19),
    [anon_sym_ATmethod] = ACTIONS(21),
    [anon_sym_ATparam] = ACTIONS(23),
    [anon_sym_ATproperty] = ACTIONS(25),
    [anon_sym_ATproperty_DASHread] = ACTIONS(27),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(27),
    [anon_sym_ATreturn] = ACTIONS(29),
    [anon_sym_ATsee] = ACTIONS(31),
    [anon_sym_ATthrows] = ACTIONS(33),
    [anon_sym_ATvar] = ACTIONS(35),
    [anon_sym_ATdeprecated] = ACTIONS(37),
    [anon_sym_ATsince] = ACTIONS(39),
    [anon_sym_ATversion] = ACTIONS(41),
    [anon_sym_ATafter] = ACTIONS(43),
    [anon_sym_ATafterClass] = ACTIONS(45),
    [anon_sym_ATannotation] = ACTIONS(45),
    [anon_sym_ATbackupGlobals] = ACTIONS(45),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(45),
    [anon_sym_ATbefore] = ACTIONS(43),
    [anon_sym_ATbeforeClass] = ACTIONS(45),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(45),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(45),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(45),
    [anon_sym_ATcovers] = ACTIONS(43),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(43),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(45),
    [anon_sym_ATcoversNothing] = ACTIONS(45),
    [anon_sym_ATdataProvider] = ACTIONS(45),
    [anon_sym_ATdepends] = ACTIONS(43),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(45),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(45),
    [anon_sym_ATgroup] = ACTIONS(45),
    [anon_sym_ATlarge] = ACTIONS(45),
    [anon_sym_ATmedium] = ACTIONS(45),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(45),
    [anon_sym_ATrequires] = ACTIONS(43),
    [anon_sym_ATrequiresusages] = ACTIONS(45),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(45),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(45),
    [anon_sym_ATsmall] = ACTIONS(45),
    [anon_sym_ATtest] = ACTIONS(43),
    [anon_sym_ATtestWith] = ACTIONS(45),
    [anon_sym_ATtestdox] = ACTIONS(45),
    [anon_sym_ATticket] = ACTIONS(45),
    [sym__end] = ACTIONS(53),
  },
  [5] = {
    [sym_tag] = STATE(5),
    [sym__tag_without_description] = STATE(74),
    [sym__tag_with_optional_description] = STATE(74),
    [sym__tag_with_required_description] = STATE(74),
    [sym__tag_with_incomplete_implementation] = STATE(74),
    [sym__author_tag] = STATE(74),
    [sym__global_tag] = STATE(74),
    [sym__link_tag] = STATE(74),
    [sym__method_tag] = STATE(74),
    [sym__param_tag] = STATE(74),
    [sym__property_tag] = STATE(74),
    [sym__return_tag] = STATE(74),
    [sym__see_tag] = STATE(74),
    [sym__throws_tag] = STATE(74),
    [sym__var_tag] = STATE(74),
    [sym__deprecated_tag] = STATE(74),
    [sym__since_tag] = STATE(74),
    [sym__version_tag] = STATE(74),
    [sym__phpunit_tag] = STATE(74),
    [aux_sym_document_repeat1] = STATE(5),
    [anon_sym_ATinheritdoc] = ACTIONS(55),
    [anon_sym_ATinheritDoc] = ACTIONS(55),
    [anon_sym_ATapi] = ACTIONS(55),
    [anon_sym_ATfilesource] = ACTIONS(55),
    [anon_sym_ATignore] = ACTIONS(58),
    [anon_sym_ATinternal] = ACTIONS(58),
    [anon_sym_ATcategory] = ACTIONS(61),
    [anon_sym_ATcopyright] = ACTIONS(61),
    [anon_sym_ATtodo] = ACTIONS(61),
    [anon_sym_ATexample] = ACTIONS(64),
    [anon_sym_ATlicense] = ACTIONS(64),
    [anon_sym_ATpackage] = ACTIONS(64),
    [anon_sym_ATsource] = ACTIONS(64),
    [anon_sym_ATsubpackage] = ACTIONS(64),
    [anon_sym_ATuses] = ACTIONS(64),
    [anon_sym_ATauthor] = ACTIONS(67),
    [anon_sym_ATglobal] = ACTIONS(70),
    [anon_sym_ATlink] = ACTIONS(73),
    [anon_sym_ATmethod] = ACTIONS(76),
    [anon_sym_ATparam] = ACTIONS(79),
    [anon_sym_ATproperty] = ACTIONS(82),
    [anon_sym_ATproperty_DASHread] = ACTIONS(85),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(85),
    [anon_sym_ATreturn] = ACTIONS(88),
    [anon_sym_ATsee] = ACTIONS(91),
    [anon_sym_ATthrows] = ACTIONS(94),
    [anon_sym_ATvar] = ACTIONS(97),
    [anon_sym_ATdeprecated] = ACTIONS(100),
    [anon_sym_ATsince] = ACTIONS(103),
    [anon_sym_ATversion] = ACTIONS(106),
    [anon_sym_ATafter] = ACTIONS(109),
    [anon_sym_ATafterClass] = ACTIONS(112),
    [anon_sym_ATannotation] = ACTIONS(112),
    [anon_sym_ATbackupGlobals] = ACTIONS(112),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(112),
    [anon_sym_ATbefore] = ACTIONS(109),
    [anon_sym_ATbeforeClass] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(109),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(112),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(112),
    [anon_sym_ATcovers] = ACTIONS(109),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(109),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(112),
    [anon_sym_ATcoversNothing] = ACTIONS(112),
    [anon_sym_ATdataProvider] = ACTIONS(112),
    [anon_sym_ATdepends] = ACTIONS(109),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(112),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(112),
    [anon_sym_ATgroup] = ACTIONS(112),
    [anon_sym_ATlarge] = ACTIONS(112),
    [anon_sym_ATmedium] = ACTIONS(112),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(112),
    [anon_sym_ATrequires] = ACTIONS(109),
    [anon_sym_ATrequiresusages] = ACTIONS(112),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(112),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(112),
    [anon_sym_ATsmall] = ACTIONS(112),
    [anon_sym_ATtest] = ACTIONS(109),
    [anon_sym_ATtestWith] = ACTIONS(112),
    [anon_sym_ATtestdox] = ACTIONS(112),
    [anon_sym_ATticket] = ACTIONS(112),
    [sym__end] = ACTIONS(115),
  },
  [6] = {
    [sym_tag] = STATE(4),
    [sym__tag_without_description] = STATE(74),
    [sym__tag_with_optional_description] = STATE(74),
    [sym__tag_with_required_description] = STATE(74),
    [sym__tag_with_incomplete_implementation] = STATE(74),
    [sym__author_tag] = STATE(74),
    [sym__global_tag] = STATE(74),
    [sym__link_tag] = STATE(74),
    [sym__method_tag] = STATE(74),
    [sym__param_tag] = STATE(74),
    [sym__property_tag] = STATE(74),
    [sym__return_tag] = STATE(74),
    [sym__see_tag] = STATE(74),
    [sym__throws_tag] = STATE(74),
    [sym__var_tag] = STATE(74),
    [sym__deprecated_tag] = STATE(74),
    [sym__since_tag] = STATE(74),
    [sym__version_tag] = STATE(74),
    [sym__phpunit_tag] = STATE(74),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATinheritdoc] = ACTIONS(7),
    [anon_sym_ATinheritDoc] = ACTIONS(7),
    [anon_sym_ATapi] = ACTIONS(7),
    [anon_sym_ATfilesource] = ACTIONS(7),
    [anon_sym_ATignore] = ACTIONS(9),
    [anon_sym_ATinternal] = ACTIONS(9),
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
    [anon_sym_ATlink] = ACTIONS(19),
    [anon_sym_ATmethod] = ACTIONS(21),
    [anon_sym_ATparam] = ACTIONS(23),
    [anon_sym_ATproperty] = ACTIONS(25),
    [anon_sym_ATproperty_DASHread] = ACTIONS(27),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(27),
    [anon_sym_ATreturn] = ACTIONS(29),
    [anon_sym_ATsee] = ACTIONS(31),
    [anon_sym_ATthrows] = ACTIONS(33),
    [anon_sym_ATvar] = ACTIONS(35),
    [anon_sym_ATdeprecated] = ACTIONS(37),
    [anon_sym_ATsince] = ACTIONS(39),
    [anon_sym_ATversion] = ACTIONS(41),
    [anon_sym_ATafter] = ACTIONS(43),
    [anon_sym_ATafterClass] = ACTIONS(45),
    [anon_sym_ATannotation] = ACTIONS(45),
    [anon_sym_ATbackupGlobals] = ACTIONS(45),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(45),
    [anon_sym_ATbefore] = ACTIONS(43),
    [anon_sym_ATbeforeClass] = ACTIONS(45),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(43),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(45),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(45),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(45),
    [anon_sym_ATcovers] = ACTIONS(43),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(43),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(45),
    [anon_sym_ATcoversNothing] = ACTIONS(45),
    [anon_sym_ATdataProvider] = ACTIONS(45),
    [anon_sym_ATdepends] = ACTIONS(43),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(45),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(45),
    [anon_sym_ATgroup] = ACTIONS(45),
    [anon_sym_ATlarge] = ACTIONS(45),
    [anon_sym_ATmedium] = ACTIONS(45),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(45),
    [anon_sym_ATrequires] = ACTIONS(43),
    [anon_sym_ATrequiresusages] = ACTIONS(45),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(45),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(45),
    [anon_sym_ATsmall] = ACTIONS(45),
    [anon_sym_ATtest] = ACTIONS(43),
    [anon_sym_ATtestWith] = ACTIONS(45),
    [anon_sym_ATtestdox] = ACTIONS(45),
    [anon_sym_ATticket] = ACTIONS(45),
    [sym__end] = ACTIONS(51),
  },
  [7] = {
    [sym__description_not_version] = STATE(70),
    [sym_inline_tag] = STATE(54),
    [sym_version] = STATE(28),
    [aux_sym__description_not_version_repeat1] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_ATinheritdoc] = ACTIONS(119),
    [anon_sym_ATinheritDoc] = ACTIONS(119),
    [anon_sym_ATapi] = ACTIONS(119),
    [anon_sym_ATfilesource] = ACTIONS(119),
    [anon_sym_ATignore] = ACTIONS(119),
    [anon_sym_ATinternal] = ACTIONS(119),
    [anon_sym_ATcategory] = ACTIONS(119),
    [anon_sym_ATcopyright] = ACTIONS(119),
    [anon_sym_ATtodo] = ACTIONS(119),
    [anon_sym_ATexample] = ACTIONS(119),
    [anon_sym_ATlicense] = ACTIONS(119),
    [anon_sym_ATpackage] = ACTIONS(121),
    [anon_sym_ATsource] = ACTIONS(119),
    [anon_sym_ATsubpackage] = ACTIONS(119),
    [anon_sym_ATuses] = ACTIONS(119),
    [anon_sym_ATauthor] = ACTIONS(119),
    [anon_sym_ATglobal] = ACTIONS(119),
    [anon_sym_ATlink] = ACTIONS(119),
    [anon_sym_ATmethod] = ACTIONS(119),
    [anon_sym_ATparam] = ACTIONS(119),
    [anon_sym_ATproperty] = ACTIONS(121),
    [anon_sym_ATproperty_DASHread] = ACTIONS(119),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(119),
    [anon_sym_ATreturn] = ACTIONS(119),
    [anon_sym_ATsee] = ACTIONS(119),
    [anon_sym_ATthrows] = ACTIONS(119),
    [anon_sym_ATvar] = ACTIONS(119),
    [anon_sym_ATdeprecated] = ACTIONS(119),
    [anon_sym_ATsince] = ACTIONS(119),
    [anon_sym_ATversion] = ACTIONS(119),
    [anon_sym_ATafter] = ACTIONS(121),
    [anon_sym_ATafterClass] = ACTIONS(119),
    [anon_sym_ATannotation] = ACTIONS(119),
    [anon_sym_ATbackupGlobals] = ACTIONS(119),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(119),
    [anon_sym_ATbefore] = ACTIONS(121),
    [anon_sym_ATbeforeClass] = ACTIONS(119),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(121),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(119),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(119),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(119),
    [anon_sym_ATcovers] = ACTIONS(121),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(121),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(119),
    [anon_sym_ATcoversNothing] = ACTIONS(119),
    [anon_sym_ATdataProvider] = ACTIONS(119),
    [anon_sym_ATdepends] = ACTIONS(121),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(119),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(119),
    [anon_sym_ATgroup] = ACTIONS(119),
    [anon_sym_ATlarge] = ACTIONS(119),
    [anon_sym_ATmedium] = ACTIONS(119),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(119),
    [anon_sym_ATrequires] = ACTIONS(121),
    [anon_sym_ATrequiresusages] = ACTIONS(119),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(119),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(119),
    [anon_sym_ATsmall] = ACTIONS(119),
    [anon_sym_ATtest] = ACTIONS(121),
    [anon_sym_ATtestWith] = ACTIONS(119),
    [anon_sym_ATtestdox] = ACTIONS(119),
    [anon_sym_ATticket] = ACTIONS(119),
    [aux_sym_version_token1] = ACTIONS(123),
    [aux_sym_version_token2] = ACTIONS(125),
    [anon_sym_ATpackage_version_AT] = ACTIONS(123),
    [sym__version_vector] = ACTIONS(123),
    [sym__end] = ACTIONS(119),
    [sym__text_not_version] = ACTIONS(127),
  },
  [8] = {
    [aux_sym_namespace_name_repeat1] = STATE(181),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_ATinheritdoc] = ACTIONS(129),
    [anon_sym_ATinheritDoc] = ACTIONS(129),
    [anon_sym_ATapi] = ACTIONS(129),
    [anon_sym_ATfilesource] = ACTIONS(129),
    [anon_sym_ATignore] = ACTIONS(129),
    [anon_sym_ATinternal] = ACTIONS(129),
    [anon_sym_ATcategory] = ACTIONS(129),
    [anon_sym_ATcopyright] = ACTIONS(129),
    [anon_sym_ATtodo] = ACTIONS(129),
    [anon_sym_ATexample] = ACTIONS(129),
    [anon_sym_ATlicense] = ACTIONS(129),
    [anon_sym_ATpackage] = ACTIONS(129),
    [anon_sym_ATsource] = ACTIONS(129),
    [anon_sym_ATsubpackage] = ACTIONS(129),
    [anon_sym_ATuses] = ACTIONS(129),
    [anon_sym_ATauthor] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_ATglobal] = ACTIONS(129),
    [anon_sym_ATlink] = ACTIONS(129),
    [anon_sym_ATmethod] = ACTIONS(129),
    [anon_sym_ATparam] = ACTIONS(129),
    [anon_sym_ATproperty] = ACTIONS(131),
    [anon_sym_ATproperty_DASHread] = ACTIONS(129),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(129),
    [anon_sym_ATreturn] = ACTIONS(129),
    [anon_sym_ATsee] = ACTIONS(129),
    [anon_sym_ATthrows] = ACTIONS(129),
    [anon_sym_ATvar] = ACTIONS(129),
    [anon_sym_ATdeprecated] = ACTIONS(129),
    [anon_sym_ATsince] = ACTIONS(129),
    [anon_sym_ATversion] = ACTIONS(129),
    [anon_sym_ATafter] = ACTIONS(131),
    [anon_sym_ATafterClass] = ACTIONS(129),
    [anon_sym_ATannotation] = ACTIONS(129),
    [anon_sym_ATbackupGlobals] = ACTIONS(129),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(129),
    [anon_sym_ATbefore] = ACTIONS(131),
    [anon_sym_ATbeforeClass] = ACTIONS(129),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(131),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(129),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(129),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(129),
    [anon_sym_ATcovers] = ACTIONS(131),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(131),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(129),
    [anon_sym_ATcoversNothing] = ACTIONS(129),
    [anon_sym_ATdataProvider] = ACTIONS(129),
    [anon_sym_ATdepends] = ACTIONS(131),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(129),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(129),
    [anon_sym_ATgroup] = ACTIONS(129),
    [anon_sym_ATlarge] = ACTIONS(129),
    [anon_sym_ATmedium] = ACTIONS(129),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(129),
    [anon_sym_ATrequires] = ACTIONS(131),
    [anon_sym_ATrequiresusages] = ACTIONS(129),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(129),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(129),
    [anon_sym_ATsmall] = ACTIONS(129),
    [anon_sym_ATtest] = ACTIONS(131),
    [anon_sym_ATtestWith] = ACTIONS(129),
    [anon_sym_ATtestdox] = ACTIONS(129),
    [anon_sym_ATticket] = ACTIONS(129),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(129),
    [anon_sym_BSLASH] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(129),
    [sym__end] = ACTIONS(129),
    [sym_text] = ACTIONS(129),
  },
  [9] = {
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_ATinheritdoc] = ACTIONS(136),
    [anon_sym_ATinheritDoc] = ACTIONS(136),
    [anon_sym_ATapi] = ACTIONS(136),
    [anon_sym_ATfilesource] = ACTIONS(136),
    [anon_sym_ATignore] = ACTIONS(136),
    [anon_sym_ATinternal] = ACTIONS(136),
    [anon_sym_ATcategory] = ACTIONS(136),
    [anon_sym_ATcopyright] = ACTIONS(136),
    [anon_sym_ATtodo] = ACTIONS(136),
    [anon_sym_ATexample] = ACTIONS(136),
    [anon_sym_ATlicense] = ACTIONS(136),
    [anon_sym_ATpackage] = ACTIONS(136),
    [anon_sym_ATsource] = ACTIONS(136),
    [anon_sym_ATsubpackage] = ACTIONS(136),
    [anon_sym_ATuses] = ACTIONS(136),
    [anon_sym_ATauthor] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_ATglobal] = ACTIONS(136),
    [anon_sym_ATlink] = ACTIONS(136),
    [anon_sym_ATmethod] = ACTIONS(136),
    [anon_sym_ATparam] = ACTIONS(136),
    [anon_sym_ATproperty] = ACTIONS(138),
    [anon_sym_ATproperty_DASHread] = ACTIONS(136),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(136),
    [anon_sym_ATreturn] = ACTIONS(136),
    [anon_sym_ATsee] = ACTIONS(136),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(136),
    [anon_sym_ATthrows] = ACTIONS(136),
    [anon_sym_ATvar] = ACTIONS(136),
    [anon_sym_ATdeprecated] = ACTIONS(136),
    [anon_sym_ATsince] = ACTIONS(136),
    [anon_sym_ATversion] = ACTIONS(136),
    [anon_sym_ATafter] = ACTIONS(138),
    [anon_sym_ATafterClass] = ACTIONS(136),
    [anon_sym_ATannotation] = ACTIONS(136),
    [anon_sym_ATbackupGlobals] = ACTIONS(136),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(136),
    [anon_sym_ATbefore] = ACTIONS(138),
    [anon_sym_ATbeforeClass] = ACTIONS(136),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(138),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(136),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(136),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(136),
    [anon_sym_ATcovers] = ACTIONS(138),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(138),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(136),
    [anon_sym_ATcoversNothing] = ACTIONS(136),
    [anon_sym_ATdataProvider] = ACTIONS(136),
    [anon_sym_ATdepends] = ACTIONS(138),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(136),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(136),
    [anon_sym_ATgroup] = ACTIONS(136),
    [anon_sym_ATlarge] = ACTIONS(136),
    [anon_sym_ATmedium] = ACTIONS(136),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(136),
    [anon_sym_ATrequires] = ACTIONS(138),
    [anon_sym_ATrequiresusages] = ACTIONS(136),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(136),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(136),
    [anon_sym_ATsmall] = ACTIONS(136),
    [anon_sym_ATtest] = ACTIONS(138),
    [anon_sym_ATtestWith] = ACTIONS(136),
    [anon_sym_ATtestdox] = ACTIONS(136),
    [anon_sym_ATticket] = ACTIONS(136),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [sym__end] = ACTIONS(136),
    [sym_text] = ACTIONS(136),
  },
  [10] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_ATinheritdoc] = ACTIONS(140),
    [anon_sym_ATinheritDoc] = ACTIONS(140),
    [anon_sym_ATapi] = ACTIONS(140),
    [anon_sym_ATfilesource] = ACTIONS(140),
    [anon_sym_ATignore] = ACTIONS(140),
    [anon_sym_ATinternal] = ACTIONS(140),
    [anon_sym_ATcategory] = ACTIONS(140),
    [anon_sym_ATcopyright] = ACTIONS(140),
    [anon_sym_ATtodo] = ACTIONS(140),
    [anon_sym_ATexample] = ACTIONS(140),
    [anon_sym_ATlicense] = ACTIONS(140),
    [anon_sym_ATpackage] = ACTIONS(140),
    [anon_sym_ATsource] = ACTIONS(140),
    [anon_sym_ATsubpackage] = ACTIONS(140),
    [anon_sym_ATuses] = ACTIONS(140),
    [anon_sym_ATauthor] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(142),
    [anon_sym_ATglobal] = ACTIONS(140),
    [anon_sym_ATlink] = ACTIONS(140),
    [anon_sym_ATmethod] = ACTIONS(140),
    [anon_sym_ATparam] = ACTIONS(140),
    [anon_sym_ATproperty] = ACTIONS(144),
    [anon_sym_ATproperty_DASHread] = ACTIONS(140),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(140),
    [anon_sym_ATreturn] = ACTIONS(140),
    [anon_sym_ATsee] = ACTIONS(140),
    [anon_sym_ATthrows] = ACTIONS(140),
    [anon_sym_ATvar] = ACTIONS(140),
    [anon_sym_ATdeprecated] = ACTIONS(140),
    [anon_sym_ATsince] = ACTIONS(140),
    [anon_sym_ATversion] = ACTIONS(140),
    [anon_sym_ATafter] = ACTIONS(144),
    [anon_sym_ATafterClass] = ACTIONS(140),
    [anon_sym_ATannotation] = ACTIONS(140),
    [anon_sym_ATbackupGlobals] = ACTIONS(140),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(140),
    [anon_sym_ATbefore] = ACTIONS(144),
    [anon_sym_ATbeforeClass] = ACTIONS(140),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(144),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(140),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(140),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(140),
    [anon_sym_ATcovers] = ACTIONS(144),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(144),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(140),
    [anon_sym_ATcoversNothing] = ACTIONS(140),
    [anon_sym_ATdataProvider] = ACTIONS(140),
    [anon_sym_ATdepends] = ACTIONS(144),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(140),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(140),
    [anon_sym_ATgroup] = ACTIONS(140),
    [anon_sym_ATlarge] = ACTIONS(140),
    [anon_sym_ATmedium] = ACTIONS(140),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(140),
    [anon_sym_ATrequires] = ACTIONS(144),
    [anon_sym_ATrequiresusages] = ACTIONS(140),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(140),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(140),
    [anon_sym_ATsmall] = ACTIONS(140),
    [anon_sym_ATtest] = ACTIONS(144),
    [anon_sym_ATtestWith] = ACTIONS(140),
    [anon_sym_ATtestdox] = ACTIONS(140),
    [anon_sym_ATticket] = ACTIONS(140),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(146),
    [anon_sym_PIPE] = ACTIONS(140),
    [sym__end] = ACTIONS(140),
    [sym_text] = ACTIONS(140),
  },
  [11] = {
    [sym_description] = STATE(76),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(148),
    [anon_sym_ATinheritDoc] = ACTIONS(148),
    [anon_sym_ATapi] = ACTIONS(148),
    [anon_sym_ATfilesource] = ACTIONS(148),
    [anon_sym_ATignore] = ACTIONS(148),
    [anon_sym_ATinternal] = ACTIONS(148),
    [anon_sym_ATcategory] = ACTIONS(148),
    [anon_sym_ATcopyright] = ACTIONS(148),
    [anon_sym_ATtodo] = ACTIONS(148),
    [anon_sym_ATexample] = ACTIONS(148),
    [anon_sym_ATlicense] = ACTIONS(148),
    [anon_sym_ATpackage] = ACTIONS(148),
    [anon_sym_ATsource] = ACTIONS(148),
    [anon_sym_ATsubpackage] = ACTIONS(148),
    [anon_sym_ATuses] = ACTIONS(148),
    [anon_sym_ATauthor] = ACTIONS(148),
    [anon_sym_ATglobal] = ACTIONS(148),
    [anon_sym_ATlink] = ACTIONS(148),
    [anon_sym_ATmethod] = ACTIONS(148),
    [anon_sym_ATparam] = ACTIONS(148),
    [anon_sym_ATproperty] = ACTIONS(150),
    [anon_sym_ATproperty_DASHread] = ACTIONS(148),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(148),
    [anon_sym_ATreturn] = ACTIONS(148),
    [anon_sym_ATsee] = ACTIONS(148),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(152),
    [anon_sym_ATthrows] = ACTIONS(148),
    [anon_sym_ATvar] = ACTIONS(148),
    [anon_sym_ATdeprecated] = ACTIONS(148),
    [anon_sym_ATsince] = ACTIONS(148),
    [anon_sym_ATversion] = ACTIONS(148),
    [anon_sym_ATafter] = ACTIONS(150),
    [anon_sym_ATafterClass] = ACTIONS(148),
    [anon_sym_ATannotation] = ACTIONS(148),
    [anon_sym_ATbackupGlobals] = ACTIONS(148),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(148),
    [anon_sym_ATbefore] = ACTIONS(150),
    [anon_sym_ATbeforeClass] = ACTIONS(148),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(150),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(148),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(148),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(148),
    [anon_sym_ATcovers] = ACTIONS(150),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(150),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(148),
    [anon_sym_ATcoversNothing] = ACTIONS(148),
    [anon_sym_ATdataProvider] = ACTIONS(148),
    [anon_sym_ATdepends] = ACTIONS(150),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(148),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(148),
    [anon_sym_ATgroup] = ACTIONS(148),
    [anon_sym_ATlarge] = ACTIONS(148),
    [anon_sym_ATmedium] = ACTIONS(148),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(148),
    [anon_sym_ATrequires] = ACTIONS(150),
    [anon_sym_ATrequiresusages] = ACTIONS(148),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(148),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(148),
    [anon_sym_ATsmall] = ACTIONS(148),
    [anon_sym_ATtest] = ACTIONS(150),
    [anon_sym_ATtestWith] = ACTIONS(148),
    [anon_sym_ATtestdox] = ACTIONS(148),
    [anon_sym_ATticket] = ACTIONS(148),
    [sym__end] = ACTIONS(148),
    [sym_text] = ACTIONS(49),
  },
  [12] = {
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_ATinheritdoc] = ACTIONS(154),
    [anon_sym_ATinheritDoc] = ACTIONS(154),
    [anon_sym_ATapi] = ACTIONS(154),
    [anon_sym_ATfilesource] = ACTIONS(154),
    [anon_sym_ATignore] = ACTIONS(154),
    [anon_sym_ATinternal] = ACTIONS(154),
    [anon_sym_ATcategory] = ACTIONS(154),
    [anon_sym_ATcopyright] = ACTIONS(154),
    [anon_sym_ATtodo] = ACTIONS(154),
    [anon_sym_ATexample] = ACTIONS(154),
    [anon_sym_ATlicense] = ACTIONS(154),
    [anon_sym_ATpackage] = ACTIONS(154),
    [anon_sym_ATsource] = ACTIONS(154),
    [anon_sym_ATsubpackage] = ACTIONS(154),
    [anon_sym_ATuses] = ACTIONS(154),
    [anon_sym_ATauthor] = ACTIONS(154),
    [anon_sym_LT] = ACTIONS(154),
    [anon_sym_ATglobal] = ACTIONS(154),
    [anon_sym_ATlink] = ACTIONS(154),
    [anon_sym_ATmethod] = ACTIONS(154),
    [anon_sym_ATparam] = ACTIONS(154),
    [anon_sym_ATproperty] = ACTIONS(156),
    [anon_sym_ATproperty_DASHread] = ACTIONS(154),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(154),
    [anon_sym_ATreturn] = ACTIONS(154),
    [anon_sym_ATsee] = ACTIONS(154),
    [anon_sym_ATthrows] = ACTIONS(154),
    [anon_sym_ATvar] = ACTIONS(154),
    [anon_sym_ATdeprecated] = ACTIONS(154),
    [anon_sym_ATsince] = ACTIONS(154),
    [anon_sym_ATversion] = ACTIONS(154),
    [anon_sym_ATafter] = ACTIONS(156),
    [anon_sym_ATafterClass] = ACTIONS(154),
    [anon_sym_ATannotation] = ACTIONS(154),
    [anon_sym_ATbackupGlobals] = ACTIONS(154),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(154),
    [anon_sym_ATbefore] = ACTIONS(156),
    [anon_sym_ATbeforeClass] = ACTIONS(154),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(156),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(154),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(154),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(154),
    [anon_sym_ATcovers] = ACTIONS(156),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(156),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(154),
    [anon_sym_ATcoversNothing] = ACTIONS(154),
    [anon_sym_ATdataProvider] = ACTIONS(154),
    [anon_sym_ATdepends] = ACTIONS(156),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(154),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(154),
    [anon_sym_ATgroup] = ACTIONS(154),
    [anon_sym_ATlarge] = ACTIONS(154),
    [anon_sym_ATmedium] = ACTIONS(154),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(154),
    [anon_sym_ATrequires] = ACTIONS(156),
    [anon_sym_ATrequiresusages] = ACTIONS(154),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(154),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(154),
    [anon_sym_ATsmall] = ACTIONS(154),
    [anon_sym_ATtest] = ACTIONS(156),
    [anon_sym_ATtestWith] = ACTIONS(154),
    [anon_sym_ATtestdox] = ACTIONS(154),
    [anon_sym_ATticket] = ACTIONS(154),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [sym__end] = ACTIONS(154),
    [sym_text] = ACTIONS(154),
  },
  [13] = {
    [sym_description] = STATE(79),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(158),
    [anon_sym_ATinheritDoc] = ACTIONS(158),
    [anon_sym_ATapi] = ACTIONS(158),
    [anon_sym_ATfilesource] = ACTIONS(158),
    [anon_sym_ATignore] = ACTIONS(158),
    [anon_sym_ATinternal] = ACTIONS(158),
    [anon_sym_ATcategory] = ACTIONS(158),
    [anon_sym_ATcopyright] = ACTIONS(158),
    [anon_sym_ATtodo] = ACTIONS(158),
    [anon_sym_ATexample] = ACTIONS(158),
    [anon_sym_ATlicense] = ACTIONS(158),
    [anon_sym_ATpackage] = ACTIONS(158),
    [anon_sym_ATsource] = ACTIONS(158),
    [anon_sym_ATsubpackage] = ACTIONS(158),
    [anon_sym_ATuses] = ACTIONS(158),
    [anon_sym_ATauthor] = ACTIONS(158),
    [anon_sym_ATglobal] = ACTIONS(158),
    [anon_sym_ATlink] = ACTIONS(158),
    [anon_sym_ATmethod] = ACTIONS(158),
    [anon_sym_ATparam] = ACTIONS(158),
    [anon_sym_ATproperty] = ACTIONS(160),
    [anon_sym_ATproperty_DASHread] = ACTIONS(158),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(158),
    [anon_sym_ATreturn] = ACTIONS(158),
    [anon_sym_ATsee] = ACTIONS(158),
    [anon_sym_ATthrows] = ACTIONS(158),
    [anon_sym_ATvar] = ACTIONS(158),
    [anon_sym_ATdeprecated] = ACTIONS(158),
    [anon_sym_ATsince] = ACTIONS(158),
    [anon_sym_ATversion] = ACTIONS(158),
    [anon_sym_ATafter] = ACTIONS(160),
    [anon_sym_ATafterClass] = ACTIONS(158),
    [anon_sym_ATannotation] = ACTIONS(158),
    [anon_sym_ATbackupGlobals] = ACTIONS(158),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(158),
    [anon_sym_ATbefore] = ACTIONS(160),
    [anon_sym_ATbeforeClass] = ACTIONS(158),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(160),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(158),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(158),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(158),
    [anon_sym_ATcovers] = ACTIONS(160),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(160),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(158),
    [anon_sym_ATcoversNothing] = ACTIONS(158),
    [anon_sym_ATdataProvider] = ACTIONS(158),
    [anon_sym_ATdepends] = ACTIONS(160),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(158),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(158),
    [anon_sym_ATgroup] = ACTIONS(158),
    [anon_sym_ATlarge] = ACTIONS(158),
    [anon_sym_ATmedium] = ACTIONS(158),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(158),
    [anon_sym_ATrequires] = ACTIONS(160),
    [anon_sym_ATrequiresusages] = ACTIONS(158),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(158),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(158),
    [anon_sym_ATsmall] = ACTIONS(158),
    [anon_sym_ATtest] = ACTIONS(160),
    [anon_sym_ATtestWith] = ACTIONS(158),
    [anon_sym_ATtestdox] = ACTIONS(158),
    [anon_sym_ATticket] = ACTIONS(158),
    [sym__end] = ACTIONS(158),
    [sym_text] = ACTIONS(49),
  },
  [14] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_ATinheritdoc] = ACTIONS(162),
    [anon_sym_ATinheritDoc] = ACTIONS(162),
    [anon_sym_ATapi] = ACTIONS(162),
    [anon_sym_ATfilesource] = ACTIONS(162),
    [anon_sym_ATignore] = ACTIONS(162),
    [anon_sym_ATinternal] = ACTIONS(162),
    [anon_sym_ATcategory] = ACTIONS(162),
    [anon_sym_ATcopyright] = ACTIONS(162),
    [anon_sym_ATtodo] = ACTIONS(162),
    [anon_sym_ATexample] = ACTIONS(162),
    [anon_sym_ATlicense] = ACTIONS(162),
    [anon_sym_ATpackage] = ACTIONS(162),
    [anon_sym_ATsource] = ACTIONS(162),
    [anon_sym_ATsubpackage] = ACTIONS(162),
    [anon_sym_ATuses] = ACTIONS(162),
    [anon_sym_ATauthor] = ACTIONS(162),
    [anon_sym_ATglobal] = ACTIONS(162),
    [anon_sym_ATlink] = ACTIONS(162),
    [anon_sym_ATmethod] = ACTIONS(162),
    [anon_sym_ATparam] = ACTIONS(162),
    [anon_sym_ATproperty] = ACTIONS(164),
    [anon_sym_ATproperty_DASHread] = ACTIONS(162),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(162),
    [anon_sym_ATreturn] = ACTIONS(162),
    [anon_sym_ATsee] = ACTIONS(162),
    [anon_sym_ATthrows] = ACTIONS(162),
    [anon_sym_ATvar] = ACTIONS(162),
    [anon_sym_ATdeprecated] = ACTIONS(162),
    [anon_sym_ATsince] = ACTIONS(162),
    [anon_sym_ATversion] = ACTIONS(162),
    [anon_sym_ATafter] = ACTIONS(164),
    [anon_sym_ATafterClass] = ACTIONS(162),
    [anon_sym_ATannotation] = ACTIONS(162),
    [anon_sym_ATbackupGlobals] = ACTIONS(162),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(162),
    [anon_sym_ATbefore] = ACTIONS(164),
    [anon_sym_ATbeforeClass] = ACTIONS(162),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(164),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(162),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(162),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(162),
    [anon_sym_ATcovers] = ACTIONS(164),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(164),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(162),
    [anon_sym_ATcoversNothing] = ACTIONS(162),
    [anon_sym_ATdataProvider] = ACTIONS(162),
    [anon_sym_ATdepends] = ACTIONS(164),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(162),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(162),
    [anon_sym_ATgroup] = ACTIONS(162),
    [anon_sym_ATlarge] = ACTIONS(162),
    [anon_sym_ATmedium] = ACTIONS(162),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(162),
    [anon_sym_ATrequires] = ACTIONS(164),
    [anon_sym_ATrequiresusages] = ACTIONS(162),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(162),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(162),
    [anon_sym_ATsmall] = ACTIONS(162),
    [anon_sym_ATtest] = ACTIONS(164),
    [anon_sym_ATtestWith] = ACTIONS(162),
    [anon_sym_ATtestdox] = ACTIONS(162),
    [anon_sym_ATticket] = ACTIONS(162),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(162),
    [sym__end] = ACTIONS(162),
    [sym_text] = ACTIONS(162),
  },
  [15] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_ATinheritdoc] = ACTIONS(169),
    [anon_sym_ATinheritDoc] = ACTIONS(169),
    [anon_sym_ATapi] = ACTIONS(169),
    [anon_sym_ATfilesource] = ACTIONS(169),
    [anon_sym_ATignore] = ACTIONS(169),
    [anon_sym_ATinternal] = ACTIONS(169),
    [anon_sym_ATcategory] = ACTIONS(169),
    [anon_sym_ATcopyright] = ACTIONS(169),
    [anon_sym_ATtodo] = ACTIONS(169),
    [anon_sym_ATexample] = ACTIONS(169),
    [anon_sym_ATlicense] = ACTIONS(169),
    [anon_sym_ATpackage] = ACTIONS(169),
    [anon_sym_ATsource] = ACTIONS(169),
    [anon_sym_ATsubpackage] = ACTIONS(169),
    [anon_sym_ATuses] = ACTIONS(169),
    [anon_sym_ATauthor] = ACTIONS(169),
    [anon_sym_ATglobal] = ACTIONS(169),
    [anon_sym_ATlink] = ACTIONS(169),
    [anon_sym_ATmethod] = ACTIONS(169),
    [anon_sym_ATparam] = ACTIONS(169),
    [anon_sym_ATproperty] = ACTIONS(171),
    [anon_sym_ATproperty_DASHread] = ACTIONS(169),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(169),
    [anon_sym_ATreturn] = ACTIONS(169),
    [anon_sym_ATsee] = ACTIONS(169),
    [anon_sym_ATthrows] = ACTIONS(169),
    [anon_sym_ATvar] = ACTIONS(169),
    [anon_sym_ATdeprecated] = ACTIONS(169),
    [anon_sym_ATsince] = ACTIONS(169),
    [anon_sym_ATversion] = ACTIONS(169),
    [anon_sym_ATafter] = ACTIONS(171),
    [anon_sym_ATafterClass] = ACTIONS(169),
    [anon_sym_ATannotation] = ACTIONS(169),
    [anon_sym_ATbackupGlobals] = ACTIONS(169),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(169),
    [anon_sym_ATbefore] = ACTIONS(171),
    [anon_sym_ATbeforeClass] = ACTIONS(169),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(171),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(169),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(169),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(169),
    [anon_sym_ATcovers] = ACTIONS(171),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(171),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(169),
    [anon_sym_ATcoversNothing] = ACTIONS(169),
    [anon_sym_ATdataProvider] = ACTIONS(169),
    [anon_sym_ATdepends] = ACTIONS(171),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(169),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(169),
    [anon_sym_ATgroup] = ACTIONS(169),
    [anon_sym_ATlarge] = ACTIONS(169),
    [anon_sym_ATmedium] = ACTIONS(169),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(169),
    [anon_sym_ATrequires] = ACTIONS(171),
    [anon_sym_ATrequiresusages] = ACTIONS(169),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(169),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(169),
    [anon_sym_ATsmall] = ACTIONS(169),
    [anon_sym_ATtest] = ACTIONS(171),
    [anon_sym_ATtestWith] = ACTIONS(169),
    [anon_sym_ATtestdox] = ACTIONS(169),
    [anon_sym_ATticket] = ACTIONS(169),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(169),
    [sym__end] = ACTIONS(169),
    [sym_text] = ACTIONS(169),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_ATinheritdoc] = ACTIONS(175),
    [anon_sym_ATinheritDoc] = ACTIONS(175),
    [anon_sym_ATapi] = ACTIONS(175),
    [anon_sym_ATfilesource] = ACTIONS(175),
    [anon_sym_ATignore] = ACTIONS(175),
    [anon_sym_ATinternal] = ACTIONS(175),
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
    [sym__end] = ACTIONS(175),
    [sym_text] = ACTIONS(175),
  },
  [17] = {
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_ATinheritdoc] = ACTIONS(129),
    [anon_sym_ATinheritDoc] = ACTIONS(129),
    [anon_sym_ATapi] = ACTIONS(129),
    [anon_sym_ATfilesource] = ACTIONS(129),
    [anon_sym_ATignore] = ACTIONS(129),
    [anon_sym_ATinternal] = ACTIONS(129),
    [anon_sym_ATcategory] = ACTIONS(129),
    [anon_sym_ATcopyright] = ACTIONS(129),
    [anon_sym_ATtodo] = ACTIONS(129),
    [anon_sym_ATexample] = ACTIONS(129),
    [anon_sym_ATlicense] = ACTIONS(129),
    [anon_sym_ATpackage] = ACTIONS(129),
    [anon_sym_ATsource] = ACTIONS(129),
    [anon_sym_ATsubpackage] = ACTIONS(129),
    [anon_sym_ATuses] = ACTIONS(129),
    [anon_sym_ATauthor] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_ATglobal] = ACTIONS(129),
    [anon_sym_ATlink] = ACTIONS(129),
    [anon_sym_ATmethod] = ACTIONS(129),
    [anon_sym_ATparam] = ACTIONS(129),
    [anon_sym_ATproperty] = ACTIONS(131),
    [anon_sym_ATproperty_DASHread] = ACTIONS(129),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(129),
    [anon_sym_ATreturn] = ACTIONS(129),
    [anon_sym_ATsee] = ACTIONS(129),
    [anon_sym_ATthrows] = ACTIONS(129),
    [anon_sym_ATvar] = ACTIONS(129),
    [anon_sym_ATdeprecated] = ACTIONS(129),
    [anon_sym_ATsince] = ACTIONS(129),
    [anon_sym_ATversion] = ACTIONS(129),
    [anon_sym_ATafter] = ACTIONS(131),
    [anon_sym_ATafterClass] = ACTIONS(129),
    [anon_sym_ATannotation] = ACTIONS(129),
    [anon_sym_ATbackupGlobals] = ACTIONS(129),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(129),
    [anon_sym_ATbefore] = ACTIONS(131),
    [anon_sym_ATbeforeClass] = ACTIONS(129),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(131),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(129),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(129),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(129),
    [anon_sym_ATcovers] = ACTIONS(131),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(131),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(129),
    [anon_sym_ATcoversNothing] = ACTIONS(129),
    [anon_sym_ATdataProvider] = ACTIONS(129),
    [anon_sym_ATdepends] = ACTIONS(131),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(129),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(129),
    [anon_sym_ATgroup] = ACTIONS(129),
    [anon_sym_ATlarge] = ACTIONS(129),
    [anon_sym_ATmedium] = ACTIONS(129),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(129),
    [anon_sym_ATrequires] = ACTIONS(131),
    [anon_sym_ATrequiresusages] = ACTIONS(129),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(129),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(129),
    [anon_sym_ATsmall] = ACTIONS(129),
    [anon_sym_ATtest] = ACTIONS(131),
    [anon_sym_ATtestWith] = ACTIONS(129),
    [anon_sym_ATtestdox] = ACTIONS(129),
    [anon_sym_ATticket] = ACTIONS(129),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(129),
    [sym__end] = ACTIONS(129),
    [sym_text] = ACTIONS(129),
  },
  [18] = {
    [sym_description] = STATE(61),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(179),
    [anon_sym_ATinheritDoc] = ACTIONS(179),
    [anon_sym_ATapi] = ACTIONS(179),
    [anon_sym_ATfilesource] = ACTIONS(179),
    [anon_sym_ATignore] = ACTIONS(179),
    [anon_sym_ATinternal] = ACTIONS(179),
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
    [sym__end] = ACTIONS(179),
    [sym_text] = ACTIONS(49),
  },
  [19] = {
    [sym_description] = STATE(68),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(183),
    [anon_sym_ATinheritDoc] = ACTIONS(183),
    [anon_sym_ATapi] = ACTIONS(183),
    [anon_sym_ATfilesource] = ACTIONS(183),
    [anon_sym_ATignore] = ACTIONS(183),
    [anon_sym_ATinternal] = ACTIONS(183),
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
    [sym__end] = ACTIONS(183),
    [sym_text] = ACTIONS(49),
  },
  [20] = {
    [sym_description] = STATE(60),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(187),
    [anon_sym_ATinheritDoc] = ACTIONS(187),
    [anon_sym_ATapi] = ACTIONS(187),
    [anon_sym_ATfilesource] = ACTIONS(187),
    [anon_sym_ATignore] = ACTIONS(187),
    [anon_sym_ATinternal] = ACTIONS(187),
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
    [sym__end] = ACTIONS(187),
    [sym_text] = ACTIONS(49),
  },
  [21] = {
    [sym_description] = STATE(64),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(191),
    [anon_sym_ATinheritDoc] = ACTIONS(191),
    [anon_sym_ATapi] = ACTIONS(191),
    [anon_sym_ATfilesource] = ACTIONS(191),
    [anon_sym_ATignore] = ACTIONS(191),
    [anon_sym_ATinternal] = ACTIONS(191),
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
    [sym__end] = ACTIONS(191),
    [sym_text] = ACTIONS(49),
  },
  [22] = {
    [sym_description] = STATE(65),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(195),
    [anon_sym_ATinheritDoc] = ACTIONS(195),
    [anon_sym_ATapi] = ACTIONS(195),
    [anon_sym_ATfilesource] = ACTIONS(195),
    [anon_sym_ATignore] = ACTIONS(195),
    [anon_sym_ATinternal] = ACTIONS(195),
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
    [sym__end] = ACTIONS(195),
    [sym_text] = ACTIONS(49),
  },
  [23] = {
    [sym_description] = STATE(59),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(199),
    [anon_sym_ATinheritDoc] = ACTIONS(199),
    [anon_sym_ATapi] = ACTIONS(199),
    [anon_sym_ATfilesource] = ACTIONS(199),
    [anon_sym_ATignore] = ACTIONS(199),
    [anon_sym_ATinternal] = ACTIONS(199),
    [anon_sym_ATcategory] = ACTIONS(199),
    [anon_sym_ATcopyright] = ACTIONS(199),
    [anon_sym_ATtodo] = ACTIONS(199),
    [anon_sym_ATexample] = ACTIONS(199),
    [anon_sym_ATlicense] = ACTIONS(199),
    [anon_sym_ATpackage] = ACTIONS(199),
    [anon_sym_ATsource] = ACTIONS(199),
    [anon_sym_ATsubpackage] = ACTIONS(199),
    [anon_sym_ATuses] = ACTIONS(199),
    [anon_sym_ATauthor] = ACTIONS(199),
    [anon_sym_ATglobal] = ACTIONS(199),
    [anon_sym_ATlink] = ACTIONS(199),
    [anon_sym_ATmethod] = ACTIONS(199),
    [anon_sym_ATparam] = ACTIONS(199),
    [anon_sym_ATproperty] = ACTIONS(201),
    [anon_sym_ATproperty_DASHread] = ACTIONS(199),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(199),
    [anon_sym_ATreturn] = ACTIONS(199),
    [anon_sym_ATsee] = ACTIONS(199),
    [anon_sym_ATthrows] = ACTIONS(199),
    [anon_sym_ATvar] = ACTIONS(199),
    [anon_sym_ATdeprecated] = ACTIONS(199),
    [anon_sym_ATsince] = ACTIONS(199),
    [anon_sym_ATversion] = ACTIONS(199),
    [anon_sym_ATafter] = ACTIONS(201),
    [anon_sym_ATafterClass] = ACTIONS(199),
    [anon_sym_ATannotation] = ACTIONS(199),
    [anon_sym_ATbackupGlobals] = ACTIONS(199),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(199),
    [anon_sym_ATbefore] = ACTIONS(201),
    [anon_sym_ATbeforeClass] = ACTIONS(199),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(201),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(199),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(199),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(199),
    [anon_sym_ATcovers] = ACTIONS(201),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(201),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(199),
    [anon_sym_ATcoversNothing] = ACTIONS(199),
    [anon_sym_ATdataProvider] = ACTIONS(199),
    [anon_sym_ATdepends] = ACTIONS(201),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(199),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(199),
    [anon_sym_ATgroup] = ACTIONS(199),
    [anon_sym_ATlarge] = ACTIONS(199),
    [anon_sym_ATmedium] = ACTIONS(199),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(199),
    [anon_sym_ATrequires] = ACTIONS(201),
    [anon_sym_ATrequiresusages] = ACTIONS(199),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(199),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(199),
    [anon_sym_ATsmall] = ACTIONS(199),
    [anon_sym_ATtest] = ACTIONS(201),
    [anon_sym_ATtestWith] = ACTIONS(199),
    [anon_sym_ATtestdox] = ACTIONS(199),
    [anon_sym_ATticket] = ACTIONS(199),
    [sym__end] = ACTIONS(199),
    [sym_text] = ACTIONS(49),
  },
  [24] = {
    [sym_description] = STATE(66),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(203),
    [anon_sym_ATinheritDoc] = ACTIONS(203),
    [anon_sym_ATapi] = ACTIONS(203),
    [anon_sym_ATfilesource] = ACTIONS(203),
    [anon_sym_ATignore] = ACTIONS(203),
    [anon_sym_ATinternal] = ACTIONS(203),
    [anon_sym_ATcategory] = ACTIONS(203),
    [anon_sym_ATcopyright] = ACTIONS(203),
    [anon_sym_ATtodo] = ACTIONS(203),
    [anon_sym_ATexample] = ACTIONS(203),
    [anon_sym_ATlicense] = ACTIONS(203),
    [anon_sym_ATpackage] = ACTIONS(203),
    [anon_sym_ATsource] = ACTIONS(203),
    [anon_sym_ATsubpackage] = ACTIONS(203),
    [anon_sym_ATuses] = ACTIONS(203),
    [anon_sym_ATauthor] = ACTIONS(203),
    [anon_sym_ATglobal] = ACTIONS(203),
    [anon_sym_ATlink] = ACTIONS(203),
    [anon_sym_ATmethod] = ACTIONS(203),
    [anon_sym_ATparam] = ACTIONS(203),
    [anon_sym_ATproperty] = ACTIONS(205),
    [anon_sym_ATproperty_DASHread] = ACTIONS(203),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(203),
    [anon_sym_ATreturn] = ACTIONS(203),
    [anon_sym_ATsee] = ACTIONS(203),
    [anon_sym_ATthrows] = ACTIONS(203),
    [anon_sym_ATvar] = ACTIONS(203),
    [anon_sym_ATdeprecated] = ACTIONS(203),
    [anon_sym_ATsince] = ACTIONS(203),
    [anon_sym_ATversion] = ACTIONS(203),
    [anon_sym_ATafter] = ACTIONS(205),
    [anon_sym_ATafterClass] = ACTIONS(203),
    [anon_sym_ATannotation] = ACTIONS(203),
    [anon_sym_ATbackupGlobals] = ACTIONS(203),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(203),
    [anon_sym_ATbefore] = ACTIONS(205),
    [anon_sym_ATbeforeClass] = ACTIONS(203),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(205),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(203),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(203),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(203),
    [anon_sym_ATcovers] = ACTIONS(205),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(205),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(203),
    [anon_sym_ATcoversNothing] = ACTIONS(203),
    [anon_sym_ATdataProvider] = ACTIONS(203),
    [anon_sym_ATdepends] = ACTIONS(205),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(203),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(203),
    [anon_sym_ATgroup] = ACTIONS(203),
    [anon_sym_ATlarge] = ACTIONS(203),
    [anon_sym_ATmedium] = ACTIONS(203),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(203),
    [anon_sym_ATrequires] = ACTIONS(205),
    [anon_sym_ATrequiresusages] = ACTIONS(203),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(203),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(203),
    [anon_sym_ATsmall] = ACTIONS(203),
    [anon_sym_ATtest] = ACTIONS(205),
    [anon_sym_ATtestWith] = ACTIONS(203),
    [anon_sym_ATtestdox] = ACTIONS(203),
    [anon_sym_ATticket] = ACTIONS(203),
    [sym__end] = ACTIONS(203),
    [sym_text] = ACTIONS(49),
  },
  [25] = {
    [sym_description] = STATE(75),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(207),
    [anon_sym_ATinheritDoc] = ACTIONS(207),
    [anon_sym_ATapi] = ACTIONS(207),
    [anon_sym_ATfilesource] = ACTIONS(207),
    [anon_sym_ATignore] = ACTIONS(207),
    [anon_sym_ATinternal] = ACTIONS(207),
    [anon_sym_ATcategory] = ACTIONS(207),
    [anon_sym_ATcopyright] = ACTIONS(207),
    [anon_sym_ATtodo] = ACTIONS(207),
    [anon_sym_ATexample] = ACTIONS(207),
    [anon_sym_ATlicense] = ACTIONS(207),
    [anon_sym_ATpackage] = ACTIONS(207),
    [anon_sym_ATsource] = ACTIONS(207),
    [anon_sym_ATsubpackage] = ACTIONS(207),
    [anon_sym_ATuses] = ACTIONS(207),
    [anon_sym_ATauthor] = ACTIONS(207),
    [anon_sym_ATglobal] = ACTIONS(207),
    [anon_sym_ATlink] = ACTIONS(207),
    [anon_sym_ATmethod] = ACTIONS(207),
    [anon_sym_ATparam] = ACTIONS(207),
    [anon_sym_ATproperty] = ACTIONS(209),
    [anon_sym_ATproperty_DASHread] = ACTIONS(207),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(207),
    [anon_sym_ATreturn] = ACTIONS(207),
    [anon_sym_ATsee] = ACTIONS(207),
    [anon_sym_ATthrows] = ACTIONS(207),
    [anon_sym_ATvar] = ACTIONS(207),
    [anon_sym_ATdeprecated] = ACTIONS(207),
    [anon_sym_ATsince] = ACTIONS(207),
    [anon_sym_ATversion] = ACTIONS(207),
    [anon_sym_ATafter] = ACTIONS(209),
    [anon_sym_ATafterClass] = ACTIONS(207),
    [anon_sym_ATannotation] = ACTIONS(207),
    [anon_sym_ATbackupGlobals] = ACTIONS(207),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(207),
    [anon_sym_ATbefore] = ACTIONS(209),
    [anon_sym_ATbeforeClass] = ACTIONS(207),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(209),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(207),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(207),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(207),
    [anon_sym_ATcovers] = ACTIONS(209),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(209),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(207),
    [anon_sym_ATcoversNothing] = ACTIONS(207),
    [anon_sym_ATdataProvider] = ACTIONS(207),
    [anon_sym_ATdepends] = ACTIONS(209),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(207),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(207),
    [anon_sym_ATgroup] = ACTIONS(207),
    [anon_sym_ATlarge] = ACTIONS(207),
    [anon_sym_ATmedium] = ACTIONS(207),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(207),
    [anon_sym_ATrequires] = ACTIONS(209),
    [anon_sym_ATrequiresusages] = ACTIONS(207),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(207),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(207),
    [anon_sym_ATsmall] = ACTIONS(207),
    [anon_sym_ATtest] = ACTIONS(209),
    [anon_sym_ATtestWith] = ACTIONS(207),
    [anon_sym_ATtestdox] = ACTIONS(207),
    [anon_sym_ATticket] = ACTIONS(207),
    [sym__end] = ACTIONS(207),
    [sym_text] = ACTIONS(49),
  },
  [26] = {
    [sym_description] = STATE(73),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(211),
    [anon_sym_ATinheritDoc] = ACTIONS(211),
    [anon_sym_ATapi] = ACTIONS(211),
    [anon_sym_ATfilesource] = ACTIONS(211),
    [anon_sym_ATignore] = ACTIONS(211),
    [anon_sym_ATinternal] = ACTIONS(211),
    [anon_sym_ATcategory] = ACTIONS(211),
    [anon_sym_ATcopyright] = ACTIONS(211),
    [anon_sym_ATtodo] = ACTIONS(211),
    [anon_sym_ATexample] = ACTIONS(211),
    [anon_sym_ATlicense] = ACTIONS(211),
    [anon_sym_ATpackage] = ACTIONS(211),
    [anon_sym_ATsource] = ACTIONS(211),
    [anon_sym_ATsubpackage] = ACTIONS(211),
    [anon_sym_ATuses] = ACTIONS(211),
    [anon_sym_ATauthor] = ACTIONS(211),
    [anon_sym_ATglobal] = ACTIONS(211),
    [anon_sym_ATlink] = ACTIONS(211),
    [anon_sym_ATmethod] = ACTIONS(211),
    [anon_sym_ATparam] = ACTIONS(211),
    [anon_sym_ATproperty] = ACTIONS(213),
    [anon_sym_ATproperty_DASHread] = ACTIONS(211),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(211),
    [anon_sym_ATreturn] = ACTIONS(211),
    [anon_sym_ATsee] = ACTIONS(211),
    [anon_sym_ATthrows] = ACTIONS(211),
    [anon_sym_ATvar] = ACTIONS(211),
    [anon_sym_ATdeprecated] = ACTIONS(211),
    [anon_sym_ATsince] = ACTIONS(211),
    [anon_sym_ATversion] = ACTIONS(211),
    [anon_sym_ATafter] = ACTIONS(213),
    [anon_sym_ATafterClass] = ACTIONS(211),
    [anon_sym_ATannotation] = ACTIONS(211),
    [anon_sym_ATbackupGlobals] = ACTIONS(211),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(211),
    [anon_sym_ATbefore] = ACTIONS(213),
    [anon_sym_ATbeforeClass] = ACTIONS(211),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(213),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(211),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(211),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(211),
    [anon_sym_ATcovers] = ACTIONS(213),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(213),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(211),
    [anon_sym_ATcoversNothing] = ACTIONS(211),
    [anon_sym_ATdataProvider] = ACTIONS(211),
    [anon_sym_ATdepends] = ACTIONS(213),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(211),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(211),
    [anon_sym_ATgroup] = ACTIONS(211),
    [anon_sym_ATlarge] = ACTIONS(211),
    [anon_sym_ATmedium] = ACTIONS(211),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(211),
    [anon_sym_ATrequires] = ACTIONS(213),
    [anon_sym_ATrequiresusages] = ACTIONS(211),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(211),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(211),
    [anon_sym_ATsmall] = ACTIONS(211),
    [anon_sym_ATtest] = ACTIONS(213),
    [anon_sym_ATtestWith] = ACTIONS(211),
    [anon_sym_ATtestdox] = ACTIONS(211),
    [anon_sym_ATticket] = ACTIONS(211),
    [sym__end] = ACTIONS(211),
    [sym_text] = ACTIONS(49),
  },
  [27] = {
    [sym_description] = STATE(80),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(215),
    [anon_sym_ATinheritDoc] = ACTIONS(215),
    [anon_sym_ATapi] = ACTIONS(215),
    [anon_sym_ATfilesource] = ACTIONS(215),
    [anon_sym_ATignore] = ACTIONS(215),
    [anon_sym_ATinternal] = ACTIONS(215),
    [anon_sym_ATcategory] = ACTIONS(215),
    [anon_sym_ATcopyright] = ACTIONS(215),
    [anon_sym_ATtodo] = ACTIONS(215),
    [anon_sym_ATexample] = ACTIONS(215),
    [anon_sym_ATlicense] = ACTIONS(215),
    [anon_sym_ATpackage] = ACTIONS(215),
    [anon_sym_ATsource] = ACTIONS(215),
    [anon_sym_ATsubpackage] = ACTIONS(215),
    [anon_sym_ATuses] = ACTIONS(215),
    [anon_sym_ATauthor] = ACTIONS(215),
    [anon_sym_ATglobal] = ACTIONS(215),
    [anon_sym_ATlink] = ACTIONS(215),
    [anon_sym_ATmethod] = ACTIONS(215),
    [anon_sym_ATparam] = ACTIONS(215),
    [anon_sym_ATproperty] = ACTIONS(217),
    [anon_sym_ATproperty_DASHread] = ACTIONS(215),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(215),
    [anon_sym_ATreturn] = ACTIONS(215),
    [anon_sym_ATsee] = ACTIONS(215),
    [anon_sym_ATthrows] = ACTIONS(215),
    [anon_sym_ATvar] = ACTIONS(215),
    [anon_sym_ATdeprecated] = ACTIONS(215),
    [anon_sym_ATsince] = ACTIONS(215),
    [anon_sym_ATversion] = ACTIONS(215),
    [anon_sym_ATafter] = ACTIONS(217),
    [anon_sym_ATafterClass] = ACTIONS(215),
    [anon_sym_ATannotation] = ACTIONS(215),
    [anon_sym_ATbackupGlobals] = ACTIONS(215),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(215),
    [anon_sym_ATbefore] = ACTIONS(217),
    [anon_sym_ATbeforeClass] = ACTIONS(215),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(217),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(215),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(215),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(215),
    [anon_sym_ATcovers] = ACTIONS(217),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(217),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(215),
    [anon_sym_ATcoversNothing] = ACTIONS(215),
    [anon_sym_ATdataProvider] = ACTIONS(215),
    [anon_sym_ATdepends] = ACTIONS(217),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(215),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(215),
    [anon_sym_ATgroup] = ACTIONS(215),
    [anon_sym_ATlarge] = ACTIONS(215),
    [anon_sym_ATmedium] = ACTIONS(215),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(215),
    [anon_sym_ATrequires] = ACTIONS(217),
    [anon_sym_ATrequiresusages] = ACTIONS(215),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(215),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(215),
    [anon_sym_ATsmall] = ACTIONS(215),
    [anon_sym_ATtest] = ACTIONS(217),
    [anon_sym_ATtestWith] = ACTIONS(215),
    [anon_sym_ATtestdox] = ACTIONS(215),
    [anon_sym_ATticket] = ACTIONS(215),
    [sym__end] = ACTIONS(215),
    [sym_text] = ACTIONS(49),
  },
  [28] = {
    [sym_description] = STATE(77),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(219),
    [anon_sym_ATinheritDoc] = ACTIONS(219),
    [anon_sym_ATapi] = ACTIONS(219),
    [anon_sym_ATfilesource] = ACTIONS(219),
    [anon_sym_ATignore] = ACTIONS(219),
    [anon_sym_ATinternal] = ACTIONS(219),
    [anon_sym_ATcategory] = ACTIONS(219),
    [anon_sym_ATcopyright] = ACTIONS(219),
    [anon_sym_ATtodo] = ACTIONS(219),
    [anon_sym_ATexample] = ACTIONS(219),
    [anon_sym_ATlicense] = ACTIONS(219),
    [anon_sym_ATpackage] = ACTIONS(219),
    [anon_sym_ATsource] = ACTIONS(219),
    [anon_sym_ATsubpackage] = ACTIONS(219),
    [anon_sym_ATuses] = ACTIONS(219),
    [anon_sym_ATauthor] = ACTIONS(219),
    [anon_sym_ATglobal] = ACTIONS(219),
    [anon_sym_ATlink] = ACTIONS(219),
    [anon_sym_ATmethod] = ACTIONS(219),
    [anon_sym_ATparam] = ACTIONS(219),
    [anon_sym_ATproperty] = ACTIONS(221),
    [anon_sym_ATproperty_DASHread] = ACTIONS(219),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(219),
    [anon_sym_ATreturn] = ACTIONS(219),
    [anon_sym_ATsee] = ACTIONS(219),
    [anon_sym_ATthrows] = ACTIONS(219),
    [anon_sym_ATvar] = ACTIONS(219),
    [anon_sym_ATdeprecated] = ACTIONS(219),
    [anon_sym_ATsince] = ACTIONS(219),
    [anon_sym_ATversion] = ACTIONS(219),
    [anon_sym_ATafter] = ACTIONS(221),
    [anon_sym_ATafterClass] = ACTIONS(219),
    [anon_sym_ATannotation] = ACTIONS(219),
    [anon_sym_ATbackupGlobals] = ACTIONS(219),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(219),
    [anon_sym_ATbefore] = ACTIONS(221),
    [anon_sym_ATbeforeClass] = ACTIONS(219),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(221),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(219),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(219),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(219),
    [anon_sym_ATcovers] = ACTIONS(221),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(221),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(219),
    [anon_sym_ATcoversNothing] = ACTIONS(219),
    [anon_sym_ATdataProvider] = ACTIONS(219),
    [anon_sym_ATdepends] = ACTIONS(221),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(219),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(219),
    [anon_sym_ATgroup] = ACTIONS(219),
    [anon_sym_ATlarge] = ACTIONS(219),
    [anon_sym_ATmedium] = ACTIONS(219),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(219),
    [anon_sym_ATrequires] = ACTIONS(221),
    [anon_sym_ATrequiresusages] = ACTIONS(219),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(219),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(219),
    [anon_sym_ATsmall] = ACTIONS(219),
    [anon_sym_ATtest] = ACTIONS(221),
    [anon_sym_ATtestWith] = ACTIONS(219),
    [anon_sym_ATtestdox] = ACTIONS(219),
    [anon_sym_ATticket] = ACTIONS(219),
    [sym__end] = ACTIONS(219),
    [sym_text] = ACTIONS(49),
  },
  [29] = {
    [sym_description] = STATE(83),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(223),
    [anon_sym_ATinheritDoc] = ACTIONS(223),
    [anon_sym_ATapi] = ACTIONS(223),
    [anon_sym_ATfilesource] = ACTIONS(223),
    [anon_sym_ATignore] = ACTIONS(223),
    [anon_sym_ATinternal] = ACTIONS(223),
    [anon_sym_ATcategory] = ACTIONS(223),
    [anon_sym_ATcopyright] = ACTIONS(223),
    [anon_sym_ATtodo] = ACTIONS(223),
    [anon_sym_ATexample] = ACTIONS(223),
    [anon_sym_ATlicense] = ACTIONS(223),
    [anon_sym_ATpackage] = ACTIONS(223),
    [anon_sym_ATsource] = ACTIONS(223),
    [anon_sym_ATsubpackage] = ACTIONS(223),
    [anon_sym_ATuses] = ACTIONS(223),
    [anon_sym_ATauthor] = ACTIONS(223),
    [anon_sym_ATglobal] = ACTIONS(223),
    [anon_sym_ATlink] = ACTIONS(223),
    [anon_sym_ATmethod] = ACTIONS(223),
    [anon_sym_ATparam] = ACTIONS(223),
    [anon_sym_ATproperty] = ACTIONS(225),
    [anon_sym_ATproperty_DASHread] = ACTIONS(223),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(223),
    [anon_sym_ATreturn] = ACTIONS(223),
    [anon_sym_ATsee] = ACTIONS(223),
    [anon_sym_ATthrows] = ACTIONS(223),
    [anon_sym_ATvar] = ACTIONS(223),
    [anon_sym_ATdeprecated] = ACTIONS(223),
    [anon_sym_ATsince] = ACTIONS(223),
    [anon_sym_ATversion] = ACTIONS(223),
    [anon_sym_ATafter] = ACTIONS(225),
    [anon_sym_ATafterClass] = ACTIONS(223),
    [anon_sym_ATannotation] = ACTIONS(223),
    [anon_sym_ATbackupGlobals] = ACTIONS(223),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(223),
    [anon_sym_ATbefore] = ACTIONS(225),
    [anon_sym_ATbeforeClass] = ACTIONS(223),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(225),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(223),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(223),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(223),
    [anon_sym_ATcovers] = ACTIONS(225),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(225),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(223),
    [anon_sym_ATcoversNothing] = ACTIONS(223),
    [anon_sym_ATdataProvider] = ACTIONS(223),
    [anon_sym_ATdepends] = ACTIONS(225),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(223),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(223),
    [anon_sym_ATgroup] = ACTIONS(223),
    [anon_sym_ATlarge] = ACTIONS(223),
    [anon_sym_ATmedium] = ACTIONS(223),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(223),
    [anon_sym_ATrequires] = ACTIONS(225),
    [anon_sym_ATrequiresusages] = ACTIONS(223),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(223),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(223),
    [anon_sym_ATsmall] = ACTIONS(223),
    [anon_sym_ATtest] = ACTIONS(225),
    [anon_sym_ATtestWith] = ACTIONS(223),
    [anon_sym_ATtestdox] = ACTIONS(223),
    [anon_sym_ATticket] = ACTIONS(223),
    [sym__end] = ACTIONS(223),
    [sym_text] = ACTIONS(49),
  },
  [30] = {
    [sym_description] = STATE(81),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(227),
    [anon_sym_ATinheritDoc] = ACTIONS(227),
    [anon_sym_ATapi] = ACTIONS(227),
    [anon_sym_ATfilesource] = ACTIONS(227),
    [anon_sym_ATignore] = ACTIONS(227),
    [anon_sym_ATinternal] = ACTIONS(227),
    [anon_sym_ATcategory] = ACTIONS(227),
    [anon_sym_ATcopyright] = ACTIONS(227),
    [anon_sym_ATtodo] = ACTIONS(227),
    [anon_sym_ATexample] = ACTIONS(227),
    [anon_sym_ATlicense] = ACTIONS(227),
    [anon_sym_ATpackage] = ACTIONS(227),
    [anon_sym_ATsource] = ACTIONS(227),
    [anon_sym_ATsubpackage] = ACTIONS(227),
    [anon_sym_ATuses] = ACTIONS(227),
    [anon_sym_ATauthor] = ACTIONS(227),
    [anon_sym_ATglobal] = ACTIONS(227),
    [anon_sym_ATlink] = ACTIONS(227),
    [anon_sym_ATmethod] = ACTIONS(227),
    [anon_sym_ATparam] = ACTIONS(227),
    [anon_sym_ATproperty] = ACTIONS(229),
    [anon_sym_ATproperty_DASHread] = ACTIONS(227),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(227),
    [anon_sym_ATreturn] = ACTIONS(227),
    [anon_sym_ATsee] = ACTIONS(227),
    [anon_sym_ATthrows] = ACTIONS(227),
    [anon_sym_ATvar] = ACTIONS(227),
    [anon_sym_ATdeprecated] = ACTIONS(227),
    [anon_sym_ATsince] = ACTIONS(227),
    [anon_sym_ATversion] = ACTIONS(227),
    [anon_sym_ATafter] = ACTIONS(229),
    [anon_sym_ATafterClass] = ACTIONS(227),
    [anon_sym_ATannotation] = ACTIONS(227),
    [anon_sym_ATbackupGlobals] = ACTIONS(227),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(227),
    [anon_sym_ATbefore] = ACTIONS(229),
    [anon_sym_ATbeforeClass] = ACTIONS(227),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(229),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(227),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(227),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(227),
    [anon_sym_ATcovers] = ACTIONS(229),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(229),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(227),
    [anon_sym_ATcoversNothing] = ACTIONS(227),
    [anon_sym_ATdataProvider] = ACTIONS(227),
    [anon_sym_ATdepends] = ACTIONS(229),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(227),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(227),
    [anon_sym_ATgroup] = ACTIONS(227),
    [anon_sym_ATlarge] = ACTIONS(227),
    [anon_sym_ATmedium] = ACTIONS(227),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(227),
    [anon_sym_ATrequires] = ACTIONS(229),
    [anon_sym_ATrequiresusages] = ACTIONS(227),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(227),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(227),
    [anon_sym_ATsmall] = ACTIONS(227),
    [anon_sym_ATtest] = ACTIONS(229),
    [anon_sym_ATtestWith] = ACTIONS(227),
    [anon_sym_ATtestdox] = ACTIONS(227),
    [anon_sym_ATticket] = ACTIONS(227),
    [sym__end] = ACTIONS(227),
    [sym_text] = ACTIONS(49),
  },
  [31] = {
    [sym_description] = STATE(84),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(231),
    [anon_sym_ATinheritDoc] = ACTIONS(231),
    [anon_sym_ATapi] = ACTIONS(231),
    [anon_sym_ATfilesource] = ACTIONS(231),
    [anon_sym_ATignore] = ACTIONS(231),
    [anon_sym_ATinternal] = ACTIONS(231),
    [anon_sym_ATcategory] = ACTIONS(231),
    [anon_sym_ATcopyright] = ACTIONS(231),
    [anon_sym_ATtodo] = ACTIONS(231),
    [anon_sym_ATexample] = ACTIONS(231),
    [anon_sym_ATlicense] = ACTIONS(231),
    [anon_sym_ATpackage] = ACTIONS(231),
    [anon_sym_ATsource] = ACTIONS(231),
    [anon_sym_ATsubpackage] = ACTIONS(231),
    [anon_sym_ATuses] = ACTIONS(231),
    [anon_sym_ATauthor] = ACTIONS(231),
    [anon_sym_ATglobal] = ACTIONS(231),
    [anon_sym_ATlink] = ACTIONS(231),
    [anon_sym_ATmethod] = ACTIONS(231),
    [anon_sym_ATparam] = ACTIONS(231),
    [anon_sym_ATproperty] = ACTIONS(233),
    [anon_sym_ATproperty_DASHread] = ACTIONS(231),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(231),
    [anon_sym_ATreturn] = ACTIONS(231),
    [anon_sym_ATsee] = ACTIONS(231),
    [anon_sym_ATthrows] = ACTIONS(231),
    [anon_sym_ATvar] = ACTIONS(231),
    [anon_sym_ATdeprecated] = ACTIONS(231),
    [anon_sym_ATsince] = ACTIONS(231),
    [anon_sym_ATversion] = ACTIONS(231),
    [anon_sym_ATafter] = ACTIONS(233),
    [anon_sym_ATafterClass] = ACTIONS(231),
    [anon_sym_ATannotation] = ACTIONS(231),
    [anon_sym_ATbackupGlobals] = ACTIONS(231),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(231),
    [anon_sym_ATbefore] = ACTIONS(233),
    [anon_sym_ATbeforeClass] = ACTIONS(231),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(233),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(231),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(231),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(231),
    [anon_sym_ATcovers] = ACTIONS(233),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(233),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(231),
    [anon_sym_ATcoversNothing] = ACTIONS(231),
    [anon_sym_ATdataProvider] = ACTIONS(231),
    [anon_sym_ATdepends] = ACTIONS(233),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(231),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(231),
    [anon_sym_ATgroup] = ACTIONS(231),
    [anon_sym_ATlarge] = ACTIONS(231),
    [anon_sym_ATmedium] = ACTIONS(231),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(231),
    [anon_sym_ATrequires] = ACTIONS(233),
    [anon_sym_ATrequiresusages] = ACTIONS(231),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(231),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(231),
    [anon_sym_ATsmall] = ACTIONS(231),
    [anon_sym_ATtest] = ACTIONS(233),
    [anon_sym_ATtestWith] = ACTIONS(231),
    [anon_sym_ATtestdox] = ACTIONS(231),
    [anon_sym_ATticket] = ACTIONS(231),
    [sym__end] = ACTIONS(231),
    [sym_text] = ACTIONS(49),
  },
  [32] = {
    [sym_description] = STATE(78),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(235),
    [anon_sym_ATinheritDoc] = ACTIONS(235),
    [anon_sym_ATapi] = ACTIONS(235),
    [anon_sym_ATfilesource] = ACTIONS(235),
    [anon_sym_ATignore] = ACTIONS(235),
    [anon_sym_ATinternal] = ACTIONS(235),
    [anon_sym_ATcategory] = ACTIONS(235),
    [anon_sym_ATcopyright] = ACTIONS(235),
    [anon_sym_ATtodo] = ACTIONS(235),
    [anon_sym_ATexample] = ACTIONS(235),
    [anon_sym_ATlicense] = ACTIONS(235),
    [anon_sym_ATpackage] = ACTIONS(235),
    [anon_sym_ATsource] = ACTIONS(235),
    [anon_sym_ATsubpackage] = ACTIONS(235),
    [anon_sym_ATuses] = ACTIONS(235),
    [anon_sym_ATauthor] = ACTIONS(235),
    [anon_sym_ATglobal] = ACTIONS(235),
    [anon_sym_ATlink] = ACTIONS(235),
    [anon_sym_ATmethod] = ACTIONS(235),
    [anon_sym_ATparam] = ACTIONS(235),
    [anon_sym_ATproperty] = ACTIONS(237),
    [anon_sym_ATproperty_DASHread] = ACTIONS(235),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(235),
    [anon_sym_ATreturn] = ACTIONS(235),
    [anon_sym_ATsee] = ACTIONS(235),
    [anon_sym_ATthrows] = ACTIONS(235),
    [anon_sym_ATvar] = ACTIONS(235),
    [anon_sym_ATdeprecated] = ACTIONS(235),
    [anon_sym_ATsince] = ACTIONS(235),
    [anon_sym_ATversion] = ACTIONS(235),
    [anon_sym_ATafter] = ACTIONS(237),
    [anon_sym_ATafterClass] = ACTIONS(235),
    [anon_sym_ATannotation] = ACTIONS(235),
    [anon_sym_ATbackupGlobals] = ACTIONS(235),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(235),
    [anon_sym_ATbefore] = ACTIONS(237),
    [anon_sym_ATbeforeClass] = ACTIONS(235),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(237),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(235),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(235),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(235),
    [anon_sym_ATcovers] = ACTIONS(237),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(237),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(235),
    [anon_sym_ATcoversNothing] = ACTIONS(235),
    [anon_sym_ATdataProvider] = ACTIONS(235),
    [anon_sym_ATdepends] = ACTIONS(237),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(235),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(235),
    [anon_sym_ATgroup] = ACTIONS(235),
    [anon_sym_ATlarge] = ACTIONS(235),
    [anon_sym_ATmedium] = ACTIONS(235),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(235),
    [anon_sym_ATrequires] = ACTIONS(237),
    [anon_sym_ATrequiresusages] = ACTIONS(235),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(235),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(235),
    [anon_sym_ATsmall] = ACTIONS(235),
    [anon_sym_ATtest] = ACTIONS(237),
    [anon_sym_ATtestWith] = ACTIONS(235),
    [anon_sym_ATtestdox] = ACTIONS(235),
    [anon_sym_ATticket] = ACTIONS(235),
    [sym__end] = ACTIONS(235),
    [sym_text] = ACTIONS(49),
  },
  [33] = {
    [sym_description] = STATE(82),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(239),
    [anon_sym_ATinheritDoc] = ACTIONS(239),
    [anon_sym_ATapi] = ACTIONS(239),
    [anon_sym_ATfilesource] = ACTIONS(239),
    [anon_sym_ATignore] = ACTIONS(239),
    [anon_sym_ATinternal] = ACTIONS(239),
    [anon_sym_ATcategory] = ACTIONS(239),
    [anon_sym_ATcopyright] = ACTIONS(239),
    [anon_sym_ATtodo] = ACTIONS(239),
    [anon_sym_ATexample] = ACTIONS(239),
    [anon_sym_ATlicense] = ACTIONS(239),
    [anon_sym_ATpackage] = ACTIONS(239),
    [anon_sym_ATsource] = ACTIONS(239),
    [anon_sym_ATsubpackage] = ACTIONS(239),
    [anon_sym_ATuses] = ACTIONS(239),
    [anon_sym_ATauthor] = ACTIONS(239),
    [anon_sym_ATglobal] = ACTIONS(239),
    [anon_sym_ATlink] = ACTIONS(239),
    [anon_sym_ATmethod] = ACTIONS(239),
    [anon_sym_ATparam] = ACTIONS(239),
    [anon_sym_ATproperty] = ACTIONS(241),
    [anon_sym_ATproperty_DASHread] = ACTIONS(239),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(239),
    [anon_sym_ATreturn] = ACTIONS(239),
    [anon_sym_ATsee] = ACTIONS(239),
    [anon_sym_ATthrows] = ACTIONS(239),
    [anon_sym_ATvar] = ACTIONS(239),
    [anon_sym_ATdeprecated] = ACTIONS(239),
    [anon_sym_ATsince] = ACTIONS(239),
    [anon_sym_ATversion] = ACTIONS(239),
    [anon_sym_ATafter] = ACTIONS(241),
    [anon_sym_ATafterClass] = ACTIONS(239),
    [anon_sym_ATannotation] = ACTIONS(239),
    [anon_sym_ATbackupGlobals] = ACTIONS(239),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(239),
    [anon_sym_ATbefore] = ACTIONS(241),
    [anon_sym_ATbeforeClass] = ACTIONS(239),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(241),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(239),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(239),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(239),
    [anon_sym_ATcovers] = ACTIONS(241),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(241),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(239),
    [anon_sym_ATcoversNothing] = ACTIONS(239),
    [anon_sym_ATdataProvider] = ACTIONS(239),
    [anon_sym_ATdepends] = ACTIONS(241),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(239),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(239),
    [anon_sym_ATgroup] = ACTIONS(239),
    [anon_sym_ATlarge] = ACTIONS(239),
    [anon_sym_ATmedium] = ACTIONS(239),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(239),
    [anon_sym_ATrequires] = ACTIONS(241),
    [anon_sym_ATrequiresusages] = ACTIONS(239),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(239),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(239),
    [anon_sym_ATsmall] = ACTIONS(239),
    [anon_sym_ATtest] = ACTIONS(241),
    [anon_sym_ATtestWith] = ACTIONS(239),
    [anon_sym_ATtestdox] = ACTIONS(239),
    [anon_sym_ATticket] = ACTIONS(239),
    [sym__end] = ACTIONS(239),
    [sym_text] = ACTIONS(49),
  },
  [34] = {
    [sym_inline_tag] = STATE(54),
    [aux_sym__description_not_version_repeat1] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_ATinheritdoc] = ACTIONS(243),
    [anon_sym_ATinheritDoc] = ACTIONS(243),
    [anon_sym_ATapi] = ACTIONS(243),
    [anon_sym_ATfilesource] = ACTIONS(243),
    [anon_sym_ATignore] = ACTIONS(243),
    [anon_sym_ATinternal] = ACTIONS(243),
    [anon_sym_ATcategory] = ACTIONS(243),
    [anon_sym_ATcopyright] = ACTIONS(243),
    [anon_sym_ATtodo] = ACTIONS(243),
    [anon_sym_ATexample] = ACTIONS(243),
    [anon_sym_ATlicense] = ACTIONS(243),
    [anon_sym_ATpackage] = ACTIONS(243),
    [anon_sym_ATsource] = ACTIONS(243),
    [anon_sym_ATsubpackage] = ACTIONS(243),
    [anon_sym_ATuses] = ACTIONS(243),
    [anon_sym_ATauthor] = ACTIONS(243),
    [anon_sym_ATglobal] = ACTIONS(243),
    [anon_sym_ATlink] = ACTIONS(243),
    [anon_sym_ATmethod] = ACTIONS(243),
    [anon_sym_ATparam] = ACTIONS(243),
    [anon_sym_ATproperty] = ACTIONS(245),
    [anon_sym_ATproperty_DASHread] = ACTIONS(243),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(243),
    [anon_sym_ATreturn] = ACTIONS(243),
    [anon_sym_ATsee] = ACTIONS(243),
    [anon_sym_ATthrows] = ACTIONS(243),
    [anon_sym_ATvar] = ACTIONS(243),
    [anon_sym_ATdeprecated] = ACTIONS(243),
    [anon_sym_ATsince] = ACTIONS(243),
    [anon_sym_ATversion] = ACTIONS(243),
    [anon_sym_ATafter] = ACTIONS(245),
    [anon_sym_ATafterClass] = ACTIONS(243),
    [anon_sym_ATannotation] = ACTIONS(243),
    [anon_sym_ATbackupGlobals] = ACTIONS(243),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(243),
    [anon_sym_ATbefore] = ACTIONS(245),
    [anon_sym_ATbeforeClass] = ACTIONS(243),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(245),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(243),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(243),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(243),
    [anon_sym_ATcovers] = ACTIONS(245),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(245),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(243),
    [anon_sym_ATcoversNothing] = ACTIONS(243),
    [anon_sym_ATdataProvider] = ACTIONS(243),
    [anon_sym_ATdepends] = ACTIONS(245),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(243),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(243),
    [anon_sym_ATgroup] = ACTIONS(243),
    [anon_sym_ATlarge] = ACTIONS(243),
    [anon_sym_ATmedium] = ACTIONS(243),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(243),
    [anon_sym_ATrequires] = ACTIONS(245),
    [anon_sym_ATrequiresusages] = ACTIONS(243),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(243),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(243),
    [anon_sym_ATsmall] = ACTIONS(243),
    [anon_sym_ATtest] = ACTIONS(245),
    [anon_sym_ATtestWith] = ACTIONS(243),
    [anon_sym_ATtestdox] = ACTIONS(243),
    [anon_sym_ATticket] = ACTIONS(243),
    [sym__end] = ACTIONS(243),
    [sym__text_not_version] = ACTIONS(127),
  },
  [35] = {
    [aux_sym_union_type_repeat1] = STATE(39),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_ATinheritdoc] = ACTIONS(247),
    [anon_sym_ATinheritDoc] = ACTIONS(247),
    [anon_sym_ATapi] = ACTIONS(247),
    [anon_sym_ATfilesource] = ACTIONS(247),
    [anon_sym_ATignore] = ACTIONS(247),
    [anon_sym_ATinternal] = ACTIONS(247),
    [anon_sym_ATcategory] = ACTIONS(247),
    [anon_sym_ATcopyright] = ACTIONS(247),
    [anon_sym_ATtodo] = ACTIONS(247),
    [anon_sym_ATexample] = ACTIONS(247),
    [anon_sym_ATlicense] = ACTIONS(247),
    [anon_sym_ATpackage] = ACTIONS(247),
    [anon_sym_ATsource] = ACTIONS(247),
    [anon_sym_ATsubpackage] = ACTIONS(247),
    [anon_sym_ATuses] = ACTIONS(247),
    [anon_sym_ATauthor] = ACTIONS(247),
    [anon_sym_ATglobal] = ACTIONS(247),
    [anon_sym_ATlink] = ACTIONS(247),
    [anon_sym_ATmethod] = ACTIONS(247),
    [anon_sym_ATparam] = ACTIONS(247),
    [anon_sym_ATproperty] = ACTIONS(249),
    [anon_sym_ATproperty_DASHread] = ACTIONS(247),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(247),
    [anon_sym_ATreturn] = ACTIONS(247),
    [anon_sym_ATsee] = ACTIONS(247),
    [anon_sym_ATthrows] = ACTIONS(247),
    [anon_sym_ATvar] = ACTIONS(247),
    [anon_sym_ATdeprecated] = ACTIONS(247),
    [anon_sym_ATsince] = ACTIONS(247),
    [anon_sym_ATversion] = ACTIONS(247),
    [anon_sym_ATafter] = ACTIONS(249),
    [anon_sym_ATafterClass] = ACTIONS(247),
    [anon_sym_ATannotation] = ACTIONS(247),
    [anon_sym_ATbackupGlobals] = ACTIONS(247),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(247),
    [anon_sym_ATbefore] = ACTIONS(249),
    [anon_sym_ATbeforeClass] = ACTIONS(247),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(249),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(247),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(247),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(247),
    [anon_sym_ATcovers] = ACTIONS(249),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(249),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(247),
    [anon_sym_ATcoversNothing] = ACTIONS(247),
    [anon_sym_ATdataProvider] = ACTIONS(247),
    [anon_sym_ATdepends] = ACTIONS(249),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(247),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(247),
    [anon_sym_ATgroup] = ACTIONS(247),
    [anon_sym_ATlarge] = ACTIONS(247),
    [anon_sym_ATmedium] = ACTIONS(247),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(247),
    [anon_sym_ATrequires] = ACTIONS(249),
    [anon_sym_ATrequiresusages] = ACTIONS(247),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(247),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(247),
    [anon_sym_ATsmall] = ACTIONS(247),
    [anon_sym_ATtest] = ACTIONS(249),
    [anon_sym_ATtestWith] = ACTIONS(247),
    [anon_sym_ATtestdox] = ACTIONS(247),
    [anon_sym_ATticket] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(251),
    [sym__end] = ACTIONS(247),
    [sym_text] = ACTIONS(247),
  },
  [36] = {
    [sym_inline_tag] = STATE(47),
    [aux_sym__description_after_type_repeat1] = STATE(36),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_ATinheritdoc] = ACTIONS(256),
    [anon_sym_ATinheritDoc] = ACTIONS(256),
    [anon_sym_ATapi] = ACTIONS(256),
    [anon_sym_ATfilesource] = ACTIONS(256),
    [anon_sym_ATignore] = ACTIONS(256),
    [anon_sym_ATinternal] = ACTIONS(256),
    [anon_sym_ATcategory] = ACTIONS(256),
    [anon_sym_ATcopyright] = ACTIONS(256),
    [anon_sym_ATtodo] = ACTIONS(256),
    [anon_sym_ATexample] = ACTIONS(256),
    [anon_sym_ATlicense] = ACTIONS(256),
    [anon_sym_ATpackage] = ACTIONS(256),
    [anon_sym_ATsource] = ACTIONS(256),
    [anon_sym_ATsubpackage] = ACTIONS(256),
    [anon_sym_ATuses] = ACTIONS(256),
    [anon_sym_ATauthor] = ACTIONS(256),
    [anon_sym_ATglobal] = ACTIONS(256),
    [anon_sym_ATlink] = ACTIONS(256),
    [anon_sym_ATmethod] = ACTIONS(256),
    [anon_sym_ATparam] = ACTIONS(256),
    [anon_sym_ATproperty] = ACTIONS(258),
    [anon_sym_ATproperty_DASHread] = ACTIONS(256),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(256),
    [anon_sym_ATreturn] = ACTIONS(256),
    [anon_sym_ATsee] = ACTIONS(256),
    [anon_sym_ATthrows] = ACTIONS(256),
    [anon_sym_ATvar] = ACTIONS(256),
    [anon_sym_ATdeprecated] = ACTIONS(256),
    [anon_sym_ATsince] = ACTIONS(256),
    [anon_sym_ATversion] = ACTIONS(256),
    [anon_sym_ATafter] = ACTIONS(258),
    [anon_sym_ATafterClass] = ACTIONS(256),
    [anon_sym_ATannotation] = ACTIONS(256),
    [anon_sym_ATbackupGlobals] = ACTIONS(256),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(256),
    [anon_sym_ATbefore] = ACTIONS(258),
    [anon_sym_ATbeforeClass] = ACTIONS(256),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(258),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(256),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(256),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(256),
    [anon_sym_ATcovers] = ACTIONS(258),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(258),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(256),
    [anon_sym_ATcoversNothing] = ACTIONS(256),
    [anon_sym_ATdataProvider] = ACTIONS(256),
    [anon_sym_ATdepends] = ACTIONS(258),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(256),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(256),
    [anon_sym_ATgroup] = ACTIONS(256),
    [anon_sym_ATlarge] = ACTIONS(256),
    [anon_sym_ATmedium] = ACTIONS(256),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(256),
    [anon_sym_ATrequires] = ACTIONS(258),
    [anon_sym_ATrequiresusages] = ACTIONS(256),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(256),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(256),
    [anon_sym_ATsmall] = ACTIONS(256),
    [anon_sym_ATtest] = ACTIONS(258),
    [anon_sym_ATtestWith] = ACTIONS(256),
    [anon_sym_ATtestdox] = ACTIONS(256),
    [anon_sym_ATticket] = ACTIONS(256),
    [sym__end] = ACTIONS(256),
    [sym__text_after_type] = ACTIONS(260),
  },
  [37] = {
    [sym_inline_tag] = STATE(37),
    [aux_sym_description_repeat1] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_ATinheritdoc] = ACTIONS(266),
    [anon_sym_ATinheritDoc] = ACTIONS(266),
    [anon_sym_ATapi] = ACTIONS(266),
    [anon_sym_ATfilesource] = ACTIONS(266),
    [anon_sym_ATignore] = ACTIONS(266),
    [anon_sym_ATinternal] = ACTIONS(266),
    [anon_sym_ATcategory] = ACTIONS(266),
    [anon_sym_ATcopyright] = ACTIONS(266),
    [anon_sym_ATtodo] = ACTIONS(266),
    [anon_sym_ATexample] = ACTIONS(266),
    [anon_sym_ATlicense] = ACTIONS(266),
    [anon_sym_ATpackage] = ACTIONS(266),
    [anon_sym_ATsource] = ACTIONS(266),
    [anon_sym_ATsubpackage] = ACTIONS(266),
    [anon_sym_ATuses] = ACTIONS(266),
    [anon_sym_ATauthor] = ACTIONS(266),
    [anon_sym_ATglobal] = ACTIONS(266),
    [anon_sym_ATlink] = ACTIONS(266),
    [anon_sym_ATmethod] = ACTIONS(266),
    [anon_sym_ATparam] = ACTIONS(266),
    [anon_sym_ATproperty] = ACTIONS(268),
    [anon_sym_ATproperty_DASHread] = ACTIONS(266),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(266),
    [anon_sym_ATreturn] = ACTIONS(266),
    [anon_sym_ATsee] = ACTIONS(266),
    [anon_sym_ATthrows] = ACTIONS(266),
    [anon_sym_ATvar] = ACTIONS(266),
    [anon_sym_ATdeprecated] = ACTIONS(266),
    [anon_sym_ATsince] = ACTIONS(266),
    [anon_sym_ATversion] = ACTIONS(266),
    [anon_sym_ATafter] = ACTIONS(268),
    [anon_sym_ATafterClass] = ACTIONS(266),
    [anon_sym_ATannotation] = ACTIONS(266),
    [anon_sym_ATbackupGlobals] = ACTIONS(266),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(266),
    [anon_sym_ATbefore] = ACTIONS(268),
    [anon_sym_ATbeforeClass] = ACTIONS(266),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(268),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(266),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(266),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(266),
    [anon_sym_ATcovers] = ACTIONS(268),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(268),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(266),
    [anon_sym_ATcoversNothing] = ACTIONS(266),
    [anon_sym_ATdataProvider] = ACTIONS(266),
    [anon_sym_ATdepends] = ACTIONS(268),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(266),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(266),
    [anon_sym_ATgroup] = ACTIONS(266),
    [anon_sym_ATlarge] = ACTIONS(266),
    [anon_sym_ATmedium] = ACTIONS(266),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(266),
    [anon_sym_ATrequires] = ACTIONS(268),
    [anon_sym_ATrequiresusages] = ACTIONS(266),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(266),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(266),
    [anon_sym_ATsmall] = ACTIONS(266),
    [anon_sym_ATtest] = ACTIONS(268),
    [anon_sym_ATtestWith] = ACTIONS(266),
    [anon_sym_ATtestdox] = ACTIONS(266),
    [anon_sym_ATticket] = ACTIONS(266),
    [sym__end] = ACTIONS(266),
    [sym_text] = ACTIONS(270),
  },
  [38] = {
    [sym_inline_tag] = STATE(37),
    [aux_sym_description_repeat1] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(273),
    [anon_sym_ATinheritDoc] = ACTIONS(273),
    [anon_sym_ATapi] = ACTIONS(273),
    [anon_sym_ATfilesource] = ACTIONS(273),
    [anon_sym_ATignore] = ACTIONS(273),
    [anon_sym_ATinternal] = ACTIONS(273),
    [anon_sym_ATcategory] = ACTIONS(273),
    [anon_sym_ATcopyright] = ACTIONS(273),
    [anon_sym_ATtodo] = ACTIONS(273),
    [anon_sym_ATexample] = ACTIONS(273),
    [anon_sym_ATlicense] = ACTIONS(273),
    [anon_sym_ATpackage] = ACTIONS(273),
    [anon_sym_ATsource] = ACTIONS(273),
    [anon_sym_ATsubpackage] = ACTIONS(273),
    [anon_sym_ATuses] = ACTIONS(273),
    [anon_sym_ATauthor] = ACTIONS(273),
    [anon_sym_ATglobal] = ACTIONS(273),
    [anon_sym_ATlink] = ACTIONS(273),
    [anon_sym_ATmethod] = ACTIONS(273),
    [anon_sym_ATparam] = ACTIONS(273),
    [anon_sym_ATproperty] = ACTIONS(275),
    [anon_sym_ATproperty_DASHread] = ACTIONS(273),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(273),
    [anon_sym_ATreturn] = ACTIONS(273),
    [anon_sym_ATsee] = ACTIONS(273),
    [anon_sym_ATthrows] = ACTIONS(273),
    [anon_sym_ATvar] = ACTIONS(273),
    [anon_sym_ATdeprecated] = ACTIONS(273),
    [anon_sym_ATsince] = ACTIONS(273),
    [anon_sym_ATversion] = ACTIONS(273),
    [anon_sym_ATafter] = ACTIONS(275),
    [anon_sym_ATafterClass] = ACTIONS(273),
    [anon_sym_ATannotation] = ACTIONS(273),
    [anon_sym_ATbackupGlobals] = ACTIONS(273),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(273),
    [anon_sym_ATbefore] = ACTIONS(275),
    [anon_sym_ATbeforeClass] = ACTIONS(273),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(275),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(273),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(273),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(273),
    [anon_sym_ATcovers] = ACTIONS(275),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(275),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(273),
    [anon_sym_ATcoversNothing] = ACTIONS(273),
    [anon_sym_ATdataProvider] = ACTIONS(273),
    [anon_sym_ATdepends] = ACTIONS(275),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(273),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(273),
    [anon_sym_ATgroup] = ACTIONS(273),
    [anon_sym_ATlarge] = ACTIONS(273),
    [anon_sym_ATmedium] = ACTIONS(273),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(273),
    [anon_sym_ATrequires] = ACTIONS(275),
    [anon_sym_ATrequiresusages] = ACTIONS(273),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(273),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(273),
    [anon_sym_ATsmall] = ACTIONS(273),
    [anon_sym_ATtest] = ACTIONS(275),
    [anon_sym_ATtestWith] = ACTIONS(273),
    [anon_sym_ATtestdox] = ACTIONS(273),
    [anon_sym_ATticket] = ACTIONS(273),
    [sym__end] = ACTIONS(273),
    [sym_text] = ACTIONS(277),
  },
  [39] = {
    [aux_sym_union_type_repeat1] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_ATinheritdoc] = ACTIONS(279),
    [anon_sym_ATinheritDoc] = ACTIONS(279),
    [anon_sym_ATapi] = ACTIONS(279),
    [anon_sym_ATfilesource] = ACTIONS(279),
    [anon_sym_ATignore] = ACTIONS(279),
    [anon_sym_ATinternal] = ACTIONS(279),
    [anon_sym_ATcategory] = ACTIONS(279),
    [anon_sym_ATcopyright] = ACTIONS(279),
    [anon_sym_ATtodo] = ACTIONS(279),
    [anon_sym_ATexample] = ACTIONS(279),
    [anon_sym_ATlicense] = ACTIONS(279),
    [anon_sym_ATpackage] = ACTIONS(279),
    [anon_sym_ATsource] = ACTIONS(279),
    [anon_sym_ATsubpackage] = ACTIONS(279),
    [anon_sym_ATuses] = ACTIONS(279),
    [anon_sym_ATauthor] = ACTIONS(279),
    [anon_sym_ATglobal] = ACTIONS(279),
    [anon_sym_ATlink] = ACTIONS(279),
    [anon_sym_ATmethod] = ACTIONS(279),
    [anon_sym_ATparam] = ACTIONS(279),
    [anon_sym_ATproperty] = ACTIONS(281),
    [anon_sym_ATproperty_DASHread] = ACTIONS(279),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(279),
    [anon_sym_ATreturn] = ACTIONS(279),
    [anon_sym_ATsee] = ACTIONS(279),
    [anon_sym_ATthrows] = ACTIONS(279),
    [anon_sym_ATvar] = ACTIONS(279),
    [anon_sym_ATdeprecated] = ACTIONS(279),
    [anon_sym_ATsince] = ACTIONS(279),
    [anon_sym_ATversion] = ACTIONS(279),
    [anon_sym_ATafter] = ACTIONS(281),
    [anon_sym_ATafterClass] = ACTIONS(279),
    [anon_sym_ATannotation] = ACTIONS(279),
    [anon_sym_ATbackupGlobals] = ACTIONS(279),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(279),
    [anon_sym_ATbefore] = ACTIONS(281),
    [anon_sym_ATbeforeClass] = ACTIONS(279),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(281),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(279),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(279),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(279),
    [anon_sym_ATcovers] = ACTIONS(281),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(281),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(279),
    [anon_sym_ATcoversNothing] = ACTIONS(279),
    [anon_sym_ATdataProvider] = ACTIONS(279),
    [anon_sym_ATdepends] = ACTIONS(281),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(279),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(279),
    [anon_sym_ATgroup] = ACTIONS(279),
    [anon_sym_ATlarge] = ACTIONS(279),
    [anon_sym_ATmedium] = ACTIONS(279),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(279),
    [anon_sym_ATrequires] = ACTIONS(281),
    [anon_sym_ATrequiresusages] = ACTIONS(279),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(279),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(279),
    [anon_sym_ATsmall] = ACTIONS(279),
    [anon_sym_ATtest] = ACTIONS(281),
    [anon_sym_ATtestWith] = ACTIONS(279),
    [anon_sym_ATtestdox] = ACTIONS(279),
    [anon_sym_ATticket] = ACTIONS(279),
    [anon_sym_PIPE] = ACTIONS(251),
    [sym__end] = ACTIONS(279),
    [sym_text] = ACTIONS(279),
  },
  [40] = {
    [sym_inline_tag] = STATE(47),
    [aux_sym__description_after_type_repeat1] = STATE(36),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_ATinheritdoc] = ACTIONS(285),
    [anon_sym_ATinheritDoc] = ACTIONS(285),
    [anon_sym_ATapi] = ACTIONS(285),
    [anon_sym_ATfilesource] = ACTIONS(285),
    [anon_sym_ATignore] = ACTIONS(285),
    [anon_sym_ATinternal] = ACTIONS(285),
    [anon_sym_ATcategory] = ACTIONS(285),
    [anon_sym_ATcopyright] = ACTIONS(285),
    [anon_sym_ATtodo] = ACTIONS(285),
    [anon_sym_ATexample] = ACTIONS(285),
    [anon_sym_ATlicense] = ACTIONS(285),
    [anon_sym_ATpackage] = ACTIONS(285),
    [anon_sym_ATsource] = ACTIONS(285),
    [anon_sym_ATsubpackage] = ACTIONS(285),
    [anon_sym_ATuses] = ACTIONS(285),
    [anon_sym_ATauthor] = ACTIONS(285),
    [anon_sym_ATglobal] = ACTIONS(285),
    [anon_sym_ATlink] = ACTIONS(285),
    [anon_sym_ATmethod] = ACTIONS(285),
    [anon_sym_ATparam] = ACTIONS(285),
    [anon_sym_ATproperty] = ACTIONS(287),
    [anon_sym_ATproperty_DASHread] = ACTIONS(285),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(285),
    [anon_sym_ATreturn] = ACTIONS(285),
    [anon_sym_ATsee] = ACTIONS(285),
    [anon_sym_ATthrows] = ACTIONS(285),
    [anon_sym_ATvar] = ACTIONS(285),
    [anon_sym_ATdeprecated] = ACTIONS(285),
    [anon_sym_ATsince] = ACTIONS(285),
    [anon_sym_ATversion] = ACTIONS(285),
    [anon_sym_ATafter] = ACTIONS(287),
    [anon_sym_ATafterClass] = ACTIONS(285),
    [anon_sym_ATannotation] = ACTIONS(285),
    [anon_sym_ATbackupGlobals] = ACTIONS(285),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(285),
    [anon_sym_ATbefore] = ACTIONS(287),
    [anon_sym_ATbeforeClass] = ACTIONS(285),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(287),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(285),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(285),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(285),
    [anon_sym_ATcovers] = ACTIONS(287),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(287),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(285),
    [anon_sym_ATcoversNothing] = ACTIONS(285),
    [anon_sym_ATdataProvider] = ACTIONS(285),
    [anon_sym_ATdepends] = ACTIONS(287),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(285),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(285),
    [anon_sym_ATgroup] = ACTIONS(285),
    [anon_sym_ATlarge] = ACTIONS(285),
    [anon_sym_ATmedium] = ACTIONS(285),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(285),
    [anon_sym_ATrequires] = ACTIONS(287),
    [anon_sym_ATrequiresusages] = ACTIONS(285),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(285),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(285),
    [anon_sym_ATsmall] = ACTIONS(285),
    [anon_sym_ATtest] = ACTIONS(287),
    [anon_sym_ATtestWith] = ACTIONS(285),
    [anon_sym_ATtestdox] = ACTIONS(285),
    [anon_sym_ATticket] = ACTIONS(285),
    [sym__end] = ACTIONS(285),
    [sym__text_after_type] = ACTIONS(289),
  },
  [41] = {
    [aux_sym_union_type_repeat1] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_ATinheritdoc] = ACTIONS(291),
    [anon_sym_ATinheritDoc] = ACTIONS(291),
    [anon_sym_ATapi] = ACTIONS(291),
    [anon_sym_ATfilesource] = ACTIONS(291),
    [anon_sym_ATignore] = ACTIONS(291),
    [anon_sym_ATinternal] = ACTIONS(291),
    [anon_sym_ATcategory] = ACTIONS(291),
    [anon_sym_ATcopyright] = ACTIONS(291),
    [anon_sym_ATtodo] = ACTIONS(291),
    [anon_sym_ATexample] = ACTIONS(291),
    [anon_sym_ATlicense] = ACTIONS(291),
    [anon_sym_ATpackage] = ACTIONS(291),
    [anon_sym_ATsource] = ACTIONS(291),
    [anon_sym_ATsubpackage] = ACTIONS(291),
    [anon_sym_ATuses] = ACTIONS(291),
    [anon_sym_ATauthor] = ACTIONS(291),
    [anon_sym_ATglobal] = ACTIONS(291),
    [anon_sym_ATlink] = ACTIONS(291),
    [anon_sym_ATmethod] = ACTIONS(291),
    [anon_sym_ATparam] = ACTIONS(291),
    [anon_sym_ATproperty] = ACTIONS(293),
    [anon_sym_ATproperty_DASHread] = ACTIONS(291),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(291),
    [anon_sym_ATreturn] = ACTIONS(291),
    [anon_sym_ATsee] = ACTIONS(291),
    [anon_sym_ATthrows] = ACTIONS(291),
    [anon_sym_ATvar] = ACTIONS(291),
    [anon_sym_ATdeprecated] = ACTIONS(291),
    [anon_sym_ATsince] = ACTIONS(291),
    [anon_sym_ATversion] = ACTIONS(291),
    [anon_sym_ATafter] = ACTIONS(293),
    [anon_sym_ATafterClass] = ACTIONS(291),
    [anon_sym_ATannotation] = ACTIONS(291),
    [anon_sym_ATbackupGlobals] = ACTIONS(291),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(291),
    [anon_sym_ATbefore] = ACTIONS(293),
    [anon_sym_ATbeforeClass] = ACTIONS(291),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(293),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(291),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(291),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(291),
    [anon_sym_ATcovers] = ACTIONS(293),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(293),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(291),
    [anon_sym_ATcoversNothing] = ACTIONS(291),
    [anon_sym_ATdataProvider] = ACTIONS(291),
    [anon_sym_ATdepends] = ACTIONS(293),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(291),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(291),
    [anon_sym_ATgroup] = ACTIONS(291),
    [anon_sym_ATlarge] = ACTIONS(291),
    [anon_sym_ATmedium] = ACTIONS(291),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(291),
    [anon_sym_ATrequires] = ACTIONS(293),
    [anon_sym_ATrequiresusages] = ACTIONS(291),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(291),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(291),
    [anon_sym_ATsmall] = ACTIONS(291),
    [anon_sym_ATtest] = ACTIONS(293),
    [anon_sym_ATtestWith] = ACTIONS(291),
    [anon_sym_ATtestdox] = ACTIONS(291),
    [anon_sym_ATticket] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(295),
    [sym__end] = ACTIONS(291),
    [sym_text] = ACTIONS(291),
  },
  [42] = {
    [sym_inline_tag] = STATE(54),
    [aux_sym__description_not_version_repeat1] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_ATinheritdoc] = ACTIONS(301),
    [anon_sym_ATinheritDoc] = ACTIONS(301),
    [anon_sym_ATapi] = ACTIONS(301),
    [anon_sym_ATfilesource] = ACTIONS(301),
    [anon_sym_ATignore] = ACTIONS(301),
    [anon_sym_ATinternal] = ACTIONS(301),
    [anon_sym_ATcategory] = ACTIONS(301),
    [anon_sym_ATcopyright] = ACTIONS(301),
    [anon_sym_ATtodo] = ACTIONS(301),
    [anon_sym_ATexample] = ACTIONS(301),
    [anon_sym_ATlicense] = ACTIONS(301),
    [anon_sym_ATpackage] = ACTIONS(301),
    [anon_sym_ATsource] = ACTIONS(301),
    [anon_sym_ATsubpackage] = ACTIONS(301),
    [anon_sym_ATuses] = ACTIONS(301),
    [anon_sym_ATauthor] = ACTIONS(301),
    [anon_sym_ATglobal] = ACTIONS(301),
    [anon_sym_ATlink] = ACTIONS(301),
    [anon_sym_ATmethod] = ACTIONS(301),
    [anon_sym_ATparam] = ACTIONS(301),
    [anon_sym_ATproperty] = ACTIONS(303),
    [anon_sym_ATproperty_DASHread] = ACTIONS(301),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(301),
    [anon_sym_ATreturn] = ACTIONS(301),
    [anon_sym_ATsee] = ACTIONS(301),
    [anon_sym_ATthrows] = ACTIONS(301),
    [anon_sym_ATvar] = ACTIONS(301),
    [anon_sym_ATdeprecated] = ACTIONS(301),
    [anon_sym_ATsince] = ACTIONS(301),
    [anon_sym_ATversion] = ACTIONS(301),
    [anon_sym_ATafter] = ACTIONS(303),
    [anon_sym_ATafterClass] = ACTIONS(301),
    [anon_sym_ATannotation] = ACTIONS(301),
    [anon_sym_ATbackupGlobals] = ACTIONS(301),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(301),
    [anon_sym_ATbefore] = ACTIONS(303),
    [anon_sym_ATbeforeClass] = ACTIONS(301),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(303),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(301),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(301),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(301),
    [anon_sym_ATcovers] = ACTIONS(303),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(303),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(301),
    [anon_sym_ATcoversNothing] = ACTIONS(301),
    [anon_sym_ATdataProvider] = ACTIONS(301),
    [anon_sym_ATdepends] = ACTIONS(303),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(301),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(301),
    [anon_sym_ATgroup] = ACTIONS(301),
    [anon_sym_ATlarge] = ACTIONS(301),
    [anon_sym_ATmedium] = ACTIONS(301),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(301),
    [anon_sym_ATrequires] = ACTIONS(303),
    [anon_sym_ATrequiresusages] = ACTIONS(301),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(301),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(301),
    [anon_sym_ATsmall] = ACTIONS(301),
    [anon_sym_ATtest] = ACTIONS(303),
    [anon_sym_ATtestWith] = ACTIONS(301),
    [anon_sym_ATtestdox] = ACTIONS(301),
    [anon_sym_ATticket] = ACTIONS(301),
    [sym__end] = ACTIONS(301),
    [sym__text_not_version] = ACTIONS(305),
  },
  [43] = {
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_ATinheritdoc] = ACTIONS(291),
    [anon_sym_ATinheritDoc] = ACTIONS(291),
    [anon_sym_ATapi] = ACTIONS(291),
    [anon_sym_ATfilesource] = ACTIONS(291),
    [anon_sym_ATignore] = ACTIONS(291),
    [anon_sym_ATinternal] = ACTIONS(291),
    [anon_sym_ATcategory] = ACTIONS(291),
    [anon_sym_ATcopyright] = ACTIONS(291),
    [anon_sym_ATtodo] = ACTIONS(291),
    [anon_sym_ATexample] = ACTIONS(291),
    [anon_sym_ATlicense] = ACTIONS(291),
    [anon_sym_ATpackage] = ACTIONS(291),
    [anon_sym_ATsource] = ACTIONS(291),
    [anon_sym_ATsubpackage] = ACTIONS(291),
    [anon_sym_ATuses] = ACTIONS(291),
    [anon_sym_ATauthor] = ACTIONS(291),
    [anon_sym_ATglobal] = ACTIONS(291),
    [anon_sym_ATlink] = ACTIONS(291),
    [anon_sym_ATmethod] = ACTIONS(291),
    [anon_sym_ATparam] = ACTIONS(291),
    [anon_sym_ATproperty] = ACTIONS(293),
    [anon_sym_ATproperty_DASHread] = ACTIONS(291),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(291),
    [anon_sym_ATreturn] = ACTIONS(291),
    [anon_sym_ATsee] = ACTIONS(291),
    [anon_sym_ATthrows] = ACTIONS(291),
    [anon_sym_ATvar] = ACTIONS(291),
    [anon_sym_ATdeprecated] = ACTIONS(291),
    [anon_sym_ATsince] = ACTIONS(291),
    [anon_sym_ATversion] = ACTIONS(291),
    [anon_sym_ATafter] = ACTIONS(293),
    [anon_sym_ATafterClass] = ACTIONS(291),
    [anon_sym_ATannotation] = ACTIONS(291),
    [anon_sym_ATbackupGlobals] = ACTIONS(291),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(291),
    [anon_sym_ATbefore] = ACTIONS(293),
    [anon_sym_ATbeforeClass] = ACTIONS(291),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(293),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(291),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(291),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(291),
    [anon_sym_ATcovers] = ACTIONS(293),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(293),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(291),
    [anon_sym_ATcoversNothing] = ACTIONS(291),
    [anon_sym_ATdataProvider] = ACTIONS(291),
    [anon_sym_ATdepends] = ACTIONS(293),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(291),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(291),
    [anon_sym_ATgroup] = ACTIONS(291),
    [anon_sym_ATlarge] = ACTIONS(291),
    [anon_sym_ATmedium] = ACTIONS(291),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(291),
    [anon_sym_ATrequires] = ACTIONS(293),
    [anon_sym_ATrequiresusages] = ACTIONS(291),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(291),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(291),
    [anon_sym_ATsmall] = ACTIONS(291),
    [anon_sym_ATtest] = ACTIONS(293),
    [anon_sym_ATtestWith] = ACTIONS(291),
    [anon_sym_ATtestdox] = ACTIONS(291),
    [anon_sym_ATticket] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(291),
    [sym__end] = ACTIONS(291),
    [sym_text] = ACTIONS(291),
  },
  [44] = {
    [anon_sym_ATinheritdoc] = ACTIONS(308),
    [anon_sym_ATinheritDoc] = ACTIONS(308),
    [anon_sym_ATapi] = ACTIONS(308),
    [anon_sym_ATfilesource] = ACTIONS(308),
    [anon_sym_ATignore] = ACTIONS(308),
    [anon_sym_ATinternal] = ACTIONS(308),
    [anon_sym_ATcategory] = ACTIONS(308),
    [anon_sym_ATcopyright] = ACTIONS(308),
    [anon_sym_ATtodo] = ACTIONS(308),
    [anon_sym_ATexample] = ACTIONS(308),
    [anon_sym_ATlicense] = ACTIONS(308),
    [anon_sym_ATpackage] = ACTIONS(308),
    [anon_sym_ATsource] = ACTIONS(308),
    [anon_sym_ATsubpackage] = ACTIONS(308),
    [anon_sym_ATuses] = ACTIONS(308),
    [anon_sym_ATauthor] = ACTIONS(308),
    [anon_sym_ATglobal] = ACTIONS(308),
    [anon_sym_ATlink] = ACTIONS(308),
    [anon_sym_ATmethod] = ACTIONS(308),
    [anon_sym_ATparam] = ACTIONS(308),
    [anon_sym_ATproperty] = ACTIONS(310),
    [anon_sym_ATproperty_DASHread] = ACTIONS(308),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(308),
    [anon_sym_ATreturn] = ACTIONS(308),
    [anon_sym_ATsee] = ACTIONS(308),
    [anon_sym_ATthrows] = ACTIONS(308),
    [anon_sym_ATvar] = ACTIONS(308),
    [anon_sym_ATdeprecated] = ACTIONS(308),
    [anon_sym_ATsince] = ACTIONS(308),
    [anon_sym_ATversion] = ACTIONS(308),
    [anon_sym_ATafter] = ACTIONS(310),
    [anon_sym_ATafterClass] = ACTIONS(308),
    [anon_sym_ATannotation] = ACTIONS(308),
    [anon_sym_ATbackupGlobals] = ACTIONS(308),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(308),
    [anon_sym_ATbefore] = ACTIONS(310),
    [anon_sym_ATbeforeClass] = ACTIONS(308),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(310),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(308),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(308),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(308),
    [anon_sym_ATcovers] = ACTIONS(310),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(310),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(308),
    [anon_sym_ATcoversNothing] = ACTIONS(308),
    [anon_sym_ATdataProvider] = ACTIONS(308),
    [anon_sym_ATdepends] = ACTIONS(310),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(308),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(308),
    [anon_sym_ATgroup] = ACTIONS(308),
    [anon_sym_ATlarge] = ACTIONS(308),
    [anon_sym_ATmedium] = ACTIONS(308),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(308),
    [anon_sym_ATrequires] = ACTIONS(310),
    [anon_sym_ATrequiresusages] = ACTIONS(308),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(308),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(308),
    [anon_sym_ATsmall] = ACTIONS(308),
    [anon_sym_ATtest] = ACTIONS(310),
    [anon_sym_ATtestWith] = ACTIONS(308),
    [anon_sym_ATtestdox] = ACTIONS(308),
    [anon_sym_ATticket] = ACTIONS(308),
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(308),
    [sym__end] = ACTIONS(308),
  },
  [45] = {
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_ATinheritdoc] = ACTIONS(312),
    [anon_sym_ATinheritDoc] = ACTIONS(312),
    [anon_sym_ATapi] = ACTIONS(312),
    [anon_sym_ATfilesource] = ACTIONS(312),
    [anon_sym_ATignore] = ACTIONS(312),
    [anon_sym_ATinternal] = ACTIONS(312),
    [anon_sym_ATcategory] = ACTIONS(312),
    [anon_sym_ATcopyright] = ACTIONS(312),
    [anon_sym_ATtodo] = ACTIONS(312),
    [anon_sym_ATexample] = ACTIONS(312),
    [anon_sym_ATlicense] = ACTIONS(312),
    [anon_sym_ATpackage] = ACTIONS(312),
    [anon_sym_ATsource] = ACTIONS(312),
    [anon_sym_ATsubpackage] = ACTIONS(312),
    [anon_sym_ATuses] = ACTIONS(312),
    [anon_sym_ATauthor] = ACTIONS(312),
    [anon_sym_ATglobal] = ACTIONS(312),
    [anon_sym_ATlink] = ACTIONS(312),
    [anon_sym_ATmethod] = ACTIONS(312),
    [anon_sym_ATparam] = ACTIONS(312),
    [anon_sym_ATproperty] = ACTIONS(314),
    [anon_sym_ATproperty_DASHread] = ACTIONS(312),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(312),
    [anon_sym_ATreturn] = ACTIONS(312),
    [anon_sym_ATsee] = ACTIONS(312),
    [anon_sym_ATthrows] = ACTIONS(312),
    [anon_sym_ATvar] = ACTIONS(312),
    [anon_sym_ATdeprecated] = ACTIONS(312),
    [anon_sym_ATsince] = ACTIONS(312),
    [anon_sym_ATversion] = ACTIONS(312),
    [anon_sym_ATafter] = ACTIONS(314),
    [anon_sym_ATafterClass] = ACTIONS(312),
    [anon_sym_ATannotation] = ACTIONS(312),
    [anon_sym_ATbackupGlobals] = ACTIONS(312),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(312),
    [anon_sym_ATbefore] = ACTIONS(314),
    [anon_sym_ATbeforeClass] = ACTIONS(312),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(314),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(312),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(312),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(312),
    [anon_sym_ATcovers] = ACTIONS(314),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(314),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(312),
    [anon_sym_ATcoversNothing] = ACTIONS(312),
    [anon_sym_ATdataProvider] = ACTIONS(312),
    [anon_sym_ATdepends] = ACTIONS(314),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(312),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(312),
    [anon_sym_ATgroup] = ACTIONS(312),
    [anon_sym_ATlarge] = ACTIONS(312),
    [anon_sym_ATmedium] = ACTIONS(312),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(312),
    [anon_sym_ATrequires] = ACTIONS(314),
    [anon_sym_ATrequiresusages] = ACTIONS(312),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(312),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(312),
    [anon_sym_ATsmall] = ACTIONS(312),
    [anon_sym_ATtest] = ACTIONS(314),
    [anon_sym_ATtestWith] = ACTIONS(312),
    [anon_sym_ATtestdox] = ACTIONS(312),
    [anon_sym_ATticket] = ACTIONS(312),
    [anon_sym_PIPE] = ACTIONS(312),
    [sym__end] = ACTIONS(312),
    [sym_text] = ACTIONS(312),
  },
  [46] = {
    [anon_sym_LBRACE] = ACTIONS(316),
    [anon_sym_ATinheritdoc] = ACTIONS(316),
    [anon_sym_ATinheritDoc] = ACTIONS(316),
    [anon_sym_ATapi] = ACTIONS(316),
    [anon_sym_ATfilesource] = ACTIONS(316),
    [anon_sym_ATignore] = ACTIONS(316),
    [anon_sym_ATinternal] = ACTIONS(316),
    [anon_sym_ATcategory] = ACTIONS(316),
    [anon_sym_ATcopyright] = ACTIONS(316),
    [anon_sym_ATtodo] = ACTIONS(316),
    [anon_sym_ATexample] = ACTIONS(316),
    [anon_sym_ATlicense] = ACTIONS(316),
    [anon_sym_ATpackage] = ACTIONS(316),
    [anon_sym_ATsource] = ACTIONS(316),
    [anon_sym_ATsubpackage] = ACTIONS(316),
    [anon_sym_ATuses] = ACTIONS(316),
    [anon_sym_ATauthor] = ACTIONS(316),
    [anon_sym_ATglobal] = ACTIONS(316),
    [anon_sym_ATlink] = ACTIONS(316),
    [anon_sym_ATmethod] = ACTIONS(316),
    [anon_sym_ATparam] = ACTIONS(316),
    [anon_sym_ATproperty] = ACTIONS(318),
    [anon_sym_ATproperty_DASHread] = ACTIONS(316),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(316),
    [anon_sym_ATreturn] = ACTIONS(316),
    [anon_sym_ATsee] = ACTIONS(316),
    [anon_sym_ATthrows] = ACTIONS(316),
    [anon_sym_ATvar] = ACTIONS(316),
    [anon_sym_ATdeprecated] = ACTIONS(316),
    [anon_sym_ATsince] = ACTIONS(316),
    [anon_sym_ATversion] = ACTIONS(316),
    [anon_sym_ATafter] = ACTIONS(318),
    [anon_sym_ATafterClass] = ACTIONS(316),
    [anon_sym_ATannotation] = ACTIONS(316),
    [anon_sym_ATbackupGlobals] = ACTIONS(316),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(316),
    [anon_sym_ATbefore] = ACTIONS(318),
    [anon_sym_ATbeforeClass] = ACTIONS(316),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(318),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(316),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(316),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(316),
    [anon_sym_ATcovers] = ACTIONS(318),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(318),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(316),
    [anon_sym_ATcoversNothing] = ACTIONS(316),
    [anon_sym_ATdataProvider] = ACTIONS(316),
    [anon_sym_ATdepends] = ACTIONS(318),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(316),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(316),
    [anon_sym_ATgroup] = ACTIONS(316),
    [anon_sym_ATlarge] = ACTIONS(316),
    [anon_sym_ATmedium] = ACTIONS(316),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(316),
    [anon_sym_ATrequires] = ACTIONS(318),
    [anon_sym_ATrequiresusages] = ACTIONS(316),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(316),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(316),
    [anon_sym_ATsmall] = ACTIONS(316),
    [anon_sym_ATtest] = ACTIONS(318),
    [anon_sym_ATtestWith] = ACTIONS(316),
    [anon_sym_ATtestdox] = ACTIONS(316),
    [anon_sym_ATticket] = ACTIONS(316),
    [anon_sym_PIPE] = ACTIONS(316),
    [sym__end] = ACTIONS(316),
    [sym_text] = ACTIONS(316),
  },
  [47] = {
    [anon_sym_LBRACE] = ACTIONS(320),
    [anon_sym_ATinheritdoc] = ACTIONS(320),
    [anon_sym_ATinheritDoc] = ACTIONS(320),
    [anon_sym_ATapi] = ACTIONS(320),
    [anon_sym_ATfilesource] = ACTIONS(320),
    [anon_sym_ATignore] = ACTIONS(320),
    [anon_sym_ATinternal] = ACTIONS(320),
    [anon_sym_ATcategory] = ACTIONS(320),
    [anon_sym_ATcopyright] = ACTIONS(320),
    [anon_sym_ATtodo] = ACTIONS(320),
    [anon_sym_ATexample] = ACTIONS(320),
    [anon_sym_ATlicense] = ACTIONS(320),
    [anon_sym_ATpackage] = ACTIONS(320),
    [anon_sym_ATsource] = ACTIONS(320),
    [anon_sym_ATsubpackage] = ACTIONS(320),
    [anon_sym_ATuses] = ACTIONS(320),
    [anon_sym_ATauthor] = ACTIONS(320),
    [anon_sym_ATglobal] = ACTIONS(320),
    [anon_sym_ATlink] = ACTIONS(320),
    [anon_sym_ATmethod] = ACTIONS(320),
    [anon_sym_ATparam] = ACTIONS(320),
    [anon_sym_ATproperty] = ACTIONS(322),
    [anon_sym_ATproperty_DASHread] = ACTIONS(320),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(320),
    [anon_sym_ATreturn] = ACTIONS(320),
    [anon_sym_ATsee] = ACTIONS(320),
    [anon_sym_ATthrows] = ACTIONS(320),
    [anon_sym_ATvar] = ACTIONS(320),
    [anon_sym_ATdeprecated] = ACTIONS(320),
    [anon_sym_ATsince] = ACTIONS(320),
    [anon_sym_ATversion] = ACTIONS(320),
    [anon_sym_ATafter] = ACTIONS(322),
    [anon_sym_ATafterClass] = ACTIONS(320),
    [anon_sym_ATannotation] = ACTIONS(320),
    [anon_sym_ATbackupGlobals] = ACTIONS(320),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(320),
    [anon_sym_ATbefore] = ACTIONS(322),
    [anon_sym_ATbeforeClass] = ACTIONS(320),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(322),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(320),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(320),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(320),
    [anon_sym_ATcovers] = ACTIONS(322),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(322),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(320),
    [anon_sym_ATcoversNothing] = ACTIONS(320),
    [anon_sym_ATdataProvider] = ACTIONS(320),
    [anon_sym_ATdepends] = ACTIONS(322),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(320),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(320),
    [anon_sym_ATgroup] = ACTIONS(320),
    [anon_sym_ATlarge] = ACTIONS(320),
    [anon_sym_ATmedium] = ACTIONS(320),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(320),
    [anon_sym_ATrequires] = ACTIONS(322),
    [anon_sym_ATrequiresusages] = ACTIONS(320),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(320),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(320),
    [anon_sym_ATsmall] = ACTIONS(320),
    [anon_sym_ATtest] = ACTIONS(322),
    [anon_sym_ATtestWith] = ACTIONS(320),
    [anon_sym_ATtestdox] = ACTIONS(320),
    [anon_sym_ATticket] = ACTIONS(320),
    [sym__end] = ACTIONS(320),
    [sym__text_after_type] = ACTIONS(320),
  },
  [48] = {
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_ATinheritdoc] = ACTIONS(308),
    [anon_sym_ATinheritDoc] = ACTIONS(308),
    [anon_sym_ATapi] = ACTIONS(308),
    [anon_sym_ATfilesource] = ACTIONS(308),
    [anon_sym_ATignore] = ACTIONS(308),
    [anon_sym_ATinternal] = ACTIONS(308),
    [anon_sym_ATcategory] = ACTIONS(308),
    [anon_sym_ATcopyright] = ACTIONS(308),
    [anon_sym_ATtodo] = ACTIONS(308),
    [anon_sym_ATexample] = ACTIONS(308),
    [anon_sym_ATlicense] = ACTIONS(308),
    [anon_sym_ATpackage] = ACTIONS(308),
    [anon_sym_ATsource] = ACTIONS(308),
    [anon_sym_ATsubpackage] = ACTIONS(308),
    [anon_sym_ATuses] = ACTIONS(308),
    [anon_sym_ATauthor] = ACTIONS(308),
    [anon_sym_ATglobal] = ACTIONS(308),
    [anon_sym_ATlink] = ACTIONS(308),
    [anon_sym_ATmethod] = ACTIONS(308),
    [anon_sym_ATparam] = ACTIONS(308),
    [anon_sym_ATproperty] = ACTIONS(310),
    [anon_sym_ATproperty_DASHread] = ACTIONS(308),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(308),
    [anon_sym_ATreturn] = ACTIONS(308),
    [anon_sym_ATsee] = ACTIONS(308),
    [anon_sym_ATthrows] = ACTIONS(308),
    [anon_sym_ATvar] = ACTIONS(308),
    [anon_sym_ATdeprecated] = ACTIONS(308),
    [anon_sym_ATsince] = ACTIONS(308),
    [anon_sym_ATversion] = ACTIONS(308),
    [anon_sym_ATafter] = ACTIONS(310),
    [anon_sym_ATafterClass] = ACTIONS(308),
    [anon_sym_ATannotation] = ACTIONS(308),
    [anon_sym_ATbackupGlobals] = ACTIONS(308),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(308),
    [anon_sym_ATbefore] = ACTIONS(310),
    [anon_sym_ATbeforeClass] = ACTIONS(308),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(310),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(308),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(308),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(308),
    [anon_sym_ATcovers] = ACTIONS(310),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(310),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(308),
    [anon_sym_ATcoversNothing] = ACTIONS(308),
    [anon_sym_ATdataProvider] = ACTIONS(308),
    [anon_sym_ATdepends] = ACTIONS(310),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(308),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(308),
    [anon_sym_ATgroup] = ACTIONS(308),
    [anon_sym_ATlarge] = ACTIONS(308),
    [anon_sym_ATmedium] = ACTIONS(308),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(308),
    [anon_sym_ATrequires] = ACTIONS(310),
    [anon_sym_ATrequiresusages] = ACTIONS(308),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(308),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(308),
    [anon_sym_ATsmall] = ACTIONS(308),
    [anon_sym_ATtest] = ACTIONS(310),
    [anon_sym_ATtestWith] = ACTIONS(308),
    [anon_sym_ATtestdox] = ACTIONS(308),
    [anon_sym_ATticket] = ACTIONS(308),
    [sym__end] = ACTIONS(308),
    [sym_text] = ACTIONS(308),
  },
  [49] = {
    [anon_sym_LBRACE] = ACTIONS(324),
    [anon_sym_ATinheritdoc] = ACTIONS(324),
    [anon_sym_ATinheritDoc] = ACTIONS(324),
    [anon_sym_ATapi] = ACTIONS(324),
    [anon_sym_ATfilesource] = ACTIONS(324),
    [anon_sym_ATignore] = ACTIONS(324),
    [anon_sym_ATinternal] = ACTIONS(324),
    [anon_sym_ATcategory] = ACTIONS(324),
    [anon_sym_ATcopyright] = ACTIONS(324),
    [anon_sym_ATtodo] = ACTIONS(324),
    [anon_sym_ATexample] = ACTIONS(324),
    [anon_sym_ATlicense] = ACTIONS(324),
    [anon_sym_ATpackage] = ACTIONS(324),
    [anon_sym_ATsource] = ACTIONS(324),
    [anon_sym_ATsubpackage] = ACTIONS(324),
    [anon_sym_ATuses] = ACTIONS(324),
    [anon_sym_ATauthor] = ACTIONS(324),
    [anon_sym_ATglobal] = ACTIONS(324),
    [anon_sym_ATlink] = ACTIONS(324),
    [anon_sym_ATmethod] = ACTIONS(324),
    [anon_sym_ATparam] = ACTIONS(324),
    [anon_sym_ATproperty] = ACTIONS(326),
    [anon_sym_ATproperty_DASHread] = ACTIONS(324),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(324),
    [anon_sym_ATreturn] = ACTIONS(324),
    [anon_sym_ATsee] = ACTIONS(324),
    [anon_sym_ATthrows] = ACTIONS(324),
    [anon_sym_ATvar] = ACTIONS(324),
    [anon_sym_ATdeprecated] = ACTIONS(324),
    [anon_sym_ATsince] = ACTIONS(324),
    [anon_sym_ATversion] = ACTIONS(324),
    [anon_sym_ATafter] = ACTIONS(326),
    [anon_sym_ATafterClass] = ACTIONS(324),
    [anon_sym_ATannotation] = ACTIONS(324),
    [anon_sym_ATbackupGlobals] = ACTIONS(324),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(324),
    [anon_sym_ATbefore] = ACTIONS(326),
    [anon_sym_ATbeforeClass] = ACTIONS(324),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(326),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(324),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(324),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(324),
    [anon_sym_ATcovers] = ACTIONS(326),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(326),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(324),
    [anon_sym_ATcoversNothing] = ACTIONS(324),
    [anon_sym_ATdataProvider] = ACTIONS(324),
    [anon_sym_ATdepends] = ACTIONS(326),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(324),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(324),
    [anon_sym_ATgroup] = ACTIONS(324),
    [anon_sym_ATlarge] = ACTIONS(324),
    [anon_sym_ATmedium] = ACTIONS(324),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(324),
    [anon_sym_ATrequires] = ACTIONS(326),
    [anon_sym_ATrequiresusages] = ACTIONS(324),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(324),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(324),
    [anon_sym_ATsmall] = ACTIONS(324),
    [anon_sym_ATtest] = ACTIONS(326),
    [anon_sym_ATtestWith] = ACTIONS(324),
    [anon_sym_ATtestdox] = ACTIONS(324),
    [anon_sym_ATticket] = ACTIONS(324),
    [sym__end] = ACTIONS(324),
    [sym_text] = ACTIONS(324),
  },
  [50] = {
    [anon_sym_LBRACE] = ACTIONS(324),
    [anon_sym_ATinheritdoc] = ACTIONS(324),
    [anon_sym_ATinheritDoc] = ACTIONS(324),
    [anon_sym_ATapi] = ACTIONS(324),
    [anon_sym_ATfilesource] = ACTIONS(324),
    [anon_sym_ATignore] = ACTIONS(324),
    [anon_sym_ATinternal] = ACTIONS(324),
    [anon_sym_ATcategory] = ACTIONS(324),
    [anon_sym_ATcopyright] = ACTIONS(324),
    [anon_sym_ATtodo] = ACTIONS(324),
    [anon_sym_ATexample] = ACTIONS(324),
    [anon_sym_ATlicense] = ACTIONS(324),
    [anon_sym_ATpackage] = ACTIONS(324),
    [anon_sym_ATsource] = ACTIONS(324),
    [anon_sym_ATsubpackage] = ACTIONS(324),
    [anon_sym_ATuses] = ACTIONS(324),
    [anon_sym_ATauthor] = ACTIONS(324),
    [anon_sym_ATglobal] = ACTIONS(324),
    [anon_sym_ATlink] = ACTIONS(324),
    [anon_sym_ATmethod] = ACTIONS(324),
    [anon_sym_ATparam] = ACTIONS(324),
    [anon_sym_ATproperty] = ACTIONS(326),
    [anon_sym_ATproperty_DASHread] = ACTIONS(324),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(324),
    [anon_sym_ATreturn] = ACTIONS(324),
    [anon_sym_ATsee] = ACTIONS(324),
    [anon_sym_ATthrows] = ACTIONS(324),
    [anon_sym_ATvar] = ACTIONS(324),
    [anon_sym_ATdeprecated] = ACTIONS(324),
    [anon_sym_ATsince] = ACTIONS(324),
    [anon_sym_ATversion] = ACTIONS(324),
    [anon_sym_ATafter] = ACTIONS(326),
    [anon_sym_ATafterClass] = ACTIONS(324),
    [anon_sym_ATannotation] = ACTIONS(324),
    [anon_sym_ATbackupGlobals] = ACTIONS(324),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(324),
    [anon_sym_ATbefore] = ACTIONS(326),
    [anon_sym_ATbeforeClass] = ACTIONS(324),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(326),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(324),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(324),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(324),
    [anon_sym_ATcovers] = ACTIONS(326),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(326),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(324),
    [anon_sym_ATcoversNothing] = ACTIONS(324),
    [anon_sym_ATdataProvider] = ACTIONS(324),
    [anon_sym_ATdepends] = ACTIONS(326),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(324),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(324),
    [anon_sym_ATgroup] = ACTIONS(324),
    [anon_sym_ATlarge] = ACTIONS(324),
    [anon_sym_ATmedium] = ACTIONS(324),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(324),
    [anon_sym_ATrequires] = ACTIONS(326),
    [anon_sym_ATrequiresusages] = ACTIONS(324),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(324),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(324),
    [anon_sym_ATsmall] = ACTIONS(324),
    [anon_sym_ATtest] = ACTIONS(326),
    [anon_sym_ATtestWith] = ACTIONS(324),
    [anon_sym_ATtestdox] = ACTIONS(324),
    [anon_sym_ATticket] = ACTIONS(324),
    [sym__end] = ACTIONS(324),
    [sym__text_not_version] = ACTIONS(324),
  },
  [51] = {
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_ATinheritdoc] = ACTIONS(328),
    [anon_sym_ATinheritDoc] = ACTIONS(328),
    [anon_sym_ATapi] = ACTIONS(328),
    [anon_sym_ATfilesource] = ACTIONS(328),
    [anon_sym_ATignore] = ACTIONS(328),
    [anon_sym_ATinternal] = ACTIONS(328),
    [anon_sym_ATcategory] = ACTIONS(328),
    [anon_sym_ATcopyright] = ACTIONS(328),
    [anon_sym_ATtodo] = ACTIONS(328),
    [anon_sym_ATexample] = ACTIONS(328),
    [anon_sym_ATlicense] = ACTIONS(328),
    [anon_sym_ATpackage] = ACTIONS(328),
    [anon_sym_ATsource] = ACTIONS(328),
    [anon_sym_ATsubpackage] = ACTIONS(328),
    [anon_sym_ATuses] = ACTIONS(328),
    [anon_sym_ATauthor] = ACTIONS(328),
    [anon_sym_ATglobal] = ACTIONS(328),
    [anon_sym_ATlink] = ACTIONS(328),
    [anon_sym_ATmethod] = ACTIONS(328),
    [anon_sym_ATparam] = ACTIONS(328),
    [anon_sym_ATproperty] = ACTIONS(330),
    [anon_sym_ATproperty_DASHread] = ACTIONS(328),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(328),
    [anon_sym_ATreturn] = ACTIONS(328),
    [anon_sym_ATsee] = ACTIONS(328),
    [anon_sym_ATthrows] = ACTIONS(328),
    [anon_sym_ATvar] = ACTIONS(328),
    [anon_sym_ATdeprecated] = ACTIONS(328),
    [anon_sym_ATsince] = ACTIONS(328),
    [anon_sym_ATversion] = ACTIONS(328),
    [anon_sym_ATafter] = ACTIONS(330),
    [anon_sym_ATafterClass] = ACTIONS(328),
    [anon_sym_ATannotation] = ACTIONS(328),
    [anon_sym_ATbackupGlobals] = ACTIONS(328),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(328),
    [anon_sym_ATbefore] = ACTIONS(330),
    [anon_sym_ATbeforeClass] = ACTIONS(328),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(330),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(328),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(328),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(328),
    [anon_sym_ATcovers] = ACTIONS(330),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(330),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(328),
    [anon_sym_ATcoversNothing] = ACTIONS(328),
    [anon_sym_ATdataProvider] = ACTIONS(328),
    [anon_sym_ATdepends] = ACTIONS(330),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(328),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(328),
    [anon_sym_ATgroup] = ACTIONS(328),
    [anon_sym_ATlarge] = ACTIONS(328),
    [anon_sym_ATmedium] = ACTIONS(328),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(328),
    [anon_sym_ATrequires] = ACTIONS(330),
    [anon_sym_ATrequiresusages] = ACTIONS(328),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(328),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(328),
    [anon_sym_ATsmall] = ACTIONS(328),
    [anon_sym_ATtest] = ACTIONS(330),
    [anon_sym_ATtestWith] = ACTIONS(328),
    [anon_sym_ATtestdox] = ACTIONS(328),
    [anon_sym_ATticket] = ACTIONS(328),
    [sym__end] = ACTIONS(328),
    [sym_text] = ACTIONS(328),
  },
  [52] = {
    [anon_sym_LBRACE] = ACTIONS(332),
    [anon_sym_ATinheritdoc] = ACTIONS(332),
    [anon_sym_ATinheritDoc] = ACTIONS(332),
    [anon_sym_ATapi] = ACTIONS(332),
    [anon_sym_ATfilesource] = ACTIONS(332),
    [anon_sym_ATignore] = ACTIONS(332),
    [anon_sym_ATinternal] = ACTIONS(332),
    [anon_sym_ATcategory] = ACTIONS(332),
    [anon_sym_ATcopyright] = ACTIONS(332),
    [anon_sym_ATtodo] = ACTIONS(332),
    [anon_sym_ATexample] = ACTIONS(332),
    [anon_sym_ATlicense] = ACTIONS(332),
    [anon_sym_ATpackage] = ACTIONS(332),
    [anon_sym_ATsource] = ACTIONS(332),
    [anon_sym_ATsubpackage] = ACTIONS(332),
    [anon_sym_ATuses] = ACTIONS(332),
    [anon_sym_ATauthor] = ACTIONS(332),
    [anon_sym_ATglobal] = ACTIONS(332),
    [anon_sym_ATlink] = ACTIONS(332),
    [anon_sym_ATmethod] = ACTIONS(332),
    [anon_sym_ATparam] = ACTIONS(332),
    [anon_sym_ATproperty] = ACTIONS(334),
    [anon_sym_ATproperty_DASHread] = ACTIONS(332),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(332),
    [anon_sym_ATreturn] = ACTIONS(332),
    [anon_sym_ATsee] = ACTIONS(332),
    [anon_sym_ATthrows] = ACTIONS(332),
    [anon_sym_ATvar] = ACTIONS(332),
    [anon_sym_ATdeprecated] = ACTIONS(332),
    [anon_sym_ATsince] = ACTIONS(332),
    [anon_sym_ATversion] = ACTIONS(332),
    [anon_sym_ATafter] = ACTIONS(334),
    [anon_sym_ATafterClass] = ACTIONS(332),
    [anon_sym_ATannotation] = ACTIONS(332),
    [anon_sym_ATbackupGlobals] = ACTIONS(332),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(332),
    [anon_sym_ATbefore] = ACTIONS(334),
    [anon_sym_ATbeforeClass] = ACTIONS(332),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(334),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(332),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(332),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(332),
    [anon_sym_ATcovers] = ACTIONS(334),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(334),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(332),
    [anon_sym_ATcoversNothing] = ACTIONS(332),
    [anon_sym_ATdataProvider] = ACTIONS(332),
    [anon_sym_ATdepends] = ACTIONS(334),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(332),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(332),
    [anon_sym_ATgroup] = ACTIONS(332),
    [anon_sym_ATlarge] = ACTIONS(332),
    [anon_sym_ATmedium] = ACTIONS(332),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(332),
    [anon_sym_ATrequires] = ACTIONS(334),
    [anon_sym_ATrequiresusages] = ACTIONS(332),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(332),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(332),
    [anon_sym_ATsmall] = ACTIONS(332),
    [anon_sym_ATtest] = ACTIONS(334),
    [anon_sym_ATtestWith] = ACTIONS(332),
    [anon_sym_ATtestdox] = ACTIONS(332),
    [anon_sym_ATticket] = ACTIONS(332),
    [sym__end] = ACTIONS(332),
    [sym_text] = ACTIONS(332),
  },
  [53] = {
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_ATinheritdoc] = ACTIONS(336),
    [anon_sym_ATinheritDoc] = ACTIONS(336),
    [anon_sym_ATapi] = ACTIONS(336),
    [anon_sym_ATfilesource] = ACTIONS(336),
    [anon_sym_ATignore] = ACTIONS(336),
    [anon_sym_ATinternal] = ACTIONS(336),
    [anon_sym_ATcategory] = ACTIONS(336),
    [anon_sym_ATcopyright] = ACTIONS(336),
    [anon_sym_ATtodo] = ACTIONS(336),
    [anon_sym_ATexample] = ACTIONS(336),
    [anon_sym_ATlicense] = ACTIONS(336),
    [anon_sym_ATpackage] = ACTIONS(336),
    [anon_sym_ATsource] = ACTIONS(336),
    [anon_sym_ATsubpackage] = ACTIONS(336),
    [anon_sym_ATuses] = ACTIONS(336),
    [anon_sym_ATauthor] = ACTIONS(336),
    [anon_sym_ATglobal] = ACTIONS(336),
    [anon_sym_ATlink] = ACTIONS(336),
    [anon_sym_ATmethod] = ACTIONS(336),
    [anon_sym_ATparam] = ACTIONS(336),
    [anon_sym_ATproperty] = ACTIONS(338),
    [anon_sym_ATproperty_DASHread] = ACTIONS(336),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(336),
    [anon_sym_ATreturn] = ACTIONS(336),
    [anon_sym_ATsee] = ACTIONS(336),
    [anon_sym_ATthrows] = ACTIONS(336),
    [anon_sym_ATvar] = ACTIONS(336),
    [anon_sym_ATdeprecated] = ACTIONS(336),
    [anon_sym_ATsince] = ACTIONS(336),
    [anon_sym_ATversion] = ACTIONS(336),
    [anon_sym_ATafter] = ACTIONS(338),
    [anon_sym_ATafterClass] = ACTIONS(336),
    [anon_sym_ATannotation] = ACTIONS(336),
    [anon_sym_ATbackupGlobals] = ACTIONS(336),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(336),
    [anon_sym_ATbefore] = ACTIONS(338),
    [anon_sym_ATbeforeClass] = ACTIONS(336),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(338),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(336),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(336),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(336),
    [anon_sym_ATcovers] = ACTIONS(338),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(338),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(336),
    [anon_sym_ATcoversNothing] = ACTIONS(336),
    [anon_sym_ATdataProvider] = ACTIONS(336),
    [anon_sym_ATdepends] = ACTIONS(338),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(336),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(336),
    [anon_sym_ATgroup] = ACTIONS(336),
    [anon_sym_ATlarge] = ACTIONS(336),
    [anon_sym_ATmedium] = ACTIONS(336),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(336),
    [anon_sym_ATrequires] = ACTIONS(338),
    [anon_sym_ATrequiresusages] = ACTIONS(336),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(336),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(336),
    [anon_sym_ATsmall] = ACTIONS(336),
    [anon_sym_ATtest] = ACTIONS(338),
    [anon_sym_ATtestWith] = ACTIONS(336),
    [anon_sym_ATtestdox] = ACTIONS(336),
    [anon_sym_ATticket] = ACTIONS(336),
    [sym__end] = ACTIONS(336),
    [sym_text] = ACTIONS(336),
  },
  [54] = {
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_ATinheritdoc] = ACTIONS(340),
    [anon_sym_ATinheritDoc] = ACTIONS(340),
    [anon_sym_ATapi] = ACTIONS(340),
    [anon_sym_ATfilesource] = ACTIONS(340),
    [anon_sym_ATignore] = ACTIONS(340),
    [anon_sym_ATinternal] = ACTIONS(340),
    [anon_sym_ATcategory] = ACTIONS(340),
    [anon_sym_ATcopyright] = ACTIONS(340),
    [anon_sym_ATtodo] = ACTIONS(340),
    [anon_sym_ATexample] = ACTIONS(340),
    [anon_sym_ATlicense] = ACTIONS(340),
    [anon_sym_ATpackage] = ACTIONS(340),
    [anon_sym_ATsource] = ACTIONS(340),
    [anon_sym_ATsubpackage] = ACTIONS(340),
    [anon_sym_ATuses] = ACTIONS(340),
    [anon_sym_ATauthor] = ACTIONS(340),
    [anon_sym_ATglobal] = ACTIONS(340),
    [anon_sym_ATlink] = ACTIONS(340),
    [anon_sym_ATmethod] = ACTIONS(340),
    [anon_sym_ATparam] = ACTIONS(340),
    [anon_sym_ATproperty] = ACTIONS(342),
    [anon_sym_ATproperty_DASHread] = ACTIONS(340),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(340),
    [anon_sym_ATreturn] = ACTIONS(340),
    [anon_sym_ATsee] = ACTIONS(340),
    [anon_sym_ATthrows] = ACTIONS(340),
    [anon_sym_ATvar] = ACTIONS(340),
    [anon_sym_ATdeprecated] = ACTIONS(340),
    [anon_sym_ATsince] = ACTIONS(340),
    [anon_sym_ATversion] = ACTIONS(340),
    [anon_sym_ATafter] = ACTIONS(342),
    [anon_sym_ATafterClass] = ACTIONS(340),
    [anon_sym_ATannotation] = ACTIONS(340),
    [anon_sym_ATbackupGlobals] = ACTIONS(340),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(340),
    [anon_sym_ATbefore] = ACTIONS(342),
    [anon_sym_ATbeforeClass] = ACTIONS(340),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(342),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(340),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(340),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(340),
    [anon_sym_ATcovers] = ACTIONS(342),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(342),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(340),
    [anon_sym_ATcoversNothing] = ACTIONS(340),
    [anon_sym_ATdataProvider] = ACTIONS(340),
    [anon_sym_ATdepends] = ACTIONS(342),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(340),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(340),
    [anon_sym_ATgroup] = ACTIONS(340),
    [anon_sym_ATlarge] = ACTIONS(340),
    [anon_sym_ATmedium] = ACTIONS(340),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(340),
    [anon_sym_ATrequires] = ACTIONS(342),
    [anon_sym_ATrequiresusages] = ACTIONS(340),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(340),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(340),
    [anon_sym_ATsmall] = ACTIONS(340),
    [anon_sym_ATtest] = ACTIONS(342),
    [anon_sym_ATtestWith] = ACTIONS(340),
    [anon_sym_ATtestdox] = ACTIONS(340),
    [anon_sym_ATticket] = ACTIONS(340),
    [sym__end] = ACTIONS(340),
    [sym__text_not_version] = ACTIONS(340),
  },
  [55] = {
    [anon_sym_LBRACE] = ACTIONS(344),
    [anon_sym_ATinheritdoc] = ACTIONS(344),
    [anon_sym_ATinheritDoc] = ACTIONS(344),
    [anon_sym_ATapi] = ACTIONS(344),
    [anon_sym_ATfilesource] = ACTIONS(344),
    [anon_sym_ATignore] = ACTIONS(344),
    [anon_sym_ATinternal] = ACTIONS(344),
    [anon_sym_ATcategory] = ACTIONS(344),
    [anon_sym_ATcopyright] = ACTIONS(344),
    [anon_sym_ATtodo] = ACTIONS(344),
    [anon_sym_ATexample] = ACTIONS(344),
    [anon_sym_ATlicense] = ACTIONS(344),
    [anon_sym_ATpackage] = ACTIONS(344),
    [anon_sym_ATsource] = ACTIONS(344),
    [anon_sym_ATsubpackage] = ACTIONS(344),
    [anon_sym_ATuses] = ACTIONS(344),
    [anon_sym_ATauthor] = ACTIONS(344),
    [anon_sym_ATglobal] = ACTIONS(344),
    [anon_sym_ATlink] = ACTIONS(344),
    [anon_sym_ATmethod] = ACTIONS(344),
    [anon_sym_ATparam] = ACTIONS(344),
    [anon_sym_ATproperty] = ACTIONS(346),
    [anon_sym_ATproperty_DASHread] = ACTIONS(344),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(344),
    [anon_sym_ATreturn] = ACTIONS(344),
    [anon_sym_ATsee] = ACTIONS(344),
    [anon_sym_ATthrows] = ACTIONS(344),
    [anon_sym_ATvar] = ACTIONS(344),
    [anon_sym_ATdeprecated] = ACTIONS(344),
    [anon_sym_ATsince] = ACTIONS(344),
    [anon_sym_ATversion] = ACTIONS(344),
    [anon_sym_ATafter] = ACTIONS(346),
    [anon_sym_ATafterClass] = ACTIONS(344),
    [anon_sym_ATannotation] = ACTIONS(344),
    [anon_sym_ATbackupGlobals] = ACTIONS(344),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(344),
    [anon_sym_ATbefore] = ACTIONS(346),
    [anon_sym_ATbeforeClass] = ACTIONS(344),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(346),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(344),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(344),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(344),
    [anon_sym_ATcovers] = ACTIONS(346),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(346),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(344),
    [anon_sym_ATcoversNothing] = ACTIONS(344),
    [anon_sym_ATdataProvider] = ACTIONS(344),
    [anon_sym_ATdepends] = ACTIONS(346),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(344),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(344),
    [anon_sym_ATgroup] = ACTIONS(344),
    [anon_sym_ATlarge] = ACTIONS(344),
    [anon_sym_ATmedium] = ACTIONS(344),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(344),
    [anon_sym_ATrequires] = ACTIONS(346),
    [anon_sym_ATrequiresusages] = ACTIONS(344),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(344),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(344),
    [anon_sym_ATsmall] = ACTIONS(344),
    [anon_sym_ATtest] = ACTIONS(346),
    [anon_sym_ATtestWith] = ACTIONS(344),
    [anon_sym_ATtestdox] = ACTIONS(344),
    [anon_sym_ATticket] = ACTIONS(344),
    [sym__end] = ACTIONS(344),
    [sym_text] = ACTIONS(344),
  },
  [56] = {
    [anon_sym_LBRACE] = ACTIONS(324),
    [anon_sym_ATinheritdoc] = ACTIONS(324),
    [anon_sym_ATinheritDoc] = ACTIONS(324),
    [anon_sym_ATapi] = ACTIONS(324),
    [anon_sym_ATfilesource] = ACTIONS(324),
    [anon_sym_ATignore] = ACTIONS(324),
    [anon_sym_ATinternal] = ACTIONS(324),
    [anon_sym_ATcategory] = ACTIONS(324),
    [anon_sym_ATcopyright] = ACTIONS(324),
    [anon_sym_ATtodo] = ACTIONS(324),
    [anon_sym_ATexample] = ACTIONS(324),
    [anon_sym_ATlicense] = ACTIONS(324),
    [anon_sym_ATpackage] = ACTIONS(324),
    [anon_sym_ATsource] = ACTIONS(324),
    [anon_sym_ATsubpackage] = ACTIONS(324),
    [anon_sym_ATuses] = ACTIONS(324),
    [anon_sym_ATauthor] = ACTIONS(324),
    [anon_sym_ATglobal] = ACTIONS(324),
    [anon_sym_ATlink] = ACTIONS(324),
    [anon_sym_ATmethod] = ACTIONS(324),
    [anon_sym_ATparam] = ACTIONS(324),
    [anon_sym_ATproperty] = ACTIONS(326),
    [anon_sym_ATproperty_DASHread] = ACTIONS(324),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(324),
    [anon_sym_ATreturn] = ACTIONS(324),
    [anon_sym_ATsee] = ACTIONS(324),
    [anon_sym_ATthrows] = ACTIONS(324),
    [anon_sym_ATvar] = ACTIONS(324),
    [anon_sym_ATdeprecated] = ACTIONS(324),
    [anon_sym_ATsince] = ACTIONS(324),
    [anon_sym_ATversion] = ACTIONS(324),
    [anon_sym_ATafter] = ACTIONS(326),
    [anon_sym_ATafterClass] = ACTIONS(324),
    [anon_sym_ATannotation] = ACTIONS(324),
    [anon_sym_ATbackupGlobals] = ACTIONS(324),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(324),
    [anon_sym_ATbefore] = ACTIONS(326),
    [anon_sym_ATbeforeClass] = ACTIONS(324),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(326),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(324),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(324),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(324),
    [anon_sym_ATcovers] = ACTIONS(326),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(326),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(324),
    [anon_sym_ATcoversNothing] = ACTIONS(324),
    [anon_sym_ATdataProvider] = ACTIONS(324),
    [anon_sym_ATdepends] = ACTIONS(326),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(324),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(324),
    [anon_sym_ATgroup] = ACTIONS(324),
    [anon_sym_ATlarge] = ACTIONS(324),
    [anon_sym_ATmedium] = ACTIONS(324),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(324),
    [anon_sym_ATrequires] = ACTIONS(326),
    [anon_sym_ATrequiresusages] = ACTIONS(324),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(324),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(324),
    [anon_sym_ATsmall] = ACTIONS(324),
    [anon_sym_ATtest] = ACTIONS(326),
    [anon_sym_ATtestWith] = ACTIONS(324),
    [anon_sym_ATtestdox] = ACTIONS(324),
    [anon_sym_ATticket] = ACTIONS(324),
    [sym__end] = ACTIONS(324),
    [sym__text_after_type] = ACTIONS(324),
  },
  [57] = {
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_ATinheritdoc] = ACTIONS(348),
    [anon_sym_ATinheritDoc] = ACTIONS(348),
    [anon_sym_ATapi] = ACTIONS(348),
    [anon_sym_ATfilesource] = ACTIONS(348),
    [anon_sym_ATignore] = ACTIONS(348),
    [anon_sym_ATinternal] = ACTIONS(348),
    [anon_sym_ATcategory] = ACTIONS(348),
    [anon_sym_ATcopyright] = ACTIONS(348),
    [anon_sym_ATtodo] = ACTIONS(348),
    [anon_sym_ATexample] = ACTIONS(348),
    [anon_sym_ATlicense] = ACTIONS(348),
    [anon_sym_ATpackage] = ACTIONS(348),
    [anon_sym_ATsource] = ACTIONS(348),
    [anon_sym_ATsubpackage] = ACTIONS(348),
    [anon_sym_ATuses] = ACTIONS(348),
    [anon_sym_ATauthor] = ACTIONS(348),
    [anon_sym_ATglobal] = ACTIONS(348),
    [anon_sym_ATlink] = ACTIONS(348),
    [anon_sym_ATmethod] = ACTIONS(348),
    [anon_sym_ATparam] = ACTIONS(348),
    [anon_sym_ATproperty] = ACTIONS(350),
    [anon_sym_ATproperty_DASHread] = ACTIONS(348),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(348),
    [anon_sym_ATreturn] = ACTIONS(348),
    [anon_sym_ATsee] = ACTIONS(348),
    [anon_sym_ATthrows] = ACTIONS(348),
    [anon_sym_ATvar] = ACTIONS(348),
    [anon_sym_ATdeprecated] = ACTIONS(348),
    [anon_sym_ATsince] = ACTIONS(348),
    [anon_sym_ATversion] = ACTIONS(348),
    [anon_sym_ATafter] = ACTIONS(350),
    [anon_sym_ATafterClass] = ACTIONS(348),
    [anon_sym_ATannotation] = ACTIONS(348),
    [anon_sym_ATbackupGlobals] = ACTIONS(348),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(348),
    [anon_sym_ATbefore] = ACTIONS(350),
    [anon_sym_ATbeforeClass] = ACTIONS(348),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(350),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(348),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(348),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(348),
    [anon_sym_ATcovers] = ACTIONS(350),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(350),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(348),
    [anon_sym_ATcoversNothing] = ACTIONS(348),
    [anon_sym_ATdataProvider] = ACTIONS(348),
    [anon_sym_ATdepends] = ACTIONS(350),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(348),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(348),
    [anon_sym_ATgroup] = ACTIONS(348),
    [anon_sym_ATlarge] = ACTIONS(348),
    [anon_sym_ATmedium] = ACTIONS(348),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(348),
    [anon_sym_ATrequires] = ACTIONS(350),
    [anon_sym_ATrequiresusages] = ACTIONS(348),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(348),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(348),
    [anon_sym_ATsmall] = ACTIONS(348),
    [anon_sym_ATtest] = ACTIONS(350),
    [anon_sym_ATtestWith] = ACTIONS(348),
    [anon_sym_ATtestdox] = ACTIONS(348),
    [anon_sym_ATticket] = ACTIONS(348),
    [sym__end] = ACTIONS(348),
    [sym_text] = ACTIONS(348),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(354), 1,
      anon_sym_LT,
    ACTIONS(356), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(352), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [71] = 2,
    ACTIONS(360), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(358), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [139] = 2,
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
    ACTIONS(183), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [207] = 2,
    ACTIONS(364), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(362), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [275] = 2,
    ACTIONS(368), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(366), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [343] = 2,
    ACTIONS(193), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(191), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [411] = 2,
    ACTIONS(372), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(370), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [479] = 2,
    ACTIONS(376), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(374), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [547] = 2,
    ACTIONS(380), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(378), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [615] = 2,
    ACTIONS(384), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(382), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [683] = 2,
    ACTIONS(388), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(386), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [751] = 2,
    ACTIONS(392), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(390), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [819] = 2,
    ACTIONS(221), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(219), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [887] = 2,
    ACTIONS(217), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(215), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [955] = 2,
    ACTIONS(241), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(239), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
    ACTIONS(396), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(394), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [1091] = 2,
    ACTIONS(400), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(398), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [1159] = 2,
    ACTIONS(404), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(402), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [1227] = 2,
    ACTIONS(197), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(195), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [1295] = 2,
    ACTIONS(408), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(406), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [1363] = 2,
    ACTIONS(412), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(410), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [1431] = 2,
    ACTIONS(416), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(414), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [1499] = 2,
    ACTIONS(420), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(418), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [1567] = 2,
    ACTIONS(424), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(422), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [1635] = 2,
    ACTIONS(428), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(426), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [1703] = 2,
    ACTIONS(205), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(203), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [1771] = 2,
    ACTIONS(432), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(430), 54,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
      anon_sym_ATapi,
      anon_sym_ATfilesource,
      anon_sym_ATignore,
      anon_sym_ATinternal,
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
  [1839] = 16,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(436), 1,
      anon_sym_list,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_qualified_name,
    STATE(155), 1,
      sym_parameter,
    STATE(159), 1,
      sym_variable_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(171), 2,
      sym__type,
      sym_union_type,
    STATE(127), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(148), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [1906] = 15,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(436), 1,
      anon_sym_list,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    STATE(121), 1,
      sym_qualified_name,
    STATE(159), 1,
      sym_variable_name,
    STATE(170), 1,
      sym_parameter,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(171), 2,
      sym__type,
      sym_union_type,
    STATE(127), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(148), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [1970] = 14,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(436), 1,
      anon_sym_list,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    STATE(29), 1,
      sym_variable_name,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(182), 2,
      sym__type,
      sym_union_type,
    STATE(127), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(148), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2031] = 14,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(436), 1,
      anon_sym_list,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    ACTIONS(452), 1,
      anon_sym_static,
    STATE(92), 1,
      sym_static,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(206), 2,
      sym__type,
      sym_union_type,
    STATE(127), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(148), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(444), 11,
      anon_sym_array,
      anon_sym_callable,
      anon_sym_iterable,
      anon_sym_bool,
      anon_sym_float,
      anon_sym_int,
      anon_sym_string,
      anon_sym_void,
      anon_sym_mixed,
      anon_sym_false,
      anon_sym_null,
  [2091] = 12,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(454), 1,
      sym_name,
    ACTIONS(456), 1,
      anon_sym_list,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    STATE(131), 1,
      sym_qualified_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(125), 2,
      sym__type,
      sym_union_type,
    STATE(126), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(138), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(460), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2146] = 12,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(436), 1,
      anon_sym_list,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(184), 2,
      sym__type,
      sym_union_type,
    STATE(127), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(148), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2201] = 12,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(436), 1,
      anon_sym_list,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(174), 2,
      sym__type,
      sym_union_type,
    STATE(127), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(148), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2256] = 12,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(436), 1,
      anon_sym_list,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(220), 2,
      sym__type,
      sym_union_type,
    STATE(127), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(148), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2311] = 12,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(462), 1,
      sym_name,
    ACTIONS(464), 1,
      anon_sym_list,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    STATE(17), 1,
      sym_qualified_name,
    STATE(186), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(25), 2,
      sym__type,
      sym_union_type,
    STATE(10), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(35), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(468), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2366] = 12,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(462), 1,
      sym_name,
    ACTIONS(464), 1,
      anon_sym_list,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    STATE(17), 1,
      sym_qualified_name,
    STATE(186), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(31), 2,
      sym__type,
      sym_union_type,
    STATE(10), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(35), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(468), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2421] = 11,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(436), 1,
      anon_sym_list,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(127), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(156), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2472] = 11,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(462), 1,
      sym_name,
    ACTIONS(464), 1,
      anon_sym_list,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    STATE(17), 1,
      sym_qualified_name,
    STATE(186), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(10), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(43), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(468), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2523] = 11,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(454), 1,
      sym_name,
    ACTIONS(456), 1,
      anon_sym_list,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    STATE(131), 1,
      sym_qualified_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(126), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(151), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(460), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2574] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(172), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2616] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(192), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2658] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(217), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2700] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(198), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2742] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(176), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2784] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(215), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2826] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(212), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2868] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(167), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2910] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(210), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2952] = 8,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(462), 1,
      sym_name,
    STATE(17), 1,
      sym_qualified_name,
    STATE(186), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(16), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(468), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [2989] = 8,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    STATE(121), 1,
      sym_qualified_name,
    STATE(202), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(123), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(444), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [3026] = 4,
    ACTIONS(470), 1,
      sym_name,
    ACTIONS(475), 2,
      anon_sym_BSLASH,
      anon_sym_QMARK,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
    ACTIONS(473), 14,
      anon_sym_list,
      aux_sym_namespace_name_as_prefix_token1,
      anon_sym_array,
      anon_sym_callable,
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
  [3055] = 8,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(454), 1,
      sym_name,
    STATE(131), 1,
      sym_qualified_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
    STATE(130), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(460), 12,
      anon_sym_array,
      anon_sym_callable,
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
  [3092] = 8,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      aux_sym_version_token2,
    ACTIONS(127), 1,
      sym__text_not_version,
    STATE(33), 1,
      sym_version,
    STATE(34), 1,
      aux_sym__description_not_version_repeat1,
    STATE(54), 1,
      sym_inline_tag,
    STATE(72), 1,
      sym__description_not_version,
    ACTIONS(123), 3,
      aux_sym_version_token1,
      anon_sym_ATpackage_version_AT,
      sym__version_vector,
  [3119] = 8,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      aux_sym_version_token2,
    ACTIONS(127), 1,
      sym__text_not_version,
    STATE(27), 1,
      sym_version,
    STATE(34), 1,
      aux_sym__description_not_version_repeat1,
    STATE(54), 1,
      sym_inline_tag,
    STATE(71), 1,
      sym__description_not_version,
    ACTIONS(123), 3,
      aux_sym_version_token1,
      anon_sym_ATpackage_version_AT,
      sym__version_vector,
  [3146] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    STATE(181), 1,
      aux_sym_namespace_name_repeat1,
    ACTIONS(129), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3162] = 5,
    ACTIONS(479), 1,
      anon_sym_ATinternal,
    ACTIONS(481), 1,
      anon_sym_ATlink,
    ACTIONS(483), 1,
      anon_sym_ATsee,
    ACTIONS(477), 2,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
    STATE(213), 3,
      sym__inline_internal_tag,
      sym__inline_link_tag,
      sym__inline_see_tag,
  [3181] = 5,
    ACTIONS(479), 1,
      anon_sym_ATinternal,
    ACTIONS(481), 1,
      anon_sym_ATlink,
    ACTIONS(483), 1,
      anon_sym_ATsee,
    ACTIONS(485), 2,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
    STATE(188), 3,
      sym__inline_internal_tag,
      sym__inline_link_tag,
      sym__inline_see_tag,
  [3200] = 5,
    ACTIONS(479), 1,
      anon_sym_ATinternal,
    ACTIONS(481), 1,
      anon_sym_ATlink,
    ACTIONS(483), 1,
      anon_sym_ATsee,
    ACTIONS(487), 2,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
    STATE(218), 3,
      sym__inline_internal_tag,
      sym__inline_link_tag,
      sym__inline_see_tag,
  [3219] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    STATE(181), 1,
      aux_sym_namespace_name_repeat1,
    ACTIONS(129), 6,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3234] = 5,
    ACTIONS(479), 1,
      anon_sym_ATinternal,
    ACTIONS(481), 1,
      anon_sym_ATlink,
    ACTIONS(483), 1,
      anon_sym_ATsee,
    ACTIONS(489), 2,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
    STATE(207), 3,
      sym__inline_internal_tag,
      sym__inline_link_tag,
      sym__inline_see_tag,
  [3253] = 7,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(491), 1,
      sym_name,
    ACTIONS(493), 1,
      sym_uri,
    STATE(11), 1,
      sym_qualified_name,
    STATE(186), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
  [3275] = 1,
    ACTIONS(136), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3285] = 1,
    ACTIONS(129), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3295] = 1,
    ACTIONS(154), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3305] = 1,
    ACTIONS(175), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3315] = 7,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(491), 1,
      sym_name,
    ACTIONS(495), 1,
      sym_uri,
    STATE(142), 1,
      sym_qualified_name,
    STATE(219), 1,
      sym_namespace_name_as_prefix,
    STATE(223), 1,
      sym_namespace_name,
  [3337] = 7,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      sym__text_after_type,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    STATE(21), 1,
      sym_variable_name,
    STATE(40), 1,
      aux_sym__description_after_type_repeat1,
    STATE(47), 1,
      sym_inline_tag,
    STATE(63), 1,
      sym__description_after_type,
  [3359] = 4,
    ACTIONS(497), 1,
      anon_sym_LT,
    ACTIONS(499), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(129), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(140), 4,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3375] = 4,
    ACTIONS(501), 1,
      anon_sym_LT,
    ACTIONS(503), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(140), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(140), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3390] = 1,
    ACTIONS(136), 6,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3399] = 3,
    ACTIONS(505), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(133), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(169), 4,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3412] = 1,
    ACTIONS(175), 6,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3421] = 1,
    ACTIONS(129), 6,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3430] = 6,
    ACTIONS(507), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      sym__text_in_inline_tag,
    STATE(135), 1,
      aux_sym__description_in_inline_tag_with_nesting_repeat1,
    STATE(163), 1,
      sym_inline_tag,
    STATE(216), 1,
      sym__description_in_inline_tag_with_nesting,
  [3449] = 3,
    ACTIONS(513), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(133), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(162), 4,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3462] = 1,
    ACTIONS(154), 6,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3471] = 5,
    ACTIONS(507), 1,
      anon_sym_LBRACE,
    ACTIONS(511), 1,
      sym__text_in_inline_tag,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      aux_sym__description_in_inline_tag_with_nesting_repeat1,
    STATE(163), 1,
      sym_inline_tag,
  [3487] = 3,
    ACTIONS(518), 1,
      anon_sym_PIPE,
    STATE(136), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(291), 3,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
  [3499] = 3,
    ACTIONS(521), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(137), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(162), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3511] = 3,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(141), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(247), 3,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
  [3523] = 5,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      sym__text_in_inline_tag,
    STATE(139), 1,
      aux_sym__description_in_inline_tag_with_nesting_repeat1,
    STATE(163), 1,
      sym_inline_tag,
  [3539] = 3,
    ACTIONS(534), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(137), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(169), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3551] = 3,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(136), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(279), 3,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
  [3563] = 5,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(540), 1,
      sym__text_in_inline_tag,
    STATE(160), 1,
      aux_sym__description_in_inline_tag_repeat1,
    STATE(200), 1,
      sym__description_in_inline_tag,
  [3579] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_text,
    STATE(67), 1,
      sym_description,
    STATE(38), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3593] = 1,
    ACTIONS(312), 4,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3600] = 1,
    ACTIONS(316), 4,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3607] = 3,
    ACTIONS(542), 1,
      anon_sym_PIPE,
    STATE(152), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(279), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3618] = 4,
    ACTIONS(540), 1,
      sym__text_in_inline_tag,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym__description_in_inline_tag_repeat1,
    STATE(194), 1,
      sym__description_in_inline_tag,
  [3631] = 3,
    ACTIONS(542), 1,
      anon_sym_PIPE,
    STATE(146), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(247), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3642] = 4,
    ACTIONS(540), 1,
      sym__text_in_inline_tag,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym__description_in_inline_tag_repeat1,
    STATE(201), 1,
      sym__description_in_inline_tag,
  [3655] = 4,
    ACTIONS(540), 1,
      sym__text_in_inline_tag,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym__description_in_inline_tag_repeat1,
    STATE(224), 1,
      sym__description_in_inline_tag,
  [3668] = 1,
    ACTIONS(291), 4,
      sym__text_after_type,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3675] = 3,
    ACTIONS(550), 1,
      anon_sym_PIPE,
    STATE(152), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(291), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3686] = 1,
    ACTIONS(316), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3692] = 3,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_parameters_repeat1,
  [3702] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_parameters_repeat1,
  [3712] = 1,
    ACTIONS(291), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3718] = 3,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(564), 1,
      sym__text_in_inline_tag,
    STATE(157), 1,
      aux_sym__description_in_inline_tag_repeat1,
  [3728] = 2,
    ACTIONS(569), 1,
      anon_sym_EQ,
    ACTIONS(567), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3736] = 2,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(571), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3744] = 3,
    ACTIONS(540), 1,
      sym__text_in_inline_tag,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      aux_sym__description_in_inline_tag_repeat1,
  [3754] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_parameters_repeat1,
  [3764] = 3,
    ACTIONS(579), 1,
      sym_name,
    ACTIONS(581), 1,
      anon_sym_BSLASH,
    STATE(225), 1,
      sym_namespace_name,
  [3774] = 1,
    ACTIONS(583), 3,
      sym__text_in_inline_tag,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3780] = 1,
    ACTIONS(324), 3,
      sym__text_in_inline_tag,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3786] = 1,
    ACTIONS(312), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3792] = 1,
    ACTIONS(136), 3,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
      anon_sym_LPAREN_RPAREN,
  [3798] = 2,
    ACTIONS(585), 1,
      anon_sym_GT,
    ACTIONS(587), 1,
      anon_sym_COMMA,
  [3805] = 2,
    ACTIONS(589), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_parameters,
  [3812] = 1,
    ACTIONS(591), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3817] = 1,
    ACTIONS(556), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3822] = 2,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    STATE(158), 1,
      sym_variable_name,
  [3829] = 2,
    ACTIONS(593), 1,
      anon_sym_GT,
    ACTIONS(595), 1,
      anon_sym_COMMA,
  [3836] = 2,
    ACTIONS(597), 1,
      anon_sym_BSLASH,
    STATE(173), 1,
      aux_sym_namespace_name_repeat1,
  [3843] = 2,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    STATE(69), 1,
      sym_variable_name,
  [3850] = 1,
    ACTIONS(600), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3855] = 2,
    ACTIONS(602), 1,
      anon_sym_GT,
    ACTIONS(604), 1,
      anon_sym_COMMA,
  [3862] = 2,
    ACTIONS(589), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_parameters,
  [3869] = 2,
    ACTIONS(606), 1,
      sym_name,
    STATE(193), 1,
      sym_namespace_name,
  [3876] = 2,
    ACTIONS(609), 1,
      sym_name,
    STATE(225), 1,
      sym_namespace_name,
  [3883] = 2,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    STATE(181), 1,
      aux_sym_namespace_name_repeat1,
  [3890] = 2,
    ACTIONS(612), 1,
      anon_sym_BSLASH,
    STATE(173), 1,
      aux_sym_namespace_name_repeat1,
  [3897] = 2,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      sym_variable_name,
  [3904] = 1,
    ACTIONS(615), 2,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
  [3909] = 2,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    STATE(23), 1,
      sym_variable_name,
  [3916] = 1,
    ACTIONS(617), 1,
      anon_sym_LT,
  [3920] = 1,
    ACTIONS(619), 1,
      sym_name,
  [3924] = 1,
    ACTIONS(621), 1,
      sym_uri,
  [3928] = 1,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
  [3932] = 1,
    ACTIONS(625), 1,
      sym__version_vector,
  [3936] = 1,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
  [3940] = 1,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
  [3944] = 1,
    ACTIONS(631), 1,
      anon_sym_GT,
  [3948] = 1,
    ACTIONS(633), 1,
      anon_sym_BSLASH,
  [3952] = 1,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
  [3956] = 1,
    ACTIONS(637), 1,
      sym_name,
  [3960] = 1,
    ACTIONS(639), 1,
      sym_name,
  [3964] = 1,
    ACTIONS(641), 1,
      anon_sym_BSLASH,
  [3968] = 1,
    ACTIONS(593), 1,
      anon_sym_GT,
  [3972] = 1,
    ACTIONS(643), 1,
      anon_sym_GT,
  [3976] = 1,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
  [3980] = 1,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
  [3984] = 1,
    ACTIONS(647), 1,
      sym_name,
  [3988] = 1,
    ACTIONS(649), 1,
      ts_builtin_sym_end,
  [3992] = 1,
    ACTIONS(651), 1,
      sym_author_name,
  [3996] = 1,
    ACTIONS(653), 1,
      sym_name,
  [4000] = 1,
    ACTIONS(655), 1,
      sym_name,
  [4004] = 1,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
  [4008] = 1,
    ACTIONS(659), 1,
      sym_uri,
  [4012] = 1,
    ACTIONS(661), 1,
      sym_name,
  [4016] = 1,
    ACTIONS(585), 1,
      anon_sym_GT,
  [4020] = 1,
    ACTIONS(663), 1,
      ts_builtin_sym_end,
  [4024] = 1,
    ACTIONS(665), 1,
      anon_sym_GT,
  [4028] = 1,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
  [4032] = 1,
    ACTIONS(669), 1,
      sym_name,
  [4036] = 1,
    ACTIONS(602), 1,
      anon_sym_GT,
  [4040] = 1,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
  [4044] = 1,
    ACTIONS(673), 1,
      anon_sym_GT,
  [4048] = 1,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
  [4052] = 1,
    ACTIONS(677), 1,
      sym_name,
  [4056] = 1,
    ACTIONS(679), 1,
      sym_name,
  [4060] = 1,
    ACTIONS(681), 1,
      sym_default_value,
  [4064] = 1,
    ACTIONS(683), 1,
      sym_name,
  [4068] = 1,
    ACTIONS(685), 1,
      anon_sym_BSLASH,
  [4072] = 1,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
  [4076] = 1,
    ACTIONS(689), 1,
      anon_sym_BSLASH,
  [4080] = 1,
    ACTIONS(691), 1,
      sym_default_value,
  [4084] = 1,
    ACTIONS(693), 1,
      sym_name,
  [4088] = 1,
    ACTIONS(695), 1,
      sym_email_address,
  [4092] = 1,
    ACTIONS(697), 1,
      anon_sym_LT,
  [4096] = 1,
    ACTIONS(699), 1,
      anon_sym_LT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(58)] = 0,
  [SMALL_STATE(59)] = 71,
  [SMALL_STATE(60)] = 139,
  [SMALL_STATE(61)] = 207,
  [SMALL_STATE(62)] = 275,
  [SMALL_STATE(63)] = 343,
  [SMALL_STATE(64)] = 411,
  [SMALL_STATE(65)] = 479,
  [SMALL_STATE(66)] = 547,
  [SMALL_STATE(67)] = 615,
  [SMALL_STATE(68)] = 683,
  [SMALL_STATE(69)] = 751,
  [SMALL_STATE(70)] = 819,
  [SMALL_STATE(71)] = 887,
  [SMALL_STATE(72)] = 955,
  [SMALL_STATE(73)] = 1023,
  [SMALL_STATE(74)] = 1091,
  [SMALL_STATE(75)] = 1159,
  [SMALL_STATE(76)] = 1227,
  [SMALL_STATE(77)] = 1295,
  [SMALL_STATE(78)] = 1363,
  [SMALL_STATE(79)] = 1431,
  [SMALL_STATE(80)] = 1499,
  [SMALL_STATE(81)] = 1567,
  [SMALL_STATE(82)] = 1635,
  [SMALL_STATE(83)] = 1703,
  [SMALL_STATE(84)] = 1771,
  [SMALL_STATE(85)] = 1839,
  [SMALL_STATE(86)] = 1906,
  [SMALL_STATE(87)] = 1970,
  [SMALL_STATE(88)] = 2031,
  [SMALL_STATE(89)] = 2091,
  [SMALL_STATE(90)] = 2146,
  [SMALL_STATE(91)] = 2201,
  [SMALL_STATE(92)] = 2256,
  [SMALL_STATE(93)] = 2311,
  [SMALL_STATE(94)] = 2366,
  [SMALL_STATE(95)] = 2421,
  [SMALL_STATE(96)] = 2472,
  [SMALL_STATE(97)] = 2523,
  [SMALL_STATE(98)] = 2574,
  [SMALL_STATE(99)] = 2616,
  [SMALL_STATE(100)] = 2658,
  [SMALL_STATE(101)] = 2700,
  [SMALL_STATE(102)] = 2742,
  [SMALL_STATE(103)] = 2784,
  [SMALL_STATE(104)] = 2826,
  [SMALL_STATE(105)] = 2868,
  [SMALL_STATE(106)] = 2910,
  [SMALL_STATE(107)] = 2952,
  [SMALL_STATE(108)] = 2989,
  [SMALL_STATE(109)] = 3026,
  [SMALL_STATE(110)] = 3055,
  [SMALL_STATE(111)] = 3092,
  [SMALL_STATE(112)] = 3119,
  [SMALL_STATE(113)] = 3146,
  [SMALL_STATE(114)] = 3162,
  [SMALL_STATE(115)] = 3181,
  [SMALL_STATE(116)] = 3200,
  [SMALL_STATE(117)] = 3219,
  [SMALL_STATE(118)] = 3234,
  [SMALL_STATE(119)] = 3253,
  [SMALL_STATE(120)] = 3275,
  [SMALL_STATE(121)] = 3285,
  [SMALL_STATE(122)] = 3295,
  [SMALL_STATE(123)] = 3305,
  [SMALL_STATE(124)] = 3315,
  [SMALL_STATE(125)] = 3337,
  [SMALL_STATE(126)] = 3359,
  [SMALL_STATE(127)] = 3375,
  [SMALL_STATE(128)] = 3390,
  [SMALL_STATE(129)] = 3399,
  [SMALL_STATE(130)] = 3412,
  [SMALL_STATE(131)] = 3421,
  [SMALL_STATE(132)] = 3430,
  [SMALL_STATE(133)] = 3449,
  [SMALL_STATE(134)] = 3462,
  [SMALL_STATE(135)] = 3471,
  [SMALL_STATE(136)] = 3487,
  [SMALL_STATE(137)] = 3499,
  [SMALL_STATE(138)] = 3511,
  [SMALL_STATE(139)] = 3523,
  [SMALL_STATE(140)] = 3539,
  [SMALL_STATE(141)] = 3551,
  [SMALL_STATE(142)] = 3563,
  [SMALL_STATE(143)] = 3579,
  [SMALL_STATE(144)] = 3593,
  [SMALL_STATE(145)] = 3600,
  [SMALL_STATE(146)] = 3607,
  [SMALL_STATE(147)] = 3618,
  [SMALL_STATE(148)] = 3631,
  [SMALL_STATE(149)] = 3642,
  [SMALL_STATE(150)] = 3655,
  [SMALL_STATE(151)] = 3668,
  [SMALL_STATE(152)] = 3675,
  [SMALL_STATE(153)] = 3686,
  [SMALL_STATE(154)] = 3692,
  [SMALL_STATE(155)] = 3702,
  [SMALL_STATE(156)] = 3712,
  [SMALL_STATE(157)] = 3718,
  [SMALL_STATE(158)] = 3728,
  [SMALL_STATE(159)] = 3736,
  [SMALL_STATE(160)] = 3744,
  [SMALL_STATE(161)] = 3754,
  [SMALL_STATE(162)] = 3764,
  [SMALL_STATE(163)] = 3774,
  [SMALL_STATE(164)] = 3780,
  [SMALL_STATE(165)] = 3786,
  [SMALL_STATE(166)] = 3792,
  [SMALL_STATE(167)] = 3798,
  [SMALL_STATE(168)] = 3805,
  [SMALL_STATE(169)] = 3812,
  [SMALL_STATE(170)] = 3817,
  [SMALL_STATE(171)] = 3822,
  [SMALL_STATE(172)] = 3829,
  [SMALL_STATE(173)] = 3836,
  [SMALL_STATE(174)] = 3843,
  [SMALL_STATE(175)] = 3850,
  [SMALL_STATE(176)] = 3855,
  [SMALL_STATE(177)] = 3862,
  [SMALL_STATE(178)] = 3869,
  [SMALL_STATE(179)] = 3876,
  [SMALL_STATE(180)] = 3883,
  [SMALL_STATE(181)] = 3890,
  [SMALL_STATE(182)] = 3897,
  [SMALL_STATE(183)] = 3904,
  [SMALL_STATE(184)] = 3909,
  [SMALL_STATE(185)] = 3916,
  [SMALL_STATE(186)] = 3920,
  [SMALL_STATE(187)] = 3924,
  [SMALL_STATE(188)] = 3928,
  [SMALL_STATE(189)] = 3932,
  [SMALL_STATE(190)] = 3936,
  [SMALL_STATE(191)] = 3940,
  [SMALL_STATE(192)] = 3944,
  [SMALL_STATE(193)] = 3948,
  [SMALL_STATE(194)] = 3952,
  [SMALL_STATE(195)] = 3956,
  [SMALL_STATE(196)] = 3960,
  [SMALL_STATE(197)] = 3964,
  [SMALL_STATE(198)] = 3968,
  [SMALL_STATE(199)] = 3972,
  [SMALL_STATE(200)] = 3976,
  [SMALL_STATE(201)] = 3980,
  [SMALL_STATE(202)] = 3984,
  [SMALL_STATE(203)] = 3988,
  [SMALL_STATE(204)] = 3992,
  [SMALL_STATE(205)] = 3996,
  [SMALL_STATE(206)] = 4000,
  [SMALL_STATE(207)] = 4004,
  [SMALL_STATE(208)] = 4008,
  [SMALL_STATE(209)] = 4012,
  [SMALL_STATE(210)] = 4016,
  [SMALL_STATE(211)] = 4020,
  [SMALL_STATE(212)] = 4024,
  [SMALL_STATE(213)] = 4028,
  [SMALL_STATE(214)] = 4032,
  [SMALL_STATE(215)] = 4036,
  [SMALL_STATE(216)] = 4040,
  [SMALL_STATE(217)] = 4044,
  [SMALL_STATE(218)] = 4048,
  [SMALL_STATE(219)] = 4052,
  [SMALL_STATE(220)] = 4056,
  [SMALL_STATE(221)] = 4060,
  [SMALL_STATE(222)] = 4064,
  [SMALL_STATE(223)] = 4068,
  [SMALL_STATE(224)] = 4072,
  [SMALL_STATE(225)] = 4076,
  [SMALL_STATE(226)] = 4080,
  [SMALL_STATE(227)] = 4084,
  [SMALL_STATE(228)] = 4088,
  [SMALL_STATE(229)] = 4092,
  [SMALL_STATE(230)] = 4096,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(143),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(204),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(208),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(112),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deprecated_tag, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deprecated_tag, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type, 1),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 1), SHIFT(227),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__types, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 2, .production_id = 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 2, .production_id = 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(14),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpdoc_array_types, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpdoc_array_types, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_optional_description, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_optional_description, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 5),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 3, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 3, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpunit_tag, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpunit_tag, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__since_tag, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__since_tag, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deprecated_tag, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deprecated_tag, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_incomplete_implementation, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_incomplete_implementation, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_not_version, 1, .production_id = 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__description_not_version, 1, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_after_type_repeat1, 2), SHIFT_REPEAT(116),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_after_type_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_after_type_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_after_type_repeat1, 2), SHIFT_REPEAT(47),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(115),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(37),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_after_type, 1, .production_id = 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__description_after_type, 1, .production_id = 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(96),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_not_version_repeat1, 2), SHIFT_REPEAT(118),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_not_version_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_not_version_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_not_version_repeat1, 2), SHIFT_REPEAT(54),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__psalm_list_array_types, 4, .production_id = 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__psalm_list_array_types, 4, .production_id = 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__psalm_generic_array_types, 6, .production_id = 4),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__psalm_generic_array_types, 6, .production_id = 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_after_type_repeat1, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_after_type_repeat1, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_not_version_repeat1, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_not_version_repeat1, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_optional_description, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_optional_description, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 5),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 5),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 4),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 4, .production_id = 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 4, .production_id = 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_required_description, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_required_description, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 6),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 6),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_tag, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__global_tag, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpunit_tag, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpunit_tag, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deprecated_tag, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deprecated_tag, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__since_tag, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__since_tag, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_incomplete_implementation, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_incomplete_implementation, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primitive_type, 1), REDUCE(sym_static, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_internal_tag, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(133),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_in_inline_tag_with_nesting, 1, .production_id = 2),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(97),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(137),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_with_nesting_repeat1, 2), SHIFT_REPEAT(114),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_with_nesting_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_with_nesting_repeat1, 2), SHIFT_REPEAT(163),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_see_tag, 2, .production_id = 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_see_tag, 3, .production_id = 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_see_tag, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_link_tag, 2),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(95),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(86),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_repeat1, 2),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_repeat1, 2), SHIFT_REPEAT(183),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_in_inline_tag, 1, .production_id = 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_with_nesting_repeat1, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2), SHIFT_REPEAT(227),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2), SHIFT(180),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 1), SHIFT(180),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 2), SHIFT(227),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_repeat1, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_see_tag, 4, .production_id = 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_see_tag, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 4),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [663] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_internal_tag, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_link_tag, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_phpdoc_external_scanner_create(void);
void tree_sitter_phpdoc_external_scanner_destroy(void *);
bool tree_sitter_phpdoc_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_phpdoc_external_scanner_serialize(void *, char *);
void tree_sitter_phpdoc_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_phpdoc(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_name,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_phpdoc_external_scanner_create,
      tree_sitter_phpdoc_external_scanner_destroy,
      tree_sitter_phpdoc_external_scanner_scan,
      tree_sitter_phpdoc_external_scanner_serialize,
      tree_sitter_phpdoc_external_scanner_deserialize,
    },
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
