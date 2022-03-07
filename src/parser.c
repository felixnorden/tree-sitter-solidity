#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 147
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_import = 1,
  anon_sym_as = 2,
  anon_sym_from = 3,
  anon_sym_STAR = 4,
  anon_sym_SEMI = 5,
  anon_sym_DQUOTE = 6,
  anon_sym_SQUOTE = 7,
  sym_double_quoted_printable = 8,
  sym_single_quoted_printable = 9,
  anon_sym_BSLASH = 10,
  anon_sym_u = 11,
  aux_sym_escape_sequence_token1 = 12,
  anon_sym_x = 13,
  aux_sym_escape_sequence_token2 = 14,
  anon_sym_error = 15,
  anon_sym_revert = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  anon_sym_DOT = 19,
  aux_sym_decimal_number_token1 = 20,
  anon_sym_DASH = 21,
  aux_sym__decimal_number_token1 = 22,
  aux_sym__decimal_number_token2 = 23,
  anon_sym_wei = 24,
  anon_sym_gwei = 25,
  anon_sym_ether = 26,
  anon_sym_seconds = 27,
  anon_sym_minutes = 28,
  anon_sym_hours = 29,
  anon_sym_days = 30,
  anon_sym_weeks = 31,
  anon_sym_years = 32,
  anon_sym_LBRACE = 33,
  anon_sym_COMMA = 34,
  anon_sym_RBRACE = 35,
  anon_sym_0x = 36,
  sym__hex_number = 37,
  aux_sym__identifier_token1 = 38,
  aux_sym__identifier_token2 = 39,
  anon_sym_abstract = 40,
  anon_sym_contract = 41,
  anon_sym_is = 42,
  anon_sym_LPAREN = 43,
  anon_sym_COLON = 44,
  anon_sym_RPAREN = 45,
  sym_contract_body_element = 46,
  sym_source_file = 47,
  sym_directive = 48,
  sym_import_directive = 49,
  sym_path = 50,
  sym__non_empty_string_literal = 51,
  sym_escape_sequence = 52,
  sym_identifier = 53,
  sym_literal = 54,
  sym_boolean_literal = 55,
  sym_string_literal = 56,
  sym_number_literal = 57,
  sym_decimal_number = 58,
  sym__decimal_number = 59,
  sym_number_unit = 60,
  sym_symbol_aliases = 61,
  sym_hex_number = 62,
  sym__identifier = 63,
  sym_definition = 64,
  sym_contract_definition = 65,
  sym_inheritance_specifier = 66,
  sym_identifier_path = 67,
  sym_call_argument_list = 68,
  sym_expression = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym__non_empty_string_literal_repeat1 = 71,
  aux_sym__non_empty_string_literal_repeat2 = 72,
  aux_sym_string_literal_repeat1 = 73,
  aux_sym__decimal_number_repeat1 = 74,
  aux_sym_symbol_aliases_repeat1 = 75,
  aux_sym_contract_definition_repeat1 = 76,
  aux_sym_contract_definition_repeat2 = 77,
  aux_sym_identifier_path_repeat1 = 78,
  aux_sym_call_argument_list_repeat1 = 79,
  aux_sym_call_argument_list_repeat2 = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_as] = "as",
  [anon_sym_from] = "from",
  [anon_sym_STAR] = "*",
  [anon_sym_SEMI] = ";",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_double_quoted_printable] = "double_quoted_printable",
  [sym_single_quoted_printable] = "single_quoted_printable",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_u] = "u",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [anon_sym_x] = "x",
  [aux_sym_escape_sequence_token2] = "escape_sequence_token2",
  [anon_sym_error] = "error",
  [anon_sym_revert] = "revert",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DOT] = ".",
  [aux_sym_decimal_number_token1] = "decimal_number_token1",
  [anon_sym_DASH] = "-",
  [aux_sym__decimal_number_token1] = "_decimal_number_token1",
  [aux_sym__decimal_number_token2] = "_decimal_number_token2",
  [anon_sym_wei] = "wei",
  [anon_sym_gwei] = "gwei",
  [anon_sym_ether] = "ether",
  [anon_sym_seconds] = "seconds",
  [anon_sym_minutes] = "minutes",
  [anon_sym_hours] = "hours",
  [anon_sym_days] = "days",
  [anon_sym_weeks] = "weeks",
  [anon_sym_years] = "years",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_0x] = "0x",
  [sym__hex_number] = "_hex_number",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [aux_sym__identifier_token2] = "_identifier_token2",
  [anon_sym_abstract] = "abstract",
  [anon_sym_contract] = "contract",
  [anon_sym_is] = "is",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_RPAREN] = ")",
  [sym_contract_body_element] = "contract_body_element",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym_import_directive] = "import_directive",
  [sym_path] = "path",
  [sym__non_empty_string_literal] = "_non_empty_string_literal",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [sym_literal] = "literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [sym_number_literal] = "number_literal",
  [sym_decimal_number] = "decimal_number",
  [sym__decimal_number] = "_decimal_number",
  [sym_number_unit] = "number_unit",
  [sym_symbol_aliases] = "symbol_aliases",
  [sym_hex_number] = "hex_number",
  [sym__identifier] = "_identifier",
  [sym_definition] = "definition",
  [sym_contract_definition] = "contract_definition",
  [sym_inheritance_specifier] = "inheritance_specifier",
  [sym_identifier_path] = "identifier_path",
  [sym_call_argument_list] = "call_argument_list",
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__non_empty_string_literal_repeat1] = "_non_empty_string_literal_repeat1",
  [aux_sym__non_empty_string_literal_repeat2] = "_non_empty_string_literal_repeat2",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym__decimal_number_repeat1] = "_decimal_number_repeat1",
  [aux_sym_symbol_aliases_repeat1] = "symbol_aliases_repeat1",
  [aux_sym_contract_definition_repeat1] = "contract_definition_repeat1",
  [aux_sym_contract_definition_repeat2] = "contract_definition_repeat2",
  [aux_sym_identifier_path_repeat1] = "identifier_path_repeat1",
  [aux_sym_call_argument_list_repeat1] = "call_argument_list_repeat1",
  [aux_sym_call_argument_list_repeat2] = "call_argument_list_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_double_quoted_printable] = sym_double_quoted_printable,
  [sym_single_quoted_printable] = sym_single_quoted_printable,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_u] = anon_sym_u,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [anon_sym_x] = anon_sym_x,
  [aux_sym_escape_sequence_token2] = aux_sym_escape_sequence_token2,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_revert] = anon_sym_revert,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_decimal_number_token1] = aux_sym_decimal_number_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym__decimal_number_token1] = aux_sym__decimal_number_token1,
  [aux_sym__decimal_number_token2] = aux_sym__decimal_number_token2,
  [anon_sym_wei] = anon_sym_wei,
  [anon_sym_gwei] = anon_sym_gwei,
  [anon_sym_ether] = anon_sym_ether,
  [anon_sym_seconds] = anon_sym_seconds,
  [anon_sym_minutes] = anon_sym_minutes,
  [anon_sym_hours] = anon_sym_hours,
  [anon_sym_days] = anon_sym_days,
  [anon_sym_weeks] = anon_sym_weeks,
  [anon_sym_years] = anon_sym_years,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_0x] = anon_sym_0x,
  [sym__hex_number] = sym__hex_number,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [aux_sym__identifier_token2] = aux_sym__identifier_token2,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_contract] = anon_sym_contract,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_contract_body_element] = sym_contract_body_element,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym_import_directive] = sym_import_directive,
  [sym_path] = sym_path,
  [sym__non_empty_string_literal] = sym__non_empty_string_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [sym_literal] = sym_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_decimal_number] = sym_decimal_number,
  [sym__decimal_number] = sym__decimal_number,
  [sym_number_unit] = sym_number_unit,
  [sym_symbol_aliases] = sym_symbol_aliases,
  [sym_hex_number] = sym_hex_number,
  [sym__identifier] = sym__identifier,
  [sym_definition] = sym_definition,
  [sym_contract_definition] = sym_contract_definition,
  [sym_inheritance_specifier] = sym_inheritance_specifier,
  [sym_identifier_path] = sym_identifier_path,
  [sym_call_argument_list] = sym_call_argument_list,
  [sym_expression] = sym_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__non_empty_string_literal_repeat1] = aux_sym__non_empty_string_literal_repeat1,
  [aux_sym__non_empty_string_literal_repeat2] = aux_sym__non_empty_string_literal_repeat2,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym__decimal_number_repeat1] = aux_sym__decimal_number_repeat1,
  [aux_sym_symbol_aliases_repeat1] = aux_sym_symbol_aliases_repeat1,
  [aux_sym_contract_definition_repeat1] = aux_sym_contract_definition_repeat1,
  [aux_sym_contract_definition_repeat2] = aux_sym_contract_definition_repeat2,
  [aux_sym_identifier_path_repeat1] = aux_sym_identifier_path_repeat1,
  [aux_sym_call_argument_list_repeat1] = aux_sym_call_argument_list_repeat1,
  [aux_sym_call_argument_list_repeat2] = aux_sym_call_argument_list_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_printable] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_printable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_revert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_decimal_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__decimal_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_wei] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gwei] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ether] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minutes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hours] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_days] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weeks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_years] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [sym__hex_number] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_contract_body_element] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_import_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym__non_empty_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_number] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal_number] = {
    .visible = false,
    .named = true,
  },
  [sym_number_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_aliases] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_number] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_contract_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_inheritance_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_path] = {
    .visible = true,
    .named = true,
  },
  [sym_call_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__non_empty_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__non_empty_string_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_number_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_aliases_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_contract_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_contract_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_argument_list_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 20,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 75,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 20,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 110,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 20,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 128,
  [145] = 130,
  [146] = 146,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(88);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(149);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(105);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(101);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(149);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 78:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 79:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 80:
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 82:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '(') ADVANCE(149);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(79);
      if (lookahead == 'h') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == 'w') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(105);
      if (lookahead == 'y') ADVANCE(24);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(87)
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_double_quoted_printable);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_double_quoted_printable);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_single_quoted_printable);
      if (lookahead == ' ') ADVANCE(100);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_single_quoted_printable);
      if ((' ' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_revert);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_decimal_number_token1);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__decimal_number_token1);
      if (lookahead == '_') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__decimal_number_token2);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__decimal_number_token2);
      if (lookahead == '_') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_wei);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_gwei);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ether);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__hex_number);
      if (lookahead == '_') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_contract);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_contract_body_element);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 87},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 87},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 87},
  [18] = {.lex_state = 87},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 87},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 87},
  [50] = {.lex_state = 87},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 87},
  [53] = {.lex_state = 87},
  [54] = {.lex_state = 87},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 87},
  [62] = {.lex_state = 87},
  [63] = {.lex_state = 87},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 87},
  [66] = {.lex_state = 87},
  [67] = {.lex_state = 87},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 87},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 87},
  [78] = {.lex_state = 87},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 87},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 87},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 87},
  [96] = {.lex_state = 87},
  [97] = {.lex_state = 87},
  [98] = {.lex_state = 87},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 33},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 87},
  [105] = {.lex_state = 87},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 87},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 87},
  [110] = {.lex_state = 87},
  [111] = {.lex_state = 87},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 87},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 87},
  [117] = {.lex_state = 29},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 87},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 87},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 87},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 81},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 82},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 87},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 81},
  [145] = {.lex_state = 82},
  [146] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_revert] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_decimal_number_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__decimal_number_token1] = ACTIONS(1),
    [aux_sym__decimal_number_token2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [aux_sym__identifier_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(143),
    [sym_directive] = STATE(18),
    [sym_import_directive] = STATE(53),
    [sym_definition] = STATE(18),
    [sym_contract_definition] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(18),
    [anon_sym_import] = ACTIONS(3),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_contract] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(21), 1,
      aux_sym__decimal_number_token2,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_0x,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(6), 1,
      sym__decimal_number,
    STATE(16), 1,
      sym__identifier,
    STATE(91), 1,
      sym_expression,
    STATE(93), 1,
      aux_sym__decimal_number_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_decimal_number,
      sym_hex_number,
    STATE(27), 2,
      sym__non_empty_string_literal,
      aux_sym_string_literal_repeat1,
    STATE(87), 2,
      sym_identifier,
      sym_literal,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
    STATE(88), 3,
      sym_boolean_literal,
      sym_string_literal,
      sym_number_literal,
  [63] = 17,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(21), 1,
      aux_sym__decimal_number_token2,
    ACTIONS(25), 1,
      anon_sym_0x,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(6), 1,
      sym__decimal_number,
    STATE(16), 1,
      sym__identifier,
    STATE(93), 1,
      aux_sym__decimal_number_repeat1,
    STATE(120), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_decimal_number,
      sym_hex_number,
    STATE(27), 2,
      sym__non_empty_string_literal,
      aux_sym_string_literal_repeat1,
    STATE(87), 2,
      sym_identifier,
      sym_literal,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
    STATE(88), 3,
      sym_boolean_literal,
      sym_string_literal,
      sym_number_literal,
  [123] = 17,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(21), 1,
      aux_sym__decimal_number_token2,
    ACTIONS(25), 1,
      anon_sym_0x,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(6), 1,
      sym__decimal_number,
    STATE(16), 1,
      sym__identifier,
    STATE(93), 1,
      aux_sym__decimal_number_repeat1,
    STATE(118), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_decimal_number,
      sym_hex_number,
    STATE(27), 2,
      sym__non_empty_string_literal,
      aux_sym_string_literal_repeat1,
    STATE(87), 2,
      sym_identifier,
      sym_literal,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
    STATE(88), 3,
      sym_boolean_literal,
      sym_string_literal,
      sym_number_literal,
  [183] = 17,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(21), 1,
      aux_sym__decimal_number_token2,
    ACTIONS(25), 1,
      anon_sym_0x,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(6), 1,
      sym__decimal_number,
    STATE(16), 1,
      sym__identifier,
    STATE(92), 1,
      sym_expression,
    STATE(93), 1,
      aux_sym__decimal_number_repeat1,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_decimal_number,
      sym_hex_number,
    STATE(27), 2,
      sym__non_empty_string_literal,
      aux_sym_string_literal_repeat1,
    STATE(87), 2,
      sym_identifier,
      sym_literal,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
    STATE(88), 3,
      sym_boolean_literal,
      sym_string_literal,
      sym_number_literal,
  [243] = 3,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(33), 12,
      anon_sym_wei,
      anon_sym_gwei,
      anon_sym_ether,
      anon_sym_seconds,
      anon_sym_minutes,
      anon_sym_hours,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [264] = 2,
    ACTIONS(37), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(35), 13,
      anon_sym_DOT,
      anon_sym_wei,
      anon_sym_gwei,
      anon_sym_ether,
      anon_sym_seconds,
      anon_sym_minutes,
      anon_sym_hours,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [283] = 3,
    STATE(103), 1,
      sym_number_unit,
    ACTIONS(41), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(39), 9,
      anon_sym_wei,
      anon_sym_gwei,
      anon_sym_ether,
      anon_sym_seconds,
      anon_sym_minutes,
      anon_sym_hours,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
  [303] = 2,
    ACTIONS(43), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(45), 12,
      anon_sym_wei,
      anon_sym_gwei,
      anon_sym_ether,
      anon_sym_seconds,
      anon_sym_minutes,
      anon_sym_hours,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [321] = 2,
    ACTIONS(47), 1,
      aux_sym_decimal_number_token1,
    ACTIONS(49), 12,
      anon_sym_wei,
      anon_sym_gwei,
      anon_sym_ether,
      anon_sym_seconds,
      anon_sym_minutes,
      anon_sym_hours,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [339] = 1,
    ACTIONS(51), 12,
      anon_sym_wei,
      anon_sym_gwei,
      anon_sym_ether,
      anon_sym_seconds,
      anon_sym_minutes,
      anon_sym_hours,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [354] = 1,
    ACTIONS(53), 12,
      anon_sym_wei,
      anon_sym_gwei,
      anon_sym_ether,
      anon_sym_seconds,
      anon_sym_minutes,
      anon_sym_hours,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [369] = 1,
    ACTIONS(45), 12,
      anon_sym_wei,
      anon_sym_gwei,
      anon_sym_ether,
      anon_sym_seconds,
      anon_sym_minutes,
      anon_sym_hours,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [384] = 1,
    ACTIONS(55), 12,
      anon_sym_wei,
      anon_sym_gwei,
      anon_sym_ether,
      anon_sym_seconds,
      anon_sym_minutes,
      anon_sym_hours,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [399] = 1,
    ACTIONS(57), 12,
      anon_sym_wei,
      anon_sym_gwei,
      anon_sym_ether,
      anon_sym_seconds,
      anon_sym_minutes,
      anon_sym_hours,
      anon_sym_days,
      anon_sym_weeks,
      anon_sym_years,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [414] = 1,
    ACTIONS(59), 11,
      anon_sym_as,
      anon_sym_from,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_is,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [428] = 1,
    ACTIONS(61), 11,
      anon_sym_as,
      anon_sym_from,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_is,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [442] = 7,
    ACTIONS(3), 1,
      anon_sym_import,
    ACTIONS(5), 1,
      anon_sym_abstract,
    ACTIONS(7), 1,
      anon_sym_contract,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_import_directive,
    STATE(54), 1,
      sym_contract_definition,
    STATE(19), 3,
      sym_directive,
      sym_definition,
      aux_sym_source_file_repeat1,
  [466] = 7,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_import,
    ACTIONS(70), 1,
      anon_sym_abstract,
    ACTIONS(73), 1,
      anon_sym_contract,
    STATE(53), 1,
      sym_import_directive,
    STATE(54), 1,
      sym_contract_definition,
    STATE(19), 3,
      sym_directive,
      sym_definition,
      aux_sym_source_file_repeat1,
  [490] = 2,
    ACTIONS(78), 1,
      aux_sym__identifier_token2,
    ACTIONS(76), 8,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_RPAREN,
  [504] = 6,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(55), 1,
      sym_identifier_path,
    STATE(123), 1,
      sym_inheritance_specifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [525] = 6,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(55), 1,
      sym_identifier_path,
    STATE(100), 1,
      sym_inheritance_specifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [546] = 6,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(55), 1,
      sym_identifier_path,
    STATE(79), 1,
      sym_inheritance_specifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [567] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      anon_sym_STAR,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym__non_empty_string_literal,
    STATE(124), 1,
      sym_path,
    STATE(146), 1,
      sym_symbol_aliases,
  [589] = 1,
    ACTIONS(84), 7,
      anon_sym_as,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [599] = 5,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__identifier,
    STATE(142), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [617] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    STATE(28), 2,
      sym__non_empty_string_literal,
      aux_sym_string_literal_repeat1,
    ACTIONS(88), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [633] = 4,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(28), 2,
      sym__non_empty_string_literal,
      aux_sym_string_literal_repeat1,
    ACTIONS(96), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [649] = 4,
    ACTIONS(98), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [664] = 4,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(137), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [679] = 4,
    ACTIONS(100), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [694] = 4,
    ACTIONS(102), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(136), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [709] = 4,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(86), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [724] = 4,
    ACTIONS(98), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [739] = 4,
    ACTIONS(100), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(116), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [754] = 4,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [769] = 4,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(132), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [784] = 4,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      sym__identifier,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [799] = 5,
    ACTIONS(19), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      aux_sym__decimal_number_token2,
    STATE(13), 1,
      sym__decimal_number,
    STATE(93), 1,
      aux_sym__decimal_number_repeat1,
  [815] = 4,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      sym_single_quoted_printable,
    ACTIONS(112), 1,
      anon_sym_BSLASH,
    STATE(44), 2,
      sym_escape_sequence,
      aux_sym__non_empty_string_literal_repeat2,
  [829] = 4,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      sym_double_quoted_printable,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym__non_empty_string_literal_repeat1,
  [843] = 5,
    ACTIONS(19), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(118), 1,
      anon_sym_DASH,
    ACTIONS(120), 1,
      aux_sym__decimal_number_token2,
    STATE(12), 1,
      sym__decimal_number,
    STATE(93), 1,
      aux_sym__decimal_number_repeat1,
  [859] = 4,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      sym_double_quoted_printable,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    STATE(43), 2,
      sym_escape_sequence,
      aux_sym__non_empty_string_literal_repeat1,
  [873] = 4,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      sym_single_quoted_printable,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    STATE(44), 2,
      sym_escape_sequence,
      aux_sym__non_empty_string_literal_repeat2,
  [887] = 3,
    ACTIONS(138), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_identifier_path_repeat1,
    ACTIONS(141), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [899] = 5,
    ACTIONS(19), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(143), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      aux_sym__decimal_number_token2,
    STATE(11), 1,
      sym__decimal_number,
    STATE(93), 1,
      aux_sym__decimal_number_repeat1,
  [915] = 3,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_identifier_path_repeat1,
    ACTIONS(149), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [927] = 3,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_identifier_path_repeat1,
    ACTIONS(151), 3,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [939] = 1,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [946] = 1,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [953] = 3,
    ACTIONS(157), 1,
      anon_sym_as,
    ACTIONS(159), 1,
      aux_sym__identifier_token2,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [964] = 1,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [971] = 1,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [978] = 1,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [985] = 3,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_call_argument_list,
    ACTIONS(167), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [996] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      sym__non_empty_string_literal,
    STATE(133), 1,
      sym_path,
  [1009] = 4,
    ACTIONS(19), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(171), 1,
      aux_sym__decimal_number_token2,
    STATE(14), 1,
      sym__decimal_number,
    STATE(93), 1,
      aux_sym__decimal_number_repeat1,
  [1022] = 3,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 1,
      sym_double_quoted_printable,
    STATE(41), 2,
      sym_escape_sequence,
      aux_sym__non_empty_string_literal_repeat1,
  [1033] = 3,
    ACTIONS(112), 1,
      anon_sym_BSLASH,
    ACTIONS(175), 1,
      sym_single_quoted_printable,
    STATE(40), 2,
      sym_escape_sequence,
      aux_sym__non_empty_string_literal_repeat2,
  [1044] = 4,
    ACTIONS(19), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(145), 1,
      aux_sym__decimal_number_token2,
    STATE(11), 1,
      sym__decimal_number,
    STATE(93), 1,
      aux_sym__decimal_number_repeat1,
  [1057] = 1,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [1064] = 1,
    ACTIONS(179), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [1071] = 1,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [1078] = 4,
    ACTIONS(19), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(120), 1,
      aux_sym__decimal_number_token2,
    STATE(12), 1,
      sym__decimal_number,
    STATE(93), 1,
      aux_sym__decimal_number_repeat1,
  [1091] = 1,
    ACTIONS(183), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [1098] = 4,
    ACTIONS(185), 1,
      anon_sym_as,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_symbol_aliases_repeat1,
  [1111] = 1,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [1118] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      sym__non_empty_string_literal,
    STATE(137), 1,
      sym_path,
  [1131] = 4,
    ACTIONS(19), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(193), 1,
      aux_sym__decimal_number_token2,
    STATE(9), 1,
      sym__decimal_number,
    STATE(93), 1,
      aux_sym__decimal_number_repeat1,
  [1144] = 1,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_contract,
  [1151] = 4,
    ACTIONS(19), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(197), 1,
      aux_sym__decimal_number_token2,
    STATE(10), 1,
      sym__decimal_number,
    STATE(93), 1,
      aux_sym__decimal_number_repeat1,
  [1164] = 1,
    ACTIONS(141), 4,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [1171] = 3,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_contract_definition_repeat1,
  [1181] = 3,
    ACTIONS(203), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(206), 1,
      aux_sym__decimal_number_token2,
    STATE(74), 1,
      aux_sym__decimal_number_repeat1,
  [1191] = 2,
    ACTIONS(210), 1,
      sym_single_quoted_printable,
    ACTIONS(208), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
  [1199] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_symbol_aliases_repeat1,
  [1209] = 3,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 1,
      sym_contract_body_element,
    STATE(107), 1,
      aux_sym_contract_definition_repeat2,
  [1219] = 3,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      sym_contract_body_element,
    STATE(96), 1,
      aux_sym_contract_definition_repeat2,
  [1229] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      aux_sym_contract_definition_repeat1,
  [1239] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_symbol_aliases_repeat1,
  [1249] = 3,
    ACTIONS(216), 1,
      sym_contract_body_element,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_contract_definition_repeat2,
  [1259] = 2,
    ACTIONS(210), 1,
      sym_double_quoted_printable,
    ACTIONS(208), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [1267] = 3,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_contract_definition_repeat1,
  [1277] = 1,
    ACTIONS(231), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1283] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_call_argument_list_repeat2,
  [1293] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym_symbol_aliases_repeat1,
  [1303] = 1,
    ACTIONS(240), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1309] = 1,
    ACTIONS(242), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1315] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_call_argument_list_repeat2,
  [1325] = 2,
    ACTIONS(248), 1,
      anon_sym_as,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1333] = 3,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_call_argument_list_repeat1,
  [1343] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_call_argument_list_repeat2,
  [1353] = 3,
    ACTIONS(258), 1,
      aux_sym__decimal_number_token1,
    ACTIONS(260), 1,
      aux_sym__decimal_number_token2,
    STATE(74), 1,
      aux_sym__decimal_number_repeat1,
  [1363] = 3,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_symbol_aliases_repeat1,
  [1373] = 3,
    ACTIONS(216), 1,
      sym_contract_body_element,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_contract_definition_repeat2,
  [1383] = 3,
    ACTIONS(216), 1,
      sym_contract_body_element,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_contract_definition_repeat2,
  [1393] = 3,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    ACTIONS(269), 1,
      sym_contract_body_element,
    STATE(105), 1,
      aux_sym_contract_definition_repeat2,
  [1403] = 3,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      sym_contract_body_element,
    STATE(77), 1,
      aux_sym_contract_definition_repeat2,
  [1413] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_call_argument_list_repeat1,
  [1423] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      aux_sym_contract_definition_repeat1,
  [1433] = 3,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_is,
    ACTIONS(159), 1,
      aux_sym__identifier_token2,
  [1443] = 1,
    ACTIONS(282), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1449] = 1,
    ACTIONS(284), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1455] = 3,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 1,
      sym_contract_body_element,
    STATE(95), 1,
      aux_sym_contract_definition_repeat2,
  [1465] = 3,
    ACTIONS(216), 1,
      sym_contract_body_element,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_contract_definition_repeat2,
  [1475] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      aux_sym_contract_definition_repeat1,
  [1485] = 3,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 1,
      sym_contract_body_element,
    STATE(107), 1,
      aux_sym_contract_definition_repeat2,
  [1495] = 3,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_call_argument_list_repeat1,
  [1505] = 3,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      sym_contract_body_element,
    STATE(81), 1,
      aux_sym_contract_definition_repeat2,
  [1515] = 2,
    ACTIONS(299), 1,
      anon_sym_u,
    ACTIONS(301), 1,
      anon_sym_x,
  [1522] = 2,
    ACTIONS(303), 1,
      anon_sym_u,
    ACTIONS(305), 1,
      anon_sym_x,
  [1529] = 1,
    ACTIONS(307), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1534] = 1,
    ACTIONS(309), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1539] = 2,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      anon_sym_is,
  [1546] = 1,
    ACTIONS(315), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1551] = 2,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(319), 1,
      anon_sym_is,
  [1558] = 2,
    ACTIONS(157), 1,
      anon_sym_from,
    ACTIONS(159), 1,
      aux_sym__identifier_token2,
  [1565] = 1,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1570] = 1,
    ACTIONS(323), 2,
      anon_sym_as,
      anon_sym_SEMI,
  [1575] = 1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1580] = 1,
    ACTIONS(325), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1585] = 1,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1590] = 1,
    ACTIONS(226), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1595] = 2,
    ACTIONS(329), 1,
      anon_sym_as,
    ACTIONS(331), 1,
      anon_sym_SEMI,
  [1602] = 1,
    ACTIONS(333), 2,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [1607] = 1,
    ACTIONS(335), 1,
      anon_sym_as,
  [1611] = 1,
    ACTIONS(337), 1,
      anon_sym_from,
  [1615] = 1,
    ACTIONS(339), 1,
      aux_sym_escape_sequence_token1,
  [1619] = 1,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
  [1623] = 1,
    ACTIONS(339), 1,
      aux_sym_escape_sequence_token2,
  [1627] = 1,
    ACTIONS(343), 1,
      sym__hex_number,
  [1631] = 1,
    ACTIONS(345), 1,
      anon_sym_COLON,
  [1635] = 1,
    ACTIONS(347), 1,
      anon_sym_SEMI,
  [1639] = 1,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
  [1643] = 1,
    ACTIONS(351), 1,
      anon_sym_from,
  [1647] = 1,
    ACTIONS(353), 1,
      anon_sym_from,
  [1651] = 1,
    ACTIONS(355), 1,
      anon_sym_SEMI,
  [1655] = 1,
    ACTIONS(357), 1,
      anon_sym_from,
  [1659] = 1,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
  [1663] = 1,
    ACTIONS(359), 1,
      anon_sym_contract,
  [1667] = 1,
    ACTIONS(361), 1,
      anon_sym_from,
  [1671] = 1,
    ACTIONS(363), 1,
      anon_sym_COLON,
  [1675] = 1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
  [1679] = 1,
    ACTIONS(367), 1,
      aux_sym_escape_sequence_token1,
  [1683] = 1,
    ACTIONS(367), 1,
      aux_sym_escape_sequence_token2,
  [1687] = 1,
    ACTIONS(369), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 123,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 243,
  [SMALL_STATE(7)] = 264,
  [SMALL_STATE(8)] = 283,
  [SMALL_STATE(9)] = 303,
  [SMALL_STATE(10)] = 321,
  [SMALL_STATE(11)] = 339,
  [SMALL_STATE(12)] = 354,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 384,
  [SMALL_STATE(15)] = 399,
  [SMALL_STATE(16)] = 414,
  [SMALL_STATE(17)] = 428,
  [SMALL_STATE(18)] = 442,
  [SMALL_STATE(19)] = 466,
  [SMALL_STATE(20)] = 490,
  [SMALL_STATE(21)] = 504,
  [SMALL_STATE(22)] = 525,
  [SMALL_STATE(23)] = 546,
  [SMALL_STATE(24)] = 567,
  [SMALL_STATE(25)] = 589,
  [SMALL_STATE(26)] = 599,
  [SMALL_STATE(27)] = 617,
  [SMALL_STATE(28)] = 633,
  [SMALL_STATE(29)] = 649,
  [SMALL_STATE(30)] = 664,
  [SMALL_STATE(31)] = 679,
  [SMALL_STATE(32)] = 694,
  [SMALL_STATE(33)] = 709,
  [SMALL_STATE(34)] = 724,
  [SMALL_STATE(35)] = 739,
  [SMALL_STATE(36)] = 754,
  [SMALL_STATE(37)] = 769,
  [SMALL_STATE(38)] = 784,
  [SMALL_STATE(39)] = 799,
  [SMALL_STATE(40)] = 815,
  [SMALL_STATE(41)] = 829,
  [SMALL_STATE(42)] = 843,
  [SMALL_STATE(43)] = 859,
  [SMALL_STATE(44)] = 873,
  [SMALL_STATE(45)] = 887,
  [SMALL_STATE(46)] = 899,
  [SMALL_STATE(47)] = 915,
  [SMALL_STATE(48)] = 927,
  [SMALL_STATE(49)] = 939,
  [SMALL_STATE(50)] = 946,
  [SMALL_STATE(51)] = 953,
  [SMALL_STATE(52)] = 964,
  [SMALL_STATE(53)] = 971,
  [SMALL_STATE(54)] = 978,
  [SMALL_STATE(55)] = 985,
  [SMALL_STATE(56)] = 996,
  [SMALL_STATE(57)] = 1009,
  [SMALL_STATE(58)] = 1022,
  [SMALL_STATE(59)] = 1033,
  [SMALL_STATE(60)] = 1044,
  [SMALL_STATE(61)] = 1057,
  [SMALL_STATE(62)] = 1064,
  [SMALL_STATE(63)] = 1071,
  [SMALL_STATE(64)] = 1078,
  [SMALL_STATE(65)] = 1091,
  [SMALL_STATE(66)] = 1098,
  [SMALL_STATE(67)] = 1111,
  [SMALL_STATE(68)] = 1118,
  [SMALL_STATE(69)] = 1131,
  [SMALL_STATE(70)] = 1144,
  [SMALL_STATE(71)] = 1151,
  [SMALL_STATE(72)] = 1164,
  [SMALL_STATE(73)] = 1171,
  [SMALL_STATE(74)] = 1181,
  [SMALL_STATE(75)] = 1191,
  [SMALL_STATE(76)] = 1199,
  [SMALL_STATE(77)] = 1209,
  [SMALL_STATE(78)] = 1219,
  [SMALL_STATE(79)] = 1229,
  [SMALL_STATE(80)] = 1239,
  [SMALL_STATE(81)] = 1249,
  [SMALL_STATE(82)] = 1259,
  [SMALL_STATE(83)] = 1267,
  [SMALL_STATE(84)] = 1277,
  [SMALL_STATE(85)] = 1283,
  [SMALL_STATE(86)] = 1293,
  [SMALL_STATE(87)] = 1303,
  [SMALL_STATE(88)] = 1309,
  [SMALL_STATE(89)] = 1315,
  [SMALL_STATE(90)] = 1325,
  [SMALL_STATE(91)] = 1333,
  [SMALL_STATE(92)] = 1343,
  [SMALL_STATE(93)] = 1353,
  [SMALL_STATE(94)] = 1363,
  [SMALL_STATE(95)] = 1373,
  [SMALL_STATE(96)] = 1383,
  [SMALL_STATE(97)] = 1393,
  [SMALL_STATE(98)] = 1403,
  [SMALL_STATE(99)] = 1413,
  [SMALL_STATE(100)] = 1423,
  [SMALL_STATE(101)] = 1433,
  [SMALL_STATE(102)] = 1443,
  [SMALL_STATE(103)] = 1449,
  [SMALL_STATE(104)] = 1455,
  [SMALL_STATE(105)] = 1465,
  [SMALL_STATE(106)] = 1475,
  [SMALL_STATE(107)] = 1485,
  [SMALL_STATE(108)] = 1495,
  [SMALL_STATE(109)] = 1505,
  [SMALL_STATE(110)] = 1515,
  [SMALL_STATE(111)] = 1522,
  [SMALL_STATE(112)] = 1529,
  [SMALL_STATE(113)] = 1534,
  [SMALL_STATE(114)] = 1539,
  [SMALL_STATE(115)] = 1546,
  [SMALL_STATE(116)] = 1551,
  [SMALL_STATE(117)] = 1558,
  [SMALL_STATE(118)] = 1565,
  [SMALL_STATE(119)] = 1570,
  [SMALL_STATE(120)] = 1575,
  [SMALL_STATE(121)] = 1580,
  [SMALL_STATE(122)] = 1585,
  [SMALL_STATE(123)] = 1590,
  [SMALL_STATE(124)] = 1595,
  [SMALL_STATE(125)] = 1602,
  [SMALL_STATE(126)] = 1607,
  [SMALL_STATE(127)] = 1611,
  [SMALL_STATE(128)] = 1615,
  [SMALL_STATE(129)] = 1619,
  [SMALL_STATE(130)] = 1623,
  [SMALL_STATE(131)] = 1627,
  [SMALL_STATE(132)] = 1631,
  [SMALL_STATE(133)] = 1635,
  [SMALL_STATE(134)] = 1639,
  [SMALL_STATE(135)] = 1643,
  [SMALL_STATE(136)] = 1647,
  [SMALL_STATE(137)] = 1651,
  [SMALL_STATE(138)] = 1655,
  [SMALL_STATE(139)] = 1659,
  [SMALL_STATE(140)] = 1663,
  [SMALL_STATE(141)] = 1667,
  [SMALL_STATE(142)] = 1671,
  [SMALL_STATE(143)] = 1675,
  [SMALL_STATE(144)] = 1679,
  [SMALL_STATE(145)] = 1683,
  [SMALL_STATE(146)] = 1687,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_number, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__non_empty_string_literal, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(58),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(59),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__non_empty_string_literal_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__non_empty_string_literal_repeat1, 2), SHIFT_REPEAT(43),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__non_empty_string_literal_repeat1, 2), SHIFT_REPEAT(110),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__non_empty_string_literal_repeat2, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__non_empty_string_literal_repeat2, 2), SHIFT_REPEAT(44),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__non_empty_string_literal_repeat2, 2), SHIFT_REPEAT(111),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_path_repeat1, 2), SHIFT_REPEAT(38),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_path_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_path, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_path, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_definition, 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_definition, 7),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_definition, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_definition, 9),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_definition, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_definition, 8),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 7),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_number_repeat1, 2), SHIFT_REPEAT(74),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decimal_number_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_definition_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_definition_repeat1, 2), SHIFT_REPEAT(21),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_argument_list_repeat2, 2), SHIFT_REPEAT(37),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_argument_list_repeat2, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_aliases_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_aliases_repeat1, 2), SHIFT_REPEAT(34),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_argument_list_repeat1, 2), SHIFT_REPEAT(3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_argument_list_repeat1, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_unit, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contract_definition_repeat2, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contract_definition_repeat2, 2), SHIFT_REPEAT(107),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_argument_list, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inheritance_specifier, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_argument_list, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_argument_list_repeat2, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_argument_list, 8),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_aliases_repeat1, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_argument_list, 7),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_aliases, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_aliases, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_aliases, 6),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_aliases, 5),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [365] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_solidity(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
