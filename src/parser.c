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
#define STATE_COUNT 209
#define LARGE_STATE_COUNT 59
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
      if (eof) ADVANCE(476);
      if (lookahead == '\n') SKIP(475)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '$') ADVANCE(569);
      if (lookahead == '(') ADVANCE(582);
      if (lookahead == ')') ADVANCE(583);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == ',') ADVANCE(547);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(497);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '>') ADVANCE(498);
      if (lookahead == '?') ADVANCE(567);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '|') ADVANCE(568);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(585);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\r') ADVANCE(585);
      if (lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(587);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '$') ADVANCE(472);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '*') SKIP(2)
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '$') ADVANCE(472);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '$') ADVANCE(569);
      if (lookahead == '(') ADVANCE(582);
      if (lookahead == ')') ADVANCE(583);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == ',') ADVANCE(547);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(497);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '>') ADVANCE(498);
      if (lookahead == '?') ADVANCE(567);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '|') ADVANCE(568);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '$') ADVANCE(569);
      if (lookahead == '(') ADVANCE(582);
      if (lookahead == ')') ADVANCE(583);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == ',') ADVANCE(547);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(497);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '>') ADVANCE(498);
      if (lookahead == '?') ADVANCE(567);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '|') ADVANCE(568);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '$') ADVANCE(569);
      if (lookahead == '(') ADVANCE(582);
      if (lookahead == ')') ADVANCE(583);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == ',') ADVANCE(547);
      if (lookahead == '/') ADVANCE(589);
      if (lookahead == '<') ADVANCE(497);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '>') ADVANCE(498);
      if (lookahead == '?') ADVANCE(567);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '|') ADVANCE(568);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '$') ADVANCE(472);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(583);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == ',') ADVANCE(547);
      if (lookahead == '<') ADVANCE(497);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '$') ADVANCE(472);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(583);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == ',') ADVANCE(547);
      if (lookahead == '/') ADVANCE(588);
      if (lookahead == '<') ADVANCE(497);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '$') ADVANCE(472);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(583);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == ',') ADVANCE(547);
      if (lookahead == '<') ADVANCE(497);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '$') ADVANCE(569);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '<') ADVANCE(497);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '|') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '$') ADVANCE(569);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(588);
      if (lookahead == '<') ADVANCE(497);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '|') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '$') ADVANCE(569);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '<') ADVANCE(497);
      if (lookahead == '@') ADVANCE(59);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '|') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '*') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(571);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '<') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(570);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(18)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(571);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(411);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(435);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(508);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(477);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(473);
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
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '@') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(575);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(588);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(581);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '@') ADVANCE(578);
      END_STATE();
    case 36:
      if (lookahead == '@') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == '@') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(432);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(412);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(294);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(259);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(303);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(260);
      if (lookahead == 'S') ADVANCE(430);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(261);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(213);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(267);
      if (lookahead == 'T') ADVANCE(187);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(291);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(304);
      END_STATE();
    case 49:
      if (lookahead == 'P') ADVANCE(358);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(360);
      END_STATE();
    case 51:
      if (lookahead == 'P') ADVANCE(179);
      END_STATE();
    case 52:
      if (lookahead == 'P') ADVANCE(372);
      END_STATE();
    case 53:
      if (lookahead == 'S') ADVANCE(189);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(449);
      END_STATE();
    case 55:
      if (lookahead == 'S') ADVANCE(197);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(546);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(464);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'g') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(405);
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'g') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(405);
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 101:
      if (lookahead == 'b') ADVANCE(330);
      END_STATE();
    case 102:
      if (lookahead == 'b') ADVANCE(459);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 104:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 105:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(480);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(511);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(504);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(471);
      if (lookahead == 'v') ADVANCE(190);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 198:
      if (lookahead == 'f') ADVANCE(425);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(414);
      END_STATE();
    case 199:
      if (lookahead == 'f') ADVANCE(306);
      END_STATE();
    case 200:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 201:
      if (lookahead == 'f') ADVANCE(315);
      END_STATE();
    case 202:
      if (lookahead == 'g') ADVANCE(528);
      END_STATE();
    case 203:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 204:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 205:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 206:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 207:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 208:
      if (lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 209:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 210:
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 211:
      if (lookahead == 'g') ADVANCE(314);
      END_STATE();
    case 212:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 213:
      if (lookahead == 'g') ADVANCE(286);
      END_STATE();
    case 214:
      if (lookahead == 'h') ADVANCE(543);
      END_STATE();
    case 215:
      if (lookahead == 'h') ADVANCE(300);
      END_STATE();
    case 216:
      if (lookahead == 'h') ADVANCE(230);
      END_STATE();
    case 217:
      if (lookahead == 'h') ADVANCE(418);
      END_STATE();
    case 218:
      if (lookahead == 'h') ADVANCE(309);
      END_STATE();
    case 219:
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 220:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 240:
      if (lookahead == 'k') ADVANCE(500);
      END_STATE();
    case 241:
      if (lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 242:
      if (lookahead == 'k') ADVANCE(164);
      END_STATE();
    case 243:
      if (lookahead == 'k') ADVANCE(455);
      END_STATE();
    case 244:
      if (lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 245:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 246:
      if (lookahead == 'k') ADVANCE(93);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(541);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 262:
      if (lookahead == 'm') ADVANCE(502);
      END_STATE();
    case 263:
      if (lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 264:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 265:
      if (lookahead == 'm') ADVANCE(333);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(516);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 287:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(465);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 310:
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 327:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 328:
      if (lookahead == 'p') ADVANCE(533);
      END_STATE();
    case 329:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 330:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 331:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 332:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 333:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 334:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 335:
      if (lookahead == 'p') ADVANCE(369);
      END_STATE();
    case 336:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 337:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 338:
      if (lookahead == 'q') ADVANCE(452);
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 341:
      if (lookahead == 'r') ADVANCE(514);
      END_STATE();
    case 342:
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 343:
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(354);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 377:
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 378:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 379:
      if (lookahead == 's') ADVANCE(509);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(530);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(537);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(520);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(517);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(538);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(539);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(518);
      END_STATE();
    case 390:
      if (lookahead == 's') ADVANCE(532);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(540);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(383);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(409);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(545);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 451:
      if (lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 452:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 453:
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 454:
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 455:
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 456:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 457:
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 458:
      if (lookahead == 'u') ADVANCE(413);
      END_STATE();
    case 459:
      if (lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 460:
      if (lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 461:
      if (lookahead == 'v') ADVANCE(226);
      END_STATE();
    case 462:
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 463:
      if (lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 464:
      if (lookahead == 'v') ADVANCE(195);
      END_STATE();
    case 465:
      if (lookahead == 'w') ADVANCE(379);
      END_STATE();
    case 466:
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 467:
      if (lookahead == 'x') ADVANCE(544);
      END_STATE();
    case 468:
      if (lookahead == 'x') ADVANCE(335);
      END_STATE();
    case 469:
      if (lookahead == 'y') ADVANCE(486);
      END_STATE();
    case 470:
      if (lookahead == 'y') ADVANCE(503);
      END_STATE();
    case 471:
      if (lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 472:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 473:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(576);
      END_STATE();
    case 474:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(572);
      END_STATE();
    case 475:
      if (eof) ADVANCE(476);
      if (lookahead == '\n') SKIP(475)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '$') ADVANCE(569);
      if (lookahead == '(') ADVANCE(582);
      if (lookahead == ')') ADVANCE(583);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == ',') ADVANCE(547);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(497);
      if (lookahead == '=') ADVANCE(584);
      if (lookahead == '>') ADVANCE(498);
      if (lookahead == '?') ADVANCE(567);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(566);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '|') ADVANCE(568);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(475)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '*') ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_ATinheritdoc);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_ATinheritDoc);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_ATapi);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_ATfilesource);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_ATignore);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_ATinternal);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_ATcategory);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_ATcopyright);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_ATtodo);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_ATexample);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_ATlicense);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      if (lookahead == '_') ADVANCE(464);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_ATsubpackage);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_ATuses);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_ATglobal);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_ATmethod);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_ATproperty);
      if (lookahead == '-') ADVANCE(361);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHread);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_ATproperty_DASHwrite);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_ATvar);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_ATafter);
      if (lookahead == 'C') ADVANCE(253);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_ATafterClass);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_ATannotation);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_ATbackupGlobals);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_ATbackupStaticAttributes);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_ATbefore);
      if (lookahead == 'C') ADVANCE(258);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_ATbeforeClass);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnore);
      if (lookahead == '*') ADVANCE(522);
      if (lookahead == 'E') ADVANCE(278);
      if (lookahead == 'S') ADVANCE(442);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnore_STAR);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnoreEnd);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_ATcodeCoverageIgnoreStart);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_ATcovers);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'N') ADVANCE(310);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_ATcoversDefaultClass);
      if (lookahead == ' ') ADVANCE(434);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_ATcoversDefaultClasstoshortenannotations);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_ATcoversNothing);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_ATdataProvider);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_ATdepends);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_ATdependsannotationtoexpressdependencies);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_ATdoesNotPerformAssertions);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_ATgroup);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_ATlarge);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_ATmedium);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_ATpreserveGlobalState);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_ATrequires);
      if (lookahead == ' ') ADVANCE(458);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_ATrequiresusages);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_ATrunInSeparateProcess);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_ATrunTestsInSeparateProcesses);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_ATsmall);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_ATtest);
      if (lookahead == 'W') ADVANCE(229);
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_ATtestWith);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_ATtestdox);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_ATticket);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      if ((161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 255)) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(474);
      if (lookahead == '<') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<') ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '*') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(571);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_author_name);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '<') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(570);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '@') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_version_token2);
      if (lookahead == ' ') ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_ATpackage_version_AT);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__version_vector);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '/') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead == '\t') ADVANCE(585);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\r') ADVANCE(585);
      if (lookahead == ' ') ADVANCE(585);
      if (lookahead == ')') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(587);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead == '\t') ADVANCE(586);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\r') ADVANCE(585);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == ')') ADVANCE(587);
      if (lookahead == '*') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(587);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_default_value);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 589:
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
  [17] = {.lex_state = 10, .external_lex_state = 4},
  [18] = {.lex_state = 13, .external_lex_state = 4},
  [19] = {.lex_state = 10, .external_lex_state = 2},
  [20] = {.lex_state = 10, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 4},
  [22] = {.lex_state = 10, .external_lex_state = 2},
  [23] = {.lex_state = 10, .external_lex_state = 2},
  [24] = {.lex_state = 10, .external_lex_state = 2},
  [25] = {.lex_state = 10, .external_lex_state = 2},
  [26] = {.lex_state = 13, .external_lex_state = 4},
  [27] = {.lex_state = 10, .external_lex_state = 2},
  [28] = {.lex_state = 10, .external_lex_state = 2},
  [29] = {.lex_state = 10, .external_lex_state = 2},
  [30] = {.lex_state = 10, .external_lex_state = 4},
  [31] = {.lex_state = 10, .external_lex_state = 2},
  [32] = {.lex_state = 10, .external_lex_state = 2},
  [33] = {.lex_state = 10, .external_lex_state = 2},
  [34] = {.lex_state = 10, .external_lex_state = 2},
  [35] = {.lex_state = 10, .external_lex_state = 2},
  [36] = {.lex_state = 10, .external_lex_state = 2},
  [37] = {.lex_state = 13, .external_lex_state = 4},
  [38] = {.lex_state = 10, .external_lex_state = 4},
  [39] = {.lex_state = 13, .external_lex_state = 4},
  [40] = {.lex_state = 10, .external_lex_state = 4},
  [41] = {.lex_state = 13, .external_lex_state = 4},
  [42] = {.lex_state = 10, .external_lex_state = 3},
  [43] = {.lex_state = 10, .external_lex_state = 2},
  [44] = {.lex_state = 10, .external_lex_state = 3},
  [45] = {.lex_state = 10, .external_lex_state = 2},
  [46] = {.lex_state = 10, .external_lex_state = 2},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10, .external_lex_state = 2},
  [49] = {.lex_state = 10, .external_lex_state = 3},
  [50] = {.lex_state = 10, .external_lex_state = 2},
  [51] = {.lex_state = 10, .external_lex_state = 2},
  [52] = {.lex_state = 10, .external_lex_state = 4},
  [53] = {.lex_state = 10, .external_lex_state = 4},
  [54] = {.lex_state = 10, .external_lex_state = 2},
  [55] = {.lex_state = 10, .external_lex_state = 2},
  [56] = {.lex_state = 10, .external_lex_state = 2},
  [57] = {.lex_state = 10, .external_lex_state = 2},
  [58] = {.lex_state = 10, .external_lex_state = 3},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
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
  [107] = {.lex_state = 3, .external_lex_state = 3},
  [108] = {.lex_state = 3, .external_lex_state = 3},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 0, .external_lex_state = 5},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0, .external_lex_state = 5},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 3, .external_lex_state = 5},
  [126] = {.lex_state = 0, .external_lex_state = 5},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0, .external_lex_state = 5},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0, .external_lex_state = 5},
  [133] = {.lex_state = 0, .external_lex_state = 5},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3, .external_lex_state = 5},
  [137] = {.lex_state = 0, .external_lex_state = 5},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0, .external_lex_state = 5},
  [140] = {.lex_state = 0, .external_lex_state = 5},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0, .external_lex_state = 5},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0, .external_lex_state = 5},
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
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
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
  [203] = {.lex_state = 13},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 13},
  [207] = {.lex_state = 18},
  [208] = {.lex_state = 0},
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
    [sym_document] = STATE(181),
    [sym__begin] = ACTIONS(3),
  },
  [2] = {
    [sym_description] = STATE(3),
    [sym_tag] = STATE(5),
    [sym_inline_tag] = STATE(43),
    [sym__tag_without_description] = STATE(77),
    [sym__tag_with_optional_description] = STATE(77),
    [sym__tag_with_required_description] = STATE(77),
    [sym__tag_with_incomplete_implementation] = STATE(77),
    [sym__author_tag] = STATE(77),
    [sym__global_tag] = STATE(77),
    [sym__link_tag] = STATE(77),
    [sym__method_tag] = STATE(77),
    [sym__param_tag] = STATE(77),
    [sym__property_tag] = STATE(77),
    [sym__return_tag] = STATE(77),
    [sym__see_tag] = STATE(77),
    [sym__throws_tag] = STATE(77),
    [sym__var_tag] = STATE(77),
    [sym__deprecated_tag] = STATE(77),
    [sym__since_tag] = STATE(77),
    [sym__version_tag] = STATE(77),
    [sym__phpunit_tag] = STATE(77),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_description_repeat1] = STATE(43),
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
    [sym__tag_without_description] = STATE(77),
    [sym__tag_with_optional_description] = STATE(77),
    [sym__tag_with_required_description] = STATE(77),
    [sym__tag_with_incomplete_implementation] = STATE(77),
    [sym__author_tag] = STATE(77),
    [sym__global_tag] = STATE(77),
    [sym__link_tag] = STATE(77),
    [sym__method_tag] = STATE(77),
    [sym__param_tag] = STATE(77),
    [sym__property_tag] = STATE(77),
    [sym__return_tag] = STATE(77),
    [sym__see_tag] = STATE(77),
    [sym__throws_tag] = STATE(77),
    [sym__var_tag] = STATE(77),
    [sym__deprecated_tag] = STATE(77),
    [sym__since_tag] = STATE(77),
    [sym__version_tag] = STATE(77),
    [sym__phpunit_tag] = STATE(77),
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
    [sym_tag] = STATE(6),
    [sym__tag_without_description] = STATE(77),
    [sym__tag_with_optional_description] = STATE(77),
    [sym__tag_with_required_description] = STATE(77),
    [sym__tag_with_incomplete_implementation] = STATE(77),
    [sym__author_tag] = STATE(77),
    [sym__global_tag] = STATE(77),
    [sym__link_tag] = STATE(77),
    [sym__method_tag] = STATE(77),
    [sym__param_tag] = STATE(77),
    [sym__property_tag] = STATE(77),
    [sym__return_tag] = STATE(77),
    [sym__see_tag] = STATE(77),
    [sym__throws_tag] = STATE(77),
    [sym__var_tag] = STATE(77),
    [sym__deprecated_tag] = STATE(77),
    [sym__since_tag] = STATE(77),
    [sym__version_tag] = STATE(77),
    [sym__phpunit_tag] = STATE(77),
    [aux_sym_document_repeat1] = STATE(6),
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
    [sym_tag] = STATE(6),
    [sym__tag_without_description] = STATE(77),
    [sym__tag_with_optional_description] = STATE(77),
    [sym__tag_with_required_description] = STATE(77),
    [sym__tag_with_incomplete_implementation] = STATE(77),
    [sym__author_tag] = STATE(77),
    [sym__global_tag] = STATE(77),
    [sym__link_tag] = STATE(77),
    [sym__method_tag] = STATE(77),
    [sym__param_tag] = STATE(77),
    [sym__property_tag] = STATE(77),
    [sym__return_tag] = STATE(77),
    [sym__see_tag] = STATE(77),
    [sym__throws_tag] = STATE(77),
    [sym__var_tag] = STATE(77),
    [sym__deprecated_tag] = STATE(77),
    [sym__since_tag] = STATE(77),
    [sym__version_tag] = STATE(77),
    [sym__phpunit_tag] = STATE(77),
    [aux_sym_document_repeat1] = STATE(6),
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
  [6] = {
    [sym_tag] = STATE(6),
    [sym__tag_without_description] = STATE(77),
    [sym__tag_with_optional_description] = STATE(77),
    [sym__tag_with_required_description] = STATE(77),
    [sym__tag_with_incomplete_implementation] = STATE(77),
    [sym__author_tag] = STATE(77),
    [sym__global_tag] = STATE(77),
    [sym__link_tag] = STATE(77),
    [sym__method_tag] = STATE(77),
    [sym__param_tag] = STATE(77),
    [sym__property_tag] = STATE(77),
    [sym__return_tag] = STATE(77),
    [sym__see_tag] = STATE(77),
    [sym__throws_tag] = STATE(77),
    [sym__var_tag] = STATE(77),
    [sym__deprecated_tag] = STATE(77),
    [sym__since_tag] = STATE(77),
    [sym__version_tag] = STATE(77),
    [sym__phpunit_tag] = STATE(77),
    [aux_sym_document_repeat1] = STATE(6),
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
  [7] = {
    [sym__description_not_version] = STATE(69),
    [sym_inline_tag] = STATE(49),
    [sym_version] = STATE(31),
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
    [aux_sym_namespace_name_repeat1] = STATE(161),
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
    [aux_sym__phpdoc_array_types_repeat1] = STATE(12),
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
    [aux_sym__phpdoc_array_types_repeat1] = STATE(10),
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
    [anon_sym_LBRACK_RBRACK] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [sym__end] = ACTIONS(144),
    [sym__text_after_type] = ACTIONS(144),
  },
  [11] = {
    [sym_description] = STATE(78),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(151),
    [anon_sym_ATinheritDoc] = ACTIONS(151),
    [anon_sym_ATapi] = ACTIONS(151),
    [anon_sym_ATfilesource] = ACTIONS(151),
    [anon_sym_ATignore] = ACTIONS(151),
    [anon_sym_ATinternal] = ACTIONS(151),
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
    [anon_sym_ATlink] = ACTIONS(151),
    [anon_sym_ATmethod] = ACTIONS(151),
    [anon_sym_ATparam] = ACTIONS(151),
    [anon_sym_ATproperty] = ACTIONS(153),
    [anon_sym_ATproperty_DASHread] = ACTIONS(151),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(151),
    [anon_sym_ATreturn] = ACTIONS(151),
    [anon_sym_ATsee] = ACTIONS(151),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(155),
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
    [sym__end] = ACTIONS(151),
    [sym_text] = ACTIONS(49),
  },
  [12] = {
    [aux_sym__phpdoc_array_types_repeat1] = STATE(10),
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
    [anon_sym_LBRACK_RBRACK] = ACTIONS(161),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_DOLLAR] = ACTIONS(157),
    [sym__end] = ACTIONS(157),
    [sym__text_after_type] = ACTIONS(157),
  },
  [13] = {
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_ATinheritdoc] = ACTIONS(163),
    [anon_sym_ATinheritDoc] = ACTIONS(163),
    [anon_sym_ATapi] = ACTIONS(163),
    [anon_sym_ATfilesource] = ACTIONS(163),
    [anon_sym_ATignore] = ACTIONS(163),
    [anon_sym_ATinternal] = ACTIONS(163),
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
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_ATglobal] = ACTIONS(163),
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
    [anon_sym_LBRACK_RBRACK] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_DOLLAR] = ACTIONS(163),
    [sym__end] = ACTIONS(163),
    [sym__text_after_type] = ACTIONS(163),
  },
  [14] = {
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
  [15] = {
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
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(171),
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
    [anon_sym_LT] = ACTIONS(171),
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
    [anon_sym_LBRACK_RBRACK] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [sym__end] = ACTIONS(171),
    [sym__text_after_type] = ACTIONS(171),
  },
  [17] = {
    [sym__description_after_type] = STATE(80),
    [sym_inline_tag] = STATE(52),
    [aux_sym__description_after_type_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_ATinheritdoc] = ACTIONS(177),
    [anon_sym_ATinheritDoc] = ACTIONS(177),
    [anon_sym_ATapi] = ACTIONS(177),
    [anon_sym_ATfilesource] = ACTIONS(177),
    [anon_sym_ATignore] = ACTIONS(177),
    [anon_sym_ATinternal] = ACTIONS(177),
    [anon_sym_ATcategory] = ACTIONS(177),
    [anon_sym_ATcopyright] = ACTIONS(177),
    [anon_sym_ATtodo] = ACTIONS(177),
    [anon_sym_ATexample] = ACTIONS(177),
    [anon_sym_ATlicense] = ACTIONS(177),
    [anon_sym_ATpackage] = ACTIONS(177),
    [anon_sym_ATsource] = ACTIONS(177),
    [anon_sym_ATsubpackage] = ACTIONS(177),
    [anon_sym_ATuses] = ACTIONS(177),
    [anon_sym_ATauthor] = ACTIONS(177),
    [anon_sym_ATglobal] = ACTIONS(177),
    [anon_sym_ATlink] = ACTIONS(177),
    [anon_sym_ATmethod] = ACTIONS(177),
    [anon_sym_ATparam] = ACTIONS(177),
    [anon_sym_ATproperty] = ACTIONS(179),
    [anon_sym_ATproperty_DASHread] = ACTIONS(177),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(177),
    [anon_sym_ATreturn] = ACTIONS(177),
    [anon_sym_ATsee] = ACTIONS(177),
    [anon_sym_ATthrows] = ACTIONS(177),
    [anon_sym_ATvar] = ACTIONS(177),
    [anon_sym_ATdeprecated] = ACTIONS(177),
    [anon_sym_ATsince] = ACTIONS(177),
    [anon_sym_ATversion] = ACTIONS(177),
    [anon_sym_ATafter] = ACTIONS(179),
    [anon_sym_ATafterClass] = ACTIONS(177),
    [anon_sym_ATannotation] = ACTIONS(177),
    [anon_sym_ATbackupGlobals] = ACTIONS(177),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(177),
    [anon_sym_ATbefore] = ACTIONS(179),
    [anon_sym_ATbeforeClass] = ACTIONS(177),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(179),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(177),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(177),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(177),
    [anon_sym_ATcovers] = ACTIONS(179),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(179),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(177),
    [anon_sym_ATcoversNothing] = ACTIONS(177),
    [anon_sym_ATdataProvider] = ACTIONS(177),
    [anon_sym_ATdepends] = ACTIONS(179),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(177),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(177),
    [anon_sym_ATgroup] = ACTIONS(177),
    [anon_sym_ATlarge] = ACTIONS(177),
    [anon_sym_ATmedium] = ACTIONS(177),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(177),
    [anon_sym_ATrequires] = ACTIONS(179),
    [anon_sym_ATrequiresusages] = ACTIONS(177),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(177),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(177),
    [anon_sym_ATsmall] = ACTIONS(177),
    [anon_sym_ATtest] = ACTIONS(179),
    [anon_sym_ATtestWith] = ACTIONS(177),
    [anon_sym_ATtestdox] = ACTIONS(177),
    [anon_sym_ATticket] = ACTIONS(177),
    [sym__end] = ACTIONS(177),
    [sym__text_after_type] = ACTIONS(181),
  },
  [18] = {
    [aux_sym_union_type_repeat1] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(183),
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
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [sym__end] = ACTIONS(183),
    [sym__text_after_type] = ACTIONS(183),
  },
  [19] = {
    [sym_description] = STATE(67),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(189),
    [anon_sym_ATinheritDoc] = ACTIONS(189),
    [anon_sym_ATapi] = ACTIONS(189),
    [anon_sym_ATfilesource] = ACTIONS(189),
    [anon_sym_ATignore] = ACTIONS(189),
    [anon_sym_ATinternal] = ACTIONS(189),
    [anon_sym_ATcategory] = ACTIONS(189),
    [anon_sym_ATcopyright] = ACTIONS(189),
    [anon_sym_ATtodo] = ACTIONS(189),
    [anon_sym_ATexample] = ACTIONS(189),
    [anon_sym_ATlicense] = ACTIONS(189),
    [anon_sym_ATpackage] = ACTIONS(189),
    [anon_sym_ATsource] = ACTIONS(189),
    [anon_sym_ATsubpackage] = ACTIONS(189),
    [anon_sym_ATuses] = ACTIONS(189),
    [anon_sym_ATauthor] = ACTIONS(189),
    [anon_sym_ATglobal] = ACTIONS(189),
    [anon_sym_ATlink] = ACTIONS(189),
    [anon_sym_ATmethod] = ACTIONS(189),
    [anon_sym_ATparam] = ACTIONS(189),
    [anon_sym_ATproperty] = ACTIONS(191),
    [anon_sym_ATproperty_DASHread] = ACTIONS(189),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(189),
    [anon_sym_ATreturn] = ACTIONS(189),
    [anon_sym_ATsee] = ACTIONS(189),
    [anon_sym_ATthrows] = ACTIONS(189),
    [anon_sym_ATvar] = ACTIONS(189),
    [anon_sym_ATdeprecated] = ACTIONS(189),
    [anon_sym_ATsince] = ACTIONS(189),
    [anon_sym_ATversion] = ACTIONS(189),
    [anon_sym_ATafter] = ACTIONS(191),
    [anon_sym_ATafterClass] = ACTIONS(189),
    [anon_sym_ATannotation] = ACTIONS(189),
    [anon_sym_ATbackupGlobals] = ACTIONS(189),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(189),
    [anon_sym_ATbefore] = ACTIONS(191),
    [anon_sym_ATbeforeClass] = ACTIONS(189),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(191),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(189),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(189),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(189),
    [anon_sym_ATcovers] = ACTIONS(191),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(191),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(189),
    [anon_sym_ATcoversNothing] = ACTIONS(189),
    [anon_sym_ATdataProvider] = ACTIONS(189),
    [anon_sym_ATdepends] = ACTIONS(191),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(189),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(189),
    [anon_sym_ATgroup] = ACTIONS(189),
    [anon_sym_ATlarge] = ACTIONS(189),
    [anon_sym_ATmedium] = ACTIONS(189),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(189),
    [anon_sym_ATrequires] = ACTIONS(191),
    [anon_sym_ATrequiresusages] = ACTIONS(189),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(189),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(189),
    [anon_sym_ATsmall] = ACTIONS(189),
    [anon_sym_ATtest] = ACTIONS(191),
    [anon_sym_ATtestWith] = ACTIONS(189),
    [anon_sym_ATtestdox] = ACTIONS(189),
    [anon_sym_ATticket] = ACTIONS(189),
    [sym__end] = ACTIONS(189),
    [sym_text] = ACTIONS(49),
  },
  [20] = {
    [sym_description] = STATE(68),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(193),
    [anon_sym_ATinheritDoc] = ACTIONS(193),
    [anon_sym_ATapi] = ACTIONS(193),
    [anon_sym_ATfilesource] = ACTIONS(193),
    [anon_sym_ATignore] = ACTIONS(193),
    [anon_sym_ATinternal] = ACTIONS(193),
    [anon_sym_ATcategory] = ACTIONS(193),
    [anon_sym_ATcopyright] = ACTIONS(193),
    [anon_sym_ATtodo] = ACTIONS(193),
    [anon_sym_ATexample] = ACTIONS(193),
    [anon_sym_ATlicense] = ACTIONS(193),
    [anon_sym_ATpackage] = ACTIONS(193),
    [anon_sym_ATsource] = ACTIONS(193),
    [anon_sym_ATsubpackage] = ACTIONS(193),
    [anon_sym_ATuses] = ACTIONS(193),
    [anon_sym_ATauthor] = ACTIONS(193),
    [anon_sym_ATglobal] = ACTIONS(193),
    [anon_sym_ATlink] = ACTIONS(193),
    [anon_sym_ATmethod] = ACTIONS(193),
    [anon_sym_ATparam] = ACTIONS(193),
    [anon_sym_ATproperty] = ACTIONS(195),
    [anon_sym_ATproperty_DASHread] = ACTIONS(193),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(193),
    [anon_sym_ATreturn] = ACTIONS(193),
    [anon_sym_ATsee] = ACTIONS(193),
    [anon_sym_ATthrows] = ACTIONS(193),
    [anon_sym_ATvar] = ACTIONS(193),
    [anon_sym_ATdeprecated] = ACTIONS(193),
    [anon_sym_ATsince] = ACTIONS(193),
    [anon_sym_ATversion] = ACTIONS(193),
    [anon_sym_ATafter] = ACTIONS(195),
    [anon_sym_ATafterClass] = ACTIONS(193),
    [anon_sym_ATannotation] = ACTIONS(193),
    [anon_sym_ATbackupGlobals] = ACTIONS(193),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(193),
    [anon_sym_ATbefore] = ACTIONS(195),
    [anon_sym_ATbeforeClass] = ACTIONS(193),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(195),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(193),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(193),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(193),
    [anon_sym_ATcovers] = ACTIONS(195),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(195),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(193),
    [anon_sym_ATcoversNothing] = ACTIONS(193),
    [anon_sym_ATdataProvider] = ACTIONS(193),
    [anon_sym_ATdepends] = ACTIONS(195),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(193),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(193),
    [anon_sym_ATgroup] = ACTIONS(193),
    [anon_sym_ATlarge] = ACTIONS(193),
    [anon_sym_ATmedium] = ACTIONS(193),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(193),
    [anon_sym_ATrequires] = ACTIONS(195),
    [anon_sym_ATrequiresusages] = ACTIONS(193),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(193),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(193),
    [anon_sym_ATsmall] = ACTIONS(193),
    [anon_sym_ATtest] = ACTIONS(195),
    [anon_sym_ATtestWith] = ACTIONS(193),
    [anon_sym_ATtestdox] = ACTIONS(193),
    [anon_sym_ATticket] = ACTIONS(193),
    [sym__end] = ACTIONS(193),
    [sym_text] = ACTIONS(49),
  },
  [21] = {
    [aux_sym_union_type_repeat1] = STATE(18),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_ATinheritdoc] = ACTIONS(197),
    [anon_sym_ATinheritDoc] = ACTIONS(197),
    [anon_sym_ATapi] = ACTIONS(197),
    [anon_sym_ATfilesource] = ACTIONS(197),
    [anon_sym_ATignore] = ACTIONS(197),
    [anon_sym_ATinternal] = ACTIONS(197),
    [anon_sym_ATcategory] = ACTIONS(197),
    [anon_sym_ATcopyright] = ACTIONS(197),
    [anon_sym_ATtodo] = ACTIONS(197),
    [anon_sym_ATexample] = ACTIONS(197),
    [anon_sym_ATlicense] = ACTIONS(197),
    [anon_sym_ATpackage] = ACTIONS(197),
    [anon_sym_ATsource] = ACTIONS(197),
    [anon_sym_ATsubpackage] = ACTIONS(197),
    [anon_sym_ATuses] = ACTIONS(197),
    [anon_sym_ATauthor] = ACTIONS(197),
    [anon_sym_ATglobal] = ACTIONS(197),
    [anon_sym_ATlink] = ACTIONS(197),
    [anon_sym_ATmethod] = ACTIONS(197),
    [anon_sym_ATparam] = ACTIONS(197),
    [anon_sym_ATproperty] = ACTIONS(199),
    [anon_sym_ATproperty_DASHread] = ACTIONS(197),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(197),
    [anon_sym_ATreturn] = ACTIONS(197),
    [anon_sym_ATsee] = ACTIONS(197),
    [anon_sym_ATthrows] = ACTIONS(197),
    [anon_sym_ATvar] = ACTIONS(197),
    [anon_sym_ATdeprecated] = ACTIONS(197),
    [anon_sym_ATsince] = ACTIONS(197),
    [anon_sym_ATversion] = ACTIONS(197),
    [anon_sym_ATafter] = ACTIONS(199),
    [anon_sym_ATafterClass] = ACTIONS(197),
    [anon_sym_ATannotation] = ACTIONS(197),
    [anon_sym_ATbackupGlobals] = ACTIONS(197),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(197),
    [anon_sym_ATbefore] = ACTIONS(199),
    [anon_sym_ATbeforeClass] = ACTIONS(197),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(199),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(197),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(197),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(197),
    [anon_sym_ATcovers] = ACTIONS(199),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(199),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(197),
    [anon_sym_ATcoversNothing] = ACTIONS(197),
    [anon_sym_ATdataProvider] = ACTIONS(197),
    [anon_sym_ATdepends] = ACTIONS(199),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(197),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(197),
    [anon_sym_ATgroup] = ACTIONS(197),
    [anon_sym_ATlarge] = ACTIONS(197),
    [anon_sym_ATmedium] = ACTIONS(197),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(197),
    [anon_sym_ATrequires] = ACTIONS(199),
    [anon_sym_ATrequiresusages] = ACTIONS(197),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(197),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(197),
    [anon_sym_ATsmall] = ACTIONS(197),
    [anon_sym_ATtest] = ACTIONS(199),
    [anon_sym_ATtestWith] = ACTIONS(197),
    [anon_sym_ATtestdox] = ACTIONS(197),
    [anon_sym_ATticket] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [sym__end] = ACTIONS(197),
    [sym__text_after_type] = ACTIONS(197),
  },
  [22] = {
    [sym_description] = STATE(73),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(201),
    [anon_sym_ATinheritDoc] = ACTIONS(201),
    [anon_sym_ATapi] = ACTIONS(201),
    [anon_sym_ATfilesource] = ACTIONS(201),
    [anon_sym_ATignore] = ACTIONS(201),
    [anon_sym_ATinternal] = ACTIONS(201),
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
    [anon_sym_ATglobal] = ACTIONS(201),
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
    [sym__end] = ACTIONS(201),
    [sym_text] = ACTIONS(49),
  },
  [23] = {
    [sym_description] = STATE(83),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(205),
    [anon_sym_ATinheritDoc] = ACTIONS(205),
    [anon_sym_ATapi] = ACTIONS(205),
    [anon_sym_ATfilesource] = ACTIONS(205),
    [anon_sym_ATignore] = ACTIONS(205),
    [anon_sym_ATinternal] = ACTIONS(205),
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
    [sym__end] = ACTIONS(205),
    [sym_text] = ACTIONS(49),
  },
  [24] = {
    [sym_description] = STATE(82),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(209),
    [anon_sym_ATinheritDoc] = ACTIONS(209),
    [anon_sym_ATapi] = ACTIONS(209),
    [anon_sym_ATfilesource] = ACTIONS(209),
    [anon_sym_ATignore] = ACTIONS(209),
    [anon_sym_ATinternal] = ACTIONS(209),
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
    [sym__end] = ACTIONS(209),
    [sym_text] = ACTIONS(49),
  },
  [25] = {
    [sym_description] = STATE(66),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(213),
    [anon_sym_ATinheritDoc] = ACTIONS(213),
    [anon_sym_ATapi] = ACTIONS(213),
    [anon_sym_ATfilesource] = ACTIONS(213),
    [anon_sym_ATignore] = ACTIONS(213),
    [anon_sym_ATinternal] = ACTIONS(213),
    [anon_sym_ATcategory] = ACTIONS(213),
    [anon_sym_ATcopyright] = ACTIONS(213),
    [anon_sym_ATtodo] = ACTIONS(213),
    [anon_sym_ATexample] = ACTIONS(213),
    [anon_sym_ATlicense] = ACTIONS(213),
    [anon_sym_ATpackage] = ACTIONS(213),
    [anon_sym_ATsource] = ACTIONS(213),
    [anon_sym_ATsubpackage] = ACTIONS(213),
    [anon_sym_ATuses] = ACTIONS(213),
    [anon_sym_ATauthor] = ACTIONS(213),
    [anon_sym_ATglobal] = ACTIONS(213),
    [anon_sym_ATlink] = ACTIONS(213),
    [anon_sym_ATmethod] = ACTIONS(213),
    [anon_sym_ATparam] = ACTIONS(213),
    [anon_sym_ATproperty] = ACTIONS(215),
    [anon_sym_ATproperty_DASHread] = ACTIONS(213),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(213),
    [anon_sym_ATreturn] = ACTIONS(213),
    [anon_sym_ATsee] = ACTIONS(213),
    [anon_sym_ATthrows] = ACTIONS(213),
    [anon_sym_ATvar] = ACTIONS(213),
    [anon_sym_ATdeprecated] = ACTIONS(213),
    [anon_sym_ATsince] = ACTIONS(213),
    [anon_sym_ATversion] = ACTIONS(213),
    [anon_sym_ATafter] = ACTIONS(215),
    [anon_sym_ATafterClass] = ACTIONS(213),
    [anon_sym_ATannotation] = ACTIONS(213),
    [anon_sym_ATbackupGlobals] = ACTIONS(213),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(213),
    [anon_sym_ATbefore] = ACTIONS(215),
    [anon_sym_ATbeforeClass] = ACTIONS(213),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(215),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(213),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(213),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(213),
    [anon_sym_ATcovers] = ACTIONS(215),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(215),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(213),
    [anon_sym_ATcoversNothing] = ACTIONS(213),
    [anon_sym_ATdataProvider] = ACTIONS(213),
    [anon_sym_ATdepends] = ACTIONS(215),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(213),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(213),
    [anon_sym_ATgroup] = ACTIONS(213),
    [anon_sym_ATlarge] = ACTIONS(213),
    [anon_sym_ATmedium] = ACTIONS(213),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(213),
    [anon_sym_ATrequires] = ACTIONS(215),
    [anon_sym_ATrequiresusages] = ACTIONS(213),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(213),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(213),
    [anon_sym_ATsmall] = ACTIONS(213),
    [anon_sym_ATtest] = ACTIONS(215),
    [anon_sym_ATtestWith] = ACTIONS(213),
    [anon_sym_ATtestdox] = ACTIONS(213),
    [anon_sym_ATticket] = ACTIONS(213),
    [sym__end] = ACTIONS(213),
    [sym_text] = ACTIONS(49),
  },
  [26] = {
    [aux_sym_union_type_repeat1] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_ATinheritdoc] = ACTIONS(217),
    [anon_sym_ATinheritDoc] = ACTIONS(217),
    [anon_sym_ATapi] = ACTIONS(217),
    [anon_sym_ATfilesource] = ACTIONS(217),
    [anon_sym_ATignore] = ACTIONS(217),
    [anon_sym_ATinternal] = ACTIONS(217),
    [anon_sym_ATcategory] = ACTIONS(217),
    [anon_sym_ATcopyright] = ACTIONS(217),
    [anon_sym_ATtodo] = ACTIONS(217),
    [anon_sym_ATexample] = ACTIONS(217),
    [anon_sym_ATlicense] = ACTIONS(217),
    [anon_sym_ATpackage] = ACTIONS(217),
    [anon_sym_ATsource] = ACTIONS(217),
    [anon_sym_ATsubpackage] = ACTIONS(217),
    [anon_sym_ATuses] = ACTIONS(217),
    [anon_sym_ATauthor] = ACTIONS(217),
    [anon_sym_ATglobal] = ACTIONS(217),
    [anon_sym_ATlink] = ACTIONS(217),
    [anon_sym_ATmethod] = ACTIONS(217),
    [anon_sym_ATparam] = ACTIONS(217),
    [anon_sym_ATproperty] = ACTIONS(219),
    [anon_sym_ATproperty_DASHread] = ACTIONS(217),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(217),
    [anon_sym_ATreturn] = ACTIONS(217),
    [anon_sym_ATsee] = ACTIONS(217),
    [anon_sym_ATthrows] = ACTIONS(217),
    [anon_sym_ATvar] = ACTIONS(217),
    [anon_sym_ATdeprecated] = ACTIONS(217),
    [anon_sym_ATsince] = ACTIONS(217),
    [anon_sym_ATversion] = ACTIONS(217),
    [anon_sym_ATafter] = ACTIONS(219),
    [anon_sym_ATafterClass] = ACTIONS(217),
    [anon_sym_ATannotation] = ACTIONS(217),
    [anon_sym_ATbackupGlobals] = ACTIONS(217),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(217),
    [anon_sym_ATbefore] = ACTIONS(219),
    [anon_sym_ATbeforeClass] = ACTIONS(217),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(219),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(217),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(217),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(217),
    [anon_sym_ATcovers] = ACTIONS(219),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(219),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(217),
    [anon_sym_ATcoversNothing] = ACTIONS(217),
    [anon_sym_ATdataProvider] = ACTIONS(217),
    [anon_sym_ATdepends] = ACTIONS(219),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(217),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(217),
    [anon_sym_ATgroup] = ACTIONS(217),
    [anon_sym_ATlarge] = ACTIONS(217),
    [anon_sym_ATmedium] = ACTIONS(217),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(217),
    [anon_sym_ATrequires] = ACTIONS(219),
    [anon_sym_ATrequiresusages] = ACTIONS(217),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(217),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(217),
    [anon_sym_ATsmall] = ACTIONS(217),
    [anon_sym_ATtest] = ACTIONS(219),
    [anon_sym_ATtestWith] = ACTIONS(217),
    [anon_sym_ATtestdox] = ACTIONS(217),
    [anon_sym_ATticket] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [sym__end] = ACTIONS(217),
    [sym__text_after_type] = ACTIONS(217),
  },
  [27] = {
    [sym_description] = STATE(65),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(224),
    [anon_sym_ATinheritDoc] = ACTIONS(224),
    [anon_sym_ATapi] = ACTIONS(224),
    [anon_sym_ATfilesource] = ACTIONS(224),
    [anon_sym_ATignore] = ACTIONS(224),
    [anon_sym_ATinternal] = ACTIONS(224),
    [anon_sym_ATcategory] = ACTIONS(224),
    [anon_sym_ATcopyright] = ACTIONS(224),
    [anon_sym_ATtodo] = ACTIONS(224),
    [anon_sym_ATexample] = ACTIONS(224),
    [anon_sym_ATlicense] = ACTIONS(224),
    [anon_sym_ATpackage] = ACTIONS(224),
    [anon_sym_ATsource] = ACTIONS(224),
    [anon_sym_ATsubpackage] = ACTIONS(224),
    [anon_sym_ATuses] = ACTIONS(224),
    [anon_sym_ATauthor] = ACTIONS(224),
    [anon_sym_ATglobal] = ACTIONS(224),
    [anon_sym_ATlink] = ACTIONS(224),
    [anon_sym_ATmethod] = ACTIONS(224),
    [anon_sym_ATparam] = ACTIONS(224),
    [anon_sym_ATproperty] = ACTIONS(226),
    [anon_sym_ATproperty_DASHread] = ACTIONS(224),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(224),
    [anon_sym_ATreturn] = ACTIONS(224),
    [anon_sym_ATsee] = ACTIONS(224),
    [anon_sym_ATthrows] = ACTIONS(224),
    [anon_sym_ATvar] = ACTIONS(224),
    [anon_sym_ATdeprecated] = ACTIONS(224),
    [anon_sym_ATsince] = ACTIONS(224),
    [anon_sym_ATversion] = ACTIONS(224),
    [anon_sym_ATafter] = ACTIONS(226),
    [anon_sym_ATafterClass] = ACTIONS(224),
    [anon_sym_ATannotation] = ACTIONS(224),
    [anon_sym_ATbackupGlobals] = ACTIONS(224),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(224),
    [anon_sym_ATbefore] = ACTIONS(226),
    [anon_sym_ATbeforeClass] = ACTIONS(224),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(226),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(224),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(224),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(224),
    [anon_sym_ATcovers] = ACTIONS(226),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(226),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(224),
    [anon_sym_ATcoversNothing] = ACTIONS(224),
    [anon_sym_ATdataProvider] = ACTIONS(224),
    [anon_sym_ATdepends] = ACTIONS(226),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(224),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(224),
    [anon_sym_ATgroup] = ACTIONS(224),
    [anon_sym_ATlarge] = ACTIONS(224),
    [anon_sym_ATmedium] = ACTIONS(224),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(224),
    [anon_sym_ATrequires] = ACTIONS(226),
    [anon_sym_ATrequiresusages] = ACTIONS(224),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(224),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(224),
    [anon_sym_ATsmall] = ACTIONS(224),
    [anon_sym_ATtest] = ACTIONS(226),
    [anon_sym_ATtestWith] = ACTIONS(224),
    [anon_sym_ATtestdox] = ACTIONS(224),
    [anon_sym_ATticket] = ACTIONS(224),
    [sym__end] = ACTIONS(224),
    [sym_text] = ACTIONS(49),
  },
  [28] = {
    [sym_description] = STATE(84),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(228),
    [anon_sym_ATinheritDoc] = ACTIONS(228),
    [anon_sym_ATapi] = ACTIONS(228),
    [anon_sym_ATfilesource] = ACTIONS(228),
    [anon_sym_ATignore] = ACTIONS(228),
    [anon_sym_ATinternal] = ACTIONS(228),
    [anon_sym_ATcategory] = ACTIONS(228),
    [anon_sym_ATcopyright] = ACTIONS(228),
    [anon_sym_ATtodo] = ACTIONS(228),
    [anon_sym_ATexample] = ACTIONS(228),
    [anon_sym_ATlicense] = ACTIONS(228),
    [anon_sym_ATpackage] = ACTIONS(228),
    [anon_sym_ATsource] = ACTIONS(228),
    [anon_sym_ATsubpackage] = ACTIONS(228),
    [anon_sym_ATuses] = ACTIONS(228),
    [anon_sym_ATauthor] = ACTIONS(228),
    [anon_sym_ATglobal] = ACTIONS(228),
    [anon_sym_ATlink] = ACTIONS(228),
    [anon_sym_ATmethod] = ACTIONS(228),
    [anon_sym_ATparam] = ACTIONS(228),
    [anon_sym_ATproperty] = ACTIONS(230),
    [anon_sym_ATproperty_DASHread] = ACTIONS(228),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(228),
    [anon_sym_ATreturn] = ACTIONS(228),
    [anon_sym_ATsee] = ACTIONS(228),
    [anon_sym_ATthrows] = ACTIONS(228),
    [anon_sym_ATvar] = ACTIONS(228),
    [anon_sym_ATdeprecated] = ACTIONS(228),
    [anon_sym_ATsince] = ACTIONS(228),
    [anon_sym_ATversion] = ACTIONS(228),
    [anon_sym_ATafter] = ACTIONS(230),
    [anon_sym_ATafterClass] = ACTIONS(228),
    [anon_sym_ATannotation] = ACTIONS(228),
    [anon_sym_ATbackupGlobals] = ACTIONS(228),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(228),
    [anon_sym_ATbefore] = ACTIONS(230),
    [anon_sym_ATbeforeClass] = ACTIONS(228),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(230),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(228),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(228),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(228),
    [anon_sym_ATcovers] = ACTIONS(230),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(230),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(228),
    [anon_sym_ATcoversNothing] = ACTIONS(228),
    [anon_sym_ATdataProvider] = ACTIONS(228),
    [anon_sym_ATdepends] = ACTIONS(230),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(228),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(228),
    [anon_sym_ATgroup] = ACTIONS(228),
    [anon_sym_ATlarge] = ACTIONS(228),
    [anon_sym_ATmedium] = ACTIONS(228),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(228),
    [anon_sym_ATrequires] = ACTIONS(230),
    [anon_sym_ATrequiresusages] = ACTIONS(228),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(228),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(228),
    [anon_sym_ATsmall] = ACTIONS(228),
    [anon_sym_ATtest] = ACTIONS(230),
    [anon_sym_ATtestWith] = ACTIONS(228),
    [anon_sym_ATtestdox] = ACTIONS(228),
    [anon_sym_ATticket] = ACTIONS(228),
    [sym__end] = ACTIONS(228),
    [sym_text] = ACTIONS(49),
  },
  [29] = {
    [sym_description] = STATE(72),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
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
  [30] = {
    [sym__description_after_type] = STATE(76),
    [sym_inline_tag] = STATE(52),
    [aux_sym__description_after_type_repeat1] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(175),
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
    [sym__text_after_type] = ACTIONS(181),
  },
  [31] = {
    [sym_description] = STATE(74),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
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
  [32] = {
    [sym_description] = STATE(79),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
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
  [33] = {
    [sym_description] = STATE(62),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
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
  [34] = {
    [sym_description] = STATE(81),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(5),
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
    [sym_text] = ACTIONS(49),
  },
  [35] = {
    [sym_description] = STATE(75),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(5),
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
    [sym_text] = ACTIONS(49),
  },
  [36] = {
    [sym_description] = STATE(61),
    [sym_inline_tag] = STATE(43),
    [aux_sym_description_repeat1] = STATE(43),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_ATinheritdoc] = ACTIONS(260),
    [anon_sym_ATinheritDoc] = ACTIONS(260),
    [anon_sym_ATapi] = ACTIONS(260),
    [anon_sym_ATfilesource] = ACTIONS(260),
    [anon_sym_ATignore] = ACTIONS(260),
    [anon_sym_ATinternal] = ACTIONS(260),
    [anon_sym_ATcategory] = ACTIONS(260),
    [anon_sym_ATcopyright] = ACTIONS(260),
    [anon_sym_ATtodo] = ACTIONS(260),
    [anon_sym_ATexample] = ACTIONS(260),
    [anon_sym_ATlicense] = ACTIONS(260),
    [anon_sym_ATpackage] = ACTIONS(260),
    [anon_sym_ATsource] = ACTIONS(260),
    [anon_sym_ATsubpackage] = ACTIONS(260),
    [anon_sym_ATuses] = ACTIONS(260),
    [anon_sym_ATauthor] = ACTIONS(260),
    [anon_sym_ATglobal] = ACTIONS(260),
    [anon_sym_ATlink] = ACTIONS(260),
    [anon_sym_ATmethod] = ACTIONS(260),
    [anon_sym_ATparam] = ACTIONS(260),
    [anon_sym_ATproperty] = ACTIONS(262),
    [anon_sym_ATproperty_DASHread] = ACTIONS(260),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(260),
    [anon_sym_ATreturn] = ACTIONS(260),
    [anon_sym_ATsee] = ACTIONS(260),
    [anon_sym_ATthrows] = ACTIONS(260),
    [anon_sym_ATvar] = ACTIONS(260),
    [anon_sym_ATdeprecated] = ACTIONS(260),
    [anon_sym_ATsince] = ACTIONS(260),
    [anon_sym_ATversion] = ACTIONS(260),
    [anon_sym_ATafter] = ACTIONS(262),
    [anon_sym_ATafterClass] = ACTIONS(260),
    [anon_sym_ATannotation] = ACTIONS(260),
    [anon_sym_ATbackupGlobals] = ACTIONS(260),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(260),
    [anon_sym_ATbefore] = ACTIONS(262),
    [anon_sym_ATbeforeClass] = ACTIONS(260),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(262),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(260),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(260),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(260),
    [anon_sym_ATcovers] = ACTIONS(262),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(262),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(260),
    [anon_sym_ATcoversNothing] = ACTIONS(260),
    [anon_sym_ATdataProvider] = ACTIONS(260),
    [anon_sym_ATdepends] = ACTIONS(262),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(260),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(260),
    [anon_sym_ATgroup] = ACTIONS(260),
    [anon_sym_ATlarge] = ACTIONS(260),
    [anon_sym_ATmedium] = ACTIONS(260),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(260),
    [anon_sym_ATrequires] = ACTIONS(262),
    [anon_sym_ATrequiresusages] = ACTIONS(260),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(260),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(260),
    [anon_sym_ATsmall] = ACTIONS(260),
    [anon_sym_ATtest] = ACTIONS(262),
    [anon_sym_ATtestWith] = ACTIONS(260),
    [anon_sym_ATtestdox] = ACTIONS(260),
    [anon_sym_ATticket] = ACTIONS(260),
    [sym__end] = ACTIONS(260),
    [sym_text] = ACTIONS(49),
  },
  [37] = {
    [anon_sym_LBRACE] = ACTIONS(264),
    [anon_sym_ATinheritdoc] = ACTIONS(264),
    [anon_sym_ATinheritDoc] = ACTIONS(264),
    [anon_sym_ATapi] = ACTIONS(264),
    [anon_sym_ATfilesource] = ACTIONS(264),
    [anon_sym_ATignore] = ACTIONS(264),
    [anon_sym_ATinternal] = ACTIONS(264),
    [anon_sym_ATcategory] = ACTIONS(264),
    [anon_sym_ATcopyright] = ACTIONS(264),
    [anon_sym_ATtodo] = ACTIONS(264),
    [anon_sym_ATexample] = ACTIONS(264),
    [anon_sym_ATlicense] = ACTIONS(264),
    [anon_sym_ATpackage] = ACTIONS(264),
    [anon_sym_ATsource] = ACTIONS(264),
    [anon_sym_ATsubpackage] = ACTIONS(264),
    [anon_sym_ATuses] = ACTIONS(264),
    [anon_sym_ATauthor] = ACTIONS(264),
    [anon_sym_ATglobal] = ACTIONS(264),
    [anon_sym_ATlink] = ACTIONS(264),
    [anon_sym_ATmethod] = ACTIONS(264),
    [anon_sym_ATparam] = ACTIONS(264),
    [anon_sym_ATproperty] = ACTIONS(266),
    [anon_sym_ATproperty_DASHread] = ACTIONS(264),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(264),
    [anon_sym_ATreturn] = ACTIONS(264),
    [anon_sym_ATsee] = ACTIONS(264),
    [anon_sym_ATthrows] = ACTIONS(264),
    [anon_sym_ATvar] = ACTIONS(264),
    [anon_sym_ATdeprecated] = ACTIONS(264),
    [anon_sym_ATsince] = ACTIONS(264),
    [anon_sym_ATversion] = ACTIONS(264),
    [anon_sym_ATafter] = ACTIONS(266),
    [anon_sym_ATafterClass] = ACTIONS(264),
    [anon_sym_ATannotation] = ACTIONS(264),
    [anon_sym_ATbackupGlobals] = ACTIONS(264),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(264),
    [anon_sym_ATbefore] = ACTIONS(266),
    [anon_sym_ATbeforeClass] = ACTIONS(264),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(266),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(264),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(264),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(264),
    [anon_sym_ATcovers] = ACTIONS(266),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(266),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(264),
    [anon_sym_ATcoversNothing] = ACTIONS(264),
    [anon_sym_ATdataProvider] = ACTIONS(264),
    [anon_sym_ATdepends] = ACTIONS(266),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(264),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(264),
    [anon_sym_ATgroup] = ACTIONS(264),
    [anon_sym_ATlarge] = ACTIONS(264),
    [anon_sym_ATmedium] = ACTIONS(264),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(264),
    [anon_sym_ATrequires] = ACTIONS(266),
    [anon_sym_ATrequiresusages] = ACTIONS(264),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(264),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(264),
    [anon_sym_ATsmall] = ACTIONS(264),
    [anon_sym_ATtest] = ACTIONS(266),
    [anon_sym_ATtestWith] = ACTIONS(264),
    [anon_sym_ATtestdox] = ACTIONS(264),
    [anon_sym_ATticket] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_DOLLAR] = ACTIONS(264),
    [sym__end] = ACTIONS(264),
    [sym__text_after_type] = ACTIONS(264),
  },
  [38] = {
    [sym_inline_tag] = STATE(52),
    [aux_sym__description_after_type_repeat1] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_ATinheritdoc] = ACTIONS(268),
    [anon_sym_ATinheritDoc] = ACTIONS(268),
    [anon_sym_ATapi] = ACTIONS(268),
    [anon_sym_ATfilesource] = ACTIONS(268),
    [anon_sym_ATignore] = ACTIONS(268),
    [anon_sym_ATinternal] = ACTIONS(268),
    [anon_sym_ATcategory] = ACTIONS(268),
    [anon_sym_ATcopyright] = ACTIONS(268),
    [anon_sym_ATtodo] = ACTIONS(268),
    [anon_sym_ATexample] = ACTIONS(268),
    [anon_sym_ATlicense] = ACTIONS(268),
    [anon_sym_ATpackage] = ACTIONS(268),
    [anon_sym_ATsource] = ACTIONS(268),
    [anon_sym_ATsubpackage] = ACTIONS(268),
    [anon_sym_ATuses] = ACTIONS(268),
    [anon_sym_ATauthor] = ACTIONS(268),
    [anon_sym_ATglobal] = ACTIONS(268),
    [anon_sym_ATlink] = ACTIONS(268),
    [anon_sym_ATmethod] = ACTIONS(268),
    [anon_sym_ATparam] = ACTIONS(268),
    [anon_sym_ATproperty] = ACTIONS(270),
    [anon_sym_ATproperty_DASHread] = ACTIONS(268),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(268),
    [anon_sym_ATreturn] = ACTIONS(268),
    [anon_sym_ATsee] = ACTIONS(268),
    [anon_sym_ATthrows] = ACTIONS(268),
    [anon_sym_ATvar] = ACTIONS(268),
    [anon_sym_ATdeprecated] = ACTIONS(268),
    [anon_sym_ATsince] = ACTIONS(268),
    [anon_sym_ATversion] = ACTIONS(268),
    [anon_sym_ATafter] = ACTIONS(270),
    [anon_sym_ATafterClass] = ACTIONS(268),
    [anon_sym_ATannotation] = ACTIONS(268),
    [anon_sym_ATbackupGlobals] = ACTIONS(268),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(268),
    [anon_sym_ATbefore] = ACTIONS(270),
    [anon_sym_ATbeforeClass] = ACTIONS(268),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(270),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(268),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(268),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(268),
    [anon_sym_ATcovers] = ACTIONS(270),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(270),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(268),
    [anon_sym_ATcoversNothing] = ACTIONS(268),
    [anon_sym_ATdataProvider] = ACTIONS(268),
    [anon_sym_ATdepends] = ACTIONS(270),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(268),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(268),
    [anon_sym_ATgroup] = ACTIONS(268),
    [anon_sym_ATlarge] = ACTIONS(268),
    [anon_sym_ATmedium] = ACTIONS(268),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(268),
    [anon_sym_ATrequires] = ACTIONS(270),
    [anon_sym_ATrequiresusages] = ACTIONS(268),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(268),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(268),
    [anon_sym_ATsmall] = ACTIONS(268),
    [anon_sym_ATtest] = ACTIONS(270),
    [anon_sym_ATtestWith] = ACTIONS(268),
    [anon_sym_ATtestdox] = ACTIONS(268),
    [anon_sym_ATticket] = ACTIONS(268),
    [sym__end] = ACTIONS(268),
    [sym__text_after_type] = ACTIONS(181),
  },
  [39] = {
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_ATinheritdoc] = ACTIONS(272),
    [anon_sym_ATinheritDoc] = ACTIONS(272),
    [anon_sym_ATapi] = ACTIONS(272),
    [anon_sym_ATfilesource] = ACTIONS(272),
    [anon_sym_ATignore] = ACTIONS(272),
    [anon_sym_ATinternal] = ACTIONS(272),
    [anon_sym_ATcategory] = ACTIONS(272),
    [anon_sym_ATcopyright] = ACTIONS(272),
    [anon_sym_ATtodo] = ACTIONS(272),
    [anon_sym_ATexample] = ACTIONS(272),
    [anon_sym_ATlicense] = ACTIONS(272),
    [anon_sym_ATpackage] = ACTIONS(272),
    [anon_sym_ATsource] = ACTIONS(272),
    [anon_sym_ATsubpackage] = ACTIONS(272),
    [anon_sym_ATuses] = ACTIONS(272),
    [anon_sym_ATauthor] = ACTIONS(272),
    [anon_sym_ATglobal] = ACTIONS(272),
    [anon_sym_ATlink] = ACTIONS(272),
    [anon_sym_ATmethod] = ACTIONS(272),
    [anon_sym_ATparam] = ACTIONS(272),
    [anon_sym_ATproperty] = ACTIONS(274),
    [anon_sym_ATproperty_DASHread] = ACTIONS(272),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(272),
    [anon_sym_ATreturn] = ACTIONS(272),
    [anon_sym_ATsee] = ACTIONS(272),
    [anon_sym_ATthrows] = ACTIONS(272),
    [anon_sym_ATvar] = ACTIONS(272),
    [anon_sym_ATdeprecated] = ACTIONS(272),
    [anon_sym_ATsince] = ACTIONS(272),
    [anon_sym_ATversion] = ACTIONS(272),
    [anon_sym_ATafter] = ACTIONS(274),
    [anon_sym_ATafterClass] = ACTIONS(272),
    [anon_sym_ATannotation] = ACTIONS(272),
    [anon_sym_ATbackupGlobals] = ACTIONS(272),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(272),
    [anon_sym_ATbefore] = ACTIONS(274),
    [anon_sym_ATbeforeClass] = ACTIONS(272),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(274),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(272),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(272),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(272),
    [anon_sym_ATcovers] = ACTIONS(274),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(274),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(272),
    [anon_sym_ATcoversNothing] = ACTIONS(272),
    [anon_sym_ATdataProvider] = ACTIONS(272),
    [anon_sym_ATdepends] = ACTIONS(274),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(272),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(272),
    [anon_sym_ATgroup] = ACTIONS(272),
    [anon_sym_ATlarge] = ACTIONS(272),
    [anon_sym_ATmedium] = ACTIONS(272),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(272),
    [anon_sym_ATrequires] = ACTIONS(274),
    [anon_sym_ATrequiresusages] = ACTIONS(272),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(272),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(272),
    [anon_sym_ATsmall] = ACTIONS(272),
    [anon_sym_ATtest] = ACTIONS(274),
    [anon_sym_ATtestWith] = ACTIONS(272),
    [anon_sym_ATtestdox] = ACTIONS(272),
    [anon_sym_ATticket] = ACTIONS(272),
    [anon_sym_PIPE] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(272),
    [sym__end] = ACTIONS(272),
    [sym__text_after_type] = ACTIONS(272),
  },
  [40] = {
    [sym_inline_tag] = STATE(52),
    [aux_sym__description_after_type_repeat1] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(276),
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
    [sym__end] = ACTIONS(279),
    [sym__text_after_type] = ACTIONS(283),
  },
  [41] = {
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_ATinheritdoc] = ACTIONS(217),
    [anon_sym_ATinheritDoc] = ACTIONS(217),
    [anon_sym_ATapi] = ACTIONS(217),
    [anon_sym_ATfilesource] = ACTIONS(217),
    [anon_sym_ATignore] = ACTIONS(217),
    [anon_sym_ATinternal] = ACTIONS(217),
    [anon_sym_ATcategory] = ACTIONS(217),
    [anon_sym_ATcopyright] = ACTIONS(217),
    [anon_sym_ATtodo] = ACTIONS(217),
    [anon_sym_ATexample] = ACTIONS(217),
    [anon_sym_ATlicense] = ACTIONS(217),
    [anon_sym_ATpackage] = ACTIONS(217),
    [anon_sym_ATsource] = ACTIONS(217),
    [anon_sym_ATsubpackage] = ACTIONS(217),
    [anon_sym_ATuses] = ACTIONS(217),
    [anon_sym_ATauthor] = ACTIONS(217),
    [anon_sym_ATglobal] = ACTIONS(217),
    [anon_sym_ATlink] = ACTIONS(217),
    [anon_sym_ATmethod] = ACTIONS(217),
    [anon_sym_ATparam] = ACTIONS(217),
    [anon_sym_ATproperty] = ACTIONS(219),
    [anon_sym_ATproperty_DASHread] = ACTIONS(217),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(217),
    [anon_sym_ATreturn] = ACTIONS(217),
    [anon_sym_ATsee] = ACTIONS(217),
    [anon_sym_ATthrows] = ACTIONS(217),
    [anon_sym_ATvar] = ACTIONS(217),
    [anon_sym_ATdeprecated] = ACTIONS(217),
    [anon_sym_ATsince] = ACTIONS(217),
    [anon_sym_ATversion] = ACTIONS(217),
    [anon_sym_ATafter] = ACTIONS(219),
    [anon_sym_ATafterClass] = ACTIONS(217),
    [anon_sym_ATannotation] = ACTIONS(217),
    [anon_sym_ATbackupGlobals] = ACTIONS(217),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(217),
    [anon_sym_ATbefore] = ACTIONS(219),
    [anon_sym_ATbeforeClass] = ACTIONS(217),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(219),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(217),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(217),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(217),
    [anon_sym_ATcovers] = ACTIONS(219),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(219),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(217),
    [anon_sym_ATcoversNothing] = ACTIONS(217),
    [anon_sym_ATdataProvider] = ACTIONS(217),
    [anon_sym_ATdepends] = ACTIONS(219),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(217),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(217),
    [anon_sym_ATgroup] = ACTIONS(217),
    [anon_sym_ATlarge] = ACTIONS(217),
    [anon_sym_ATmedium] = ACTIONS(217),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(217),
    [anon_sym_ATrequires] = ACTIONS(219),
    [anon_sym_ATrequiresusages] = ACTIONS(217),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(217),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(217),
    [anon_sym_ATsmall] = ACTIONS(217),
    [anon_sym_ATtest] = ACTIONS(219),
    [anon_sym_ATtestWith] = ACTIONS(217),
    [anon_sym_ATtestdox] = ACTIONS(217),
    [anon_sym_ATticket] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [sym__end] = ACTIONS(217),
    [sym__text_after_type] = ACTIONS(217),
  },
  [42] = {
    [sym_inline_tag] = STATE(49),
    [aux_sym__description_not_version_repeat1] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_ATinheritdoc] = ACTIONS(289),
    [anon_sym_ATinheritDoc] = ACTIONS(289),
    [anon_sym_ATapi] = ACTIONS(289),
    [anon_sym_ATfilesource] = ACTIONS(289),
    [anon_sym_ATignore] = ACTIONS(289),
    [anon_sym_ATinternal] = ACTIONS(289),
    [anon_sym_ATcategory] = ACTIONS(289),
    [anon_sym_ATcopyright] = ACTIONS(289),
    [anon_sym_ATtodo] = ACTIONS(289),
    [anon_sym_ATexample] = ACTIONS(289),
    [anon_sym_ATlicense] = ACTIONS(289),
    [anon_sym_ATpackage] = ACTIONS(289),
    [anon_sym_ATsource] = ACTIONS(289),
    [anon_sym_ATsubpackage] = ACTIONS(289),
    [anon_sym_ATuses] = ACTIONS(289),
    [anon_sym_ATauthor] = ACTIONS(289),
    [anon_sym_ATglobal] = ACTIONS(289),
    [anon_sym_ATlink] = ACTIONS(289),
    [anon_sym_ATmethod] = ACTIONS(289),
    [anon_sym_ATparam] = ACTIONS(289),
    [anon_sym_ATproperty] = ACTIONS(291),
    [anon_sym_ATproperty_DASHread] = ACTIONS(289),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(289),
    [anon_sym_ATreturn] = ACTIONS(289),
    [anon_sym_ATsee] = ACTIONS(289),
    [anon_sym_ATthrows] = ACTIONS(289),
    [anon_sym_ATvar] = ACTIONS(289),
    [anon_sym_ATdeprecated] = ACTIONS(289),
    [anon_sym_ATsince] = ACTIONS(289),
    [anon_sym_ATversion] = ACTIONS(289),
    [anon_sym_ATafter] = ACTIONS(291),
    [anon_sym_ATafterClass] = ACTIONS(289),
    [anon_sym_ATannotation] = ACTIONS(289),
    [anon_sym_ATbackupGlobals] = ACTIONS(289),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(289),
    [anon_sym_ATbefore] = ACTIONS(291),
    [anon_sym_ATbeforeClass] = ACTIONS(289),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(291),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(289),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(289),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(289),
    [anon_sym_ATcovers] = ACTIONS(291),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(291),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(289),
    [anon_sym_ATcoversNothing] = ACTIONS(289),
    [anon_sym_ATdataProvider] = ACTIONS(289),
    [anon_sym_ATdepends] = ACTIONS(291),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(289),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(289),
    [anon_sym_ATgroup] = ACTIONS(289),
    [anon_sym_ATlarge] = ACTIONS(289),
    [anon_sym_ATmedium] = ACTIONS(289),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(289),
    [anon_sym_ATrequires] = ACTIONS(291),
    [anon_sym_ATrequiresusages] = ACTIONS(289),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(289),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(289),
    [anon_sym_ATsmall] = ACTIONS(289),
    [anon_sym_ATtest] = ACTIONS(291),
    [anon_sym_ATtestWith] = ACTIONS(289),
    [anon_sym_ATtestdox] = ACTIONS(289),
    [anon_sym_ATticket] = ACTIONS(289),
    [sym__end] = ACTIONS(289),
    [sym__text_not_version] = ACTIONS(293),
  },
  [43] = {
    [sym_inline_tag] = STATE(45),
    [aux_sym_description_repeat1] = STATE(45),
    [anon_sym_LBRACE] = ACTIONS(5),
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
    [sym__end] = ACTIONS(296),
    [sym_text] = ACTIONS(300),
  },
  [44] = {
    [sym_inline_tag] = STATE(49),
    [aux_sym__description_not_version_repeat1] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_ATinheritdoc] = ACTIONS(302),
    [anon_sym_ATinheritDoc] = ACTIONS(302),
    [anon_sym_ATapi] = ACTIONS(302),
    [anon_sym_ATfilesource] = ACTIONS(302),
    [anon_sym_ATignore] = ACTIONS(302),
    [anon_sym_ATinternal] = ACTIONS(302),
    [anon_sym_ATcategory] = ACTIONS(302),
    [anon_sym_ATcopyright] = ACTIONS(302),
    [anon_sym_ATtodo] = ACTIONS(302),
    [anon_sym_ATexample] = ACTIONS(302),
    [anon_sym_ATlicense] = ACTIONS(302),
    [anon_sym_ATpackage] = ACTIONS(302),
    [anon_sym_ATsource] = ACTIONS(302),
    [anon_sym_ATsubpackage] = ACTIONS(302),
    [anon_sym_ATuses] = ACTIONS(302),
    [anon_sym_ATauthor] = ACTIONS(302),
    [anon_sym_ATglobal] = ACTIONS(302),
    [anon_sym_ATlink] = ACTIONS(302),
    [anon_sym_ATmethod] = ACTIONS(302),
    [anon_sym_ATparam] = ACTIONS(302),
    [anon_sym_ATproperty] = ACTIONS(304),
    [anon_sym_ATproperty_DASHread] = ACTIONS(302),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(302),
    [anon_sym_ATreturn] = ACTIONS(302),
    [anon_sym_ATsee] = ACTIONS(302),
    [anon_sym_ATthrows] = ACTIONS(302),
    [anon_sym_ATvar] = ACTIONS(302),
    [anon_sym_ATdeprecated] = ACTIONS(302),
    [anon_sym_ATsince] = ACTIONS(302),
    [anon_sym_ATversion] = ACTIONS(302),
    [anon_sym_ATafter] = ACTIONS(304),
    [anon_sym_ATafterClass] = ACTIONS(302),
    [anon_sym_ATannotation] = ACTIONS(302),
    [anon_sym_ATbackupGlobals] = ACTIONS(302),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(302),
    [anon_sym_ATbefore] = ACTIONS(304),
    [anon_sym_ATbeforeClass] = ACTIONS(302),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(304),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(302),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(302),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(302),
    [anon_sym_ATcovers] = ACTIONS(304),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(304),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(302),
    [anon_sym_ATcoversNothing] = ACTIONS(302),
    [anon_sym_ATdataProvider] = ACTIONS(302),
    [anon_sym_ATdepends] = ACTIONS(304),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(302),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(302),
    [anon_sym_ATgroup] = ACTIONS(302),
    [anon_sym_ATlarge] = ACTIONS(302),
    [anon_sym_ATmedium] = ACTIONS(302),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(302),
    [anon_sym_ATrequires] = ACTIONS(304),
    [anon_sym_ATrequiresusages] = ACTIONS(302),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(302),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(302),
    [anon_sym_ATsmall] = ACTIONS(302),
    [anon_sym_ATtest] = ACTIONS(304),
    [anon_sym_ATtestWith] = ACTIONS(302),
    [anon_sym_ATtestdox] = ACTIONS(302),
    [anon_sym_ATticket] = ACTIONS(302),
    [sym__end] = ACTIONS(302),
    [sym__text_not_version] = ACTIONS(127),
  },
  [45] = {
    [sym_inline_tag] = STATE(45),
    [aux_sym_description_repeat1] = STATE(45),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_ATinheritdoc] = ACTIONS(309),
    [anon_sym_ATinheritDoc] = ACTIONS(309),
    [anon_sym_ATapi] = ACTIONS(309),
    [anon_sym_ATfilesource] = ACTIONS(309),
    [anon_sym_ATignore] = ACTIONS(309),
    [anon_sym_ATinternal] = ACTIONS(309),
    [anon_sym_ATcategory] = ACTIONS(309),
    [anon_sym_ATcopyright] = ACTIONS(309),
    [anon_sym_ATtodo] = ACTIONS(309),
    [anon_sym_ATexample] = ACTIONS(309),
    [anon_sym_ATlicense] = ACTIONS(309),
    [anon_sym_ATpackage] = ACTIONS(309),
    [anon_sym_ATsource] = ACTIONS(309),
    [anon_sym_ATsubpackage] = ACTIONS(309),
    [anon_sym_ATuses] = ACTIONS(309),
    [anon_sym_ATauthor] = ACTIONS(309),
    [anon_sym_ATglobal] = ACTIONS(309),
    [anon_sym_ATlink] = ACTIONS(309),
    [anon_sym_ATmethod] = ACTIONS(309),
    [anon_sym_ATparam] = ACTIONS(309),
    [anon_sym_ATproperty] = ACTIONS(311),
    [anon_sym_ATproperty_DASHread] = ACTIONS(309),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(309),
    [anon_sym_ATreturn] = ACTIONS(309),
    [anon_sym_ATsee] = ACTIONS(309),
    [anon_sym_ATthrows] = ACTIONS(309),
    [anon_sym_ATvar] = ACTIONS(309),
    [anon_sym_ATdeprecated] = ACTIONS(309),
    [anon_sym_ATsince] = ACTIONS(309),
    [anon_sym_ATversion] = ACTIONS(309),
    [anon_sym_ATafter] = ACTIONS(311),
    [anon_sym_ATafterClass] = ACTIONS(309),
    [anon_sym_ATannotation] = ACTIONS(309),
    [anon_sym_ATbackupGlobals] = ACTIONS(309),
    [anon_sym_ATbackupStaticAttributes] = ACTIONS(309),
    [anon_sym_ATbefore] = ACTIONS(311),
    [anon_sym_ATbeforeClass] = ACTIONS(309),
    [anon_sym_ATcodeCoverageIgnore] = ACTIONS(311),
    [anon_sym_ATcodeCoverageIgnore_STAR] = ACTIONS(309),
    [anon_sym_ATcodeCoverageIgnoreEnd] = ACTIONS(309),
    [anon_sym_ATcodeCoverageIgnoreStart] = ACTIONS(309),
    [anon_sym_ATcovers] = ACTIONS(311),
    [anon_sym_ATcoversDefaultClass] = ACTIONS(311),
    [anon_sym_ATcoversDefaultClasstoshortenannotations] = ACTIONS(309),
    [anon_sym_ATcoversNothing] = ACTIONS(309),
    [anon_sym_ATdataProvider] = ACTIONS(309),
    [anon_sym_ATdepends] = ACTIONS(311),
    [anon_sym_ATdependsannotationtoexpressdependencies] = ACTIONS(309),
    [anon_sym_ATdoesNotPerformAssertions] = ACTIONS(309),
    [anon_sym_ATgroup] = ACTIONS(309),
    [anon_sym_ATlarge] = ACTIONS(309),
    [anon_sym_ATmedium] = ACTIONS(309),
    [anon_sym_ATpreserveGlobalState] = ACTIONS(309),
    [anon_sym_ATrequires] = ACTIONS(311),
    [anon_sym_ATrequiresusages] = ACTIONS(309),
    [anon_sym_ATrunInSeparateProcess] = ACTIONS(309),
    [anon_sym_ATrunTestsInSeparateProcesses] = ACTIONS(309),
    [anon_sym_ATsmall] = ACTIONS(309),
    [anon_sym_ATtest] = ACTIONS(311),
    [anon_sym_ATtestWith] = ACTIONS(309),
    [anon_sym_ATtestdox] = ACTIONS(309),
    [anon_sym_ATticket] = ACTIONS(309),
    [sym__end] = ACTIONS(309),
    [sym_text] = ACTIONS(313),
  },
  [46] = {
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_ATinheritdoc] = ACTIONS(163),
    [anon_sym_ATinheritDoc] = ACTIONS(163),
    [anon_sym_ATapi] = ACTIONS(163),
    [anon_sym_ATfilesource] = ACTIONS(163),
    [anon_sym_ATignore] = ACTIONS(163),
    [anon_sym_ATinternal] = ACTIONS(163),
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
    [anon_sym_ATlink] = ACTIONS(163),
    [anon_sym_ATmethod] = ACTIONS(163),
    [anon_sym_ATparam] = ACTIONS(163),
    [anon_sym_ATproperty] = ACTIONS(165),
    [anon_sym_ATproperty_DASHread] = ACTIONS(163),
    [anon_sym_ATproperty_DASHwrite] = ACTIONS(163),
    [anon_sym_ATreturn] = ACTIONS(163),
    [anon_sym_ATsee] = ACTIONS(163),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(163),
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
    [sym__end] = ACTIONS(163),
    [sym_text] = ACTIONS(163),
  },
  [47] = {
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
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(316),
    [sym__end] = ACTIONS(316),
  },
  [48] = {
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
    [sym__end] = ACTIONS(316),
    [sym_text] = ACTIONS(316),
  },
  [49] = {
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
    [sym__text_not_version] = ACTIONS(320),
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
    [sym__text_after_type] = ACTIONS(332),
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
    [sym__text_after_type] = ACTIONS(336),
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
    [sym_text] = ACTIONS(340),
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
  [57] = {
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
  [58] = {
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
    [sym__text_not_version] = ACTIONS(336),
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
    ACTIONS(226), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(224), 54,
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
  [207] = 2,
    ACTIONS(211), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(209), 54,
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
  [343] = 2,
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
  [751] = 2,
    ACTIONS(262), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(260), 54,
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
    ACTIONS(234), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(232), 54,
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
  [955] = 2,
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
  [1295] = 2,
    ACTIONS(215), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(213), 54,
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
    ACTIONS(195), 9,
      anon_sym_ATproperty,
      anon_sym_ATafter,
      anon_sym_ATbefore,
      anon_sym_ATcodeCoverageIgnore,
      anon_sym_ATcovers,
      anon_sym_ATcoversDefaultClass,
      anon_sym_ATdepends,
      anon_sym_ATrequires,
      anon_sym_ATtest,
    ACTIONS(193), 54,
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
  [1635] = 2,
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
  [1703] = 2,
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
    STATE(114), 1,
      sym_qualified_name,
    STATE(146), 1,
      sym_parameter,
    STATE(148), 1,
      sym_variable_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(151), 2,
      sym__type,
      sym_union_type,
    STATE(122), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(134), 4,
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
    STATE(114), 1,
      sym_qualified_name,
    STATE(148), 1,
      sym_variable_name,
    STATE(149), 1,
      sym_parameter,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(151), 2,
      sym__type,
      sym_union_type,
    STATE(122), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(134), 4,
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
    STATE(34), 1,
      sym_variable_name,
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(158), 2,
      sym__type,
      sym_union_type,
    STATE(122), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(134), 4,
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
    STATE(91), 1,
      sym_static,
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(184), 2,
      sym__type,
      sym_union_type,
    STATE(122), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(134), 4,
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
    STATE(15), 1,
      sym_qualified_name,
    STATE(186), 1,
      sym_namespace_name,
    STATE(193), 1,
      sym_namespace_name_as_prefix,
    STATE(17), 2,
      sym__type,
      sym_union_type,
    STATE(9), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(21), 4,
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
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(187), 2,
      sym__type,
      sym_union_type,
    STATE(122), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(134), 4,
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
    STATE(15), 1,
      sym_qualified_name,
    STATE(186), 1,
      sym_namespace_name,
    STATE(193), 1,
      sym_namespace_name_as_prefix,
    STATE(30), 2,
      sym__type,
      sym_union_type,
    STATE(9), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(21), 4,
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
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(156), 2,
      sym__type,
      sym_union_type,
    STATE(122), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(134), 4,
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
    ACTIONS(454), 1,
      sym_name,
    ACTIONS(456), 1,
      anon_sym_list,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    STATE(15), 1,
      sym_qualified_name,
    STATE(186), 1,
      sym_namespace_name,
    STATE(193), 1,
      sym_namespace_name_as_prefix,
    STATE(117), 2,
      sym__type,
      sym_union_type,
    STATE(9), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(21), 4,
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
  [2366] = 12,
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
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(159), 2,
      sym__type,
      sym_union_type,
    STATE(122), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(134), 4,
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
  [2421] = 11,
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
    STATE(15), 1,
      sym_qualified_name,
    STATE(186), 1,
      sym_namespace_name,
    STATE(193), 1,
      sym_namespace_name_as_prefix,
    STATE(9), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(41), 4,
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
  [2472] = 11,
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
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(122), 4,
      sym__regular_types,
      sym_named_type,
      sym_optional_type,
      sym_primitive_type,
    STATE(145), 4,
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
  [2523] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(195), 4,
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
  [2565] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(168), 4,
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
  [2607] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(189), 4,
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
  [2649] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(157), 4,
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
  [2691] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(197), 4,
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
  [2733] = 9,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(442), 1,
      anon_sym_QMARK,
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(150), 4,
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
  [2775] = 8,
    ACTIONS(434), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    STATE(114), 1,
      sym_qualified_name,
    STATE(185), 1,
      sym_namespace_name_as_prefix,
    STATE(186), 1,
      sym_namespace_name,
    STATE(119), 2,
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
  [2812] = 4,
    ACTIONS(462), 1,
      sym_name,
    ACTIONS(467), 2,
      anon_sym_BSLASH,
      anon_sym_QMARK,
    ACTIONS(171), 3,
      anon_sym_LT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_PIPE,
    ACTIONS(465), 14,
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
  [2841] = 8,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(454), 1,
      sym_name,
    STATE(15), 1,
      sym_qualified_name,
    STATE(186), 1,
      sym_namespace_name,
    STATE(193), 1,
      sym_namespace_name_as_prefix,
    STATE(14), 2,
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
  [2878] = 8,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      aux_sym_version_token2,
    ACTIONS(127), 1,
      sym__text_not_version,
    STATE(29), 1,
      sym_version,
    STATE(44), 1,
      aux_sym__description_not_version_repeat1,
    STATE(49), 1,
      sym_inline_tag,
    STATE(71), 1,
      sym__description_not_version,
    ACTIONS(123), 3,
      aux_sym_version_token1,
      anon_sym_ATpackage_version_AT,
      sym__version_vector,
  [2905] = 8,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      aux_sym_version_token2,
    ACTIONS(127), 1,
      sym__text_not_version,
    STATE(36), 1,
      sym_version,
    STATE(44), 1,
      aux_sym__description_not_version_repeat1,
    STATE(49), 1,
      sym_inline_tag,
    STATE(70), 1,
      sym__description_not_version,
    ACTIONS(123), 3,
      aux_sym_version_token1,
      anon_sym_ATpackage_version_AT,
      sym__version_vector,
  [2932] = 3,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    STATE(161), 1,
      aux_sym_namespace_name_repeat1,
    ACTIONS(129), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [2948] = 5,
    ACTIONS(471), 1,
      anon_sym_ATinternal,
    ACTIONS(473), 1,
      anon_sym_ATlink,
    ACTIONS(475), 1,
      anon_sym_ATsee,
    ACTIONS(469), 2,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
    STATE(200), 3,
      sym__inline_internal_tag,
      sym__inline_link_tag,
      sym__inline_see_tag,
  [2967] = 5,
    ACTIONS(471), 1,
      anon_sym_ATinternal,
    ACTIONS(473), 1,
      anon_sym_ATlink,
    ACTIONS(475), 1,
      anon_sym_ATsee,
    ACTIONS(477), 2,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
    STATE(192), 3,
      sym__inline_internal_tag,
      sym__inline_link_tag,
      sym__inline_see_tag,
  [2986] = 5,
    ACTIONS(471), 1,
      anon_sym_ATinternal,
    ACTIONS(473), 1,
      anon_sym_ATlink,
    ACTIONS(475), 1,
      anon_sym_ATsee,
    ACTIONS(479), 2,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
    STATE(204), 3,
      sym__inline_internal_tag,
      sym__inline_link_tag,
      sym__inline_see_tag,
  [3005] = 5,
    ACTIONS(471), 1,
      anon_sym_ATinternal,
    ACTIONS(473), 1,
      anon_sym_ATlink,
    ACTIONS(475), 1,
      anon_sym_ATsee,
    ACTIONS(481), 2,
      anon_sym_ATinheritdoc,
      anon_sym_ATinheritDoc,
    STATE(198), 3,
      sym__inline_internal_tag,
      sym__inline_link_tag,
      sym__inline_see_tag,
  [3024] = 1,
    ACTIONS(129), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3034] = 1,
    ACTIONS(171), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3044] = 1,
    ACTIONS(163), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3054] = 7,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      sym__text_after_type,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      sym_variable_name,
    STATE(38), 1,
      aux_sym__description_after_type_repeat1,
    STATE(52), 1,
      sym_inline_tag,
    STATE(60), 1,
      sym__description_after_type,
  [3076] = 7,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(483), 1,
      sym_name,
    ACTIONS(485), 1,
      sym_uri,
    STATE(125), 1,
      sym_qualified_name,
    STATE(186), 1,
      sym_namespace_name,
    STATE(201), 1,
      sym_namespace_name_as_prefix,
  [3098] = 1,
    ACTIONS(167), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_COMMA,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3108] = 7,
    ACTIONS(438), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym_namespace_name_as_prefix_token1,
    ACTIONS(483), 1,
      sym_name,
    ACTIONS(487), 1,
      sym_uri,
    STATE(11), 1,
      sym_qualified_name,
    STATE(186), 1,
      sym_namespace_name,
    STATE(199), 1,
      sym_namespace_name_as_prefix,
  [3130] = 6,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    ACTIONS(493), 1,
      sym__text_in_inline_tag,
    STATE(126), 1,
      aux_sym__description_in_inline_tag_with_nesting_repeat1,
    STATE(140), 1,
      sym_inline_tag,
    STATE(176), 1,
      sym__description_in_inline_tag_with_nesting,
  [3149] = 4,
    ACTIONS(495), 1,
      anon_sym_LT,
    ACTIONS(497), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(128), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(136), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3164] = 5,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    ACTIONS(504), 1,
      sym__text_in_inline_tag,
    STATE(123), 1,
      aux_sym__description_in_inline_tag_with_nesting_repeat1,
    STATE(140), 1,
      sym_inline_tag,
  [3180] = 3,
    ACTIONS(507), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(124), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(144), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3192] = 5,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    ACTIONS(512), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(514), 1,
      sym__text_in_inline_tag,
    STATE(137), 1,
      aux_sym__description_in_inline_tag_repeat1,
    STATE(177), 1,
      sym__description_in_inline_tag,
  [3208] = 5,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(493), 1,
      sym__text_in_inline_tag,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      aux_sym__description_in_inline_tag_with_nesting_repeat1,
    STATE(140), 1,
      sym_inline_tag,
  [3224] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_text,
    STATE(63), 1,
      sym_description,
    STATE(43), 2,
      sym_inline_tag,
      aux_sym_description_repeat1,
  [3238] = 3,
    ACTIONS(518), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(124), 1,
      aux_sym__phpdoc_array_types_repeat1,
    ACTIONS(157), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3250] = 4,
    ACTIONS(514), 1,
      sym__text_in_inline_tag,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      aux_sym__description_in_inline_tag_repeat1,
    STATE(190), 1,
      sym__description_in_inline_tag,
  [3263] = 3,
    ACTIONS(522), 1,
      anon_sym_PIPE,
    STATE(130), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(217), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3274] = 3,
    ACTIONS(525), 1,
      anon_sym_PIPE,
    STATE(130), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(183), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3285] = 4,
    ACTIONS(514), 1,
      sym__text_in_inline_tag,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      aux_sym__description_in_inline_tag_repeat1,
    STATE(182), 1,
      sym__description_in_inline_tag,
  [3298] = 4,
    ACTIONS(514), 1,
      sym__text_in_inline_tag,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      aux_sym__description_in_inline_tag_repeat1,
    STATE(191), 1,
      sym__description_in_inline_tag,
  [3311] = 3,
    ACTIONS(525), 1,
      anon_sym_PIPE,
    STATE(131), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(197), 2,
      sym_name,
      anon_sym_DOLLAR,
  [3322] = 2,
    ACTIONS(533), 1,
      anon_sym_EQ,
    ACTIONS(531), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3330] = 1,
    ACTIONS(163), 3,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
      anon_sym_LPAREN_RPAREN,
  [3336] = 3,
    ACTIONS(514), 1,
      sym__text_in_inline_tag,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      aux_sym__description_in_inline_tag_repeat1,
  [3346] = 3,
    ACTIONS(537), 1,
      sym_name,
    ACTIONS(539), 1,
      anon_sym_BSLASH,
    STATE(172), 1,
      sym_namespace_name,
  [3356] = 1,
    ACTIONS(336), 3,
      sym__text_in_inline_tag,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3362] = 1,
    ACTIONS(541), 3,
      sym__text_in_inline_tag,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3368] = 3,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_parameters_repeat1,
  [3378] = 1,
    ACTIONS(264), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3384] = 3,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_parameters_repeat1,
  [3394] = 3,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    ACTIONS(554), 1,
      sym__text_in_inline_tag,
    STATE(144), 1,
      aux_sym__description_in_inline_tag_repeat1,
  [3404] = 1,
    ACTIONS(217), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3410] = 3,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_parameters_repeat1,
  [3420] = 1,
    ACTIONS(272), 3,
      sym_name,
      anon_sym_PIPE,
      anon_sym_DOLLAR,
  [3426] = 2,
    ACTIONS(561), 1,
      anon_sym_EQ,
    ACTIONS(559), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3434] = 1,
    ACTIONS(546), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3439] = 2,
    ACTIONS(563), 1,
      anon_sym_GT,
    ACTIONS(565), 1,
      anon_sym_COMMA,
  [3446] = 2,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    STATE(135), 1,
      sym_variable_name,
  [3453] = 2,
    ACTIONS(567), 1,
      sym_name,
    STATE(172), 1,
      sym_namespace_name,
  [3460] = 2,
    ACTIONS(570), 1,
      anon_sym_BSLASH,
    STATE(153), 1,
      aux_sym_namespace_name_repeat1,
  [3467] = 2,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_parameters,
  [3474] = 1,
    ACTIONS(575), 2,
      sym__text_in_inline_tag,
      anon_sym_RBRACE,
  [3479] = 2,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    STATE(85), 1,
      sym_variable_name,
  [3486] = 2,
    ACTIONS(577), 1,
      anon_sym_GT,
    ACTIONS(579), 1,
      anon_sym_COMMA,
  [3493] = 2,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym_variable_name,
  [3500] = 2,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    STATE(19), 1,
      sym_variable_name,
  [3507] = 2,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    STATE(161), 1,
      aux_sym_namespace_name_repeat1,
  [3514] = 2,
    ACTIONS(581), 1,
      anon_sym_BSLASH,
    STATE(153), 1,
      aux_sym_namespace_name_repeat1,
  [3521] = 2,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_parameters,
  [3528] = 2,
    ACTIONS(584), 1,
      sym_name,
    STATE(173), 1,
      sym_namespace_name,
  [3535] = 1,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3540] = 1,
    ACTIONS(589), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3545] = 1,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
  [3549] = 1,
    ACTIONS(593), 1,
      sym_default_value,
  [3553] = 1,
    ACTIONS(577), 1,
      anon_sym_GT,
  [3557] = 1,
    ACTIONS(595), 1,
      sym_default_value,
  [3561] = 1,
    ACTIONS(597), 1,
      anon_sym_GT,
  [3565] = 1,
    ACTIONS(599), 1,
      sym_name,
  [3569] = 1,
    ACTIONS(601), 1,
      anon_sym_BSLASH,
  [3573] = 1,
    ACTIONS(603), 1,
      anon_sym_BSLASH,
  [3577] = 1,
    ACTIONS(605), 1,
      sym_name,
  [3581] = 1,
    ACTIONS(607), 1,
      sym_email_address,
  [3585] = 1,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
  [3589] = 1,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
  [3593] = 1,
    ACTIONS(611), 1,
      sym_name,
  [3597] = 1,
    ACTIONS(613), 1,
      sym__version_vector,
  [3601] = 1,
    ACTIONS(615), 1,
      anon_sym_BSLASH,
  [3605] = 1,
    ACTIONS(617), 1,
      ts_builtin_sym_end,
  [3609] = 1,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
  [3613] = 1,
    ACTIONS(621), 1,
      sym_name,
  [3617] = 1,
    ACTIONS(623), 1,
      sym_name,
  [3621] = 1,
    ACTIONS(625), 1,
      sym_name,
  [3625] = 1,
    ACTIONS(627), 1,
      anon_sym_BSLASH,
  [3629] = 1,
    ACTIONS(629), 1,
      sym_name,
  [3633] = 1,
    ACTIONS(631), 1,
      ts_builtin_sym_end,
  [3637] = 1,
    ACTIONS(633), 1,
      anon_sym_GT,
  [3641] = 1,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
  [3645] = 1,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
  [3649] = 1,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
  [3653] = 1,
    ACTIONS(641), 1,
      sym_name,
  [3657] = 1,
    ACTIONS(643), 1,
      sym_name,
  [3661] = 1,
    ACTIONS(563), 1,
      anon_sym_GT,
  [3665] = 1,
    ACTIONS(645), 1,
      sym_name,
  [3669] = 1,
    ACTIONS(647), 1,
      anon_sym_GT,
  [3673] = 1,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
  [3677] = 1,
    ACTIONS(651), 1,
      sym_name,
  [3681] = 1,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
  [3685] = 1,
    ACTIONS(655), 1,
      sym_name,
  [3689] = 1,
    ACTIONS(657), 1,
      anon_sym_LT,
  [3693] = 1,
    ACTIONS(659), 1,
      sym_uri,
  [3697] = 1,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
  [3701] = 1,
    ACTIONS(663), 1,
      ts_builtin_sym_end,
  [3705] = 1,
    ACTIONS(665), 1,
      sym_uri,
  [3709] = 1,
    ACTIONS(667), 1,
      sym_author_name,
  [3713] = 1,
    ACTIONS(669), 1,
      anon_sym_LT,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(59)] = 0,
  [SMALL_STATE(60)] = 71,
  [SMALL_STATE(61)] = 139,
  [SMALL_STATE(62)] = 207,
  [SMALL_STATE(63)] = 275,
  [SMALL_STATE(64)] = 343,
  [SMALL_STATE(65)] = 411,
  [SMALL_STATE(66)] = 479,
  [SMALL_STATE(67)] = 547,
  [SMALL_STATE(68)] = 615,
  [SMALL_STATE(69)] = 683,
  [SMALL_STATE(70)] = 751,
  [SMALL_STATE(71)] = 819,
  [SMALL_STATE(72)] = 887,
  [SMALL_STATE(73)] = 955,
  [SMALL_STATE(74)] = 1023,
  [SMALL_STATE(75)] = 1091,
  [SMALL_STATE(76)] = 1159,
  [SMALL_STATE(77)] = 1227,
  [SMALL_STATE(78)] = 1295,
  [SMALL_STATE(79)] = 1363,
  [SMALL_STATE(80)] = 1431,
  [SMALL_STATE(81)] = 1499,
  [SMALL_STATE(82)] = 1567,
  [SMALL_STATE(83)] = 1635,
  [SMALL_STATE(84)] = 1703,
  [SMALL_STATE(85)] = 1771,
  [SMALL_STATE(86)] = 1839,
  [SMALL_STATE(87)] = 1906,
  [SMALL_STATE(88)] = 1970,
  [SMALL_STATE(89)] = 2031,
  [SMALL_STATE(90)] = 2091,
  [SMALL_STATE(91)] = 2146,
  [SMALL_STATE(92)] = 2201,
  [SMALL_STATE(93)] = 2256,
  [SMALL_STATE(94)] = 2311,
  [SMALL_STATE(95)] = 2366,
  [SMALL_STATE(96)] = 2421,
  [SMALL_STATE(97)] = 2472,
  [SMALL_STATE(98)] = 2523,
  [SMALL_STATE(99)] = 2565,
  [SMALL_STATE(100)] = 2607,
  [SMALL_STATE(101)] = 2649,
  [SMALL_STATE(102)] = 2691,
  [SMALL_STATE(103)] = 2733,
  [SMALL_STATE(104)] = 2775,
  [SMALL_STATE(105)] = 2812,
  [SMALL_STATE(106)] = 2841,
  [SMALL_STATE(107)] = 2878,
  [SMALL_STATE(108)] = 2905,
  [SMALL_STATE(109)] = 2932,
  [SMALL_STATE(110)] = 2948,
  [SMALL_STATE(111)] = 2967,
  [SMALL_STATE(112)] = 2986,
  [SMALL_STATE(113)] = 3005,
  [SMALL_STATE(114)] = 3024,
  [SMALL_STATE(115)] = 3034,
  [SMALL_STATE(116)] = 3044,
  [SMALL_STATE(117)] = 3054,
  [SMALL_STATE(118)] = 3076,
  [SMALL_STATE(119)] = 3098,
  [SMALL_STATE(120)] = 3108,
  [SMALL_STATE(121)] = 3130,
  [SMALL_STATE(122)] = 3149,
  [SMALL_STATE(123)] = 3164,
  [SMALL_STATE(124)] = 3180,
  [SMALL_STATE(125)] = 3192,
  [SMALL_STATE(126)] = 3208,
  [SMALL_STATE(127)] = 3224,
  [SMALL_STATE(128)] = 3238,
  [SMALL_STATE(129)] = 3250,
  [SMALL_STATE(130)] = 3263,
  [SMALL_STATE(131)] = 3274,
  [SMALL_STATE(132)] = 3285,
  [SMALL_STATE(133)] = 3298,
  [SMALL_STATE(134)] = 3311,
  [SMALL_STATE(135)] = 3322,
  [SMALL_STATE(136)] = 3330,
  [SMALL_STATE(137)] = 3336,
  [SMALL_STATE(138)] = 3346,
  [SMALL_STATE(139)] = 3356,
  [SMALL_STATE(140)] = 3362,
  [SMALL_STATE(141)] = 3368,
  [SMALL_STATE(142)] = 3378,
  [SMALL_STATE(143)] = 3384,
  [SMALL_STATE(144)] = 3394,
  [SMALL_STATE(145)] = 3404,
  [SMALL_STATE(146)] = 3410,
  [SMALL_STATE(147)] = 3420,
  [SMALL_STATE(148)] = 3426,
  [SMALL_STATE(149)] = 3434,
  [SMALL_STATE(150)] = 3439,
  [SMALL_STATE(151)] = 3446,
  [SMALL_STATE(152)] = 3453,
  [SMALL_STATE(153)] = 3460,
  [SMALL_STATE(154)] = 3467,
  [SMALL_STATE(155)] = 3474,
  [SMALL_STATE(156)] = 3479,
  [SMALL_STATE(157)] = 3486,
  [SMALL_STATE(158)] = 3493,
  [SMALL_STATE(159)] = 3500,
  [SMALL_STATE(160)] = 3507,
  [SMALL_STATE(161)] = 3514,
  [SMALL_STATE(162)] = 3521,
  [SMALL_STATE(163)] = 3528,
  [SMALL_STATE(164)] = 3535,
  [SMALL_STATE(165)] = 3540,
  [SMALL_STATE(166)] = 3545,
  [SMALL_STATE(167)] = 3549,
  [SMALL_STATE(168)] = 3553,
  [SMALL_STATE(169)] = 3557,
  [SMALL_STATE(170)] = 3561,
  [SMALL_STATE(171)] = 3565,
  [SMALL_STATE(172)] = 3569,
  [SMALL_STATE(173)] = 3573,
  [SMALL_STATE(174)] = 3577,
  [SMALL_STATE(175)] = 3581,
  [SMALL_STATE(176)] = 3585,
  [SMALL_STATE(177)] = 3589,
  [SMALL_STATE(178)] = 3593,
  [SMALL_STATE(179)] = 3597,
  [SMALL_STATE(180)] = 3601,
  [SMALL_STATE(181)] = 3605,
  [SMALL_STATE(182)] = 3609,
  [SMALL_STATE(183)] = 3613,
  [SMALL_STATE(184)] = 3617,
  [SMALL_STATE(185)] = 3621,
  [SMALL_STATE(186)] = 3625,
  [SMALL_STATE(187)] = 3629,
  [SMALL_STATE(188)] = 3633,
  [SMALL_STATE(189)] = 3637,
  [SMALL_STATE(190)] = 3641,
  [SMALL_STATE(191)] = 3645,
  [SMALL_STATE(192)] = 3649,
  [SMALL_STATE(193)] = 3653,
  [SMALL_STATE(194)] = 3657,
  [SMALL_STATE(195)] = 3661,
  [SMALL_STATE(196)] = 3665,
  [SMALL_STATE(197)] = 3669,
  [SMALL_STATE(198)] = 3673,
  [SMALL_STATE(199)] = 3677,
  [SMALL_STATE(200)] = 3681,
  [SMALL_STATE(201)] = 3685,
  [SMALL_STATE(202)] = 3689,
  [SMALL_STATE(203)] = 3693,
  [SMALL_STATE(204)] = 3697,
  [SMALL_STATE(205)] = 3701,
  [SMALL_STATE(206)] = 3705,
  [SMALL_STATE(207)] = 3709,
  [SMALL_STATE(208)] = 3713,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(207),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(206),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deprecated_tag, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deprecated_tag, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_type, 1),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 1), SHIFT(174),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__types, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(10),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 2, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 2, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpdoc_array_types, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpdoc_array_types, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpunit_tag, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpunit_tag, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 3, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 3, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(96),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_optional_description, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_optional_description, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deprecated_tag, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deprecated_tag, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_incomplete_implementation, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_incomplete_implementation, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__since_tag, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__since_tag, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__psalm_generic_array_types, 6, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__psalm_generic_array_types, 6, .production_id = 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_after_type, 1, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__description_after_type, 1, .production_id = 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__psalm_list_array_types, 4, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__psalm_list_array_types, 4, .production_id = 3),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_after_type_repeat1, 2), SHIFT_REPEAT(110),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_after_type_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_after_type_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_after_type_repeat1, 2), SHIFT_REPEAT(52),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_not_version_repeat1, 2), SHIFT_REPEAT(111),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_not_version_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_not_version_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_not_version_repeat1, 2), SHIFT_REPEAT(49),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_not_version, 1, .production_id = 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__description_not_version, 1, .production_id = 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(112),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(45),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_not_version_repeat1, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_not_version_repeat1, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_after_type_repeat1, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__description_after_type_repeat1, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__since_tag, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__since_tag, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_required_description, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_required_description, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_tag, 5),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_tag, 5),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_tag, 4),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_tag, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 4, .production_id = 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 4, .production_id = 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_tag, 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_tag, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_tag, 4),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__param_tag, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_tag, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__version_tag, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__phpunit_tag, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__phpunit_tag, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deprecated_tag, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deprecated_tag, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_incomplete_implementation, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_incomplete_implementation, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__throws_tag, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__throws_tag, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_tag, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__see_tag, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_tag, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_tag, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_tag, 6),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_tag, 6),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_tag, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_tag, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_optional_description, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_optional_description, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_tag, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__global_tag, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primitive_type, 1), REDUCE(sym_static, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_internal_tag, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_with_nesting_repeat1, 2), SHIFT_REPEAT(113),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_with_nesting_repeat1, 2),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_with_nesting_repeat1, 2), SHIFT_REPEAT(140),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__phpdoc_array_types_repeat1, 2), SHIFT_REPEAT(124),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_see_tag, 2, .production_id = 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_in_inline_tag_with_nesting, 1, .production_id = 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_see_tag, 3, .production_id = 1),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(97),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_link_tag, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_see_tag, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description_in_inline_tag, 1, .production_id = 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_with_nesting_repeat1, 1),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(87),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_repeat1, 2),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_repeat1, 2), SHIFT_REPEAT(155),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 1), SHIFT(160),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2), SHIFT_REPEAT(174),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__description_in_inline_tag_repeat1, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name, 2), SHIFT(174),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2), SHIFT(160),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_internal_tag, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_name_repeat1, 2),
  [617] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_link_tag, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_see_tag, 4, .production_id = 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_see_tag, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name_as_prefix, 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
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
