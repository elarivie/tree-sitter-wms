#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 20
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_SEMI = 1,
  anon_sym_ = 2,
  sym_EQUAL = 3,
  sym_NON_TERMINAL = 4,
  anon_sym_LBRACK = 5,
  aux_sym_TERMINAL_token1 = 6,
  anon_sym_RBRACK = 7,
  anon_sym_DASH_DASH = 8,
  sym_BLABLABLA = 9,
  sym_WMS = 10,
  sym_RULE = 11,
  sym_SPACING = 12,
  sym_TERMINAL = 13,
  sym_COMMENT = 14,
  aux_sym_WMS_repeat1 = 15,
  aux_sym_SPACING_repeat1 = 16,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_] = " ",
  [sym_EQUAL] = "EQUAL",
  [sym_NON_TERMINAL] = "NON_TERMINAL",
  [anon_sym_LBRACK] = "[",
  [aux_sym_TERMINAL_token1] = "TERMINAL_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH_DASH] = "--",
  [sym_BLABLABLA] = "BLABLABLA",
  [sym_WMS] = "WMS",
  [sym_RULE] = "RULE",
  [sym_SPACING] = "SPACING",
  [sym_TERMINAL] = "TERMINAL",
  [sym_COMMENT] = "COMMENT",
  [aux_sym_WMS_repeat1] = "WMS_repeat1",
  [aux_sym_SPACING_repeat1] = "SPACING_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_EQUAL] = {
    .visible = true,
    .named = true,
  },
  [sym_NON_TERMINAL] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_TERMINAL_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_BLABLABLA] = {
    .visible = true,
    .named = true,
  },
  [sym_WMS] = {
    .visible = true,
    .named = true,
  },
  [sym_RULE] = {
    .visible = true,
    .named = true,
  },
  [sym_SPACING] = {
    .visible = true,
    .named = true,
  },
  [sym_TERMINAL] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMENT] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_WMS_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SPACING_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(8);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_EQUAL);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_NON_TERMINAL);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_NON_TERMINAL);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_TERMINAL_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_BLABLABLA);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_BLABLABLA);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_LBRACK] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_NON_TERMINAL] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_TERMINAL_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_EQUAL] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_WMS_repeat1] = STATE(4),
    [sym_WMS] = STATE(3),
    [sym_RULE] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_NON_TERMINAL] = ACTIONS(5),
  },
  [2] = {
    [aux_sym_SPACING_repeat1] = STATE(5),
    [sym_SPACING] = STATE(6),
    [anon_sym_] = ACTIONS(7),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(9),
  },
  [4] = {
    [sym_RULE] = STATE(7),
    [aux_sym_WMS_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_NON_TERMINAL] = ACTIONS(5),
  },
  [5] = {
    [aux_sym_SPACING_repeat1] = STATE(8),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_] = ACTIONS(15),
    [sym_EQUAL] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(13),
  },
  [6] = {
    [sym_EQUAL] = ACTIONS(17),
  },
  [7] = {
    [sym_RULE] = STATE(7),
    [aux_sym_WMS_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_NON_TERMINAL] = ACTIONS(21),
  },
  [8] = {
    [aux_sym_SPACING_repeat1] = STATE(8),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_] = ACTIONS(26),
    [sym_EQUAL] = ACTIONS(24),
    [anon_sym_DASH_DASH] = ACTIONS(24),
  },
  [9] = {
    [aux_sym_SPACING_repeat1] = STATE(5),
    [sym_SPACING] = STATE(10),
    [anon_sym_] = ACTIONS(7),
  },
  [10] = {
    [sym_TERMINAL] = STATE(12),
    [anon_sym_LBRACK] = ACTIONS(29),
  },
  [11] = {
    [aux_sym_TERMINAL_token1] = ACTIONS(31),
  },
  [12] = {
    [aux_sym_SPACING_repeat1] = STATE(5),
    [sym_SPACING] = STATE(14),
    [anon_sym_] = ACTIONS(7),
  },
  [13] = {
    [anon_sym_RBRACK] = ACTIONS(33),
  },
  [14] = {
    [sym_COMMENT] = STATE(17),
    [anon_sym_DASH_DASH] = ACTIONS(35),
  },
  [15] = {
    [anon_sym_] = ACTIONS(37),
  },
  [16] = {
    [sym_BLABLABLA] = ACTIONS(39),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(41),
  },
  [18] = {
    [anon_sym_SEMI] = ACTIONS(43),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_NON_TERMINAL] = ACTIONS(45),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_WMS, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_WMS, 1),
  [13] = {.count = 1, .reusable = false}, REDUCE(sym_SPACING, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_WMS_repeat1, 2),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_WMS_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.count = 1, .reusable = false}, REDUCE(aux_sym_SPACING_repeat1, 2),
  [26] = {.count = 2, .reusable = true}, REDUCE(aux_sym_SPACING_repeat1, 2), SHIFT_REPEAT(8),
  [29] = {.count = 1, .reusable = true}, SHIFT(11),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_TERMINAL, 3),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(19),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_COMMENT, 2),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_RULE, 8),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_WMS(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
