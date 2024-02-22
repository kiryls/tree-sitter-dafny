#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_include = 1,
  anon_sym_DQUOTE = 2,
  anon_sym_AT = 3,
  sym_stringChar = 4,
  anon_sym_BSLASH_SQUOTE = 5,
  anon_sym_BSLASH_DQUOTE = 6,
  anon_sym_BSLASH_BSLASH = 7,
  anon_sym_BSLASH0 = 8,
  anon_sym_BSLASHn = 9,
  anon_sym_BSLASHr = 10,
  anon_sym_BSLASHt = 11,
  anon_sym_BSLASHu = 12,
  anon_sym_BSLASHU_LBRACE = 13,
  anon_sym_RBRACE = 14,
  sym_verbatimStringChar = 15,
  sym_hexdigit = 16,
  sym_source_file = 17,
  sym_IncludeDirective_ = 18,
  sym_stringToken = 19,
  sym_escapedChar = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_stringToken_repeat1 = 22,
  aux_sym_stringToken_repeat2 = 23,
  aux_sym_escapedChar_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_include] = "include",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_AT] = "@",
  [sym_stringChar] = "stringChar",
  [anon_sym_BSLASH_SQUOTE] = "\\'",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_BSLASH0] = "\\0",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASHu] = "\\u",
  [anon_sym_BSLASHU_LBRACE] = "\\U{",
  [anon_sym_RBRACE] = "}",
  [sym_verbatimStringChar] = "verbatimStringChar",
  [sym_hexdigit] = "hexdigit",
  [sym_source_file] = "source_file",
  [sym_IncludeDirective_] = "IncludeDirective_",
  [sym_stringToken] = "stringToken",
  [sym_escapedChar] = "escapedChar",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_stringToken_repeat1] = "stringToken_repeat1",
  [aux_sym_stringToken_repeat2] = "stringToken_repeat2",
  [aux_sym_escapedChar_repeat1] = "escapedChar_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_AT] = anon_sym_AT,
  [sym_stringChar] = sym_stringChar,
  [anon_sym_BSLASH_SQUOTE] = anon_sym_BSLASH_SQUOTE,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASH0] = anon_sym_BSLASH0,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASHu] = anon_sym_BSLASHu,
  [anon_sym_BSLASHU_LBRACE] = anon_sym_BSLASHU_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_verbatimStringChar] = sym_verbatimStringChar,
  [sym_hexdigit] = sym_hexdigit,
  [sym_source_file] = sym_source_file,
  [sym_IncludeDirective_] = sym_IncludeDirective_,
  [sym_stringToken] = sym_stringToken,
  [sym_escapedChar] = sym_escapedChar,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_stringToken_repeat1] = aux_sym_stringToken_repeat1,
  [aux_sym_stringToken_repeat2] = aux_sym_stringToken_repeat2,
  [aux_sym_escapedChar_repeat1] = aux_sym_escapedChar_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_stringChar] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHU_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_verbatimStringChar] = {
    .visible = true,
    .named = true,
  },
  [sym_hexdigit] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_IncludeDirective_] = {
    .visible = true,
    .named = true,
  },
  [sym_stringToken] = {
    .visible = true,
    .named = true,
  },
  [sym_escapedChar] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stringToken_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stringToken_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escapedChar_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '@') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '0') ADVANCE(20);
      if (lookahead == 'U') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(25);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_stringChar);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_stringChar);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_BSLASH0);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BSLASHU_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_verbatimStringChar);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_verbatimStringChar);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_hexdigit);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASHu] = ACTIONS(1),
    [anon_sym_BSLASHU_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_hexdigit] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_IncludeDirective_] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(5),
  },
  [2] = {
    [sym_escapedChar] = STATE(3),
    [aux_sym_stringToken_repeat1] = STATE(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_stringChar] = ACTIONS(9),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(11),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(11),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(11),
    [anon_sym_BSLASH0] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHu] = ACTIONS(13),
    [anon_sym_BSLASHU_LBRACE] = ACTIONS(15),
  },
  [3] = {
    [sym_escapedChar] = STATE(4),
    [aux_sym_stringToken_repeat1] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_stringChar] = ACTIONS(19),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(11),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(11),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(11),
    [anon_sym_BSLASH0] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHu] = ACTIONS(13),
    [anon_sym_BSLASHU_LBRACE] = ACTIONS(15),
  },
  [4] = {
    [sym_escapedChar] = STATE(4),
    [aux_sym_stringToken_repeat1] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_stringChar] = ACTIONS(23),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(26),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(26),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(26),
    [anon_sym_BSLASH0] = ACTIONS(26),
    [anon_sym_BSLASHn] = ACTIONS(26),
    [anon_sym_BSLASHr] = ACTIONS(26),
    [anon_sym_BSLASHt] = ACTIONS(26),
    [anon_sym_BSLASHu] = ACTIONS(29),
    [anon_sym_BSLASHU_LBRACE] = ACTIONS(32),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(37), 1,
      sym_stringChar,
    ACTIONS(35), 10,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH0,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU_LBRACE,
  [16] = 2,
    ACTIONS(41), 1,
      sym_stringChar,
    ACTIONS(39), 10,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH0,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU_LBRACE,
  [32] = 2,
    ACTIONS(45), 1,
      sym_stringChar,
    ACTIONS(43), 10,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_SQUOTE,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH0,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASHu,
      anon_sym_BSLASHU_LBRACE,
  [48] = 3,
    ACTIONS(5), 1,
      anon_sym_include,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_IncludeDirective_,
      aux_sym_source_file_repeat1,
  [59] = 3,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_include,
    STATE(9), 2,
      sym_IncludeDirective_,
      aux_sym_source_file_repeat1,
  [70] = 2,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_include,
  [78] = 3,
    ACTIONS(58), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym_stringToken,
  [88] = 3,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_verbatimStringChar,
    STATE(12), 1,
      aux_sym_stringToken_repeat2,
  [98] = 2,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_include,
  [106] = 3,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      sym_hexdigit,
    STATE(14), 1,
      aux_sym_escapedChar_repeat1,
  [116] = 3,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym_verbatimStringChar,
    STATE(16), 1,
      aux_sym_stringToken_repeat2,
  [126] = 3,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_verbatimStringChar,
    STATE(12), 1,
      aux_sym_stringToken_repeat2,
  [136] = 3,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      sym_hexdigit,
    STATE(14), 1,
      aux_sym_escapedChar_repeat1,
  [146] = 1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_include,
  [151] = 1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_include,
  [156] = 2,
    ACTIONS(89), 1,
      sym_hexdigit,
    STATE(17), 1,
      aux_sym_escapedChar_repeat1,
  [163] = 2,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_verbatimStringChar,
  [170] = 1,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_include,
  [175] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [179] = 1,
    ACTIONS(99), 1,
      sym_hexdigit,
  [183] = 1,
    ACTIONS(101), 1,
      sym_hexdigit,
  [187] = 1,
    ACTIONS(103), 1,
      sym_hexdigit,
  [191] = 1,
    ACTIONS(105), 1,
      sym_hexdigit,
  [195] = 1,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
  [199] = 1,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 16,
  [SMALL_STATE(7)] = 32,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 59,
  [SMALL_STATE(10)] = 70,
  [SMALL_STATE(11)] = 78,
  [SMALL_STATE(12)] = 88,
  [SMALL_STATE(13)] = 98,
  [SMALL_STATE(14)] = 106,
  [SMALL_STATE(15)] = 116,
  [SMALL_STATE(16)] = 126,
  [SMALL_STATE(17)] = 136,
  [SMALL_STATE(18)] = 146,
  [SMALL_STATE(19)] = 151,
  [SMALL_STATE(20)] = 156,
  [SMALL_STATE(21)] = 163,
  [SMALL_STATE(22)] = 170,
  [SMALL_STATE(23)] = 175,
  [SMALL_STATE(24)] = 179,
  [SMALL_STATE(25)] = 183,
  [SMALL_STATE(26)] = 187,
  [SMALL_STATE(27)] = 191,
  [SMALL_STATE(28)] = 195,
  [SMALL_STATE(29)] = 199,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringToken_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringToken_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringToken_repeat1, 2), SHIFT_REPEAT(6),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringToken_repeat1, 2), SHIFT_REPEAT(26),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringToken_repeat1, 2), SHIFT_REPEAT(20),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapedChar, 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapedChar, 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapedChar, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapedChar, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapedChar, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapedChar, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringToken, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stringToken_repeat2, 2), SHIFT_REPEAT(28),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringToken_repeat2, 2), SHIFT_REPEAT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringToken, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escapedChar_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escapedChar_repeat1, 2), SHIFT_REPEAT(14),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IncludeDirective_, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringToken_repeat2, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringToken_repeat2, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringToken, 2),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dafny(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
