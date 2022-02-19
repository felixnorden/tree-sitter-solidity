#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  aux_sym_escape_sequence_token1 = 11,
  anon_sym_u = 12,
  aux_sym_escape_sequence_token2 = 13,
  anon_sym_x = 14,
  aux_sym_escape_sequence_token3 = 15,
  anon_sym_error = 16,
  anon_sym_revert = 17,
  anon_sym_LBRACE = 18,
  anon_sym_COMMA = 19,
  anon_sym_RBRACE = 20,
  aux_sym__identifier_token1 = 21,
  aux_sym__identifier_token2 = 22,
  sym_source_file = 23,
  sym_directive = 24,
  sym_import_directive = 25,
  sym_path = 26,
  sym_non_empty_string_literal = 27,
  sym_escape_sequence = 28,
  sym_identifier = 29,
  sym_symbol_aliases = 30,
  sym__identifier = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_symbol_aliases_repeat1 = 33,
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
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [anon_sym_u] = "u",
  [aux_sym_escape_sequence_token2] = "escape_sequence_token2",
  [anon_sym_x] = "x",
  [aux_sym_escape_sequence_token3] = "escape_sequence_token3",
  [anon_sym_error] = "error",
  [anon_sym_revert] = "revert",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [aux_sym__identifier_token2] = "_identifier_token2",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym_import_directive] = "import_directive",
  [sym_path] = "path",
  [sym_non_empty_string_literal] = "non_empty_string_literal",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [sym_symbol_aliases] = "symbol_aliases",
  [sym__identifier] = "_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_symbol_aliases_repeat1] = "symbol_aliases_repeat1",
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
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [anon_sym_u] = anon_sym_u,
  [aux_sym_escape_sequence_token2] = aux_sym_escape_sequence_token2,
  [anon_sym_x] = anon_sym_x,
  [aux_sym_escape_sequence_token3] = aux_sym_escape_sequence_token3,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_revert] = anon_sym_revert,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [aux_sym__identifier_token2] = aux_sym__identifier_token2,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym_import_directive] = sym_import_directive,
  [sym_path] = sym_path,
  [sym_non_empty_string_literal] = sym_non_empty_string_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [sym_symbol_aliases] = sym_symbol_aliases,
  [sym__identifier] = sym__identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_symbol_aliases_repeat1] = aux_sym_symbol_aliases_repeat1,
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
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token3] = {
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
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token2] = {
    .visible = false,
    .named = false,
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
  [sym_non_empty_string_literal] = {
    .visible = true,
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
  [sym_symbol_aliases] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_aliases_repeat1] = {
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
  [14] = 13,
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
  [28] = 13,
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
  [51] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(49);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(45);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'v') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_double_quoted_printable);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_double_quoted_printable);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_single_quoted_printable);
      if (lookahead == ' ') ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_single_quoted_printable);
      if ((' ' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(45);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_revert);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__identifier_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym_directive] = STATE(9),
    [sym_import_directive] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_import] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_path,
    STATE(36), 1,
      sym_non_empty_string_literal,
    STATE(45), 1,
      sym_symbol_aliases,
  [22] = 4,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    STATE(12), 1,
      sym__identifier,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(13), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [37] = 4,
    ACTIONS(17), 1,
      aux_sym__identifier_token1,
    STATE(12), 1,
      sym__identifier,
    STATE(18), 1,
      sym_identifier,
    ACTIONS(13), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [52] = 4,
    ACTIONS(17), 1,
      aux_sym__identifier_token1,
    STATE(12), 1,
      sym__identifier,
    STATE(20), 1,
      sym_identifier,
    ACTIONS(13), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [67] = 4,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    STATE(12), 1,
      sym__identifier,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(13), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [82] = 4,
    ACTIONS(19), 1,
      aux_sym__identifier_token1,
    STATE(12), 1,
      sym__identifier,
    STATE(51), 1,
      sym_identifier,
    ACTIONS(13), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [97] = 4,
    ACTIONS(15), 1,
      aux_sym__identifier_token1,
    STATE(12), 1,
      sym__identifier,
    STATE(41), 1,
      sym_identifier,
    ACTIONS(13), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [112] = 4,
    ACTIONS(3), 1,
      anon_sym_import,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_import_directive,
    STATE(10), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
  [126] = 4,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_import,
    STATE(26), 1,
      sym_import_directive,
    STATE(10), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
  [140] = 1,
    ACTIONS(28), 5,
      anon_sym_as,
      anon_sym_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [148] = 1,
    ACTIONS(30), 5,
      anon_sym_as,
      anon_sym_from,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [156] = 3,
    ACTIONS(32), 1,
      anon_sym_as,
    ACTIONS(36), 1,
      aux_sym__identifier_token2,
    ACTIONS(34), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [167] = 2,
    ACTIONS(38), 1,
      aux_sym__identifier_token2,
    ACTIONS(34), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [176] = 4,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym_double_quoted_printable,
    ACTIONS(44), 1,
      anon_sym_BSLASH,
    STATE(50), 1,
      sym_escape_sequence,
  [189] = 4,
    ACTIONS(40), 1,
      anon_sym_SQUOTE,
    ACTIONS(44), 1,
      anon_sym_BSLASH,
    ACTIONS(46), 1,
      sym_single_quoted_printable,
    STATE(39), 1,
      sym_escape_sequence,
  [202] = 4,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym_non_empty_string_literal,
    STATE(43), 1,
      sym_path,
  [215] = 4,
    ACTIONS(48), 1,
      anon_sym_as,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_symbol_aliases_repeat1,
  [228] = 4,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym_non_empty_string_literal,
    STATE(41), 1,
      sym_path,
  [241] = 2,
    ACTIONS(54), 1,
      anon_sym_as,
    ACTIONS(56), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [249] = 3,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_symbol_aliases_repeat1,
  [259] = 3,
    ACTIONS(60), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(62), 1,
      anon_sym_u,
    ACTIONS(64), 1,
      anon_sym_x,
  [269] = 3,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_symbol_aliases_repeat1,
  [279] = 3,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_symbol_aliases_repeat1,
  [289] = 3,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_symbol_aliases_repeat1,
  [299] = 1,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [304] = 1,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [309] = 2,
    ACTIONS(32), 1,
      anon_sym_from,
    ACTIONS(36), 1,
      aux_sym__identifier_token2,
  [316] = 1,
    ACTIONS(77), 2,
      anon_sym_as,
      anon_sym_SEMI,
  [321] = 1,
    ACTIONS(79), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [326] = 1,
    ACTIONS(81), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [331] = 1,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [336] = 1,
    ACTIONS(85), 2,
      anon_sym_as,
      anon_sym_SEMI,
  [341] = 1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [346] = 2,
    ACTIONS(89), 1,
      anon_sym_as,
    ACTIONS(91), 1,
      anon_sym_SEMI,
  [353] = 1,
    ACTIONS(93), 2,
      anon_sym_as,
      anon_sym_SEMI,
  [358] = 1,
    ACTIONS(95), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [363] = 1,
    ACTIONS(97), 1,
      aux_sym_escape_sequence_token2,
  [367] = 1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
  [371] = 1,
    ACTIONS(101), 1,
      anon_sym_from,
  [375] = 1,
    ACTIONS(103), 1,
      anon_sym_SEMI,
  [379] = 1,
    ACTIONS(105), 1,
      anon_sym_from,
  [383] = 1,
    ACTIONS(107), 1,
      anon_sym_SEMI,
  [387] = 1,
    ACTIONS(109), 1,
      anon_sym_from,
  [391] = 1,
    ACTIONS(111), 1,
      anon_sym_from,
  [395] = 1,
    ACTIONS(113), 1,
      anon_sym_as,
  [399] = 1,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
  [403] = 1,
    ACTIONS(117), 1,
      anon_sym_from,
  [407] = 1,
    ACTIONS(97), 1,
      aux_sym_escape_sequence_token3,
  [411] = 1,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
  [415] = 1,
    ACTIONS(119), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 37,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 67,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 126,
  [SMALL_STATE(11)] = 140,
  [SMALL_STATE(12)] = 148,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 167,
  [SMALL_STATE(15)] = 176,
  [SMALL_STATE(16)] = 189,
  [SMALL_STATE(17)] = 202,
  [SMALL_STATE(18)] = 215,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 241,
  [SMALL_STATE(21)] = 249,
  [SMALL_STATE(22)] = 259,
  [SMALL_STATE(23)] = 269,
  [SMALL_STATE(24)] = 279,
  [SMALL_STATE(25)] = 289,
  [SMALL_STATE(26)] = 299,
  [SMALL_STATE(27)] = 304,
  [SMALL_STATE(28)] = 309,
  [SMALL_STATE(29)] = 316,
  [SMALL_STATE(30)] = 321,
  [SMALL_STATE(31)] = 326,
  [SMALL_STATE(32)] = 331,
  [SMALL_STATE(33)] = 336,
  [SMALL_STATE(34)] = 341,
  [SMALL_STATE(35)] = 346,
  [SMALL_STATE(36)] = 353,
  [SMALL_STATE(37)] = 358,
  [SMALL_STATE(38)] = 363,
  [SMALL_STATE(39)] = 367,
  [SMALL_STATE(40)] = 371,
  [SMALL_STATE(41)] = 375,
  [SMALL_STATE(42)] = 379,
  [SMALL_STATE(43)] = 383,
  [SMALL_STATE(44)] = 387,
  [SMALL_STATE(45)] = 391,
  [SMALL_STATE(46)] = 395,
  [SMALL_STATE(47)] = 399,
  [SMALL_STATE(48)] = 403,
  [SMALL_STATE(49)] = 407,
  [SMALL_STATE(50)] = 411,
  [SMALL_STATE(51)] = 415,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_aliases_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_aliases_repeat1, 2), SHIFT_REPEAT(5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_string_literal, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_aliases_repeat1, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_string_literal, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_aliases, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_aliases, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_aliases, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [115] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_aliases, 6),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
