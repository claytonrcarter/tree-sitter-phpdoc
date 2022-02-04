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
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 65
#define SYMBOL_COUNT 165
#define ALIAS_COUNT 0
#define TOKEN_COUNT 107
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
  anon_sym_callable = 76,
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
  aux_sym_version_token1 = 91,
  aux_sym_version_token2 = 92,
  anon_sym_ATpackage_version_AT = 93,
  sym__version_vector = 94,
  sym_uri = 95,
  anon_sym_LPAREN_RPAREN = 96,
  anon_sym_COLON_COLON = 97,
  anon_sym_LPAREN = 98,
  anon_sym_RPAREN = 99,
  anon_sym_EQ = 100,
  sym_default_value = 101,
  sym__end = 102,
  sym_text = 103,
  sym__text_after_type = 104,
  sym__text_in_inline_tag = 105,
  sym__text_not_version = 106,
  sym_document = 107,
  sym_description = 108,
  sym__description_after_type = 109,
  sym__description_not_version = 110,
  sym__description_in_inline_tag = 111,
  sym__description_in_inline_tag_with_nesting = 112,
  sym_tag = 113,
  sym_inline_tag = 114,
  sym__tag_without_description = 115,
  sym__tag_with_optional_description = 116,
  sym__tag_with_required_description = 117,
  sym__tag_with_incomplete_implementation = 118,
  sym__author_tag = 119,
  sym__global_tag = 120,
  sym__inline_internal_tag = 121,
  sym__link_tag = 122,
  sym__inline_link_tag = 123,
  sym__method_tag = 124,
  sym__param_tag = 125,
  sym__property_tag = 126,
  sym__return_tag = 127,
  sym__see_tag = 128,
  sym__inline_see_tag = 129,
  sym__throws_tag = 130,
  sym__var_tag = 131,
  sym__deprecated_tag = 132,
  sym__since_tag = 133,
  sym__version_tag = 134,
  sym__phpunit_tag = 135,
  sym__type = 136,
  sym__types = 137,
  sym__regular_types = 138,
  sym__phpdoc_array_types = 139,
  sym__psalm_generic_array_types = 140,
  sym__psalm_list_array_types = 141,
  sym_named_type = 142,
  sym_namespace_name = 143,
  sym_namespace_name_as_prefix = 144,
  sym_optional_type = 145,
  sym_primitive_type = 146,
  sym_qualified_name = 147,
  sym_union_type = 148,
  sym_variable_name = 149,
  sym_version = 150,
  sym_fqsen = 151,
  sym_parameters = 152,
  sym_parameter = 153,
  sym_static = 154,
  aux_sym_document_repeat1 = 155,
  aux_sym_description_repeat1 = 156,
  aux_sym__description_after_type_repeat1 = 157,
  aux_sym__description_not_version_repeat1 = 158,
  aux_sym__description_in_inline_tag_repeat1 = 159,
  aux_sym__description_in_inline_tag_with_nesting_repeat1 = 160,
  aux_sym__phpdoc_array_types_repeat1 = 161,
  aux_sym_namespace_name_repeat1 = 162,
  aux_sym_union_type_repeat1 = 163,
  aux_sym_parameters_repeat1 = 164,
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
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_COLON_COLON] = "::",
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
  [sym_fqsen] = "fqsen",
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
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
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
  [sym_fqsen] = sym_fqsen,
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
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
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
  [sym_fqsen] = {
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

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 3},
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

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_description,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
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
      if (eof) ADVANCE(470);
      if (lookahead == '\n') SKIP(469)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '(') ADVANCE(572);
      if (lookahead == ')') ADVANCE(573);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '=') ADVANCE(574);
      if (lookahead == '>') ADVANCE(492);
      if (lookahead == '?') ADVANCE(556);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == 'h') ADVANCE(545);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '|') ADVANCE(557);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(575);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == '\r') ADVANCE(575);
      if (lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(577);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(573);
      if (lookahead == '*') SKIP(2)
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '>') ADVANCE(492);
      if (lookahead == '?') ADVANCE(556);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == '|') ADVANCE(557);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(573);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '>') ADVANCE(492);
      if (lookahead == '?') ADVANCE(556);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == '|') ADVANCE(557);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '(') ADVANCE(572);
      if (lookahead == ')') ADVANCE(573);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '=') ADVANCE(574);
      if (lookahead == '>') ADVANCE(492);
      if (lookahead == '?') ADVANCE(556);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == 'h') ADVANCE(545);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '|') ADVANCE(557);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '(') ADVANCE(572);
      if (lookahead == ')') ADVANCE(573);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '=') ADVANCE(574);
      if (lookahead == '>') ADVANCE(492);
      if (lookahead == '?') ADVANCE(556);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == 'h') ADVANCE(545);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '|') ADVANCE(557);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '(') ADVANCE(572);
      if (lookahead == ')') ADVANCE(573);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '/') ADVANCE(579);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '=') ADVANCE(574);
      if (lookahead == '>') ADVANCE(492);
      if (lookahead == '?') ADVANCE(556);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == 'h') ADVANCE(545);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '|') ADVANCE(557);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '$') ADVANCE(465);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(573);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '=') ADVANCE(574);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '$') ADVANCE(465);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(573);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '/') ADVANCE(578);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '=') ADVANCE(574);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '$') ADVANCE(465);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(573);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '=') ADVANCE(574);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '|') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(578);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '|') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '|') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '*') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '*') ADVANCE(563);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(404);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(428);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(570);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(471);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(564);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '@') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(564);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(578);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(468);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(571);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '@') ADVANCE(567);
      END_STATE();
    case 37:
      if (lookahead == '@') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(29);
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
      if (lookahead == 'A') ADVANCE(425);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(405);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(288);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(253);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(254);
      if (lookahead == 'S') ADVANCE(423);
      END_STATE();
    case 45:
      if (lookahead == 'G') ADVANCE(255);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(208);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(285);
      END_STATE();
    case 49:
      if (lookahead == 'N') ADVANCE(298);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(351);
      END_STATE();
    case 51:
      if (lookahead == 'P') ADVANCE(353);
      END_STATE();
    case 52:
      if (lookahead == 'P') ADVANCE(175);
      END_STATE();
    case 53:
      if (lookahead == 'P') ADVANCE(365);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(185);
      END_STATE();
    case 55:
      if (lookahead == 'S') ADVANCE(442);
      END_STATE();
    case 56:
      if (lookahead == 'S') ADVANCE(193);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(539);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 'g') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(398);
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 'g') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(398);
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(324);
      END_STATE();
    case 100:
      if (lookahead == 'b') ADVANCE(452);
      END_STATE();
    case 101:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 102:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(495);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(504);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(516);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead == 'v') ADVANCE(186);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'h') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 194:
      if (lookahead == 'f') ADVANCE(418);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 195:
      if (lookahead == 'f') ADVANCE(300);
      END_STATE();
    case 196:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 197:
      if (lookahead == 'f') ADVANCE(309);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(521);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 201:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 202:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 203:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 204:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 205:
      if (lookahead == 'g') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 206:
      if (lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 207:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 208:
      if (lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 209:
      if (lookahead == 'h') ADVANCE(536);
      END_STATE();
    case 210:
      if (lookahead == 'h') ADVANCE(294);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 212:
      if (lookahead == 'h') ADVANCE(411);
      END_STATE();
    case 213:
      if (lookahead == 'h') ADVANCE(303);
      END_STATE();
    case 214:
      if (lookahead == 'h') ADVANCE(165);
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 215:
      if (lookahead == 'h') ADVANCE(310);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 235:
      if (lookahead == 'k') ADVANCE(494);
      END_STATE();
    case 236:
      if (lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 237:
      if (lookahead == 'k') ADVANCE(160);
      END_STATE();
    case 238:
      if (lookahead == 'k') ADVANCE(448);
      END_STATE();
    case 239:
      if (lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 240:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(534);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(493);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 256:
      if (lookahead == 'm') ADVANCE(496);
      END_STATE();
    case 257:
      if (lookahead == 'm') ADVANCE(528);
      END_STATE();
    case 258:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 259:
      if (lookahead == 'm') ADVANCE(327);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(446);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 310:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 321:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 322:
      if (lookahead == 'p') ADVANCE(526);
      END_STATE();
    case 323:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 324:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 325:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 326:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 327:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 328:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 329:
      if (lookahead == 'p') ADVANCE(362);
      END_STATE();
    case 330:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 331:
      if (lookahead == 'q') ADVANCE(445);
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 341:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 343:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 'w') ADVANCE(347);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 369:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 370:
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 371:
      if (lookahead == 's') ADVANCE(518);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 373:
      if (lookahead == 's') ADVANCE(523);
      END_STATE();
    case 374:
      if (lookahead == 's') ADVANCE(530);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 377:
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 378:
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 379:
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(519);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(532);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(511);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(533);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(520);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(524);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(380);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(389);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 445:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 446:
      if (lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 447:
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 448:
      if (lookahead == 'u') ADVANCE(323);
      END_STATE();
    case 449:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 450:
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 451:
      if (lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 452:
      if (lookahead == 'u') ADVANCE(439);
      END_STATE();
    case 453:
      if (lookahead == 'u') ADVANCE(359);
      END_STATE();
    case 454:
      if (lookahead == 'v') ADVANCE(221);
      END_STATE();
    case 455:
      if (lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 456:
      if (lookahead == 'v') ADVANCE(173);
      END_STATE();
    case 457:
      if (lookahead == 'v') ADVANCE(191);
      END_STATE();
    case 458:
      if (lookahead == 'w') ADVANCE(372);
      END_STATE();
    case 459:
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 460:
      if (lookahead == 'x') ADVANCE(537);
      END_STATE();
    case 461:
      if (lookahead == 'x') ADVANCE(329);
      END_STATE();
    case 462:
      if (lookahead == 'y') ADVANCE(480);
      END_STATE();
    case 463:
      if (lookahead == 'y') ADVANCE(497);
      END_STATE();
    case 464:
      if (lookahead == 'y') ADVANCE(341);
      END_STATE();
    case 465:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 466:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(565);
      END_STATE();
    case 467:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(561);
      END_STATE();
    case 468:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 469:
      if (eof) ADVANCE(470);
      if (lookahead == '\n') SKIP(469)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '$') ADVANCE(558);
      if (lookahead == '(') ADVANCE(572);
      if (lookahead == ')') ADVANCE(573);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == ',') ADVANCE(540);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(491);
      if (lookahead == '=') ADVANCE(574);
      if (lookahead == '>') ADVANCE(492);
      if (lookahead == '?') ADVANCE(556);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == 'h') ADVANCE(545);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '|') ADVANCE(557);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(469)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_ATinheritdoc);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_ATinheritDoc);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      if (lookahead == '_') ADVANCE(457);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(354);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_ATafter);
      if (lookahead == 'C') ADVANCE(247);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_ATafterClass);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_ATbackupGlobals);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_ATbackupStaticAttributes);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_ATbefore);
      if (lookahead == 'C') ADVANCE(252);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_ATbeforeClass);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnore);
      if (lookahead == '*') ADVANCE(515);
      if (lookahead == 'E') ADVANCE(272);
      if (lookahead == 'S') ADVANCE(435);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnore_STAR);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnoreEnd);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnoreStart);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_ATcovers);
      if (lookahead == 'D') ADVANCE(151);
      if (lookahead == 'N') ADVANCE(304);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_ATcoversDefaultClass);
      if (lookahead == ' ') ADVANCE(427);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_ATcoversDefaultClasstoshortenannotations);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_ATcoversNothing);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_ATdataProvider);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_ATdepends);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_ATdependsannotationtoexpressdependencies);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_ATdoesNotPerformAssertions);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_ATgroup);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_ATlarge);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_ATmedium);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_ATpreserveGlobalState);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_ATrequires);
      if (lookahead == ' ') ADVANCE(451);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_ATrequiresusages);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_ATrunInSeparateProcess);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_ATrunTestsInSeparateProcesses);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_ATsmall);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_ATtest);
      if (lookahead == 'W') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(289);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_ATtestWith);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_ATtestdox);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_ATticket);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 's') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(467);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '*') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(560);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '*') ADVANCE(563);
      if (lookahead == '<') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(559);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '.') ADVANCE(564);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '@') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (lookahead == ' ') ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_ATpackage_version_AT);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__version_vector);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead == '\t') ADVANCE(575);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == '\r') ADVANCE(575);
      if (lookahead == ' ') ADVANCE(575);
      if (lookahead == ')') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(577);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead == '\t') ADVANCE(576);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == '\r') ADVANCE(575);
      if (lookahead == ' ') ADVANCE(576);
      if (lookahead == ')') ADVANCE(577);
      if (lookahead == '*') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(577);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__end);
      if (lookahead == '*') ADVANCE(26);
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
      if (lookahead == '\r') SKIP(0)
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
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 10, .external_lex_state = 2},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10, .external_lex_state = 3},
  [8] = {.lex_state = 13, .external_lex_state = 4},
  [9] = {.lex_state = 13, .external_lex_state = 4},
  [10] = {.lex_state = 13, .external_lex_state = 4},
  [11] = {.lex_state = 10, .external_lex_state = 2},
  [12] = {.lex_state = 13, .external_lex_state = 4},
  [13] = {.lex_state = 13, .external_lex_state = 4},
  [14] = {.lex_state = 13, .external_lex_state = 4},
  [15] = {.lex_state = 13, .external_lex_state = 4},
  [16] = {.lex_state = 13, .external_lex_state = 4},
  [17] = {.lex_state = 10, .external_lex_state = 2},
  [18] = {.lex_state = 10, .external_lex_state = 2},
  [19] = {.lex_state = 10, .external_lex_state = 2},
  [20] = {.lex_state = 10, .external_lex_state = 2},
  [21] = {.lex_state = 10, .external_lex_state = 2},
  [22] = {.lex_state = 13, .external_lex_state = 4},
  [23] = {.lex_state = 10, .external_lex_state = 2},
  [24] = {.lex_state = 13, .external_lex_state = 4},
  [25] = {.lex_state = 10, .external_lex_state = 2},
  [26] = {.lex_state = 10, .external_lex_state = 2},
  [27] = {.lex_state = 13, .external_lex_state = 4},
  [28] = {.lex_state = 10, .external_lex_state = 2},
  [29] = {.lex_state = 10, .external_lex_state = 4},
  [30] = {.lex_state = 10, .external_lex_state = 2},
  [31] = {.lex_state = 10, .external_lex_state = 2},
  [32] = {.lex_state = 10, .external_lex_state = 2},
  [33] = {.lex_state = 10, .external_lex_state = 2},
  [34] = {.lex_state = 10, .external_lex_state = 2},
  [35] = {.lex_state = 10, .external_lex_state = 4},
  [36] = {.lex_state = 10, .external_lex_state = 4},
  [37] = {.lex_state = 10, .external_lex_state = 3},
  [38] = {.lex_state = 10, .external_lex_state = 2},
  [39] = {.lex_state = 13, .external_lex_state = 4},
  [40] = {.lex_state = 10, .external_lex_state = 2},
  [41] = {.lex_state = 10, .external_lex_state = 4},
  [42] = {.lex_state = 13, .external_lex_state = 4},
  [43] = {.lex_state = 13, .external_lex_state = 4},
  [44] = {.lex_state = 10, .external_lex_state = 3},
  [45] = {.lex_state = 10, .external_lex_state = 2},
  [46] = {.lex_state = 10, .external_lex_state = 2},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10, .external_lex_state = 2},
  [49] = {.lex_state = 10, .external_lex_state = 2},
  [50] = {.lex_state = 10, .external_lex_state = 2},
  [51] = {.lex_state = 10, .external_lex_state = 4},
  [52] = {.lex_state = 10, .external_lex_state = 3},
  [53] = {.lex_state = 10, .external_lex_state = 2},
  [54] = {.lex_state = 10, .external_lex_state = 4},
  [55] = {.lex_state = 10, .external_lex_state = 2},
  [56] = {.lex_state = 10, .external_lex_state = 2},
  [57] = {.lex_state = 10, .external_lex_state = 2},
  [58] = {.lex_state = 10, .external_lex_state = 2},
  [59] = {.lex_state = 10, .external_lex_state = 2},
  [60] = {.lex_state = 10, .external_lex_state = 2},
  [61] = {.lex_state = 10, .external_lex_state = 3},
  [62] = {.lex_state = 10, .external_lex_state = 2},
  [63] = {.lex_state = 10, .external_lex_state = 2},
  [64] = {.lex_state = 10, .external_lex_state = 2},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 10, .external_lex_state = 3},
  [114] = {.lex_state = 10, .external_lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 5},
  [127] = {.lex_state = 3, .external_lex_state = 5},
  [128] = {.lex_state = 0, .external_lex_state = 5},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0, .external_lex_state = 5},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 0, .external_lex_state = 5},
  [136] = {.lex_state = 0, .external_lex_state = 5},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 0, .external_lex_state = 5},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 5},
  [143] = {.lex_state = 0, .external_lex_state = 5},
  [144] = {.lex_state = 0, .external_lex_state = 5},
  [145] = {.lex_state = 0, .external_lex_state = 5},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 3, .external_lex_state = 5},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0, .external_lex_state = 5},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0, .external_lex_state = 5},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0, .external_lex_state = 5},
  [171] = {.lex_state = 0, .external_lex_state = 5},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0, .external_lex_state = 5},
  [176] = {.lex_state = 0, .external_lex_state = 5},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 0, .external_lex_state = 5},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 0},
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
    [sym_uri] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
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
    [sym_document] = STATE(218),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_description] = STATE(6),
    [sym_tag] = STATE(5),
    [sym_inline_tag] = STATE(38),
    [sym__tag_without_description] = STATE(84),
    [sym__tag_with_optional_description] = STATE(84),
    [sym__tag_with_required_description] = STATE(84),
    [sym__tag_with_incomplete_implementation] = STATE(84),
    [sym__author_tag] = STATE(84),
    [sym__global_tag] = STATE(84),
    [sym__link_tag] = STATE(84),
    [sym__method_tag] = STATE(84),
    [sym__param_tag] = STATE(84),
    [sym__property_tag] = STATE(84),
    [sym__return_tag] = STATE(84),
    [sym__see_tag] = STATE(84),
    [sym__throws_tag] = STATE(84),
    [sym__var_tag] = STATE(84),
    [sym__deprecated_tag] = STATE(84),
    [sym__since_tag] = STATE(84),
    [sym__version_tag] = STATE(84),
    [sym__phpunit_tag] = STATE(84),
    [aux_sym_document_repeat1] = STATE(5),
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
    [sym_tag] = STATE(4),
    [sym__tag_without_description] = STATE(84),
    [sym__tag_with_optional_description] = STATE(84),
    [sym__tag_with_required_description] = STATE(84),
    [sym__tag_with_incomplete_implementation] = STATE(84),
    [sym__author_tag] = STATE(84),
    [sym__global_tag] = STATE(84),
    [sym__link_tag] = STATE(84),
    [sym__method_tag] = STATE(84),
    [sym__param_tag] = STATE(84),
    [sym__property_tag] = STATE(84),
    [sym__return_tag] = STATE(84),
    [sym__see_tag] = STATE(84),
    [sym__throws_tag] = STATE(84),
    [sym__var_tag] = STATE(84),
    [sym__deprecated_tag] = STATE(84),
    [sym__since_tag] = STATE(84),
    [sym__version_tag] = STATE(84),
    [sym__phpunit_tag] = STATE(84),
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
  [4] = {
    [sym_tag] = STATE(4),
    [sym__tag_without_description] = STATE(84),
    [sym__tag_with_optional_description] = STATE(84),
    [sym__tag_with_required_description] = STATE(84),
    [sym__tag_with_incomplete_implementation] = STATE(84),
    [sym__author_tag] = STATE(84),
    [sym__global_tag] = STATE(84),
    [sym__link_tag] = STATE(84),
    [sym__method_tag] = STATE(84),
    [sym__param_tag] = STATE(84),
    [sym__property_tag] = STATE(84),
    [sym__return_tag] = STATE(84),
    [sym__see_tag] = STATE(84),
    [sym__throws_tag] = STATE(84),
    [sym__var_tag] = STATE(84),
    [sym__deprecated_tag] = STATE(84),
    [sym__since_tag] = STATE(84),
    [sym__version_tag] = STATE(84),
    [sym__phpunit_tag] = STATE(84),
    [aux_sym_document_repeat1] = STATE(4),
    [anon_sym_ATinheritdoc] = ACTIONS(53),
    [anon_sym_ATinheritDoc] = ACTIONS(53),
    [anon_sym_ATapi] = ACTIONS(53),
    [anon_sym_ATfilesource] = ACTIONS(53),
    [anon_sym_ATignore] = ACTIONS(56),
    [anon_sym_ATinternal] = ACTIONS(56),
    [anon_sym_ATcategory] = ACTIONS(59),
    [anon_sym_ATcopyright] = ACTIONS(59),
    [anon_sym_ATtodo] = ACTIONS(59),
    [anon_sym_ATexample] = ACTIONS(62),
    [anon_sym_ATlicense] = ACTIONS(62),
    [anon_sym_ATpackage] = ACTIONS(62),
    [anon_sym_ATsource] = ACTIONS(62),
    [anon_sym_ATsubpackage] = ACTIONS(62),
    [anon_sym_ATuses] = ACTIONS(62),
    [anon_sym_ATauthor] = ACTIONS(65),
    [anon_sym_ATglobal] = ACTIONS(68),
    [anon_sym_ATlink] = ACTIONS(71),
    [anon_sym_ATmethod] = ACTIONS(74),
    [anon_sym_ATparam] = ACTIONS(77),
    [anon_sym_ATproperty] = ACTIONS(80),
    [anon_sym_ATproperty_DASHread] = ACTIONS(83),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(83),
    [anon_sym_ATreturn] = ACTIONS(86),
    [anon_sym_ATsee] = ACTIONS(89),
    [anon_sym_ATthrows] = ACTIONS(92),
    [anon_sym_ATvar] = ACTIONS(95),
    [anon_sym_ATdeprecated] = ACTIONS(98),
    [anon_sym_ATsince] = ACTIONS(101),
    [anon_sym_ATversion] = ACTIONS(104),
    [anon_sym_ATafter] = ACTIONS(107),
    [anon_sym_ATafterClass] = ACTIONS(110),
    [anon_sym_ATannotation] = ACTIONS(110),
    [anon_sym_ATbackupGlobals] = ACTIONS(110),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(110),
    [anon_sym_ATbefore] = ACTIONS(107),
    [anon_sym_ATbeforeClass] = ACTIONS(110),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(107),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(110),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(110),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(110),
    [anon_sym_ATcovers] = ACTIONS(107),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(107),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(110),
    [anon_sym_ATcoversNothing] = ACTIONS(110),
    [anon_sym_ATdataProvider] = ACTIONS(110),
    [anon_sym_ATdepends] = ACTIONS(107),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(110),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(110),
    [anon_sym_ATgroup] = ACTIONS(110),
    [anon_sym_ATlarge] = ACTIONS(110),
    [anon_sym_ATmedium] = ACTIONS(110),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(110),
    [anon_sym_ATrequires] = ACTIONS(107),
    [anon_sym_ATrequiresusages] = ACTIONS(110),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(110),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(110),
    [anon_sym_ATsmall] = ACTIONS(110),
    [anon_sym_ATtest] = ACTIONS(107),
    [anon_sym_ATtestWith] = ACTIONS(110),
    [anon_sym_ATtestdox] = ACTIONS(110),
    [anon_sym_ATticket] = ACTIONS(110),
    [sym__end] = ACTIONS(113),
  },
  [5] = {
    [sym_tag] = STATE(4),
    [sym__tag_without_description] = STATE(84),
    [sym__tag_with_optional_description] = STATE(84),
    [sym__tag_with_required_description] = STATE(84),
    [sym__tag_with_incomplete_implementation] = STATE(84),
    [sym__author_tag] = STATE(84),
    [sym__global_tag] = STATE(84),
    [sym__link_tag] = STATE(84),
    [sym__method_tag] = STATE(84),
    [sym__param_tag] = STATE(84),
    [sym__property_tag] = STATE(84),
    [sym__return_tag] = STATE(84),
    [sym__see_tag] = STATE(84),
    [sym__throws_tag] = STATE(84),
    [sym__var_tag] = STATE(84),
    [sym__deprecated_tag] = STATE(84),
    [sym__since_tag] = STATE(84),
    [sym__version_tag] = STATE(84),
    [sym__phpunit_tag] = STATE(84),
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
    [sym__end] = ACTIONS(115),
  },
  [6] = {
    [sym_tag] = STATE(3),
    [sym__tag_without_description] = STATE(84),
    [sym__tag_with_optional_description] = STATE(84),
    [sym__tag_with_required_description] = STATE(84),
    [sym__tag_with_incomplete_implementation] = STATE(84),
    [sym__author_tag] = STATE(84),
    [sym__global_tag] = STATE(84),
    [sym__link_tag] = STATE(84),
    [sym__method_tag] = STATE(84),
    [sym__param_tag] = STATE(84),
    [sym__property_tag] = STATE(84),
    [sym__return_tag] = STATE(84),
    [sym__see_tag] = STATE(84),
    [sym__throws_tag] = STATE(84),
    [sym__var_tag] = STATE(84),
    [sym__deprecated_tag] = STATE(84),
    [sym__since_tag] = STATE(84),
    [sym__version_tag] = STATE(84),
    [sym__phpunit_tag] = STATE(84),
    [aux_sym_document_repeat1] = STATE(3),
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
    [sym__end] = ACTIONS(115),
  },
  [7] = {
    [sym__description_not_version] = STATE(74),
    [sym_inline_tag] = STATE(61),
    [sym_version] = STATE(19),
    [aux_sym__description_not_version_repeat1] = STATE(44),
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
    [aux_sym_namespace_name_repeat1] = STATE(163),
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
    [anon_sym_DOLLAR] = ACTIONS(129),
    [sym__end] = ACTIONS(129),
    [sym__text_after_type] = ACTIONS(129),
  },
  [9] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(15),
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
    [anon_sym_LT] = ACTIONS(138),
    [anon_sym_ATglobal] = ACTIONS(136),
    [anon_sym_ATlink] = ACTIONS(136),
    [anon_sym_ATmethod] = ACTIONS(136),
    [anon_sym_ATparam] = ACTIONS(136),
    [anon_sym_ATproperty] = ACTIONS(140),
    [anon_sym_ATproperty_DASHread] = ACTIONS(136),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(136),
    [anon_sym_ATreturn] = ACTIONS(136),
    [anon_sym_ATsee] = ACTIONS(136),
    [anon_sym_ATthrows] = ACTIONS(136),
    [anon_sym_ATvar] = ACTIONS(136),
    [anon_sym_ATdeprecated] = ACTIONS(136),
    [anon_sym_ATsince] = ACTIONS(136),
    [anon_sym_ATversion] = ACTIONS(136),
    [anon_sym_ATafter] = ACTIONS(140),
    [anon_sym_ATafterClass] = ACTIONS(136),
    [anon_sym_ATannotation] = ACTIONS(136),
    [anon_sym_ATbackupGlobals] = ACTIONS(136),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(136),
    [anon_sym_ATbefore] = ACTIONS(140),
    [anon_sym_ATbeforeClass] = ACTIONS(136),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(140),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(136),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(136),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(136),
    [anon_sym_ATcovers] = ACTIONS(140),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(140),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(136),
    [anon_sym_ATcoversNothing] = ACTIONS(136),
    [anon_sym_ATdataProvider] = ACTIONS(136),
    [anon_sym_ATdepends] = ACTIONS(140),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(136),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(136),
    [anon_sym_ATgroup] = ACTIONS(136),
    [anon_sym_ATlarge] = ACTIONS(136),
    [anon_sym_ATmedium] = ACTIONS(136),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(136),
    [anon_sym_ATrequires] = ACTIONS(140),
    [anon_sym_ATrequiresusages] = ACTIONS(136),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(136),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(136),
    [anon_sym_ATsmall] = ACTIONS(136),
    [anon_sym_ATtest] = ACTIONS(140),
    [anon_sym_ATtestWith] = ACTIONS(136),
    [anon_sym_ATtestdox] = ACTIONS(136),
    [anon_sym_ATticket] = ACTIONS(136),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(136),
    [sym__end] = ACTIONS(136),
    [sym__text_after_type] = ACTIONS(136),
  },
  [10] = {
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_ATinheritdoc] = ACTIONS(144),
    [anon_sym_ATinheritDoc] = ACTIONS(144),
    [anon_sym_ATapi] = ACTIONS(144),
    [anon_sym_ATfilesource] = ACTIONS(144),
    [anon_sym_ATignore] = ACTIONS(144),
    [anon_sym_ATinternal] = ACTIONS(144),
    [anon_sym_ATcategory] = ACTIONS(144),
    [anon_sym_ATcopyright] = ACTIONS(144),
    [anon_sym_ATtodo] = ACTIONS(144),
    [anon_sym_ATexample] = ACTIONS(144),
    [anon_sym_ATlicense] = ACTIONS(144),
    [anon_sym_ATpackage] = ACTIONS(144),
    [anon_sym_ATsource] = ACTIONS(144),
    [anon_sym_ATsubpackage] = ACTIONS(144),
    [anon_sym_ATuses] = ACTIONS(144),
    [anon_sym_ATauthor] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(144),
    [anon_sym_ATglobal] = ACTIONS(144),
    [anon_sym_ATlink] = ACTIONS(144),
    [anon_sym_ATmethod] = ACTIONS(144),
    [anon_sym_ATparam] = ACTIONS(144),
    [anon_sym_ATproperty] = ACTIONS(146),
    [anon_sym_ATproperty_DASHread] = ACTIONS(144),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(144),
    [anon_sym_ATreturn] = ACTIONS(144),
    [anon_sym_ATsee] = ACTIONS(144),
    [anon_sym_ATthrows] = ACTIONS(144),
    [anon_sym_ATvar] = ACTIONS(144),
    [anon_sym_ATdeprecated] = ACTIONS(144),
    [anon_sym_ATsince] = ACTIONS(144),
    [anon_sym_ATversion] = ACTIONS(144),
    [anon_sym_ATafter] = ACTIONS(146),
    [anon_sym_ATafterClass] = ACTIONS(144),
    [anon_sym_ATannotation] = ACTIONS(144),
    [anon_sym_ATbackupGlobals] = ACTIONS(144),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(144),
    [anon_sym_ATbefore] = ACTIONS(146),
    [anon_sym_ATbeforeClass] = ACTIONS(144),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(146),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(144),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(144),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(144),
    [anon_sym_ATcovers] = ACTIONS(146),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(146),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(144),
    [anon_sym_ATcoversNothing] = ACTIONS(144),
    [anon_sym_ATdataProvider] = ACTIONS(144),
    [anon_sym_ATdepends] = ACTIONS(146),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(144),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(144),
    [anon_sym_ATgroup] = ACTIONS(144),
    [anon_sym_ATlarge] = ACTIONS(144),
    [anon_sym_ATmedium] = ACTIONS(144),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(144),
    [anon_sym_ATrequires] = ACTIONS(146),
    [anon_sym_ATrequiresusages] = ACTIONS(144),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(144),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(144),
    [anon_sym_ATsmall] = ACTIONS(144),
    [anon_sym_ATtest] = ACTIONS(146),
    [anon_sym_ATtestWith] = ACTIONS(144),
    [anon_sym_ATtestdox] = ACTIONS(144),
    [anon_sym_ATticket] = ACTIONS(144),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [sym__end] = ACTIONS(144),
    [sym__text_after_type] = ACTIONS(144),
  },
  [11] = {
    [aux_sym_namespace_name_repeat1] = STATE(163),
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
    [anon_sym_BSLASH] = ACTIONS(133),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(148),
    [anon_sym_COLON_COLON] = ACTIONS(129),
    [sym__end] = ACTIONS(129),
    [sym_text] = ACTIONS(129),
  },
  [12] = {
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
    [anon_sym_DOLLAR] = ACTIONS(129),
    [sym__end] = ACTIONS(129),
    [sym__text_after_type] = ACTIONS(129),
  },
  [13] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_ATinheritdoc] = ACTIONS(150),
    [anon_sym_ATinheritDoc] = ACTIONS(150),
    [anon_sym_ATapi] = ACTIONS(150),
    [anon_sym_ATfilesource] = ACTIONS(150),
    [anon_sym_ATignore] = ACTIONS(150),
    [anon_sym_ATinternal] = ACTIONS(150),
    [anon_sym_ATcategory] = ACTIONS(150),
    [anon_sym_ATcopyright] = ACTIONS(150),
    [anon_sym_ATtodo] = ACTIONS(150),
    [anon_sym_ATexample] = ACTIONS(150),
    [anon_sym_ATlicense] = ACTIONS(150),
    [anon_sym_ATpackage] = ACTIONS(150),
    [anon_sym_ATsource] = ACTIONS(150),
    [anon_sym_ATsubpackage] = ACTIONS(150),
    [anon_sym_ATuses] = ACTIONS(150),
    [anon_sym_ATauthor] = ACTIONS(150),
    [anon_sym_ATglobal] = ACTIONS(150),
    [anon_sym_ATlink] = ACTIONS(150),
    [anon_sym_ATmethod] = ACTIONS(150),
    [anon_sym_ATparam] = ACTIONS(150),
    [anon_sym_ATproperty] = ACTIONS(152),
    [anon_sym_ATproperty_DASHread] = ACTIONS(150),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(150),
    [anon_sym_ATreturn] = ACTIONS(150),
    [anon_sym_ATsee] = ACTIONS(150),
    [anon_sym_ATthrows] = ACTIONS(150),
    [anon_sym_ATvar] = ACTIONS(150),
    [anon_sym_ATdeprecated] = ACTIONS(150),
    [anon_sym_ATsince] = ACTIONS(150),
    [anon_sym_ATversion] = ACTIONS(150),
    [anon_sym_ATafter] = ACTIONS(152),
    [anon_sym_ATafterClass] = ACTIONS(150),
    [anon_sym_ATannotation] = ACTIONS(150),
    [anon_sym_ATbackupGlobals] = ACTIONS(150),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(150),
    [anon_sym_ATbefore] = ACTIONS(152),
    [anon_sym_ATbeforeClass] = ACTIONS(150),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(152),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(150),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(150),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(150),
    [anon_sym_ATcovers] = ACTIONS(152),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(152),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(150),
    [anon_sym_ATcoversNothing] = ACTIONS(150),
    [anon_sym_ATdataProvider] = ACTIONS(150),
    [anon_sym_ATdepends] = ACTIONS(152),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(150),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(150),
    [anon_sym_ATgroup] = ACTIONS(150),
    [anon_sym_ATlarge] = ACTIONS(150),
    [anon_sym_ATmedium] = ACTIONS(150),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(150),
    [anon_sym_ATrequires] = ACTIONS(152),
    [anon_sym_ATrequiresusages] = ACTIONS(150),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(150),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(150),
    [anon_sym_ATsmall] = ACTIONS(150),
    [anon_sym_ATtest] = ACTIONS(152),
    [anon_sym_ATtestWith] = ACTIONS(150),
    [anon_sym_ATtestdox] = ACTIONS(150),
    [anon_sym_ATticket] = ACTIONS(150),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(150),
    [sym__end] = ACTIONS(150),
    [sym__text_after_type] = ACTIONS(150),
  },
  [14] = {
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_ATinheritdoc] = ACTIONS(157),
    [anon_sym_ATinheritDoc] = ACTIONS(157),
    [anon_sym_ATapi] = ACTIONS(157),
    [anon_sym_ATfilesource] = ACTIONS(157),
    [anon_sym_ATignore] = ACTIONS(157),
    [anon_sym_ATinternal] = ACTIONS(157),
    [anon_sym_ATcategory] = ACTIONS(157),
    [anon_sym_ATcopyright] = ACTIONS(157),
    [anon_sym_ATtodo] = ACTIONS(157),
    [anon_sym_ATexample] = ACTIONS(157),
    [anon_sym_ATlicense] = ACTIONS(157),
    [anon_sym_ATpackage] = ACTIONS(157),
    [anon_sym_ATsource] = ACTIONS(157),
    [anon_sym_ATsubpackage] = ACTIONS(157),
    [anon_sym_ATuses] = ACTIONS(157),
    [anon_sym_ATauthor] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_ATglobal] = ACTIONS(157),
    [anon_sym_ATlink] = ACTIONS(157),
    [anon_sym_ATmethod] = ACTIONS(157),
    [anon_sym_ATparam] = ACTIONS(157),
    [anon_sym_ATproperty] = ACTIONS(159),
    [anon_sym_ATproperty_DASHread] = ACTIONS(157),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(157),
    [anon_sym_ATreturn] = ACTIONS(157),
    [anon_sym_ATsee] = ACTIONS(157),
    [anon_sym_ATthrows] = ACTIONS(157),
    [anon_sym_ATvar] = ACTIONS(157),
    [anon_sym_ATdeprecated] = ACTIONS(157),
    [anon_sym_ATsince] = ACTIONS(157),
    [anon_sym_ATversion] = ACTIONS(157),
    [anon_sym_ATafter] = ACTIONS(159),
    [anon_sym_ATafterClass] = ACTIONS(157),
    [anon_sym_ATannotation] = ACTIONS(157),
    [anon_sym_ATbackupGlobals] = ACTIONS(157),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(157),
    [anon_sym_ATbefore] = ACTIONS(159),
    [anon_sym_ATbeforeClass] = ACTIONS(157),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(159),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(157),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(157),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(157),
    [anon_sym_ATcovers] = ACTIONS(159),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(159),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(157),
    [anon_sym_ATcoversNothing] = ACTIONS(157),
    [anon_sym_ATdataProvider] = ACTIONS(157),
    [anon_sym_ATdepends] = ACTIONS(159),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(157),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(157),
    [anon_sym_ATgroup] = ACTIONS(157),
    [anon_sym_ATlarge] = ACTIONS(157),
    [anon_sym_ATmedium] = ACTIONS(157),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(157),
    [anon_sym_ATrequires] = ACTIONS(159),
    [anon_sym_ATrequiresusages] = ACTIONS(157),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(157),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(157),
    [anon_sym_ATsmall] = ACTIONS(157),
    [anon_sym_ATtest] = ACTIONS(159),
    [anon_sym_ATtestWith] = ACTIONS(157),
    [anon_sym_ATtestdox] = ACTIONS(157),
    [anon_sym_ATticket] = ACTIONS(157),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_DOLLAR] = ACTIONS(157),
    [sym__end] = ACTIONS(157),
    [sym__text_after_type] = ACTIONS(157),
  },
  [15] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_ATinheritdoc] = ACTIONS(161),
    [anon_sym_ATinheritDoc] = ACTIONS(161),
    [anon_sym_ATapi] = ACTIONS(161),
    [anon_sym_ATfilesource] = ACTIONS(161),
    [anon_sym_ATignore] = ACTIONS(161),
    [anon_sym_ATinternal] = ACTIONS(161),
    [anon_sym_ATcategory] = ACTIONS(161),
    [anon_sym_ATcopyright] = ACTIONS(161),
    [anon_sym_ATtodo] = ACTIONS(161),
    [anon_sym_ATexample] = ACTIONS(161),
    [anon_sym_ATlicense] = ACTIONS(161),
    [anon_sym_ATpackage] = ACTIONS(161),
    [anon_sym_ATsource] = ACTIONS(161),
    [anon_sym_ATsubpackage] = ACTIONS(161),
    [anon_sym_ATuses] = ACTIONS(161),
    [anon_sym_ATauthor] = ACTIONS(161),
    [anon_sym_ATglobal] = ACTIONS(161),
    [anon_sym_ATlink] = ACTIONS(161),
    [anon_sym_ATmethod] = ACTIONS(161),
    [anon_sym_ATparam] = ACTIONS(161),
    [anon_sym_ATproperty] = ACTIONS(163),
    [anon_sym_ATproperty_DASHread] = ACTIONS(161),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(161),
    [anon_sym_ATreturn] = ACTIONS(161),
    [anon_sym_ATsee] = ACTIONS(161),
    [anon_sym_ATthrows] = ACTIONS(161),
    [anon_sym_ATvar] = ACTIONS(161),
    [anon_sym_ATdeprecated] = ACTIONS(161),
    [anon_sym_ATsince] = ACTIONS(161),
    [anon_sym_ATversion] = ACTIONS(161),
    [anon_sym_ATafter] = ACTIONS(163),
    [anon_sym_ATafterClass] = ACTIONS(161),
    [anon_sym_ATannotation] = ACTIONS(161),
    [anon_sym_ATbackupGlobals] = ACTIONS(161),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(161),
    [anon_sym_ATbefore] = ACTIONS(163),
    [anon_sym_ATbeforeClass] = ACTIONS(161),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(163),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(161),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(161),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(161),
    [anon_sym_ATcovers] = ACTIONS(163),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(163),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(161),
    [anon_sym_ATcoversNothing] = ACTIONS(161),
    [anon_sym_ATdataProvider] = ACTIONS(161),
    [anon_sym_ATdepends] = ACTIONS(163),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(161),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(161),
    [anon_sym_ATgroup] = ACTIONS(161),
    [anon_sym_ATlarge] = ACTIONS(161),
    [anon_sym_ATmedium] = ACTIONS(161),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(161),
    [anon_sym_ATrequires] = ACTIONS(163),
    [anon_sym_ATrequiresusages] = ACTIONS(161),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(161),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(161),
    [anon_sym_ATsmall] = ACTIONS(161),
    [anon_sym_ATtest] = ACTIONS(163),
    [anon_sym_ATtestWith] = ACTIONS(161),
    [anon_sym_ATtestdox] = ACTIONS(161),
    [anon_sym_ATticket] = ACTIONS(161),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [sym__end] = ACTIONS(161),
    [sym__text_after_type] = ACTIONS(161),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_ATinheritdoc] = ACTIONS(167),
    [anon_sym_ATinheritDoc] = ACTIONS(167),
    [anon_sym_ATapi] = ACTIONS(167),
    [anon_sym_ATfilesource] = ACTIONS(167),
    [anon_sym_ATignore] = ACTIONS(167),
    [anon_sym_ATinternal] = ACTIONS(167),
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
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_ATglobal] = ACTIONS(167),
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
    [anon_sym_LBRACK_RBRACK] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(167),
    [anon_sym_DOLLAR] = ACTIONS(167),
    [sym__end] = ACTIONS(167),
    [sym__text_after_type] = ACTIONS(167),
  },
  [17] = {
    [sym_description] = STATE(87),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(171),
    [anon_sym_ATinheritDoc] = ACTIONS(171),
    [anon_sym_ATapi] = ACTIONS(171),
    [anon_sym_ATfilesource] = ACTIONS(171),
    [anon_sym_ATignore] = ACTIONS(171),
    [anon_sym_ATinternal] = ACTIONS(171),
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
    [sym__end] = ACTIONS(171),
    [sym_text] = ACTIONS(49),
  },
  [18] = {
    [sym_description] = STATE(67),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
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
    [sym__end] = ACTIONS(175),
    [sym_text] = ACTIONS(49),
  },
  [19] = {
    [sym_description] = STATE(68),
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
  [20] = {
    [sym_description] = STATE(79),
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
  [21] = {
    [sym_description] = STATE(70),
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
  [22] = {
    [aux_sym_union_type_repeat1] = STATE(22),
    [anon_sym_LBRACE] = ACTIONS(191),
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
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [sym__end] = ACTIONS(191),
    [sym__text_after_type] = ACTIONS(191),
  },
  [23] = {
    [sym_description] = STATE(71),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(198),
    [anon_sym_ATinheritDoc] = ACTIONS(198),
    [anon_sym_ATapi] = ACTIONS(198),
    [anon_sym_ATfilesource] = ACTIONS(198),
    [anon_sym_ATignore] = ACTIONS(198),
    [anon_sym_ATinternal] = ACTIONS(198),
    [anon_sym_ATcategory] = ACTIONS(198),
    [anon_sym_ATcopyright] = ACTIONS(198),
    [anon_sym_ATtodo] = ACTIONS(198),
    [anon_sym_ATexample] = ACTIONS(198),
    [anon_sym_ATlicense] = ACTIONS(198),
    [anon_sym_ATpackage] = ACTIONS(198),
    [anon_sym_ATsource] = ACTIONS(198),
    [anon_sym_ATsubpackage] = ACTIONS(198),
    [anon_sym_ATuses] = ACTIONS(198),
    [anon_sym_ATauthor] = ACTIONS(198),
    [anon_sym_ATglobal] = ACTIONS(198),
    [anon_sym_ATlink] = ACTIONS(198),
    [anon_sym_ATmethod] = ACTIONS(198),
    [anon_sym_ATparam] = ACTIONS(198),
    [anon_sym_ATproperty] = ACTIONS(200),
    [anon_sym_ATproperty_DASHread] = ACTIONS(198),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(198),
    [anon_sym_ATreturn] = ACTIONS(198),
    [anon_sym_ATsee] = ACTIONS(198),
    [anon_sym_ATthrows] = ACTIONS(198),
    [anon_sym_ATvar] = ACTIONS(198),
    [anon_sym_ATdeprecated] = ACTIONS(198),
    [anon_sym_ATsince] = ACTIONS(198),
    [anon_sym_ATversion] = ACTIONS(198),
    [anon_sym_ATafter] = ACTIONS(200),
    [anon_sym_ATafterClass] = ACTIONS(198),
    [anon_sym_ATannotation] = ACTIONS(198),
    [anon_sym_ATbackupGlobals] = ACTIONS(198),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(198),
    [anon_sym_ATbefore] = ACTIONS(200),
    [anon_sym_ATbeforeClass] = ACTIONS(198),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(200),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(198),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(198),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(198),
    [anon_sym_ATcovers] = ACTIONS(200),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(200),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(198),
    [anon_sym_ATcoversNothing] = ACTIONS(198),
    [anon_sym_ATdataProvider] = ACTIONS(198),
    [anon_sym_ATdepends] = ACTIONS(200),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(198),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(198),
    [anon_sym_ATgroup] = ACTIONS(198),
    [anon_sym_ATlarge] = ACTIONS(198),
    [anon_sym_ATmedium] = ACTIONS(198),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(198),
    [anon_sym_ATrequires] = ACTIONS(200),
    [anon_sym_ATrequiresusages] = ACTIONS(198),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(198),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(198),
    [anon_sym_ATsmall] = ACTIONS(198),
    [anon_sym_ATtest] = ACTIONS(200),
    [anon_sym_ATtestWith] = ACTIONS(198),
    [anon_sym_ATtestdox] = ACTIONS(198),
    [anon_sym_ATticket] = ACTIONS(198),
    [sym__end] = ACTIONS(198),
    [sym_text] = ACTIONS(49),
  },
  [24] = {
    [aux_sym_union_type_repeat1] = STATE(22),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_ATinheritdoc] = ACTIONS(202),
    [anon_sym_ATinheritDoc] = ACTIONS(202),
    [anon_sym_ATapi] = ACTIONS(202),
    [anon_sym_ATfilesource] = ACTIONS(202),
    [anon_sym_ATignore] = ACTIONS(202),
    [anon_sym_ATinternal] = ACTIONS(202),
    [anon_sym_ATcategory] = ACTIONS(202),
    [anon_sym_ATcopyright] = ACTIONS(202),
    [anon_sym_ATtodo] = ACTIONS(202),
    [anon_sym_ATexample] = ACTIONS(202),
    [anon_sym_ATlicense] = ACTIONS(202),
    [anon_sym_ATpackage] = ACTIONS(202),
    [anon_sym_ATsource] = ACTIONS(202),
    [anon_sym_ATsubpackage] = ACTIONS(202),
    [anon_sym_ATuses] = ACTIONS(202),
    [anon_sym_ATauthor] = ACTIONS(202),
    [anon_sym_ATglobal] = ACTIONS(202),
    [anon_sym_ATlink] = ACTIONS(202),
    [anon_sym_ATmethod] = ACTIONS(202),
    [anon_sym_ATparam] = ACTIONS(202),
    [anon_sym_ATproperty] = ACTIONS(204),
    [anon_sym_ATproperty_DASHread] = ACTIONS(202),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(202),
    [anon_sym_ATreturn] = ACTIONS(202),
    [anon_sym_ATsee] = ACTIONS(202),
    [anon_sym_ATthrows] = ACTIONS(202),
    [anon_sym_ATvar] = ACTIONS(202),
    [anon_sym_ATdeprecated] = ACTIONS(202),
    [anon_sym_ATsince] = ACTIONS(202),
    [anon_sym_ATversion] = ACTIONS(202),
    [anon_sym_ATafter] = ACTIONS(204),
    [anon_sym_ATafterClass] = ACTIONS(202),
    [anon_sym_ATannotation] = ACTIONS(202),
    [anon_sym_ATbackupGlobals] = ACTIONS(202),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(202),
    [anon_sym_ATbefore] = ACTIONS(204),
    [anon_sym_ATbeforeClass] = ACTIONS(202),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(204),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(202),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(202),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(202),
    [anon_sym_ATcovers] = ACTIONS(204),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(204),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(202),
    [anon_sym_ATcoversNothing] = ACTIONS(202),
    [anon_sym_ATdataProvider] = ACTIONS(202),
    [anon_sym_ATdepends] = ACTIONS(204),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(202),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(202),
    [anon_sym_ATgroup] = ACTIONS(202),
    [anon_sym_ATlarge] = ACTIONS(202),
    [anon_sym_ATmedium] = ACTIONS(202),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(202),
    [anon_sym_ATrequires] = ACTIONS(204),
    [anon_sym_ATrequiresusages] = ACTIONS(202),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(202),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(202),
    [anon_sym_ATsmall] = ACTIONS(202),
    [anon_sym_ATtest] = ACTIONS(204),
    [anon_sym_ATtestWith] = ACTIONS(202),
    [anon_sym_ATtestdox] = ACTIONS(202),
    [anon_sym_ATticket] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_DOLLAR] = ACTIONS(202),
    [sym__end] = ACTIONS(202),
    [sym__text_after_type] = ACTIONS(202),
  },
  [25] = {
    [sym_description] = STATE(81),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(208),
    [anon_sym_ATinheritDoc] = ACTIONS(208),
    [anon_sym_ATapi] = ACTIONS(208),
    [anon_sym_ATfilesource] = ACTIONS(208),
    [anon_sym_ATignore] = ACTIONS(208),
    [anon_sym_ATinternal] = ACTIONS(208),
    [anon_sym_ATcategory] = ACTIONS(208),
    [anon_sym_ATcopyright] = ACTIONS(208),
    [anon_sym_ATtodo] = ACTIONS(208),
    [anon_sym_ATexample] = ACTIONS(208),
    [anon_sym_ATlicense] = ACTIONS(208),
    [anon_sym_ATpackage] = ACTIONS(208),
    [anon_sym_ATsource] = ACTIONS(208),
    [anon_sym_ATsubpackage] = ACTIONS(208),
    [anon_sym_ATuses] = ACTIONS(208),
    [anon_sym_ATauthor] = ACTIONS(208),
    [anon_sym_ATglobal] = ACTIONS(208),
    [anon_sym_ATlink] = ACTIONS(208),
    [anon_sym_ATmethod] = ACTIONS(208),
    [anon_sym_ATparam] = ACTIONS(208),
    [anon_sym_ATproperty] = ACTIONS(210),
    [anon_sym_ATproperty_DASHread] = ACTIONS(208),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(208),
    [anon_sym_ATreturn] = ACTIONS(208),
    [anon_sym_ATsee] = ACTIONS(208),
    [anon_sym_ATthrows] = ACTIONS(208),
    [anon_sym_ATvar] = ACTIONS(208),
    [anon_sym_ATdeprecated] = ACTIONS(208),
    [anon_sym_ATsince] = ACTIONS(208),
    [anon_sym_ATversion] = ACTIONS(208),
    [anon_sym_ATafter] = ACTIONS(210),
    [anon_sym_ATafterClass] = ACTIONS(208),
    [anon_sym_ATannotation] = ACTIONS(208),
    [anon_sym_ATbackupGlobals] = ACTIONS(208),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(208),
    [anon_sym_ATbefore] = ACTIONS(210),
    [anon_sym_ATbeforeClass] = ACTIONS(208),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(210),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(208),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(208),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(208),
    [anon_sym_ATcovers] = ACTIONS(210),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(210),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(208),
    [anon_sym_ATcoversNothing] = ACTIONS(208),
    [anon_sym_ATdataProvider] = ACTIONS(208),
    [anon_sym_ATdepends] = ACTIONS(210),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(208),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(208),
    [anon_sym_ATgroup] = ACTIONS(208),
    [anon_sym_ATlarge] = ACTIONS(208),
    [anon_sym_ATmedium] = ACTIONS(208),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(208),
    [anon_sym_ATrequires] = ACTIONS(210),
    [anon_sym_ATrequiresusages] = ACTIONS(208),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(208),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(208),
    [anon_sym_ATsmall] = ACTIONS(208),
    [anon_sym_ATtest] = ACTIONS(210),
    [anon_sym_ATtestWith] = ACTIONS(208),
    [anon_sym_ATtestdox] = ACTIONS(208),
    [anon_sym_ATticket] = ACTIONS(208),
    [sym__end] = ACTIONS(208),
    [sym_text] = ACTIONS(49),
  },
  [26] = {
    [sym_description] = STATE(77),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(212),
    [anon_sym_ATinheritDoc] = ACTIONS(212),
    [anon_sym_ATapi] = ACTIONS(212),
    [anon_sym_ATfilesource] = ACTIONS(212),
    [anon_sym_ATignore] = ACTIONS(212),
    [anon_sym_ATinternal] = ACTIONS(212),
    [anon_sym_ATcategory] = ACTIONS(212),
    [anon_sym_ATcopyright] = ACTIONS(212),
    [anon_sym_ATtodo] = ACTIONS(212),
    [anon_sym_ATexample] = ACTIONS(212),
    [anon_sym_ATlicense] = ACTIONS(212),
    [anon_sym_ATpackage] = ACTIONS(212),
    [anon_sym_ATsource] = ACTIONS(212),
    [anon_sym_ATsubpackage] = ACTIONS(212),
    [anon_sym_ATuses] = ACTIONS(212),
    [anon_sym_ATauthor] = ACTIONS(212),
    [anon_sym_ATglobal] = ACTIONS(212),
    [anon_sym_ATlink] = ACTIONS(212),
    [anon_sym_ATmethod] = ACTIONS(212),
    [anon_sym_ATparam] = ACTIONS(212),
    [anon_sym_ATproperty] = ACTIONS(214),
    [anon_sym_ATproperty_DASHread] = ACTIONS(212),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(212),
    [anon_sym_ATreturn] = ACTIONS(212),
    [anon_sym_ATsee] = ACTIONS(212),
    [anon_sym_ATthrows] = ACTIONS(212),
    [anon_sym_ATvar] = ACTIONS(212),
    [anon_sym_ATdeprecated] = ACTIONS(212),
    [anon_sym_ATsince] = ACTIONS(212),
    [anon_sym_ATversion] = ACTIONS(212),
    [anon_sym_ATafter] = ACTIONS(214),
    [anon_sym_ATafterClass] = ACTIONS(212),
    [anon_sym_ATannotation] = ACTIONS(212),
    [anon_sym_ATbackupGlobals] = ACTIONS(212),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(212),
    [anon_sym_ATbefore] = ACTIONS(214),
    [anon_sym_ATbeforeClass] = ACTIONS(212),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(214),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(212),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(212),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(212),
    [anon_sym_ATcovers] = ACTIONS(214),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(214),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(212),
    [anon_sym_ATcoversNothing] = ACTIONS(212),
    [anon_sym_ATdataProvider] = ACTIONS(212),
    [anon_sym_ATdepends] = ACTIONS(214),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(212),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(212),
    [anon_sym_ATgroup] = ACTIONS(212),
    [anon_sym_ATlarge] = ACTIONS(212),
    [anon_sym_ATmedium] = ACTIONS(212),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(212),
    [anon_sym_ATrequires] = ACTIONS(214),
    [anon_sym_ATrequiresusages] = ACTIONS(212),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(212),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(212),
    [anon_sym_ATsmall] = ACTIONS(212),
    [anon_sym_ATtest] = ACTIONS(214),
    [anon_sym_ATtestWith] = ACTIONS(212),
    [anon_sym_ATtestdox] = ACTIONS(212),
    [anon_sym_ATticket] = ACTIONS(212),
    [sym__end] = ACTIONS(212),
    [sym_text] = ACTIONS(49),
  },
  [27] = {
    [aux_sym_union_type_repeat1] = STATE(24),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_ATinheritdoc] = ACTIONS(216),
    [anon_sym_ATinheritDoc] = ACTIONS(216),
    [anon_sym_ATapi] = ACTIONS(216),
    [anon_sym_ATfilesource] = ACTIONS(216),
    [anon_sym_ATignore] = ACTIONS(216),
    [anon_sym_ATinternal] = ACTIONS(216),
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
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_DOLLAR] = ACTIONS(216),
    [sym__end] = ACTIONS(216),
    [sym__text_after_type] = ACTIONS(216),
  },
  [28] = {
    [sym_description] = STATE(73),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(220),
    [anon_sym_ATinheritDoc] = ACTIONS(220),
    [anon_sym_ATapi] = ACTIONS(220),
    [anon_sym_ATfilesource] = ACTIONS(220),
    [anon_sym_ATignore] = ACTIONS(220),
    [anon_sym_ATinternal] = ACTIONS(220),
    [anon_sym_ATcategory] = ACTIONS(220),
    [anon_sym_ATcopyright] = ACTIONS(220),
    [anon_sym_ATtodo] = ACTIONS(220),
    [anon_sym_ATexample] = ACTIONS(220),
    [anon_sym_ATlicense] = ACTIONS(220),
    [anon_sym_ATpackage] = ACTIONS(220),
    [anon_sym_ATsource] = ACTIONS(220),
    [anon_sym_ATsubpackage] = ACTIONS(220),
    [anon_sym_ATuses] = ACTIONS(220),
    [anon_sym_ATauthor] = ACTIONS(220),
    [anon_sym_ATglobal] = ACTIONS(220),
    [anon_sym_ATlink] = ACTIONS(220),
    [anon_sym_ATmethod] = ACTIONS(220),
    [anon_sym_ATparam] = ACTIONS(220),
    [anon_sym_ATproperty] = ACTIONS(222),
    [anon_sym_ATproperty_DASHread] = ACTIONS(220),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(220),
    [anon_sym_ATreturn] = ACTIONS(220),
    [anon_sym_ATsee] = ACTIONS(220),
    [anon_sym_ATthrows] = ACTIONS(220),
    [anon_sym_ATvar] = ACTIONS(220),
    [anon_sym_ATdeprecated] = ACTIONS(220),
    [anon_sym_ATsince] = ACTIONS(220),
    [anon_sym_ATversion] = ACTIONS(220),
    [anon_sym_ATafter] = ACTIONS(222),
    [anon_sym_ATafterClass] = ACTIONS(220),
    [anon_sym_ATannotation] = ACTIONS(220),
    [anon_sym_ATbackupGlobals] = ACTIONS(220),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(220),
    [anon_sym_ATbefore] = ACTIONS(222),
    [anon_sym_ATbeforeClass] = ACTIONS(220),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(222),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(220),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(220),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(220),
    [anon_sym_ATcovers] = ACTIONS(222),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(222),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(220),
    [anon_sym_ATcoversNothing] = ACTIONS(220),
    [anon_sym_ATdataProvider] = ACTIONS(220),
    [anon_sym_ATdepends] = ACTIONS(222),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(220),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(220),
    [anon_sym_ATgroup] = ACTIONS(220),
    [anon_sym_ATlarge] = ACTIONS(220),
    [anon_sym_ATmedium] = ACTIONS(220),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(220),
    [anon_sym_ATrequires] = ACTIONS(222),
    [anon_sym_ATrequiresusages] = ACTIONS(220),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(220),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(220),
    [anon_sym_ATsmall] = ACTIONS(220),
    [anon_sym_ATtest] = ACTIONS(222),
    [anon_sym_ATtestWith] = ACTIONS(220),
    [anon_sym_ATtestdox] = ACTIONS(220),
    [anon_sym_ATticket] = ACTIONS(220),
    [sym__end] = ACTIONS(220),
    [sym_text] = ACTIONS(49),
  },
  [29] = {
    [sym__description_after_type] = STATE(66),
    [sym_inline_tag] = STATE(51),
    [aux_sym__description_after_type_repeat1] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_ATinheritdoc] = ACTIONS(226),
    [anon_sym_ATinheritDoc] = ACTIONS(226),
    [anon_sym_ATapi] = ACTIONS(226),
    [anon_sym_ATfilesource] = ACTIONS(226),
    [anon_sym_ATignore] = ACTIONS(226),
    [anon_sym_ATinternal] = ACTIONS(226),
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
    [sym__end] = ACTIONS(226),
    [sym__text_after_type] = ACTIONS(230),
  },
  [30] = {
    [sym_description] = STATE(88),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(232),
    [anon_sym_ATinheritDoc] = ACTIONS(232),
    [anon_sym_ATapi] = ACTIONS(232),
    [anon_sym_ATfilesource] = ACTIONS(232),
    [anon_sym_ATignore] = ACTIONS(232),
    [anon_sym_ATinternal] = ACTIONS(232),
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
    [sym__end] = ACTIONS(232),
    [sym_text] = ACTIONS(49),
  },
  [31] = {
    [sym_description] = STATE(85),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(236),
    [anon_sym_ATinheritDoc] = ACTIONS(236),
    [anon_sym_ATapi] = ACTIONS(236),
    [anon_sym_ATfilesource] = ACTIONS(236),
    [anon_sym_ATignore] = ACTIONS(236),
    [anon_sym_ATinternal] = ACTIONS(236),
    [anon_sym_ATcategory] = ACTIONS(236),
    [anon_sym_ATcopyright] = ACTIONS(236),
    [anon_sym_ATtodo] = ACTIONS(236),
    [anon_sym_ATexample] = ACTIONS(236),
    [anon_sym_ATlicense] = ACTIONS(236),
    [anon_sym_ATpackage] = ACTIONS(236),
    [anon_sym_ATsource] = ACTIONS(236),
    [anon_sym_ATsubpackage] = ACTIONS(236),
    [anon_sym_ATuses] = ACTIONS(236),
    [anon_sym_ATauthor] = ACTIONS(236),
    [anon_sym_ATglobal] = ACTIONS(236),
    [anon_sym_ATlink] = ACTIONS(236),
    [anon_sym_ATmethod] = ACTIONS(236),
    [anon_sym_ATparam] = ACTIONS(236),
    [anon_sym_ATproperty] = ACTIONS(238),
    [anon_sym_ATproperty_DASHread] = ACTIONS(236),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(236),
    [anon_sym_ATreturn] = ACTIONS(236),
    [anon_sym_ATsee] = ACTIONS(236),
    [anon_sym_ATthrows] = ACTIONS(236),
    [anon_sym_ATvar] = ACTIONS(236),
    [anon_sym_ATdeprecated] = ACTIONS(236),
    [anon_sym_ATsince] = ACTIONS(236),
    [anon_sym_ATversion] = ACTIONS(236),
    [anon_sym_ATafter] = ACTIONS(238),
    [anon_sym_ATafterClass] = ACTIONS(236),
    [anon_sym_ATannotation] = ACTIONS(236),
    [anon_sym_ATbackupGlobals] = ACTIONS(236),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(236),
    [anon_sym_ATbefore] = ACTIONS(238),
    [anon_sym_ATbeforeClass] = ACTIONS(236),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(238),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(236),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(236),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(236),
    [anon_sym_ATcovers] = ACTIONS(238),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(238),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(236),
    [anon_sym_ATcoversNothing] = ACTIONS(236),
    [anon_sym_ATdataProvider] = ACTIONS(236),
    [anon_sym_ATdepends] = ACTIONS(238),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(236),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(236),
    [anon_sym_ATgroup] = ACTIONS(236),
    [anon_sym_ATlarge] = ACTIONS(236),
    [anon_sym_ATmedium] = ACTIONS(236),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(236),
    [anon_sym_ATrequires] = ACTIONS(238),
    [anon_sym_ATrequiresusages] = ACTIONS(236),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(236),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(236),
    [anon_sym_ATsmall] = ACTIONS(236),
    [anon_sym_ATtest] = ACTIONS(238),
    [anon_sym_ATtestWith] = ACTIONS(236),
    [anon_sym_ATtestdox] = ACTIONS(236),
    [anon_sym_ATticket] = ACTIONS(236),
    [sym__end] = ACTIONS(236),
    [sym_text] = ACTIONS(49),
  },
  [32] = {
    [sym_description] = STATE(86),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(240),
    [anon_sym_ATinheritDoc] = ACTIONS(240),
    [anon_sym_ATapi] = ACTIONS(240),
    [anon_sym_ATfilesource] = ACTIONS(240),
    [anon_sym_ATignore] = ACTIONS(240),
    [anon_sym_ATinternal] = ACTIONS(240),
    [anon_sym_ATcategory] = ACTIONS(240),
    [anon_sym_ATcopyright] = ACTIONS(240),
    [anon_sym_ATtodo] = ACTIONS(240),
    [anon_sym_ATexample] = ACTIONS(240),
    [anon_sym_ATlicense] = ACTIONS(240),
    [anon_sym_ATpackage] = ACTIONS(240),
    [anon_sym_ATsource] = ACTIONS(240),
    [anon_sym_ATsubpackage] = ACTIONS(240),
    [anon_sym_ATuses] = ACTIONS(240),
    [anon_sym_ATauthor] = ACTIONS(240),
    [anon_sym_ATglobal] = ACTIONS(240),
    [anon_sym_ATlink] = ACTIONS(240),
    [anon_sym_ATmethod] = ACTIONS(240),
    [anon_sym_ATparam] = ACTIONS(240),
    [anon_sym_ATproperty] = ACTIONS(242),
    [anon_sym_ATproperty_DASHread] = ACTIONS(240),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(240),
    [anon_sym_ATreturn] = ACTIONS(240),
    [anon_sym_ATsee] = ACTIONS(240),
    [anon_sym_ATthrows] = ACTIONS(240),
    [anon_sym_ATvar] = ACTIONS(240),
    [anon_sym_ATdeprecated] = ACTIONS(240),
    [anon_sym_ATsince] = ACTIONS(240),
    [anon_sym_ATversion] = ACTIONS(240),
    [anon_sym_ATafter] = ACTIONS(242),
    [anon_sym_ATafterClass] = ACTIONS(240),
    [anon_sym_ATannotation] = ACTIONS(240),
    [anon_sym_ATbackupGlobals] = ACTIONS(240),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(240),
    [anon_sym_ATbefore] = ACTIONS(242),
    [anon_sym_ATbeforeClass] = ACTIONS(240),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(242),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(240),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(240),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(240),
    [anon_sym_ATcovers] = ACTIONS(242),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(242),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(240),
    [anon_sym_ATcoversNothing] = ACTIONS(240),
    [anon_sym_ATdataProvider] = ACTIONS(240),
    [anon_sym_ATdepends] = ACTIONS(242),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(240),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(240),
    [anon_sym_ATgroup] = ACTIONS(240),
    [anon_sym_ATlarge] = ACTIONS(240),
    [anon_sym_ATmedium] = ACTIONS(240),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(240),
    [anon_sym_ATrequires] = ACTIONS(242),
    [anon_sym_ATrequiresusages] = ACTIONS(240),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(240),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(240),
    [anon_sym_ATsmall] = ACTIONS(240),
    [anon_sym_ATtest] = ACTIONS(242),
    [anon_sym_ATtestWith] = ACTIONS(240),
    [anon_sym_ATtestdox] = ACTIONS(240),
    [anon_sym_ATticket] = ACTIONS(240),
    [sym__end] = ACTIONS(240),
    [sym_text] = ACTIONS(49),
  },
  [33] = {
    [sym_description] = STATE(80),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(244),
    [anon_sym_ATinheritDoc] = ACTIONS(244),
    [anon_sym_ATapi] = ACTIONS(244),
    [anon_sym_ATfilesource] = ACTIONS(244),
    [anon_sym_ATignore] = ACTIONS(244),
    [anon_sym_ATinternal] = ACTIONS(244),
    [anon_sym_ATcategory] = ACTIONS(244),
    [anon_sym_ATcopyright] = ACTIONS(244),
    [anon_sym_ATtodo] = ACTIONS(244),
    [anon_sym_ATexample] = ACTIONS(244),
    [anon_sym_ATlicense] = ACTIONS(244),
    [anon_sym_ATpackage] = ACTIONS(244),
    [anon_sym_ATsource] = ACTIONS(244),
    [anon_sym_ATsubpackage] = ACTIONS(244),
    [anon_sym_ATuses] = ACTIONS(244),
    [anon_sym_ATauthor] = ACTIONS(244),
    [anon_sym_ATglobal] = ACTIONS(244),
    [anon_sym_ATlink] = ACTIONS(244),
    [anon_sym_ATmethod] = ACTIONS(244),
    [anon_sym_ATparam] = ACTIONS(244),
    [anon_sym_ATproperty] = ACTIONS(246),
    [anon_sym_ATproperty_DASHread] = ACTIONS(244),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(244),
    [anon_sym_ATreturn] = ACTIONS(244),
    [anon_sym_ATsee] = ACTIONS(244),
    [anon_sym_ATthrows] = ACTIONS(244),
    [anon_sym_ATvar] = ACTIONS(244),
    [anon_sym_ATdeprecated] = ACTIONS(244),
    [anon_sym_ATsince] = ACTIONS(244),
    [anon_sym_ATversion] = ACTIONS(244),
    [anon_sym_ATafter] = ACTIONS(246),
    [anon_sym_ATafterClass] = ACTIONS(244),
    [anon_sym_ATannotation] = ACTIONS(244),
    [anon_sym_ATbackupGlobals] = ACTIONS(244),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(244),
    [anon_sym_ATbefore] = ACTIONS(246),
    [anon_sym_ATbeforeClass] = ACTIONS(244),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(246),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(244),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(244),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(244),
    [anon_sym_ATcovers] = ACTIONS(246),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(246),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(244),
    [anon_sym_ATcoversNothing] = ACTIONS(244),
    [anon_sym_ATdataProvider] = ACTIONS(244),
    [anon_sym_ATdepends] = ACTIONS(246),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(244),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(244),
    [anon_sym_ATgroup] = ACTIONS(244),
    [anon_sym_ATlarge] = ACTIONS(244),
    [anon_sym_ATmedium] = ACTIONS(244),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(244),
    [anon_sym_ATrequires] = ACTIONS(246),
    [anon_sym_ATrequiresusages] = ACTIONS(244),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(244),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(244),
    [anon_sym_ATsmall] = ACTIONS(244),
    [anon_sym_ATtest] = ACTIONS(246),
    [anon_sym_ATtestWith] = ACTIONS(244),
    [anon_sym_ATtestdox] = ACTIONS(244),
    [anon_sym_ATticket] = ACTIONS(244),
    [sym__end] = ACTIONS(244),
    [sym_text] = ACTIONS(49),
  },
  [34] = {
    [sym_description] = STATE(78),
    [sym_inline_tag] = STATE(38),
    [aux_sym_description_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(248),
    [anon_sym_ATinheritDoc] = ACTIONS(248),
    [anon_sym_ATapi] = ACTIONS(248),
    [anon_sym_ATfilesource] = ACTIONS(248),
    [anon_sym_ATignore] = ACTIONS(248),
    [anon_sym_ATinternal] = ACTIONS(248),
    [anon_sym_ATcategory] = ACTIONS(248),
    [anon_sym_ATcopyright] = ACTIONS(248),
    [anon_sym_ATtodo] = ACTIONS(248),
    [anon_sym_ATexample] = ACTIONS(248),
    [anon_sym_ATlicense] = ACTIONS(248),
    [anon_sym_ATpackage] = ACTIONS(248),
    [anon_sym_ATsource] = ACTIONS(248),
    [anon_sym_ATsubpackage] = ACTIONS(248),
    [anon_sym_ATuses] = ACTIONS(248),
    [anon_sym_ATauthor] = ACTIONS(248),
    [anon_sym_ATglobal] = ACTIONS(248),
    [anon_sym_ATlink] = ACTIONS(248),
    [anon_sym_ATmethod] = ACTIONS(248),
    [anon_sym_ATparam] = ACTIONS(248),
    [anon_sym_ATproperty] = ACTIONS(250),
    [anon_sym_ATproperty_DASHread] = ACTIONS(248),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(248),
    [anon_sym_ATreturn] = ACTIONS(248),
    [anon_sym_ATsee] = ACTIONS(248),
    [anon_sym_ATthrows] = ACTIONS(248),
    [anon_sym_ATvar] = ACTIONS(248),
    [anon_sym_ATdeprecated] = ACTIONS(248),
    [anon_sym_ATsince] = ACTIONS(248),
    [anon_sym_ATversion] = ACTIONS(248),
    [anon_sym_ATafter] = ACTIONS(250),
    [anon_sym_ATafterClass] = ACTIONS(248),
    [anon_sym_ATannotation] = ACTIONS(248),
    [anon_sym_ATbackupGlobals] = ACTIONS(248),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(248),
    [anon_sym_ATbefore] = ACTIONS(250),
    [anon_sym_ATbeforeClass] = ACTIONS(248),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(250),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(248),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(248),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(248),
    [anon_sym_ATcovers] = ACTIONS(250),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(250),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(248),
    [anon_sym_ATcoversNothing] = ACTIONS(248),
    [anon_sym_ATdataProvider] = ACTIONS(248),
    [anon_sym_ATdepends] = ACTIONS(250),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(248),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(248),
    [anon_sym_ATgroup] = ACTIONS(248),
    [anon_sym_ATlarge] = ACTIONS(248),
    [anon_sym_ATmedium] = ACTIONS(248),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(248),
    [anon_sym_ATrequires] = ACTIONS(250),
    [anon_sym_ATrequiresusages] = ACTIONS(248),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(248),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(248),
    [anon_sym_ATsmall] = ACTIONS(248),
    [anon_sym_ATtest] = ACTIONS(250),
    [anon_sym_ATtestWith] = ACTIONS(248),
    [anon_sym_ATtestdox] = ACTIONS(248),
    [anon_sym_ATticket] = ACTIONS(248),
    [sym__end] = ACTIONS(248),
    [sym_text] = ACTIONS(49),
  },
  [35] = {
    [sym__description_after_type] = STATE(69),
    [sym_inline_tag] = STATE(51),
    [aux_sym__description_after_type_repeat1] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_ATinheritdoc] = ACTIONS(252),
    [anon_sym_ATinheritDoc] = ACTIONS(252),
    [anon_sym_ATapi] = ACTIONS(252),
    [anon_sym_ATfilesource] = ACTIONS(252),
    [anon_sym_ATignore] = ACTIONS(252),
    [anon_sym_ATinternal] = ACTIONS(252),
    [anon_sym_ATcategory] = ACTIONS(252),
    [anon_sym_ATcopyright] = ACTIONS(252),
    [anon_sym_ATtodo] = ACTIONS(252),
    [anon_sym_ATexample] = ACTIONS(252),
    [anon_sym_ATlicense] = ACTIONS(252),
    [anon_sym_ATpackage] = ACTIONS(252),
    [anon_sym_ATsource] = ACTIONS(252),
    [anon_sym_ATsubpackage] = ACTIONS(252),
    [anon_sym_ATuses] = ACTIONS(252),
    [anon_sym_ATauthor] = ACTIONS(252),
    [anon_sym_ATglobal] = ACTIONS(252),
    [anon_sym_ATlink] = ACTIONS(252),
    [anon_sym_ATmethod] = ACTIONS(252),
    [anon_sym_ATparam] = ACTIONS(252),
    [anon_sym_ATproperty] = ACTIONS(254),
    [anon_sym_ATproperty_DASHread] = ACTIONS(252),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(252),
    [anon_sym_ATreturn] = ACTIONS(252),
    [anon_sym_ATsee] = ACTIONS(252),
    [anon_sym_ATthrows] = ACTIONS(252),
    [anon_sym_ATvar] = ACTIONS(252),
    [anon_sym_ATdeprecated] = ACTIONS(252),
    [anon_sym_ATsince] = ACTIONS(252),
    [anon_sym_ATversion] = ACTIONS(252),
    [anon_sym_ATafter] = ACTIONS(254),
    [anon_sym_ATafterClass] = ACTIONS(252),
    [anon_sym_ATannotation] = ACTIONS(252),
    [anon_sym_ATbackupGlobals] = ACTIONS(252),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(252),
    [anon_sym_ATbefore] = ACTIONS(254),
    [anon_sym_ATbeforeClass] = ACTIONS(252),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(254),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(252),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(252),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(252),
    [anon_sym_ATcovers] = ACTIONS(254),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(254),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(252),
    [anon_sym_ATcoversNothing] = ACTIONS(252),
    [anon_sym_ATdataProvider] = ACTIONS(252),
    [anon_sym_ATdepends] = ACTIONS(254),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(252),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(252),
    [anon_sym_ATgroup] = ACTIONS(252),
    [anon_sym_ATlarge] = ACTIONS(252),
    [anon_sym_ATmedium] = ACTIONS(252),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(252),
    [anon_sym_ATrequires] = ACTIONS(254),
    [anon_sym_ATrequiresusages] = ACTIONS(252),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(252),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(252),
    [anon_sym_ATsmall] = ACTIONS(252),
    [anon_sym_ATtest] = ACTIONS(254),
    [anon_sym_ATtestWith] = ACTIONS(252),
    [anon_sym_ATtestdox] = ACTIONS(252),
    [anon_sym_ATticket] = ACTIONS(252),
    [sym__end] = ACTIONS(252),
    [sym__text_after_type] = ACTIONS(230),
  },
  [36] = {
    [sym_inline_tag] = STATE(51),
    [aux_sym__description_after_type_repeat1] = STATE(36),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_ATinheritdoc] = ACTIONS(259),
    [anon_sym_ATinheritDoc] = ACTIONS(259),
    [anon_sym_ATapi] = ACTIONS(259),
    [anon_sym_ATfilesource] = ACTIONS(259),
    [anon_sym_ATignore] = ACTIONS(259),
    [anon_sym_ATinternal] = ACTIONS(259),
    [anon_sym_ATcategory] = ACTIONS(259),
    [anon_sym_ATcopyright] = ACTIONS(259),
    [anon_sym_ATtodo] = ACTIONS(259),
    [anon_sym_ATexample] = ACTIONS(259),
    [anon_sym_ATlicense] = ACTIONS(259),
    [anon_sym_ATpackage] = ACTIONS(259),
    [anon_sym_ATsource] = ACTIONS(259),
    [anon_sym_ATsubpackage] = ACTIONS(259),
    [anon_sym_ATuses] = ACTIONS(259),
    [anon_sym_ATauthor] = ACTIONS(259),
    [anon_sym_ATglobal] = ACTIONS(259),
    [anon_sym_ATlink] = ACTIONS(259),
    [anon_sym_ATmethod] = ACTIONS(259),
    [anon_sym_ATparam] = ACTIONS(259),
    [anon_sym_ATproperty] = ACTIONS(261),
    [anon_sym_ATproperty_DASHread] = ACTIONS(259),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(259),
    [anon_sym_ATreturn] = ACTIONS(259),
    [anon_sym_ATsee] = ACTIONS(259),
    [anon_sym_ATthrows] = ACTIONS(259),
    [anon_sym_ATvar] = ACTIONS(259),
    [anon_sym_ATdeprecated] = ACTIONS(259),
    [anon_sym_ATsince] = ACTIONS(259),
    [anon_sym_ATversion] = ACTIONS(259),
    [anon_sym_ATafter] = ACTIONS(261),
    [anon_sym_ATafterClass] = ACTIONS(259),
    [anon_sym_ATannotation] = ACTIONS(259),
    [anon_sym_ATbackupGlobals] = ACTIONS(259),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(259),
    [anon_sym_ATbefore] = ACTIONS(261),
    [anon_sym_ATbeforeClass] = ACTIONS(259),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(261),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(259),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(259),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(259),
    [anon_sym_ATcovers] = ACTIONS(261),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(261),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(259),
    [anon_sym_ATcoversNothing] = ACTIONS(259),
    [anon_sym_ATdataProvider] = ACTIONS(259),
    [anon_sym_ATdepends] = ACTIONS(261),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(259),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(259),
    [anon_sym_ATgroup] = ACTIONS(259),
    [anon_sym_ATlarge] = ACTIONS(259),
    [anon_sym_ATmedium] = ACTIONS(259),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(259),
    [anon_sym_ATrequires] = ACTIONS(261),
    [anon_sym_ATrequiresusages] = ACTIONS(259),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(259),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(259),
    [anon_sym_ATsmall] = ACTIONS(259),
    [anon_sym_ATtest] = ACTIONS(261),
    [anon_sym_ATtestWith] = ACTIONS(259),
    [anon_sym_ATtestdox] = ACTIONS(259),
    [anon_sym_ATticket] = ACTIONS(259),
    [sym__end] = ACTIONS(259),
    [sym__text_after_type] = ACTIONS(263),
  },
  [37] = {
    [sym_inline_tag] = STATE(61),
    [aux_sym__description_not_version_repeat1] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_ATinheritdoc] = ACTIONS(269),
    [anon_sym_ATinheritDoc] = ACTIONS(269),
    [anon_sym_ATapi] = ACTIONS(269),
    [anon_sym_ATfilesource] = ACTIONS(269),
    [anon_sym_ATignore] = ACTIONS(269),
    [anon_sym_ATinternal] = ACTIONS(269),
    [anon_sym_ATcategory] = ACTIONS(269),
    [anon_sym_ATcopyright] = ACTIONS(269),
    [anon_sym_ATtodo] = ACTIONS(269),
    [anon_sym_ATexample] = ACTIONS(269),
    [anon_sym_ATlicense] = ACTIONS(269),
    [anon_sym_ATpackage] = ACTIONS(269),
    [anon_sym_ATsource] = ACTIONS(269),
    [anon_sym_ATsubpackage] = ACTIONS(269),
    [anon_sym_ATuses] = ACTIONS(269),
    [anon_sym_ATauthor] = ACTIONS(269),
    [anon_sym_ATglobal] = ACTIONS(269),
    [anon_sym_ATlink] = ACTIONS(269),
    [anon_sym_ATmethod] = ACTIONS(269),
    [anon_sym_ATparam] = ACTIONS(269),
    [anon_sym_ATproperty] = ACTIONS(271),
    [anon_sym_ATproperty_DASHread] = ACTIONS(269),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(269),
    [anon_sym_ATreturn] = ACTIONS(269),
    [anon_sym_ATsee] = ACTIONS(269),
    [anon_sym_ATthrows] = ACTIONS(269),
    [anon_sym_ATvar] = ACTIONS(269),
    [anon_sym_ATdeprecated] = ACTIONS(269),
    [anon_sym_ATsince] = ACTIONS(269),
    [anon_sym_ATversion] = ACTIONS(269),
    [anon_sym_ATafter] = ACTIONS(271),
    [anon_sym_ATafterClass] = ACTIONS(269),
    [anon_sym_ATannotation] = ACTIONS(269),
    [anon_sym_ATbackupGlobals] = ACTIONS(269),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(269),
    [anon_sym_ATbefore] = ACTIONS(271),
    [anon_sym_ATbeforeClass] = ACTIONS(269),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(271),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(269),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(269),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(269),
    [anon_sym_ATcovers] = ACTIONS(271),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(271),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(269),
    [anon_sym_ATcoversNothing] = ACTIONS(269),
    [anon_sym_ATdataProvider] = ACTIONS(269),
    [anon_sym_ATdepends] = ACTIONS(271),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(269),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(269),
    [anon_sym_ATgroup] = ACTIONS(269),
    [anon_sym_ATlarge] = ACTIONS(269),
    [anon_sym_ATmedium] = ACTIONS(269),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(269),
    [anon_sym_ATrequires] = ACTIONS(271),
    [anon_sym_ATrequiresusages] = ACTIONS(269),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(269),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(269),
    [anon_sym_ATsmall] = ACTIONS(269),
    [anon_sym_ATtest] = ACTIONS(271),
    [anon_sym_ATtestWith] = ACTIONS(269),
    [anon_sym_ATtestdox] = ACTIONS(269),
    [anon_sym_ATticket] = ACTIONS(269),
    [sym__end] = ACTIONS(269),
    [sym__text_not_version] = ACTIONS(273),
  },
  [38] = {
    [sym_inline_tag] = STATE(40),
    [aux_sym_description_repeat1] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(276),
    [anon_sym_ATinheritDoc] = ACTIONS(276),
    [anon_sym_ATapi] = ACTIONS(276),
    [anon_sym_ATfilesource] = ACTIONS(276),
    [anon_sym_ATignore] = ACTIONS(276),
    [anon_sym_ATinternal] = ACTIONS(276),
    [anon_sym_ATcategory] = ACTIONS(276),
    [anon_sym_ATcopyright] = ACTIONS(276),
    [anon_sym_ATtodo] = ACTIONS(276),
    [anon_sym_ATexample] = ACTIONS(276),
    [anon_sym_ATlicense] = ACTIONS(276),
    [anon_sym_ATpackage] = ACTIONS(276),
    [anon_sym_ATsource] = ACTIONS(276),
    [anon_sym_ATsubpackage] = ACTIONS(276),
    [anon_sym_ATuses] = ACTIONS(276),
    [anon_sym_ATauthor] = ACTIONS(276),
    [anon_sym_ATglobal] = ACTIONS(276),
    [anon_sym_ATlink] = ACTIONS(276),
    [anon_sym_ATmethod] = ACTIONS(276),
    [anon_sym_ATparam] = ACTIONS(276),
    [anon_sym_ATproperty] = ACTIONS(278),
    [anon_sym_ATproperty_DASHread] = ACTIONS(276),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(276),
    [anon_sym_ATreturn] = ACTIONS(276),
    [anon_sym_ATsee] = ACTIONS(276),
    [anon_sym_ATthrows] = ACTIONS(276),
    [anon_sym_ATvar] = ACTIONS(276),
    [anon_sym_ATdeprecated] = ACTIONS(276),
    [anon_sym_ATsince] = ACTIONS(276),
    [anon_sym_ATversion] = ACTIONS(276),
    [anon_sym_ATafter] = ACTIONS(278),
    [anon_sym_ATafterClass] = ACTIONS(276),
    [anon_sym_ATannotation] = ACTIONS(276),
    [anon_sym_ATbackupGlobals] = ACTIONS(276),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(276),
    [anon_sym_ATbefore] = ACTIONS(278),
    [anon_sym_ATbeforeClass] = ACTIONS(276),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(278),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(276),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(276),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(276),
    [anon_sym_ATcovers] = ACTIONS(278),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(278),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(276),
    [anon_sym_ATcoversNothing] = ACTIONS(276),
    [anon_sym_ATdataProvider] = ACTIONS(276),
    [anon_sym_ATdepends] = ACTIONS(278),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(276),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(276),
    [anon_sym_ATgroup] = ACTIONS(276),
    [anon_sym_ATlarge] = ACTIONS(276),
    [anon_sym_ATmedium] = ACTIONS(276),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(276),
    [anon_sym_ATrequires] = ACTIONS(278),
    [anon_sym_ATrequiresusages] = ACTIONS(276),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(276),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(276),
    [anon_sym_ATsmall] = ACTIONS(276),
    [anon_sym_ATtest] = ACTIONS(278),
    [anon_sym_ATtestWith] = ACTIONS(276),
    [anon_sym_ATtestdox] = ACTIONS(276),
    [anon_sym_ATticket] = ACTIONS(276),
    [sym__end] = ACTIONS(276),
    [sym_text] = ACTIONS(280),
  },
  [39] = {
    [anon_sym_LBRACE] = ACTIONS(191),
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
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [sym__end] = ACTIONS(191),
    [sym__text_after_type] = ACTIONS(191),
  },
  [40] = {
    [sym_inline_tag] = STATE(40),
    [aux_sym_description_repeat1] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(282),
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
    [sym_text] = ACTIONS(289),
  },
  [41] = {
    [sym_inline_tag] = STATE(51),
    [aux_sym__description_after_type_repeat1] = STATE(36),
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_ATinheritdoc] = ACTIONS(292),
    [anon_sym_ATinheritDoc] = ACTIONS(292),
    [anon_sym_ATapi] = ACTIONS(292),
    [anon_sym_ATfilesource] = ACTIONS(292),
    [anon_sym_ATignore] = ACTIONS(292),
    [anon_sym_ATinternal] = ACTIONS(292),
    [anon_sym_ATcategory] = ACTIONS(292),
    [anon_sym_ATcopyright] = ACTIONS(292),
    [anon_sym_ATtodo] = ACTIONS(292),
    [anon_sym_ATexample] = ACTIONS(292),
    [anon_sym_ATlicense] = ACTIONS(292),
    [anon_sym_ATpackage] = ACTIONS(292),
    [anon_sym_ATsource] = ACTIONS(292),
    [anon_sym_ATsubpackage] = ACTIONS(292),
    [anon_sym_ATuses] = ACTIONS(292),
    [anon_sym_ATauthor] = ACTIONS(292),
    [anon_sym_ATglobal] = ACTIONS(292),
    [anon_sym_ATlink] = ACTIONS(292),
    [anon_sym_ATmethod] = ACTIONS(292),
    [anon_sym_ATparam] = ACTIONS(292),
    [anon_sym_ATproperty] = ACTIONS(294),
    [anon_sym_ATproperty_DASHread] = ACTIONS(292),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(292),
    [anon_sym_ATreturn] = ACTIONS(292),
    [anon_sym_ATsee] = ACTIONS(292),
    [anon_sym_ATthrows] = ACTIONS(292),
    [anon_sym_ATvar] = ACTIONS(292),
    [anon_sym_ATdeprecated] = ACTIONS(292),
    [anon_sym_ATsince] = ACTIONS(292),
    [anon_sym_ATversion] = ACTIONS(292),
    [anon_sym_ATafter] = ACTIONS(294),
    [anon_sym_ATafterClass] = ACTIONS(292),
    [anon_sym_ATannotation] = ACTIONS(292),
    [anon_sym_ATbackupGlobals] = ACTIONS(292),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(292),
    [anon_sym_ATbefore] = ACTIONS(294),
    [anon_sym_ATbeforeClass] = ACTIONS(292),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(294),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(292),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(292),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(292),
    [anon_sym_ATcovers] = ACTIONS(294),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(294),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(292),
    [anon_sym_ATcoversNothing] = ACTIONS(292),
    [anon_sym_ATdataProvider] = ACTIONS(292),
    [anon_sym_ATdepends] = ACTIONS(294),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(292),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(292),
    [anon_sym_ATgroup] = ACTIONS(292),
    [anon_sym_ATlarge] = ACTIONS(292),
    [anon_sym_ATmedium] = ACTIONS(292),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(292),
    [anon_sym_ATrequires] = ACTIONS(294),
    [anon_sym_ATrequiresusages] = ACTIONS(292),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(292),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(292),
    [anon_sym_ATsmall] = ACTIONS(292),
    [anon_sym_ATtest] = ACTIONS(294),
    [anon_sym_ATtestWith] = ACTIONS(292),
    [anon_sym_ATtestdox] = ACTIONS(292),
    [anon_sym_ATticket] = ACTIONS(292),
    [sym__end] = ACTIONS(292),
    [sym__text_after_type] = ACTIONS(230),
  },
  [42] = {
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_ATinheritdoc] = ACTIONS(296),
    [anon_sym_ATinheritDoc] = ACTIONS(296),
    [anon_sym_ATapi] = ACTIONS(296),
    [anon_sym_ATfilesource] = ACTIONS(296),
    [anon_sym_ATignore] = ACTIONS(296),
    [anon_sym_ATinternal] = ACTIONS(296),
    [anon_sym_ATcategory] = ACTIONS(296),
    [anon_sym_ATcopyright] = ACTIONS(296),
    [anon_sym_ATtodo] = ACTIONS(296),
    [anon_sym_ATexample] = ACTIONS(296),
    [anon_sym_ATlicense] = ACTIONS(296),
    [anon_sym_ATpackage] = ACTIONS(296),
    [anon_sym_ATsource] = ACTIONS(296),
    [anon_sym_ATsubpackage] = ACTIONS(296),
    [anon_sym_ATuses] = ACTIONS(296),
    [anon_sym_ATauthor] = ACTIONS(296),
    [anon_sym_ATglobal] = ACTIONS(296),
    [anon_sym_ATlink] = ACTIONS(296),
    [anon_sym_ATmethod] = ACTIONS(296),
    [anon_sym_ATparam] = ACTIONS(296),
    [anon_sym_ATproperty] = ACTIONS(298),
    [anon_sym_ATproperty_DASHread] = ACTIONS(296),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(296),
    [anon_sym_ATreturn] = ACTIONS(296),
    [anon_sym_ATsee] = ACTIONS(296),
    [anon_sym_ATthrows] = ACTIONS(296),
    [anon_sym_ATvar] = ACTIONS(296),
    [anon_sym_ATdeprecated] = ACTIONS(296),
    [anon_sym_ATsince] = ACTIONS(296),
    [anon_sym_ATversion] = ACTIONS(296),
    [anon_sym_ATafter] = ACTIONS(298),
    [anon_sym_ATafterClass] = ACTIONS(296),
    [anon_sym_ATannotation] = ACTIONS(296),
    [anon_sym_ATbackupGlobals] = ACTIONS(296),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(296),
    [anon_sym_ATbefore] = ACTIONS(298),
    [anon_sym_ATbeforeClass] = ACTIONS(296),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(298),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(296),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(296),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(296),
    [anon_sym_ATcovers] = ACTIONS(298),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(298),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(296),
    [anon_sym_ATcoversNothing] = ACTIONS(296),
    [anon_sym_ATdataProvider] = ACTIONS(296),
    [anon_sym_ATdepends] = ACTIONS(298),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(296),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(296),
    [anon_sym_ATgroup] = ACTIONS(296),
    [anon_sym_ATlarge] = ACTIONS(296),
    [anon_sym_ATmedium] = ACTIONS(296),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(296),
    [anon_sym_ATrequires] = ACTIONS(298),
    [anon_sym_ATrequiresusages] = ACTIONS(296),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(296),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(296),
    [anon_sym_ATsmall] = ACTIONS(296),
    [anon_sym_ATtest] = ACTIONS(298),
    [anon_sym_ATtestWith] = ACTIONS(296),
    [anon_sym_ATtestdox] = ACTIONS(296),
    [anon_sym_ATticket] = ACTIONS(296),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_DOLLAR] = ACTIONS(296),
    [sym__end] = ACTIONS(296),
    [sym__text_after_type] = ACTIONS(296),
  },
  [43] = {
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_ATinheritdoc] = ACTIONS(300),
    [anon_sym_ATinheritDoc] = ACTIONS(300),
    [anon_sym_ATapi] = ACTIONS(300),
    [anon_sym_ATfilesource] = ACTIONS(300),
    [anon_sym_ATignore] = ACTIONS(300),
    [anon_sym_ATinternal] = ACTIONS(300),
    [anon_sym_ATcategory] = ACTIONS(300),
    [anon_sym_ATcopyright] = ACTIONS(300),
    [anon_sym_ATtodo] = ACTIONS(300),
    [anon_sym_ATexample] = ACTIONS(300),
    [anon_sym_ATlicense] = ACTIONS(300),
    [anon_sym_ATpackage] = ACTIONS(300),
    [anon_sym_ATsource] = ACTIONS(300),
    [anon_sym_ATsubpackage] = ACTIONS(300),
    [anon_sym_ATuses] = ACTIONS(300),
    [anon_sym_ATauthor] = ACTIONS(300),
    [anon_sym_ATglobal] = ACTIONS(300),
    [anon_sym_ATlink] = ACTIONS(300),
    [anon_sym_ATmethod] = ACTIONS(300),
    [anon_sym_ATparam] = ACTIONS(300),
    [anon_sym_ATproperty] = ACTIONS(302),
    [anon_sym_ATproperty_DASHread] = ACTIONS(300),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(300),
    [anon_sym_ATreturn] = ACTIONS(300),
    [anon_sym_ATsee] = ACTIONS(300),
    [anon_sym_ATthrows] = ACTIONS(300),
    [anon_sym_ATvar] = ACTIONS(300),
    [anon_sym_ATdeprecated] = ACTIONS(300),
    [anon_sym_ATsince] = ACTIONS(300),
    [anon_sym_ATversion] = ACTIONS(300),
    [anon_sym_ATafter] = ACTIONS(302),
    [anon_sym_ATafterClass] = ACTIONS(300),
    [anon_sym_ATannotation] = ACTIONS(300),
    [anon_sym_ATbackupGlobals] = ACTIONS(300),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(300),
    [anon_sym_ATbefore] = ACTIONS(302),
    [anon_sym_ATbeforeClass] = ACTIONS(300),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(302),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(300),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(300),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(300),
    [anon_sym_ATcovers] = ACTIONS(302),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(302),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(300),
    [anon_sym_ATcoversNothing] = ACTIONS(300),
    [anon_sym_ATdataProvider] = ACTIONS(300),
    [anon_sym_ATdepends] = ACTIONS(302),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(300),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(300),
    [anon_sym_ATgroup] = ACTIONS(300),
    [anon_sym_ATlarge] = ACTIONS(300),
    [anon_sym_ATmedium] = ACTIONS(300),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(300),
    [anon_sym_ATrequires] = ACTIONS(302),
    [anon_sym_ATrequiresusages] = ACTIONS(300),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(300),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(300),
    [anon_sym_ATsmall] = ACTIONS(300),
    [anon_sym_ATtest] = ACTIONS(302),
    [anon_sym_ATtestWith] = ACTIONS(300),
    [anon_sym_ATtestdox] = ACTIONS(300),
    [anon_sym_ATticket] = ACTIONS(300),
    [anon_sym_PIPE] = ACTIONS(300),
    [anon_sym_DOLLAR] = ACTIONS(300),
    [sym__end] = ACTIONS(300),
    [sym__text_after_type] = ACTIONS(300),
  },
  [44] = {
    [sym_inline_tag] = STATE(61),
    [aux_sym__description_not_version_repeat1] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_ATinheritdoc] = ACTIONS(304),
    [anon_sym_ATinheritDoc] = ACTIONS(304),
    [anon_sym_ATapi] = ACTIONS(304),
    [anon_sym_ATfilesource] = ACTIONS(304),
    [anon_sym_ATignore] = ACTIONS(304),
    [anon_sym_ATinternal] = ACTIONS(304),
    [anon_sym_ATcategory] = ACTIONS(304),
    [anon_sym_ATcopyright] = ACTIONS(304),
    [anon_sym_ATtodo] = ACTIONS(304),
    [anon_sym_ATexample] = ACTIONS(304),
    [anon_sym_ATlicense] = ACTIONS(304),
    [anon_sym_ATpackage] = ACTIONS(304),
    [anon_sym_ATsource] = ACTIONS(304),
    [anon_sym_ATsubpackage] = ACTIONS(304),
    [anon_sym_ATuses] = ACTIONS(304),
    [anon_sym_ATauthor] = ACTIONS(304),
    [anon_sym_ATglobal] = ACTIONS(304),
    [anon_sym_ATlink] = ACTIONS(304),
    [anon_sym_ATmethod] = ACTIONS(304),
    [anon_sym_ATparam] = ACTIONS(304),
    [anon_sym_ATproperty] = ACTIONS(306),
    [anon_sym_ATproperty_DASHread] = ACTIONS(304),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(304),
    [anon_sym_ATreturn] = ACTIONS(304),
    [anon_sym_ATsee] = ACTIONS(304),
    [anon_sym_ATthrows] = ACTIONS(304),
    [anon_sym_ATvar] = ACTIONS(304),
    [anon_sym_ATdeprecated] = ACTIONS(304),
    [anon_sym_ATsince] = ACTIONS(304),
    [anon_sym_ATversion] = ACTIONS(304),
    [anon_sym_ATafter] = ACTIONS(306),
    [anon_sym_ATafterClass] = ACTIONS(304),
    [anon_sym_ATannotation] = ACTIONS(304),
    [anon_sym_ATbackupGlobals] = ACTIONS(304),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(304),
    [anon_sym_ATbefore] = ACTIONS(306),
    [anon_sym_ATbeforeClass] = ACTIONS(304),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(306),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(304),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(304),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(304),
    [anon_sym_ATcovers] = ACTIONS(306),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(306),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(304),
    [anon_sym_ATcoversNothing] = ACTIONS(304),
    [anon_sym_ATdataProvider] = ACTIONS(304),
    [anon_sym_ATdepends] = ACTIONS(306),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(304),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(304),
    [anon_sym_ATgroup] = ACTIONS(304),
    [anon_sym_ATlarge] = ACTIONS(304),
    [anon_sym_ATmedium] = ACTIONS(304),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(304),
    [anon_sym_ATrequires] = ACTIONS(306),
    [anon_sym_ATrequiresusages] = ACTIONS(304),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(304),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(304),
    [anon_sym_ATsmall] = ACTIONS(304),
    [anon_sym_ATtest] = ACTIONS(306),
    [anon_sym_ATtestWith] = ACTIONS(304),
    [anon_sym_ATtestdox] = ACTIONS(304),
    [anon_sym_ATticket] = ACTIONS(304),
    [sym__end] = ACTIONS(304),
    [sym__text_not_version] = ACTIONS(127),
  },
  [45] = {
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
    [anon_sym_LPAREN_RPAREN] = ACTIONS(312),
    [sym__end] = ACTIONS(308),
    [sym_text] = ACTIONS(308),
  },
  [46] = {
    [anon_sym_LBRACE] = ACTIONS(314),
    [anon_sym_ATinheritdoc] = ACTIONS(314),
    [anon_sym_ATinheritDoc] = ACTIONS(314),
    [anon_sym_ATapi] = ACTIONS(314),
    [anon_sym_ATfilesource] = ACTIONS(314),
    [anon_sym_ATignore] = ACTIONS(314),
    [anon_sym_ATinternal] = ACTIONS(314),
    [anon_sym_ATcategory] = ACTIONS(314),
    [anon_sym_ATcopyright] = ACTIONS(314),
    [anon_sym_ATtodo] = ACTIONS(314),
    [anon_sym_ATexample] = ACTIONS(314),
    [anon_sym_ATlicense] = ACTIONS(314),
    [anon_sym_ATpackage] = ACTIONS(314),
    [anon_sym_ATsource] = ACTIONS(314),
    [anon_sym_ATsubpackage] = ACTIONS(314),
    [anon_sym_ATuses] = ACTIONS(314),
    [anon_sym_ATauthor] = ACTIONS(314),
    [anon_sym_ATglobal] = ACTIONS(314),
    [anon_sym_ATlink] = ACTIONS(314),
    [anon_sym_ATmethod] = ACTIONS(314),
    [anon_sym_ATparam] = ACTIONS(314),
    [anon_sym_ATproperty] = ACTIONS(316),
    [anon_sym_ATproperty_DASHread] = ACTIONS(314),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(314),
    [anon_sym_ATreturn] = ACTIONS(314),
    [anon_sym_ATsee] = ACTIONS(314),
    [anon_sym_ATthrows] = ACTIONS(314),
    [anon_sym_ATvar] = ACTIONS(314),
    [anon_sym_ATdeprecated] = ACTIONS(314),
    [anon_sym_ATsince] = ACTIONS(314),
    [anon_sym_ATversion] = ACTIONS(314),
    [anon_sym_ATafter] = ACTIONS(316),
    [anon_sym_ATafterClass] = ACTIONS(314),
    [anon_sym_ATannotation] = ACTIONS(314),
    [anon_sym_ATbackupGlobals] = ACTIONS(314),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(314),
    [anon_sym_ATbefore] = ACTIONS(316),
    [anon_sym_ATbeforeClass] = ACTIONS(314),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(316),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(314),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(314),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(314),
    [anon_sym_ATcovers] = ACTIONS(316),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(316),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(314),
    [anon_sym_ATcoversNothing] = ACTIONS(314),
    [anon_sym_ATdataProvider] = ACTIONS(314),
    [anon_sym_ATdepends] = ACTIONS(316),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(314),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(314),
    [anon_sym_ATgroup] = ACTIONS(314),
    [anon_sym_ATlarge] = ACTIONS(314),
    [anon_sym_ATmedium] = ACTIONS(314),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(314),
    [anon_sym_ATrequires] = ACTIONS(316),
    [anon_sym_ATrequiresusages] = ACTIONS(314),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(314),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(314),
    [anon_sym_ATsmall] = ACTIONS(314),
    [anon_sym_ATtest] = ACTIONS(316),
    [anon_sym_ATtestWith] = ACTIONS(314),
    [anon_sym_ATtestdox] = ACTIONS(314),
    [anon_sym_ATticket] = ACTIONS(314),
    [anon_sym_COLON_COLON] = ACTIONS(318),
    [sym__end] = ACTIONS(314),
    [sym_text] = ACTIONS(314),
  },
  [47] = {
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
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_RPAREN] = ACTIONS(320),
    [anon_sym_EQ] = ACTIONS(320),
    [sym__end] = ACTIONS(320),
  },
  [48] = {
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
    [anon_sym_COLON_COLON] = ACTIONS(129),
    [sym__end] = ACTIONS(129),
    [sym_text] = ACTIONS(129),
  },
  [49] = {
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_ATinheritdoc] = ACTIONS(157),
    [anon_sym_ATinheritDoc] = ACTIONS(157),
    [anon_sym_ATapi] = ACTIONS(157),
    [anon_sym_ATfilesource] = ACTIONS(157),
    [anon_sym_ATignore] = ACTIONS(157),
    [anon_sym_ATinternal] = ACTIONS(157),
    [anon_sym_ATcategory] = ACTIONS(157),
    [anon_sym_ATcopyright] = ACTIONS(157),
    [anon_sym_ATtodo] = ACTIONS(157),
    [anon_sym_ATexample] = ACTIONS(157),
    [anon_sym_ATlicense] = ACTIONS(157),
    [anon_sym_ATpackage] = ACTIONS(157),
    [anon_sym_ATsource] = ACTIONS(157),
    [anon_sym_ATsubpackage] = ACTIONS(157),
    [anon_sym_ATuses] = ACTIONS(157),
    [anon_sym_ATauthor] = ACTIONS(157),
    [anon_sym_ATglobal] = ACTIONS(157),
    [anon_sym_ATlink] = ACTIONS(157),
    [anon_sym_ATmethod] = ACTIONS(157),
    [anon_sym_ATparam] = ACTIONS(157),
    [anon_sym_ATproperty] = ACTIONS(159),
    [anon_sym_ATproperty_DASHread] = ACTIONS(157),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(157),
    [anon_sym_ATreturn] = ACTIONS(157),
    [anon_sym_ATsee] = ACTIONS(157),
    [anon_sym_ATthrows] = ACTIONS(157),
    [anon_sym_ATvar] = ACTIONS(157),
    [anon_sym_ATdeprecated] = ACTIONS(157),
    [anon_sym_ATsince] = ACTIONS(157),
    [anon_sym_ATversion] = ACTIONS(157),
    [anon_sym_ATafter] = ACTIONS(159),
    [anon_sym_ATafterClass] = ACTIONS(157),
    [anon_sym_ATannotation] = ACTIONS(157),
    [anon_sym_ATbackupGlobals] = ACTIONS(157),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(157),
    [anon_sym_ATbefore] = ACTIONS(159),
    [anon_sym_ATbeforeClass] = ACTIONS(157),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(159),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(157),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(157),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(157),
    [anon_sym_ATcovers] = ACTIONS(159),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(159),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(157),
    [anon_sym_ATcoversNothing] = ACTIONS(157),
    [anon_sym_ATdataProvider] = ACTIONS(157),
    [anon_sym_ATdepends] = ACTIONS(159),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(157),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(157),
    [anon_sym_ATgroup] = ACTIONS(157),
    [anon_sym_ATlarge] = ACTIONS(157),
    [anon_sym_ATmedium] = ACTIONS(157),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(157),
    [anon_sym_ATrequires] = ACTIONS(159),
    [anon_sym_ATrequiresusages] = ACTIONS(157),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(157),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(157),
    [anon_sym_ATsmall] = ACTIONS(157),
    [anon_sym_ATtest] = ACTIONS(159),
    [anon_sym_ATtestWith] = ACTIONS(157),
    [anon_sym_ATtestdox] = ACTIONS(157),
    [anon_sym_ATticket] = ACTIONS(157),
    [anon_sym_COLON_COLON] = ACTIONS(157),
    [sym__end] = ACTIONS(157),
    [sym_text] = ACTIONS(157),
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
    [sym_text] = ACTIONS(324),
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
    [sym__text_after_type] = ACTIONS(328),
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
    [sym__text_not_version] = ACTIONS(332),
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
    [sym__text_after_type] = ACTIONS(332),
  },
  [55] = {
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
    [sym_text] = ACTIONS(340),
  },
  [56] = {
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
  [57] = {
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
  [58] = {
    [anon_sym_LBRACE] = ACTIONS(314),
    [anon_sym_ATinheritdoc] = ACTIONS(314),
    [anon_sym_ATinheritDoc] = ACTIONS(314),
    [anon_sym_ATapi] = ACTIONS(314),
    [anon_sym_ATfilesource] = ACTIONS(314),
    [anon_sym_ATignore] = ACTIONS(314),
    [anon_sym_ATinternal] = ACTIONS(314),
    [anon_sym_ATcategory] = ACTIONS(314),
    [anon_sym_ATcopyright] = ACTIONS(314),
    [anon_sym_ATtodo] = ACTIONS(314),
    [anon_sym_ATexample] = ACTIONS(314),
    [anon_sym_ATlicense] = ACTIONS(314),
    [anon_sym_ATpackage] = ACTIONS(314),
    [anon_sym_ATsource] = ACTIONS(314),
    [anon_sym_ATsubpackage] = ACTIONS(314),
    [anon_sym_ATuses] = ACTIONS(314),
    [anon_sym_ATauthor] = ACTIONS(314),
    [anon_sym_ATglobal] = ACTIONS(314),
    [anon_sym_ATlink] = ACTIONS(314),
    [anon_sym_ATmethod] = ACTIONS(314),
    [anon_sym_ATparam] = ACTIONS(314),
    [anon_sym_ATproperty] = ACTIONS(316),
    [anon_sym_ATproperty_DASHread] = ACTIONS(314),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(314),
    [anon_sym_ATreturn] = ACTIONS(314),
    [anon_sym_ATsee] = ACTIONS(314),
    [anon_sym_ATthrows] = ACTIONS(314),
    [anon_sym_ATvar] = ACTIONS(314),
    [anon_sym_ATdeprecated] = ACTIONS(314),
    [anon_sym_ATsince] = ACTIONS(314),
    [anon_sym_ATversion] = ACTIONS(314),
    [anon_sym_ATafter] = ACTIONS(316),
    [anon_sym_ATafterClass] = ACTIONS(314),
    [anon_sym_ATannotation] = ACTIONS(314),
    [anon_sym_ATbackupGlobals] = ACTIONS(314),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(314),
    [anon_sym_ATbefore] = ACTIONS(316),
    [anon_sym_ATbeforeClass] = ACTIONS(314),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(316),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(314),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(314),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(314),
    [anon_sym_ATcovers] = ACTIONS(316),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(316),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(314),
    [anon_sym_ATcoversNothing] = ACTIONS(314),
    [anon_sym_ATdataProvider] = ACTIONS(314),
    [anon_sym_ATdepends] = ACTIONS(316),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(314),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(314),
    [anon_sym_ATgroup] = ACTIONS(314),
    [anon_sym_ATlarge] = ACTIONS(314),
    [anon_sym_ATmedium] = ACTIONS(314),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(314),
    [anon_sym_ATrequires] = ACTIONS(316),
    [anon_sym_ATrequiresusages] = ACTIONS(314),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(314),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(314),
    [anon_sym_ATsmall] = ACTIONS(314),
    [anon_sym_ATtest] = ACTIONS(316),
    [anon_sym_ATtestWith] = ACTIONS(314),
    [anon_sym_ATtestdox] = ACTIONS(314),
    [anon_sym_ATticket] = ACTIONS(314),
    [sym__end] = ACTIONS(314),
    [sym_text] = ACTIONS(314),
  },
  [59] = {
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
  [60] = {
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
  [61] = {
    [anon_sym_LBRACE] = ACTIONS(352),
    [anon_sym_ATinheritdoc] = ACTIONS(352),
    [anon_sym_ATinheritDoc] = ACTIONS(352),
    [anon_sym_ATapi] = ACTIONS(352),
    [anon_sym_ATfilesource] = ACTIONS(352),
    [anon_sym_ATignore] = ACTIONS(352),
    [anon_sym_ATinternal] = ACTIONS(352),
    [anon_sym_ATcategory] = ACTIONS(352),
    [anon_sym_ATcopyright] = ACTIONS(352),
    [anon_sym_ATtodo] = ACTIONS(352),
    [anon_sym_ATexample] = ACTIONS(352),
    [anon_sym_ATlicense] = ACTIONS(352),
    [anon_sym_ATpackage] = ACTIONS(352),
    [anon_sym_ATsource] = ACTIONS(352),
    [anon_sym_ATsubpackage] = ACTIONS(352),
    [anon_sym_ATuses] = ACTIONS(352),
    [anon_sym_ATauthor] = ACTIONS(352),
    [anon_sym_ATglobal] = ACTIONS(352),
    [anon_sym_ATlink] = ACTIONS(352),
    [anon_sym_ATmethod] = ACTIONS(352),
    [anon_sym_ATparam] = ACTIONS(352),
    [anon_sym_ATproperty] = ACTIONS(354),
    [anon_sym_ATproperty_DASHread] = ACTIONS(352),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(352),
    [anon_sym_ATreturn] = ACTIONS(352),
    [anon_sym_ATsee] = ACTIONS(352),
    [anon_sym_ATthrows] = ACTIONS(352),
    [anon_sym_ATvar] = ACTIONS(352),
    [anon_sym_ATdeprecated] = ACTIONS(352),
    [anon_sym_ATsince] = ACTIONS(352),
    [anon_sym_ATversion] = ACTIONS(352),
    [anon_sym_ATafter] = ACTIONS(354),
    [anon_sym_ATafterClass] = ACTIONS(352),
    [anon_sym_ATannotation] = ACTIONS(352),
    [anon_sym_ATbackupGlobals] = ACTIONS(352),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(352),
    [anon_sym_ATbefore] = ACTIONS(354),
    [anon_sym_ATbeforeClass] = ACTIONS(352),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(354),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(352),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(352),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(352),
    [anon_sym_ATcovers] = ACTIONS(354),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(354),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(352),
    [anon_sym_ATcoversNothing] = ACTIONS(352),
    [anon_sym_ATdataProvider] = ACTIONS(352),
    [anon_sym_ATdepends] = ACTIONS(354),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(352),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(352),
    [anon_sym_ATgroup] = ACTIONS(352),
    [anon_sym_ATlarge] = ACTIONS(352),
    [anon_sym_ATmedium] = ACTIONS(352),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(352),
    [anon_sym_ATrequires] = ACTIONS(354),
    [anon_sym_ATrequiresusages] = ACTIONS(352),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(352),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(352),
    [anon_sym_ATsmall] = ACTIONS(352),
    [anon_sym_ATtest] = ACTIONS(354),
    [anon_sym_ATtestWith] = ACTIONS(352),
    [anon_sym_ATtestdox] = ACTIONS(352),
    [anon_sym_ATticket] = ACTIONS(352),
    [sym__end] = ACTIONS(352),
    [sym__text_not_version] = ACTIONS(352),
  },
  [62] = {
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_ATinheritdoc] = ACTIONS(356),
    [anon_sym_ATinheritDoc] = ACTIONS(356),
    [anon_sym_ATapi] = ACTIONS(356),
    [anon_sym_ATfilesource] = ACTIONS(356),
    [anon_sym_ATignore] = ACTIONS(356),
    [anon_sym_ATinternal] = ACTIONS(356),
    [anon_sym_ATcategory] = ACTIONS(356),
    [anon_sym_ATcopyright] = ACTIONS(356),
    [anon_sym_ATtodo] = ACTIONS(356),
    [anon_sym_ATexample] = ACTIONS(356),
    [anon_sym_ATlicense] = ACTIONS(356),
    [anon_sym_ATpackage] = ACTIONS(356),
    [anon_sym_ATsource] = ACTIONS(356),
    [anon_sym_ATsubpackage] = ACTIONS(356),
    [anon_sym_ATuses] = ACTIONS(356),
    [anon_sym_ATauthor] = ACTIONS(356),
    [anon_sym_ATglobal] = ACTIONS(356),
    [anon_sym_ATlink] = ACTIONS(356),
    [anon_sym_ATmethod] = ACTIONS(356),
    [anon_sym_ATparam] = ACTIONS(356),
    [anon_sym_ATproperty] = ACTIONS(358),
    [anon_sym_ATproperty_DASHread] = ACTIONS(356),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(356),
    [anon_sym_ATreturn] = ACTIONS(356),
    [anon_sym_ATsee] = ACTIONS(356),
    [anon_sym_ATthrows] = ACTIONS(356),
    [anon_sym_ATvar] = ACTIONS(356),
    [anon_sym_ATdeprecated] = ACTIONS(356),
    [anon_sym_ATsince] = ACTIONS(356),
    [anon_sym_ATversion] = ACTIONS(356),
    [anon_sym_ATafter] = ACTIONS(358),
    [anon_sym_ATafterClass] = ACTIONS(356),
    [anon_sym_ATannotation] = ACTIONS(356),
    [anon_sym_ATbackupGlobals] = ACTIONS(356),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(356),
    [anon_sym_ATbefore] = ACTIONS(358),
    [anon_sym_ATbeforeClass] = ACTIONS(356),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(358),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(356),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(356),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(356),
    [anon_sym_ATcovers] = ACTIONS(358),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(358),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(356),
    [anon_sym_ATcoversNothing] = ACTIONS(356),
    [anon_sym_ATdataProvider] = ACTIONS(356),
    [anon_sym_ATdepends] = ACTIONS(358),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(356),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(356),
    [anon_sym_ATgroup] = ACTIONS(356),
    [anon_sym_ATlarge] = ACTIONS(356),
    [anon_sym_ATmedium] = ACTIONS(356),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(356),
    [anon_sym_ATrequires] = ACTIONS(358),
    [anon_sym_ATrequiresusages] = ACTIONS(356),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(356),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(356),
    [anon_sym_ATsmall] = ACTIONS(356),
    [anon_sym_ATtest] = ACTIONS(358),
    [anon_sym_ATtestWith] = ACTIONS(356),
    [anon_sym_ATtestdox] = ACTIONS(356),
    [anon_sym_ATticket] = ACTIONS(356),
    [sym__end] = ACTIONS(356),
    [sym_text] = ACTIONS(356),
  },
  [63] = {
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
    [sym_text] = ACTIONS(320),
  },
  [64] = {
    [anon_sym_LBRACE] = ACTIONS(360),
    [anon_sym_ATinheritdoc] = ACTIONS(360),
    [anon_sym_ATinheritDoc] = ACTIONS(360),
    [anon_sym_ATapi] = ACTIONS(360),
    [anon_sym_ATfilesource] = ACTIONS(360),
    [anon_sym_ATignore] = ACTIONS(360),
    [anon_sym_ATinternal] = ACTIONS(360),
    [anon_sym_ATcategory] = ACTIONS(360),
    [anon_sym_ATcopyright] = ACTIONS(360),
    [anon_sym_ATtodo] = ACTIONS(360),
    [anon_sym_ATexample] = ACTIONS(360),
    [anon_sym_ATlicense] = ACTIONS(360),
    [anon_sym_ATpackage] = ACTIONS(360),
    [anon_sym_ATsource] = ACTIONS(360),
    [anon_sym_ATsubpackage] = ACTIONS(360),
    [anon_sym_ATuses] = ACTIONS(360),
    [anon_sym_ATauthor] = ACTIONS(360),
    [anon_sym_ATglobal] = ACTIONS(360),
    [anon_sym_ATlink] = ACTIONS(360),
    [anon_sym_ATmethod] = ACTIONS(360),
    [anon_sym_ATparam] = ACTIONS(360),
    [anon_sym_ATproperty] = ACTIONS(362),
    [anon_sym_ATproperty_DASHread] = ACTIONS(360),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(360),
    [anon_sym_ATreturn] = ACTIONS(360),
    [anon_sym_ATsee] = ACTIONS(360),
    [anon_sym_ATthrows] = ACTIONS(360),
    [anon_sym_ATvar] = ACTIONS(360),
    [anon_sym_ATdeprecated] = ACTIONS(360),
    [anon_sym_ATsince] = ACTIONS(360),
    [anon_sym_ATversion] = ACTIONS(360),
    [anon_sym_ATafter] = ACTIONS(362),
    [anon_sym_ATafterClass] = ACTIONS(360),
    [anon_sym_ATannotation] = ACTIONS(360),
    [anon_sym_ATbackupGlobals] = ACTIONS(360),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(360),
    [anon_sym_ATbefore] = ACTIONS(362),
    [anon_sym_ATbeforeClass] = ACTIONS(360),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(362),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(360),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(360),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(360),
    [anon_sym_ATcovers] = ACTIONS(362),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(362),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(360),
    [anon_sym_ATcoversNothing] = ACTIONS(360),
    [anon_sym_ATdataProvider] = ACTIONS(360),
    [anon_sym_ATdepends] = ACTIONS(362),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(360),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(360),
    [anon_sym_ATgroup] = ACTIONS(360),
    [anon_sym_ATlarge] = ACTIONS(360),
    [anon_sym_ATmedium] = ACTIONS(360),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(360),
    [anon_sym_ATrequires] = ACTIONS(362),
    [anon_sym_ATrequiresusages] = ACTIONS(360),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(360),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(360),
    [anon_sym_ATsmall] = ACTIONS(360),
    [anon_sym_ATtest] = ACTIONS(362),
    [anon_sym_ATtestWith] = ACTIONS(360),
    [anon_sym_ATtestdox] = ACTIONS(360),
    [anon_sym_ATticket] = ACTIONS(360),
    [sym__end] = ACTIONS(360),
    [sym_text] = ACTIONS(360),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(366), 1,
      anon_sym_LT,
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
    ACTIONS(364), 54,
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
  [139] = 2,
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
  [207] = 2,
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
  [275] = 2,
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
  [343] = 2,
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
  [411] = 2,
    ACTIONS(173), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(171), 54,
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
    ACTIONS(210), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(208), 54,
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
  [615] = 2,
    ACTIONS(181), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(179), 54,
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
    ACTIONS(250), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(248), 54,
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
    ACTIONS(222), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(220), 54,
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
  [887] = 2,
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
  [955] = 2,
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
  [1023] = 2,
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
  [1091] = 2,
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
  [1159] = 2,
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
  [1227] = 2,
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
  [1295] = 2,
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
  [1363] = 2,
    ACTIONS(242), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(240), 54,
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
  [1499] = 2,
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
  [1567] = 2,
    ACTIONS(436), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(434), 54,
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
    ACTIONS(440), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(438), 54,
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
  [1703] = 16,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(444), 1,
      anon_sym_list,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    ACTIONS(454), 1,
      anon_sym_DOLLAR,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_qualified_name,
    STATE(149), 1,
      sym_parameter,
    STATE(151), 1,
      sym_variable_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(167), 2,
      sym__type,
      sym_union_type,
    STATE(125), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(137), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(452), 12,
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
  [1770] = 15,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(444), 1,
      anon_sym_list,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    ACTIONS(454), 1,
      anon_sym_DOLLAR,
    STATE(124), 1,
      sym_qualified_name,
    STATE(151), 1,
      sym_variable_name,
    STATE(157), 1,
      sym_parameter,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(167), 2,
      sym__type,
      sym_union_type,
    STATE(125), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(137), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(452), 12,
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
  [1834] = 14,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(444), 1,
      anon_sym_list,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    ACTIONS(458), 1,
      anon_sym_DOLLAR,
    STATE(23), 1,
      sym_variable_name,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(159), 2,
      sym__type,
      sym_union_type,
    STATE(125), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(137), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(452), 12,
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
  [1895] = 14,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(444), 1,
      anon_sym_list,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_static,
    STATE(99), 1,
      sym_static,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(215), 2,
      sym__type,
      sym_union_type,
    STATE(125), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(137), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(452), 11,
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
  [1955] = 12,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(462), 1,
      sym_name,
    ACTIONS(464), 1,
      anon_sym_list,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    STATE(12), 1,
      sym_qualified_name,
    STATE(203), 1,
      sym_namespace_name_as_prefix,
    STATE(205), 1,
      sym_namespace_name,
    STATE(122), 2,
      sym__type,
      sym_union_type,
    STATE(9), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(27), 4,
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
  [2010] = 12,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(462), 1,
      sym_name,
    ACTIONS(464), 1,
      anon_sym_list,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    STATE(12), 1,
      sym_qualified_name,
    STATE(203), 1,
      sym_namespace_name_as_prefix,
    STATE(205), 1,
      sym_namespace_name,
    STATE(29), 2,
      sym__type,
      sym_union_type,
    STATE(9), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(27), 4,
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
  [2065] = 12,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(462), 1,
      sym_name,
    ACTIONS(464), 1,
      anon_sym_list,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    STATE(12), 1,
      sym_qualified_name,
    STATE(203), 1,
      sym_namespace_name_as_prefix,
    STATE(205), 1,
      sym_namespace_name,
    STATE(35), 2,
      sym__type,
      sym_union_type,
    STATE(9), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(27), 4,
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
  [2120] = 12,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(444), 1,
      anon_sym_list,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(160), 2,
      sym__type,
      sym_union_type,
    STATE(125), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(137), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(452), 12,
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
  [2175] = 12,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(444), 1,
      anon_sym_list,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(164), 2,
      sym__type,
      sym_union_type,
    STATE(125), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(137), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(452), 12,
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
  [2230] = 12,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(444), 1,
      anon_sym_list,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(219), 2,
      sym__type,
      sym_union_type,
    STATE(125), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(137), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(452), 12,
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
  [2285] = 11,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(462), 1,
      sym_name,
    ACTIONS(464), 1,
      anon_sym_list,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    STATE(12), 1,
      sym_qualified_name,
    STATE(203), 1,
      sym_namespace_name_as_prefix,
    STATE(205), 1,
      sym_namespace_name,
    STATE(9), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(39), 4,
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
  [2336] = 11,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(444), 1,
      anon_sym_list,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(125), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(153), 4,
      sym__types,
      sym__phpdoc_array_types,
      sym__psalm_generic_array_types,
      sym__psalm_list_array_types,
    ACTIONS(452), 12,
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
  [2387] = 9,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(189), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(452), 12,
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
  [2429] = 9,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(188), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(452), 12,
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
  [2471] = 9,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(173), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(452), 12,
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
  [2513] = 9,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(206), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(452), 12,
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
  [2555] = 9,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(161), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(452), 12,
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
  [2597] = 9,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(450), 1,
      anon_sym_QMARK,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(208), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    ACTIONS(452), 12,
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
  [2639] = 4,
    ACTIONS(470), 1,
      sym_name,
    ACTIONS(475), 2,
      anon_sym_BSLASH,
      anon_sym_QMARK,
    ACTIONS(167), 3,
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
  [2668] = 8,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(462), 1,
      sym_name,
    STATE(12), 1,
      sym_qualified_name,
    STATE(203), 1,
      sym_namespace_name_as_prefix,
    STATE(205), 1,
      sym_namespace_name,
    STATE(10), 2,
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
  [2705] = 8,
    ACTIONS(442), 1,
      sym_name,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    STATE(124), 1,
      sym_qualified_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(214), 1,
      sym_namespace_name_as_prefix,
    STATE(120), 2,
      sym_named_type,
      sym_primitive_type,
    ACTIONS(452), 12,
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
  [2742] = 11,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(458), 1,
      anon_sym_DOLLAR,
    ACTIONS(477), 1,
      sym_name,
    ACTIONS(479), 1,
      sym_uri,
    STATE(33), 1,
      sym_fqsen,
    STATE(46), 1,
      sym_named_type,
    STATE(48), 1,
      sym_qualified_name,
    STATE(58), 1,
      sym_variable_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(210), 1,
      sym_namespace_name_as_prefix,
  [2776] = 11,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(481), 1,
      sym_name,
    ACTIONS(483), 1,
      anon_sym_DOLLAR,
    ACTIONS(485), 1,
      sym_uri,
    STATE(136), 1,
      sym_fqsen,
    STATE(139), 1,
      sym_named_type,
    STATE(145), 1,
      sym_qualified_name,
    STATE(178), 1,
      sym_variable_name,
    STATE(205), 1,
      sym_namespace_name,
    STATE(213), 1,
      sym_namespace_name_as_prefix,
  [2810] = 8,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      aux_sym_version_token2,
    ACTIONS(127), 1,
      sym__text_not_version,
    STATE(34), 1,
      sym_version,
    STATE(44), 1,
      aux_sym__description_not_version_repeat1,
    STATE(61), 1,
      sym_inline_tag,
    STATE(75), 1,
      sym__description_not_version,
    ACTIONS(123), 3,
      aux_sym_version_token1,
      anon_sym_ATpackage_version_AT,
      sym__version_vector,
  [2837] = 8,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      aux_sym_version_token2,
    ACTIONS(127), 1,
      sym__text_not_version,
    STATE(28), 1,
      sym_version,
    STATE(44), 1,
      aux_sym__description_not_version_repeat1,
    STATE(61), 1,
      sym_inline_tag,
    STATE(76), 1,
      sym__description_not_version,
    ACTIONS(123), 3,
      aux_sym_version_token1,
      anon_sym_ATpackage_version_AT,
      sym__version_vector,
  [2864] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    STATE(163), 1,
      aux_sym_namespace_name_repeat1,
    ACTIONS(129), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2880] = 5,
    ACTIONS(489), 1,
      anon_sym_ATinternal,
    ACTIONS(491), 1,
      anon_sym_ATlink,
    ACTIONS(493), 1,
      anon_sym_ATsee,
    ACTIONS(487), 2,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
    STATE(212), 3,
      sym__inline_internal_tag,
      sym__inline_link_tag,
      sym__inline_see_tag,
  [2899] = 5,
    ACTIONS(489), 1,
      anon_sym_ATinternal,
    ACTIONS(491), 1,
      anon_sym_ATlink,
    ACTIONS(493), 1,
      anon_sym_ATsee,
    ACTIONS(495), 2,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
    STATE(209), 3,
      sym__inline_internal_tag,
      sym__inline_link_tag,
      sym__inline_see_tag,
  [2918] = 5,
    ACTIONS(489), 1,
      anon_sym_ATinternal,
    ACTIONS(491), 1,
      anon_sym_ATlink,
    ACTIONS(493), 1,
      anon_sym_ATsee,
    ACTIONS(497), 2,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
    STATE(200), 3,
      sym__inline_internal_tag,
      sym__inline_link_tag,
      sym__inline_see_tag,
  [2937] = 5,
    ACTIONS(489), 1,
      anon_sym_ATinternal,
    ACTIONS(491), 1,
      anon_sym_ATlink,
    ACTIONS(493), 1,
      anon_sym_ATsee,
    ACTIONS(499), 2,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
    STATE(202), 3,
      sym__inline_internal_tag,
      sym__inline_link_tag,
      sym__inline_see_tag,
  [2956] = 1,
    ACTIONS(144), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2966] = 1,
    ACTIONS(157), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2976] = 7,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym__text_after_type,
    ACTIONS(458), 1,
      anon_sym_DOLLAR,
    STATE(25), 1,
      sym_variable_name,
    STATE(41), 1,
      aux_sym__description_after_type_repeat1,
    STATE(51), 1,
      sym_inline_tag,
    STATE(72), 1,
      sym__description_after_type,
  [2998] = 1,
    ACTIONS(167), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3008] = 1,
    ACTIONS(129), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3018] = 4,
    ACTIONS(501), 1,
      anon_sym_LT,
    ACTIONS(503), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(130), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(136), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3033] = 6,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    ACTIONS(509), 1,
      sym__text_in_inline_tag,
    STATE(128), 1,
      aux_sym__description_in_inline_tag_with_nesting_repeat1,
    STATE(142), 1,
      sym_inline_tag,
    STATE(179), 1,
      sym__description_in_inline_tag_with_nesting,
  [3052] = 4,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    ACTIONS(511), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(163), 1,
      aux_sym_namespace_name_repeat1,
    ACTIONS(129), 3,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [3067] = 5,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      sym__text_in_inline_tag,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      aux_sym__description_in_inline_tag_with_nesting_repeat1,
    STATE(142), 1,
      sym_inline_tag,
  [3083] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_text,
    STATE(89), 1,
      sym_description,
    STATE(38), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3097] = 3,
    ACTIONS(515), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(132), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(161), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3109] = 5,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    ACTIONS(522), 1,
      sym__text_in_inline_tag,
    STATE(131), 1,
      aux_sym__description_in_inline_tag_with_nesting_repeat1,
    STATE(142), 1,
      sym_inline_tag,
  [3125] = 3,
    ACTIONS(525), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(132), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(150), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3137] = 3,
    ACTIONS(528), 1,
      anon_sym_PIPE,
    STATE(134), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(202), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3148] = 3,
    ACTIONS(530), 1,
      anon_sym_PIPE,
    STATE(134), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(191), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3159] = 4,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    ACTIONS(535), 1,
      sym__text_in_inline_tag,
    STATE(143), 1,
      aux_sym__description_in_inline_tag_repeat1,
    STATE(198), 1,
      sym__description_in_inline_tag,
  [3172] = 4,
    ACTIONS(535), 1,
      sym__text_in_inline_tag,
    ACTIONS(537), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      aux_sym__description_in_inline_tag_repeat1,
    STATE(196), 1,
      sym__description_in_inline_tag,
  [3185] = 3,
    ACTIONS(528), 1,
      anon_sym_PIPE,
    STATE(133), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(216), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3196] = 3,
    ACTIONS(483), 1,
      anon_sym_DOLLAR,
    ACTIONS(539), 1,
      sym_name,
    STATE(171), 1,
      sym_variable_name,
  [3206] = 2,
    ACTIONS(541), 1,
      anon_sym_COLON_COLON,
    ACTIONS(314), 2,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
  [3214] = 3,
    ACTIONS(543), 1,
      sym_name,
    ACTIONS(545), 1,
      anon_sym_BSLASH,
    STATE(216), 1,
      sym_namespace_name,
  [3224] = 1,
    ACTIONS(332), 3,
      sym__text_in_inline_tag,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3230] = 1,
    ACTIONS(547), 3,
      sym__text_in_inline_tag,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3236] = 3,
    ACTIONS(535), 1,
      sym__text_in_inline_tag,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      aux_sym__description_in_inline_tag_repeat1,
  [3246] = 3,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      sym__text_in_inline_tag,
    STATE(144), 1,
      aux_sym__description_in_inline_tag_repeat1,
  [3256] = 1,
    ACTIONS(129), 3,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [3262] = 1,
    ACTIONS(296), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3268] = 3,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_parameters_repeat1,
  [3278] = 2,
    ACTIONS(561), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(308), 2,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
  [3286] = 3,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_parameters_repeat1,
  [3296] = 3,
    ACTIONS(458), 1,
      anon_sym_DOLLAR,
    ACTIONS(567), 1,
      sym_name,
    STATE(56), 1,
      sym_variable_name,
  [3306] = 2,
    ACTIONS(571), 1,
      anon_sym_EQ,
    ACTIONS(569), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3314] = 1,
    ACTIONS(157), 3,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [3320] = 1,
    ACTIONS(191), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3326] = 2,
    ACTIONS(575), 1,
      anon_sym_EQ,
    ACTIONS(573), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3334] = 1,
    ACTIONS(300), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3340] = 3,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_parameters_repeat1,
  [3350] = 1,
    ACTIONS(559), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3355] = 2,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_parameters,
  [3362] = 2,
    ACTIONS(458), 1,
      anon_sym_DOLLAR,
    STATE(17), 1,
      sym_variable_name,
  [3369] = 2,
    ACTIONS(458), 1,
      anon_sym_DOLLAR,
    STATE(21), 1,
      sym_variable_name,
  [3376] = 2,
    ACTIONS(581), 1,
      anon_sym_GT,
    ACTIONS(583), 1,
      anon_sym_COMMA,
  [3383] = 2,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    STATE(163), 1,
      aux_sym_namespace_name_repeat1,
  [3390] = 2,
    ACTIONS(585), 1,
      anon_sym_BSLASH,
    STATE(174), 1,
      aux_sym_namespace_name_repeat1,
  [3397] = 2,
    ACTIONS(454), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_variable_name,
  [3404] = 1,
    ACTIONS(588), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3409] = 2,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_parameters,
  [3416] = 2,
    ACTIONS(454), 1,
      anon_sym_DOLLAR,
    STATE(154), 1,
      sym_variable_name,
  [3423] = 1,
    ACTIONS(590), 2,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
  [3428] = 1,
    ACTIONS(592), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3433] = 1,
    ACTIONS(348), 2,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
  [3438] = 1,
    ACTIONS(308), 2,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
  [3443] = 2,
    ACTIONS(594), 1,
      sym_name,
    STATE(185), 1,
      sym_namespace_name,
  [3450] = 2,
    ACTIONS(597), 1,
      anon_sym_GT,
    ACTIONS(599), 1,
      anon_sym_COMMA,
  [3457] = 2,
    ACTIONS(601), 1,
      anon_sym_BSLASH,
    STATE(174), 1,
      aux_sym_namespace_name_repeat1,
  [3464] = 1,
    ACTIONS(320), 2,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
  [3469] = 1,
    ACTIONS(336), 2,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
  [3474] = 2,
    ACTIONS(604), 1,
      sym_name,
    STATE(216), 1,
      sym_namespace_name,
  [3481] = 1,
    ACTIONS(314), 2,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
  [3486] = 1,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
  [3490] = 1,
    ACTIONS(609), 1,
      ts_builtin_sym_end,
  [3494] = 1,
    ACTIONS(611), 1,
      sym_name,
  [3498] = 1,
    ACTIONS(613), 1,
      ts_builtin_sym_end,
  [3502] = 1,
    ACTIONS(615), 1,
      sym_name,
  [3506] = 1,
    ACTIONS(617), 1,
      sym_email_address,
  [3510] = 1,
    ACTIONS(619), 1,
      anon_sym_BSLASH,
  [3514] = 1,
    ACTIONS(621), 1,
      sym_name,
  [3518] = 1,
    ACTIONS(623), 1,
      anon_sym_BSLASH,
  [3522] = 1,
    ACTIONS(625), 1,
      anon_sym_GT,
  [3526] = 1,
    ACTIONS(597), 1,
      anon_sym_GT,
  [3530] = 1,
    ACTIONS(627), 1,
      anon_sym_GT,
  [3534] = 1,
    ACTIONS(629), 1,
      sym_name,
  [3538] = 1,
    ACTIONS(631), 1,
      ts_builtin_sym_end,
  [3542] = 1,
    ACTIONS(633), 1,
      sym_name,
  [3546] = 1,
    ACTIONS(635), 1,
      sym_uri,
  [3550] = 1,
    ACTIONS(637), 1,
      sym__version_vector,
  [3554] = 1,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
  [3558] = 1,
    ACTIONS(641), 1,
      sym_author_name,
  [3562] = 1,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
  [3566] = 1,
    ACTIONS(645), 1,
      sym_uri,
  [3570] = 1,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
  [3574] = 1,
    ACTIONS(649), 1,
      anon_sym_LT,
  [3578] = 1,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
  [3582] = 1,
    ACTIONS(653), 1,
      sym_name,
  [3586] = 1,
    ACTIONS(655), 1,
      sym_name,
  [3590] = 1,
    ACTIONS(657), 1,
      anon_sym_BSLASH,
  [3594] = 1,
    ACTIONS(581), 1,
      anon_sym_GT,
  [3598] = 1,
    ACTIONS(659), 1,
      sym_default_value,
  [3602] = 1,
    ACTIONS(661), 1,
      anon_sym_GT,
  [3606] = 1,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
  [3610] = 1,
    ACTIONS(665), 1,
      sym_name,
  [3614] = 1,
    ACTIONS(667), 1,
      sym_name,
  [3618] = 1,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
  [3622] = 1,
    ACTIONS(671), 1,
      sym_name,
  [3626] = 1,
    ACTIONS(673), 1,
      sym_name,
  [3630] = 1,
    ACTIONS(675), 1,
      sym_name,
  [3634] = 1,
    ACTIONS(677), 1,
      anon_sym_BSLASH,
  [3638] = 1,
    ACTIONS(679), 1,
      sym_default_value,
  [3642] = 1,
    ACTIONS(681), 1,
      ts_builtin_sym_end,
  [3646] = 1,
    ACTIONS(683), 1,
      sym_name,
  [3650] = 1,
    ACTIONS(685), 1,
      anon_sym_LT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(65)] = 0,
  [SMALL_STATE(66)] = 71,
  [SMALL_STATE(67)] = 139,
  [SMALL_STATE(68)] = 207,
  [SMALL_STATE(69)] = 275,
  [SMALL_STATE(70)] = 343,
  [SMALL_STATE(71)] = 411,
  [SMALL_STATE(72)] = 479,
  [SMALL_STATE(73)] = 547,
  [SMALL_STATE(74)] = 615,
  [SMALL_STATE(75)] = 683,
  [SMALL_STATE(76)] = 751,
  [SMALL_STATE(77)] = 819,
  [SMALL_STATE(78)] = 887,
  [SMALL_STATE(79)] = 955,
  [SMALL_STATE(80)] = 1023,
  [SMALL_STATE(81)] = 1091,
  [SMALL_STATE(82)] = 1159,
  [SMALL_STATE(83)] = 1227,
  [SMALL_STATE(84)] = 1295,
  [SMALL_STATE(85)] = 1363,
  [SMALL_STATE(86)] = 1431,
  [SMALL_STATE(87)] = 1499,
  [SMALL_STATE(88)] = 1567,
  [SMALL_STATE(89)] = 1635,
  [SMALL_STATE(90)] = 1703,
  [SMALL_STATE(91)] = 1770,
  [SMALL_STATE(92)] = 1834,
  [SMALL_STATE(93)] = 1895,
  [SMALL_STATE(94)] = 1955,
  [SMALL_STATE(95)] = 2010,
  [SMALL_STATE(96)] = 2065,
  [SMALL_STATE(97)] = 2120,
  [SMALL_STATE(98)] = 2175,
  [SMALL_STATE(99)] = 2230,
  [SMALL_STATE(100)] = 2285,
  [SMALL_STATE(101)] = 2336,
  [SMALL_STATE(102)] = 2387,
  [SMALL_STATE(103)] = 2429,
  [SMALL_STATE(104)] = 2471,
  [SMALL_STATE(105)] = 2513,
  [SMALL_STATE(106)] = 2555,
  [SMALL_STATE(107)] = 2597,
  [SMALL_STATE(108)] = 2639,
  [SMALL_STATE(109)] = 2668,
  [SMALL_STATE(110)] = 2705,
  [SMALL_STATE(111)] = 2742,
  [SMALL_STATE(112)] = 2776,
  [SMALL_STATE(113)] = 2810,
  [SMALL_STATE(114)] = 2837,
  [SMALL_STATE(115)] = 2864,
  [SMALL_STATE(116)] = 2880,
  [SMALL_STATE(117)] = 2899,
  [SMALL_STATE(118)] = 2918,
  [SMALL_STATE(119)] = 2937,
  [SMALL_STATE(120)] = 2956,
  [SMALL_STATE(121)] = 2966,
  [SMALL_STATE(122)] = 2976,
  [SMALL_STATE(123)] = 2998,
  [SMALL_STATE(124)] = 3008,
  [SMALL_STATE(125)] = 3018,
  [SMALL_STATE(126)] = 3033,
  [SMALL_STATE(127)] = 3052,
  [SMALL_STATE(128)] = 3067,
  [SMALL_STATE(129)] = 3083,
  [SMALL_STATE(130)] = 3097,
  [SMALL_STATE(131)] = 3109,
  [SMALL_STATE(132)] = 3125,
  [SMALL_STATE(133)] = 3137,
  [SMALL_STATE(134)] = 3148,
  [SMALL_STATE(135)] = 3159,
  [SMALL_STATE(136)] = 3172,
  [SMALL_STATE(137)] = 3185,
  [SMALL_STATE(138)] = 3196,
  [SMALL_STATE(139)] = 3206,
  [SMALL_STATE(140)] = 3214,
  [SMALL_STATE(141)] = 3224,
  [SMALL_STATE(142)] = 3230,
  [SMALL_STATE(143)] = 3236,
  [SMALL_STATE(144)] = 3246,
  [SMALL_STATE(145)] = 3256,
  [SMALL_STATE(146)] = 3262,
  [SMALL_STATE(147)] = 3268,
  [SMALL_STATE(148)] = 3278,
  [SMALL_STATE(149)] = 3286,
  [SMALL_STATE(150)] = 3296,
  [SMALL_STATE(151)] = 3306,
  [SMALL_STATE(152)] = 3314,
  [SMALL_STATE(153)] = 3320,
  [SMALL_STATE(154)] = 3326,
  [SMALL_STATE(155)] = 3334,
  [SMALL_STATE(156)] = 3340,
  [SMALL_STATE(157)] = 3350,
  [SMALL_STATE(158)] = 3355,
  [SMALL_STATE(159)] = 3362,
  [SMALL_STATE(160)] = 3369,
  [SMALL_STATE(161)] = 3376,
  [SMALL_STATE(162)] = 3383,
  [SMALL_STATE(163)] = 3390,
  [SMALL_STATE(164)] = 3397,
  [SMALL_STATE(165)] = 3404,
  [SMALL_STATE(166)] = 3409,
  [SMALL_STATE(167)] = 3416,
  [SMALL_STATE(168)] = 3423,
  [SMALL_STATE(169)] = 3428,
  [SMALL_STATE(170)] = 3433,
  [SMALL_STATE(171)] = 3438,
  [SMALL_STATE(172)] = 3443,
  [SMALL_STATE(173)] = 3450,
  [SMALL_STATE(174)] = 3457,
  [SMALL_STATE(175)] = 3464,
  [SMALL_STATE(176)] = 3469,
  [SMALL_STATE(177)] = 3474,
  [SMALL_STATE(178)] = 3481,
  [SMALL_STATE(179)] = 3486,
  [SMALL_STATE(180)] = 3490,
  [SMALL_STATE(181)] = 3494,
  [SMALL_STATE(182)] = 3498,
  [SMALL_STATE(183)] = 3502,
  [SMALL_STATE(184)] = 3506,
  [SMALL_STATE(185)] = 3510,
  [SMALL_STATE(186)] = 3514,
  [SMALL_STATE(187)] = 3518,
  [SMALL_STATE(188)] = 3522,
  [SMALL_STATE(189)] = 3526,
  [SMALL_STATE(190)] = 3530,
  [SMALL_STATE(191)] = 3534,
  [SMALL_STATE(192)] = 3538,
  [SMALL_STATE(193)] = 3542,
  [SMALL_STATE(194)] = 3546,
  [SMALL_STATE(195)] = 3550,
  [SMALL_STATE(196)] = 3554,
  [SMALL_STATE(197)] = 3558,
  [SMALL_STATE(198)] = 3562,
  [SMALL_STATE(199)] = 3566,
  [SMALL_STATE(200)] = 3570,
  [SMALL_STATE(201)] = 3574,
  [SMALL_STATE(202)] = 3578,
  [SMALL_STATE(203)] = 3582,
  [SMALL_STATE(204)] = 3586,
  [SMALL_STATE(205)] = 3590,
  [SMALL_STATE(206)] = 3594,
  [SMALL_STATE(207)] = 3598,
  [SMALL_STATE(208)] = 3602,
  [SMALL_STATE(209)] = 3606,
  [SMALL_STATE(210)] = 3610,
  [SMALL_STATE(211)] = 3614,
  [SMALL_STATE(212)] = 3618,
  [SMALL_STATE(213)] = 3622,
  [SMALL_STATE(214)] = 3626,
  [SMALL_STATE(215)] = 3630,
  [SMALL_STATE(216)] = 3634,
  [SMALL_STATE(217)] = 3638,
  [SMALL_STATE(218)] = 3642,
  [SMALL_STATE(219)] = 3646,
  [SMALL_STATE(220)] = 3650,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(84),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(197),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(194),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(113),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deprecated_tag, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deprecated_tag, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type, 1),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 1), SHIFT(181),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__types, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(13),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpdoc_array_types, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpdoc_array_types, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_optional_description, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_optional_description, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deprecated_tag, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deprecated_tag, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(100),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpunit_tag, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpunit_tag, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_incomplete_implementation, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_incomplete_implementation, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__since_tag, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__since_tag, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_after_type_repeat1, 2), SHIFT_REPEAT(116),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_after_type_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_after_type_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_after_type_repeat1, 2), SHIFT_REPEAT(51),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_not_version_repeat1, 2), SHIFT_REPEAT(119),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_not_version_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_not_version_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_not_version_repeat1, 2), SHIFT_REPEAT(61),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(118),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(40),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_after_type, 1, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__description_after_type, 1, .production_id = 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__psalm_list_array_types, 4, .production_id = 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__psalm_list_array_types, 4, .production_id = 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__psalm_generic_array_types, 6, .production_id = 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__psalm_generic_array_types, 6, .production_id = 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_not_version, 1, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__description_not_version, 1, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fqsen, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fqsen, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fqsen, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fqsen, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_after_type_repeat1, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_after_type_repeat1, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fqsen, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fqsen, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fqsen, 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fqsen, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_not_version_repeat1, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_not_version_repeat1, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_optional_description, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_optional_description, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deprecated_tag, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deprecated_tag, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpunit_tag, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpunit_tag, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__since_tag, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__since_tag, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 4),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 5),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_tag, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__global_tag, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 6),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 6),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 4),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_incomplete_implementation, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_incomplete_implementation, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_required_description, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_required_description, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primitive_type, 1), REDUCE(sym_static, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_internal_tag, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_in_inline_tag_with_nesting, 1, .production_id = 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_with_nesting_repeat1, 2), SHIFT_REPEAT(117),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_with_nesting_repeat1, 2),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_with_nesting_repeat1, 2), SHIFT_REPEAT(142),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(132),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(101),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_link_tag, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_see_tag, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_with_nesting_repeat1, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_in_inline_tag, 1, .production_id = 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_repeat1, 2),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_repeat1, 2), SHIFT_REPEAT(168),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(91),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 2), SHIFT(181),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_repeat1, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2), SHIFT(162),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2), SHIFT_REPEAT(181),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 1), SHIFT(162),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_internal_tag, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 4),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_see_tag, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_link_tag, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [681] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
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
