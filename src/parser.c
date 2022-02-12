#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
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
  aux_sym_symbol_aliases_repeat1 = 32,
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
  [8] = 2,
  [9] = 9,
  [10] = 10,
  [11] = 4,
  [12] = 6,
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
  [27] = 2,
  [28] = 2,
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
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(49);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
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
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(45);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
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
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_revert);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_revert);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == 'v') ADVANCE(68);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
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
    [sym_source_file] = STATE(33),
    [sym_directive] = STATE(47),
    [sym_import_directive] = STATE(45),
    [anon_sym_import] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      aux_sym__identifier_token2,
    ACTIONS(7), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(5), 5,
      anon_sym_as,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
      aux_sym__identifier_token1,
  [15] = 6,
    ACTIONS(14), 1,
      anon_sym_RBRACE,
    ACTIONS(16), 1,
      aux_sym__identifier_token1,
    STATE(3), 1,
      aux_sym_symbol_aliases_repeat1,
    STATE(6), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(11), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [36] = 2,
    ACTIONS(21), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 7,
      anon_sym_as,
      anon_sym_from,
      anon_sym_SEMI,
      anon_sym_error,
      anon_sym_revert,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [49] = 6,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(3), 1,
      aux_sym_symbol_aliases_repeat1,
    STATE(6), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(23), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [70] = 2,
    ACTIONS(31), 1,
      aux_sym__identifier_token1,
    ACTIONS(29), 7,
      anon_sym_as,
      anon_sym_from,
      anon_sym_SEMI,
      anon_sym_error,
      anon_sym_revert,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [83] = 7,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_non_empty_string_literal,
    STATE(30), 1,
      sym_path,
    STATE(34), 1,
      sym_symbol_aliases,
  [105] = 3,
    ACTIONS(41), 1,
      aux_sym__identifier_token2,
    ACTIONS(7), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(5), 4,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
      aux_sym__identifier_token1,
  [119] = 5,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    STATE(5), 1,
      aux_sym_symbol_aliases_repeat1,
    STATE(6), 1,
      sym__identifier,
    STATE(10), 1,
      sym_identifier,
    ACTIONS(23), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [137] = 4,
    ACTIONS(43), 1,
      anon_sym_as,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      aux_sym__identifier_token1,
    ACTIONS(45), 4,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
      anon_sym_RBRACE,
  [153] = 2,
    ACTIONS(21), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 5,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [164] = 2,
    ACTIONS(31), 1,
      aux_sym__identifier_token1,
    ACTIONS(29), 5,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [175] = 3,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      aux_sym__identifier_token1,
    ACTIONS(51), 4,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
      anon_sym_RBRACE,
  [188] = 4,
    ACTIONS(59), 1,
      aux_sym__identifier_token1,
    STATE(12), 1,
      sym__identifier,
    STATE(13), 1,
      sym_identifier,
    ACTIONS(57), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [203] = 4,
    ACTIONS(61), 1,
      aux_sym__identifier_token1,
    STATE(6), 1,
      sym__identifier,
    STATE(36), 1,
      sym_identifier,
    ACTIONS(23), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [218] = 4,
    ACTIONS(63), 1,
      aux_sym__identifier_token1,
    STATE(6), 1,
      sym__identifier,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(23), 3,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
  [233] = 2,
    ACTIONS(67), 1,
      aux_sym__identifier_token1,
    ACTIONS(65), 4,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
      anon_sym_RBRACE,
  [243] = 2,
    ACTIONS(69), 1,
      aux_sym__identifier_token1,
    ACTIONS(14), 4,
      anon_sym_from,
      anon_sym_error,
      anon_sym_revert,
      anon_sym_RBRACE,
  [253] = 4,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym_non_empty_string_literal,
    STATE(40), 1,
      sym_path,
  [266] = 4,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym_non_empty_string_literal,
    STATE(32), 1,
      sym_path,
  [279] = 4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_double_quoted_printable,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    STATE(37), 1,
      sym_escape_sequence,
  [292] = 4,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    ACTIONS(77), 1,
      sym_single_quoted_printable,
    STATE(38), 1,
      sym_escape_sequence,
  [305] = 3,
    ACTIONS(79), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(81), 1,
      anon_sym_u,
    ACTIONS(83), 1,
      anon_sym_x,
  [315] = 1,
    ACTIONS(85), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [320] = 1,
    ACTIONS(87), 2,
      anon_sym_as,
      anon_sym_SEMI,
  [325] = 1,
    ACTIONS(89), 2,
      anon_sym_as,
      anon_sym_SEMI,
  [330] = 2,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      aux_sym__identifier_token2,
  [337] = 2,
    ACTIONS(5), 1,
      anon_sym_from,
    ACTIONS(9), 1,
      aux_sym__identifier_token2,
  [344] = 1,
    ACTIONS(93), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [349] = 2,
    ACTIONS(95), 1,
      anon_sym_as,
    ACTIONS(97), 1,
      anon_sym_SEMI,
  [356] = 1,
    ACTIONS(99), 2,
      anon_sym_as,
      anon_sym_SEMI,
  [361] = 1,
    ACTIONS(101), 1,
      anon_sym_SEMI,
  [365] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [369] = 1,
    ACTIONS(105), 1,
      anon_sym_from,
  [373] = 1,
    ACTIONS(107), 1,
      anon_sym_from,
  [377] = 1,
    ACTIONS(109), 1,
      anon_sym_from,
  [381] = 1,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
  [385] = 1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
  [389] = 1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
  [393] = 1,
    ACTIONS(115), 1,
      anon_sym_SEMI,
  [397] = 1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
  [401] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [405] = 1,
    ACTIONS(121), 1,
      anon_sym_as,
  [409] = 1,
    ACTIONS(123), 1,
      aux_sym_escape_sequence_token3,
  [413] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [417] = 1,
    ACTIONS(123), 1,
      aux_sym_escape_sequence_token2,
  [421] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 105,
  [SMALL_STATE(9)] = 119,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 164,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 188,
  [SMALL_STATE(15)] = 203,
  [SMALL_STATE(16)] = 218,
  [SMALL_STATE(17)] = 233,
  [SMALL_STATE(18)] = 243,
  [SMALL_STATE(19)] = 253,
  [SMALL_STATE(20)] = 266,
  [SMALL_STATE(21)] = 279,
  [SMALL_STATE(22)] = 292,
  [SMALL_STATE(23)] = 305,
  [SMALL_STATE(24)] = 315,
  [SMALL_STATE(25)] = 320,
  [SMALL_STATE(26)] = 325,
  [SMALL_STATE(27)] = 330,
  [SMALL_STATE(28)] = 337,
  [SMALL_STATE(29)] = 344,
  [SMALL_STATE(30)] = 349,
  [SMALL_STATE(31)] = 356,
  [SMALL_STATE(32)] = 361,
  [SMALL_STATE(33)] = 365,
  [SMALL_STATE(34)] = 369,
  [SMALL_STATE(35)] = 373,
  [SMALL_STATE(36)] = 377,
  [SMALL_STATE(37)] = 381,
  [SMALL_STATE(38)] = 385,
  [SMALL_STATE(39)] = 389,
  [SMALL_STATE(40)] = 393,
  [SMALL_STATE(41)] = 397,
  [SMALL_STATE(42)] = 401,
  [SMALL_STATE(43)] = 405,
  [SMALL_STATE(44)] = 409,
  [SMALL_STATE(45)] = 413,
  [SMALL_STATE(46)] = 417,
  [SMALL_STATE(47)] = 421,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_aliases_repeat1, 2), SHIFT_REPEAT(6),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_aliases_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_aliases_repeat1, 2), SHIFT_REPEAT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_aliases_repeat1, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_aliases_repeat1, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_aliases_repeat1, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_aliases_repeat1, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_aliases_repeat1, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_aliases_repeat1, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_aliases_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_string_literal, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_empty_string_literal, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [103] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_aliases, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_directive, 7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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
