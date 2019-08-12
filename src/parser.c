#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 51
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_SEMI = 1,
  aux_sym_RULE_END_token1 = 2,
  sym_HEX = 3,
  sym_SPACING = 4,
  sym_BLABLABLA = 5,
  sym_NON_TERMINAL_NAME = 6,
  sym_MULTI_01 = 7,
  sym_MULTI_0p = 8,
  sym_MULTI_1p = 9,
  sym_SYMBOL_INFINITY = 10,
  sym_SYMBOL_EQUAL = 11,
  sym_SYMBOL_MULTI_X_OPEN = 12,
  sym_SYMBOL_MULTI_X_CLOSE = 13,
  sym_SYMBOL_TERMINAL_OPEN = 14,
  sym_SYMBOL_TERMINAL_CLOSE = 15,
  sym_SYMBOL_GROUP_OPEN = 16,
  sym_SYMBOL_GROUP_CLOSE = 17,
  sym_SYMBOL_COMMENT_START = 18,
  sym_SYMBOL_OR = 19,
  sym_SYMBOL_RANGE_DELIMITER = 20,
  sym_WMS = 21,
  sym_RULE = 22,
  sym_RULE_END = 23,
  sym_MIN = 24,
  sym_MIN_MAX = 25,
  sym_MAX = 26,
  sym_RANGE_MIN_MAX = 27,
  sym_GROUP = 28,
  sym_TOKEN = 29,
  sym_LEFT = 30,
  sym_RIGHT = 31,
  sym_OR = 32,
  sym_EQUAL = 33,
  sym_COMMENT = 34,
  sym_TERMINAL = 35,
  sym_MULTI = 36,
  sym_MULTI_X = 37,
  aux_sym_WMS_repeat1 = 38,
  aux_sym_RULE_repeat1 = 39,
  aux_sym_TOKEN_repeat1 = 40,
  aux_sym_LEFT_repeat1 = 41,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_RULE_END_token1] = "RULE_END_token1",
  [sym_HEX] = "HEX",
  [sym_SPACING] = "SPACING",
  [sym_BLABLABLA] = "BLABLABLA",
  [sym_NON_TERMINAL_NAME] = "NON_TERMINAL_NAME",
  [sym_MULTI_01] = "MULTI_01",
  [sym_MULTI_0p] = "MULTI_0p",
  [sym_MULTI_1p] = "MULTI_1p",
  [sym_SYMBOL_INFINITY] = "SYMBOL_INFINITY",
  [sym_SYMBOL_EQUAL] = "SYMBOL_EQUAL",
  [sym_SYMBOL_MULTI_X_OPEN] = "SYMBOL_MULTI_X_OPEN",
  [sym_SYMBOL_MULTI_X_CLOSE] = "SYMBOL_MULTI_X_CLOSE",
  [sym_SYMBOL_TERMINAL_OPEN] = "SYMBOL_TERMINAL_OPEN",
  [sym_SYMBOL_TERMINAL_CLOSE] = "SYMBOL_TERMINAL_CLOSE",
  [sym_SYMBOL_GROUP_OPEN] = "SYMBOL_GROUP_OPEN",
  [sym_SYMBOL_GROUP_CLOSE] = "SYMBOL_GROUP_CLOSE",
  [sym_SYMBOL_COMMENT_START] = "SYMBOL_COMMENT_START",
  [sym_SYMBOL_OR] = "SYMBOL_OR",
  [sym_SYMBOL_RANGE_DELIMITER] = "SYMBOL_RANGE_DELIMITER",
  [sym_WMS] = "WMS",
  [sym_RULE] = "RULE",
  [sym_RULE_END] = "RULE_END",
  [sym_MIN] = "MIN",
  [sym_MIN_MAX] = "MIN_MAX",
  [sym_MAX] = "MAX",
  [sym_RANGE_MIN_MAX] = "RANGE_MIN_MAX",
  [sym_GROUP] = "GROUP",
  [sym_TOKEN] = "TOKEN",
  [sym_LEFT] = "LEFT",
  [sym_RIGHT] = "RIGHT",
  [sym_OR] = "OR",
  [sym_EQUAL] = "EQUAL",
  [sym_COMMENT] = "COMMENT",
  [sym_TERMINAL] = "TERMINAL",
  [sym_MULTI] = "MULTI",
  [sym_MULTI_X] = "MULTI_X",
  [aux_sym_WMS_repeat1] = "WMS_repeat1",
  [aux_sym_RULE_repeat1] = "RULE_repeat1",
  [aux_sym_TOKEN_repeat1] = "TOKEN_repeat1",
  [aux_sym_LEFT_repeat1] = "LEFT_repeat1",
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
  [aux_sym_RULE_END_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_HEX] = {
    .visible = true,
    .named = true,
  },
  [sym_SPACING] = {
    .visible = true,
    .named = true,
  },
  [sym_BLABLABLA] = {
    .visible = true,
    .named = true,
  },
  [sym_NON_TERMINAL_NAME] = {
    .visible = true,
    .named = true,
  },
  [sym_MULTI_01] = {
    .visible = true,
    .named = true,
  },
  [sym_MULTI_0p] = {
    .visible = true,
    .named = true,
  },
  [sym_MULTI_1p] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_INFINITY] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_EQUAL] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_MULTI_X_OPEN] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_MULTI_X_CLOSE] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_TERMINAL_OPEN] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_TERMINAL_CLOSE] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_GROUP_OPEN] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_GROUP_CLOSE] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_COMMENT_START] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_OR] = {
    .visible = true,
    .named = true,
  },
  [sym_SYMBOL_RANGE_DELIMITER] = {
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
  [sym_RULE_END] = {
    .visible = true,
    .named = true,
  },
  [sym_MIN] = {
    .visible = true,
    .named = true,
  },
  [sym_MIN_MAX] = {
    .visible = true,
    .named = true,
  },
  [sym_MAX] = {
    .visible = true,
    .named = true,
  },
  [sym_RANGE_MIN_MAX] = {
    .visible = true,
    .named = true,
  },
  [sym_GROUP] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN] = {
    .visible = true,
    .named = true,
  },
  [sym_LEFT] = {
    .visible = true,
    .named = true,
  },
  [sym_RIGHT] = {
    .visible = true,
    .named = true,
  },
  [sym_OR] = {
    .visible = true,
    .named = true,
  },
  [sym_EQUAL] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMENT] = {
    .visible = true,
    .named = true,
  },
  [sym_TERMINAL] = {
    .visible = true,
    .named = true,
  },
  [sym_MULTI] = {
    .visible = true,
    .named = true,
  },
  [sym_MULTI_X] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_WMS_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_RULE_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_TOKEN_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_LEFT_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(7);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == 8734) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(10);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(7);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == 8734) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_RULE_END_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_HEX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(10);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_HEX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_SPACING);
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_BLABLABLA);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_BLABLABLA);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_NON_TERMINAL_NAME);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_MULTI_01);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_MULTI_0p);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_MULTI_1p);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_SYMBOL_INFINITY);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_SYMBOL_EQUAL);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_SYMBOL_MULTI_X_OPEN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_SYMBOL_MULTI_X_CLOSE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_SYMBOL_TERMINAL_OPEN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_SYMBOL_TERMINAL_CLOSE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_SYMBOL_GROUP_OPEN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_SYMBOL_GROUP_CLOSE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_SYMBOL_COMMENT_START);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_SYMBOL_OR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_SYMBOL_RANGE_DELIMITER);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_SYMBOL_RANGE_DELIMITER);
      if (lookahead == '-') ADVANCE(27);
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
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 1},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_SYMBOL_INFINITY] = ACTIONS(1),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_NON_TERMINAL_NAME] = ACTIONS(1),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(1),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(1),
    [sym_MULTI_1p] = ACTIONS(1),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(1),
    [sym_HEX] = ACTIONS(1),
    [sym_MULTI_0p] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_SYMBOL_RANGE_DELIMITER] = ACTIONS(1),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(1),
    [sym_SYMBOL_EQUAL] = ACTIONS(1),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(1),
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(1),
    [sym_MULTI_01] = ACTIONS(1),
    [sym_SYMBOL_OR] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_WMS_repeat1] = STATE(4),
    [sym_WMS] = STATE(3),
    [sym_RULE] = STATE(4),
    [sym_NON_TERMINAL_NAME] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
  },
  [2] = {
    [aux_sym_TOKEN_repeat1] = STATE(6),
    [sym_EQUAL] = STATE(7),
    [sym_SYMBOL_EQUAL] = ACTIONS(7),
    [sym_SPACING] = ACTIONS(9),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(11),
  },
  [4] = {
    [sym_RULE] = STATE(8),
    [aux_sym_WMS_repeat1] = STATE(8),
    [sym_NON_TERMINAL_NAME] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(13),
  },
  [5] = {
    [sym_SPACING] = ACTIONS(15),
    [sym_NON_TERMINAL_NAME] = ACTIONS(17),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(17),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(17),
  },
  [6] = {
    [aux_sym_TOKEN_repeat1] = STATE(10),
    [sym_SYMBOL_EQUAL] = ACTIONS(19),
    [sym_SPACING] = ACTIONS(21),
  },
  [7] = {
    [sym_TERMINAL] = STATE(11),
    [aux_sym_TOKEN_repeat1] = STATE(14),
    [aux_sym_LEFT_repeat1] = STATE(15),
    [sym_LEFT] = STATE(16),
    [sym_GROUP] = STATE(11),
    [sym_TOKEN] = STATE(15),
    [sym_SPACING] = ACTIONS(23),
    [sym_NON_TERMINAL_NAME] = ACTIONS(25),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(27),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(29),
  },
  [8] = {
    [sym_RULE] = STATE(8),
    [aux_sym_WMS_repeat1] = STATE(8),
    [sym_NON_TERMINAL_NAME] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(34),
  },
  [9] = {
    [sym_SPACING] = ACTIONS(36),
    [sym_NON_TERMINAL_NAME] = ACTIONS(38),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(38),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(38),
  },
  [10] = {
    [aux_sym_TOKEN_repeat1] = STATE(10),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(40),
    [sym_SPACING] = ACTIONS(42),
    [sym_NON_TERMINAL_NAME] = ACTIONS(40),
    [sym_SYMBOL_EQUAL] = ACTIONS(40),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(40),
  },
  [11] = {
    [sym_MULTI] = STATE(19),
    [sym_MULTI_X] = STATE(17),
    [sym_SPACING] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(47),
    [sym_NON_TERMINAL_NAME] = ACTIONS(47),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(47),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(49),
    [sym_MULTI_1p] = ACTIONS(51),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(47),
    [sym_MULTI_0p] = ACTIONS(51),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(47),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(47),
    [sym_MULTI_01] = ACTIONS(51),
    [sym_SYMBOL_OR] = ACTIONS(47),
  },
  [12] = {
    [sym_RANGE_MIN_MAX] = STATE(21),
    [sym_MIN] = STATE(22),
    [sym_MIN_MAX] = STATE(23),
    [sym_HEX] = ACTIONS(53),
  },
  [13] = {
    [sym_TERMINAL] = STATE(11),
    [aux_sym_TOKEN_repeat1] = STATE(14),
    [aux_sym_LEFT_repeat1] = STATE(15),
    [sym_LEFT] = STATE(24),
    [sym_GROUP] = STATE(11),
    [sym_TOKEN] = STATE(15),
    [sym_SPACING] = ACTIONS(23),
    [sym_NON_TERMINAL_NAME] = ACTIONS(25),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(27),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(29),
  },
  [14] = {
    [sym_TERMINAL] = STATE(25),
    [aux_sym_TOKEN_repeat1] = STATE(10),
    [sym_GROUP] = STATE(25),
    [sym_SPACING] = ACTIONS(21),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(27),
    [sym_NON_TERMINAL_NAME] = ACTIONS(55),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(29),
  },
  [15] = {
    [sym_TERMINAL] = STATE(11),
    [aux_sym_TOKEN_repeat1] = STATE(14),
    [aux_sym_LEFT_repeat1] = STATE(26),
    [sym_GROUP] = STATE(11),
    [sym_TOKEN] = STATE(26),
    [sym_SPACING] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(57),
    [sym_NON_TERMINAL_NAME] = ACTIONS(25),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(57),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(29),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(57),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(27),
    [sym_SYMBOL_OR] = ACTIONS(57),
  },
  [16] = {
    [sym_OR] = STATE(30),
    [aux_sym_RULE_repeat1] = STATE(30),
    [sym_RULE_END] = STATE(31),
    [sym_COMMENT] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(59),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(61),
    [sym_SYMBOL_OR] = ACTIONS(63),
  },
  [17] = {
    [sym_SPACING] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(67),
    [sym_NON_TERMINAL_NAME] = ACTIONS(67),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(67),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(67),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(67),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(67),
    [sym_SYMBOL_OR] = ACTIONS(67),
  },
  [18] = {
    [sym_RANGE_MIN_MAX] = STATE(33),
    [sym_MIN] = STATE(22),
    [sym_MIN_MAX] = STATE(23),
    [sym_HEX] = ACTIONS(53),
  },
  [19] = {
    [sym_SPACING] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(71),
    [sym_NON_TERMINAL_NAME] = ACTIONS(71),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(71),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(71),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(71),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(71),
    [sym_SYMBOL_OR] = ACTIONS(71),
  },
  [20] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(73),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(73),
    [sym_SYMBOL_RANGE_DELIMITER] = ACTIONS(75),
  },
  [21] = {
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(77),
  },
  [22] = {
    [sym_SYMBOL_RANGE_DELIMITER] = ACTIONS(79),
  },
  [23] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(81),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(81),
  },
  [24] = {
    [aux_sym_RULE_repeat1] = STATE(37),
    [sym_OR] = STATE(37),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(83),
    [sym_SYMBOL_OR] = ACTIONS(63),
  },
  [25] = {
    [sym_MULTI] = STATE(38),
    [sym_MULTI_X] = STATE(17),
    [sym_SPACING] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(71),
    [sym_NON_TERMINAL_NAME] = ACTIONS(71),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(71),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(49),
    [sym_MULTI_1p] = ACTIONS(51),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(71),
    [sym_MULTI_0p] = ACTIONS(51),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(71),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(71),
    [sym_MULTI_01] = ACTIONS(51),
    [sym_SYMBOL_OR] = ACTIONS(71),
  },
  [26] = {
    [sym_TERMINAL] = STATE(11),
    [aux_sym_TOKEN_repeat1] = STATE(14),
    [aux_sym_LEFT_repeat1] = STATE(26),
    [sym_GROUP] = STATE(11),
    [sym_TOKEN] = STATE(26),
    [sym_SPACING] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(88),
    [sym_NON_TERMINAL_NAME] = ACTIONS(90),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(88),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(93),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(88),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(96),
    [sym_SYMBOL_OR] = ACTIONS(88),
  },
  [27] = {
    [aux_sym_RULE_END_token1] = ACTIONS(99),
  },
  [28] = {
    [sym_BLABLABLA] = ACTIONS(101),
  },
  [29] = {
    [sym_TERMINAL] = STATE(11),
    [aux_sym_TOKEN_repeat1] = STATE(14),
    [aux_sym_LEFT_repeat1] = STATE(41),
    [sym_RIGHT] = STATE(42),
    [sym_GROUP] = STATE(11),
    [sym_TOKEN] = STATE(41),
    [sym_SPACING] = ACTIONS(23),
    [sym_NON_TERMINAL_NAME] = ACTIONS(25),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(27),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(29),
  },
  [30] = {
    [sym_OR] = STATE(43),
    [aux_sym_RULE_repeat1] = STATE(43),
    [sym_RULE_END] = STATE(44),
    [sym_COMMENT] = STATE(45),
    [anon_sym_SEMI] = ACTIONS(59),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(61),
    [sym_SYMBOL_OR] = ACTIONS(63),
  },
  [31] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(103),
    [ts_builtin_sym_end] = ACTIONS(103),
  },
  [32] = {
    [sym_RULE_END] = STATE(44),
    [anon_sym_SEMI] = ACTIONS(59),
  },
  [33] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(105),
  },
  [34] = {
    [sym_SPACING] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(109),
    [sym_NON_TERMINAL_NAME] = ACTIONS(109),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(109),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(109),
    [sym_MULTI_1p] = ACTIONS(109),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(109),
    [sym_MULTI_0p] = ACTIONS(109),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(109),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(109),
    [sym_MULTI_01] = ACTIONS(109),
    [sym_SYMBOL_OR] = ACTIONS(109),
  },
  [35] = {
    [sym_MAX] = STATE(48),
    [sym_SYMBOL_INFINITY] = ACTIONS(111),
    [sym_HEX] = ACTIONS(111),
  },
  [36] = {
    [sym_SPACING] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(115),
    [sym_NON_TERMINAL_NAME] = ACTIONS(115),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(115),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(115),
    [sym_MULTI_1p] = ACTIONS(115),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(115),
    [sym_MULTI_0p] = ACTIONS(115),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(115),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(115),
    [sym_MULTI_01] = ACTIONS(115),
    [sym_SYMBOL_OR] = ACTIONS(115),
  },
  [37] = {
    [aux_sym_RULE_repeat1] = STATE(43),
    [sym_OR] = STATE(43),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(117),
    [sym_SYMBOL_OR] = ACTIONS(63),
  },
  [38] = {
    [sym_SPACING] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(121),
    [sym_NON_TERMINAL_NAME] = ACTIONS(121),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(121),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(121),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(121),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(121),
    [sym_SYMBOL_OR] = ACTIONS(121),
  },
  [39] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(123),
    [ts_builtin_sym_end] = ACTIONS(123),
  },
  [40] = {
    [anon_sym_SEMI] = ACTIONS(125),
  },
  [41] = {
    [sym_TERMINAL] = STATE(11),
    [aux_sym_TOKEN_repeat1] = STATE(14),
    [aux_sym_LEFT_repeat1] = STATE(26),
    [sym_GROUP] = STATE(11),
    [sym_TOKEN] = STATE(26),
    [sym_SPACING] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(127),
    [sym_NON_TERMINAL_NAME] = ACTIONS(25),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(127),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(29),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(127),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(27),
    [sym_SYMBOL_OR] = ACTIONS(127),
  },
  [42] = {
    [sym_SYMBOL_COMMENT_START] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(129),
    [sym_SYMBOL_OR] = ACTIONS(129),
  },
  [43] = {
    [aux_sym_RULE_repeat1] = STATE(43),
    [sym_OR] = STATE(43),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(131),
    [sym_SYMBOL_OR] = ACTIONS(133),
  },
  [44] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(136),
  },
  [45] = {
    [sym_RULE_END] = STATE(50),
    [anon_sym_SEMI] = ACTIONS(59),
  },
  [46] = {
    [sym_SPACING] = ACTIONS(138),
    [anon_sym_SEMI] = ACTIONS(140),
    [sym_NON_TERMINAL_NAME] = ACTIONS(140),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(140),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(140),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(140),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(140),
    [sym_SYMBOL_OR] = ACTIONS(140),
  },
  [47] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(142),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(142),
  },
  [48] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(144),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(144),
  },
  [49] = {
    [sym_SPACING] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_NON_TERMINAL_NAME] = ACTIONS(148),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(148),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(148),
    [sym_MULTI_1p] = ACTIONS(148),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(148),
    [sym_MULTI_0p] = ACTIONS(148),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(148),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(148),
    [sym_MULTI_01] = ACTIONS(148),
    [sym_SYMBOL_OR] = ACTIONS(148),
  },
  [50] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(150),
    [ts_builtin_sym_end] = ACTIONS(150),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_WMS, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_WMS, 1),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_EQUAL, 1),
  [17] = {.count = 1, .reusable = false}, REDUCE(sym_EQUAL, 1),
  [19] = {.count = 1, .reusable = false}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = false}, SHIFT(12),
  [29] = {.count = 1, .reusable = false}, SHIFT(13),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym_WMS_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.count = 1, .reusable = true}, REDUCE(aux_sym_WMS_repeat1, 2),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_EQUAL, 2),
  [38] = {.count = 1, .reusable = false}, REDUCE(sym_EQUAL, 2),
  [40] = {.count = 1, .reusable = false}, REDUCE(aux_sym_TOKEN_repeat1, 2),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_TOKEN_repeat1, 2), SHIFT_REPEAT(10),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_TOKEN, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_TOKEN, 1),
  [49] = {.count = 1, .reusable = false}, SHIFT(18),
  [51] = {.count = 1, .reusable = false}, SHIFT(17),
  [53] = {.count = 1, .reusable = true}, SHIFT(20),
  [55] = {.count = 1, .reusable = false}, SHIFT(25),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_LEFT, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(27),
  [61] = {.count = 1, .reusable = true}, SHIFT(28),
  [63] = {.count = 1, .reusable = true}, SHIFT(29),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_MULTI, 1),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_MULTI, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_TOKEN, 2),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_TOKEN, 2),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_MIN_MAX, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_MIN, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(34),
  [79] = {.count = 1, .reusable = true}, SHIFT(35),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_RANGE_MIN_MAX, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(36),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_LEFT_repeat1, 2), SHIFT_REPEAT(14),
  [88] = {.count = 1, .reusable = false}, REDUCE(aux_sym_LEFT_repeat1, 2),
  [90] = {.count = 2, .reusable = false}, REDUCE(aux_sym_LEFT_repeat1, 2), SHIFT_REPEAT(11),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_LEFT_repeat1, 2), SHIFT_REPEAT(13),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_LEFT_repeat1, 2), SHIFT_REPEAT(12),
  [99] = {.count = 1, .reusable = true}, SHIFT(39),
  [101] = {.count = 1, .reusable = true}, SHIFT(40),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_RULE, 4),
  [105] = {.count = 1, .reusable = true}, SHIFT(46),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_TERMINAL, 3),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_TERMINAL, 3),
  [111] = {.count = 1, .reusable = true}, SHIFT(47),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_GROUP, 3),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_GROUP, 3),
  [117] = {.count = 1, .reusable = true}, SHIFT(49),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_TOKEN, 3),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_TOKEN, 3),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_RULE_END, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_COMMENT, 2),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_RIGHT, 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_OR, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(aux_sym_RULE_repeat1, 2),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_RULE_repeat1, 2), SHIFT_REPEAT(29),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_RULE, 5),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_MULTI_X, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_MULTI_X, 3),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_MAX, 1),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_RANGE_MIN_MAX, 3),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_GROUP, 4),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_GROUP, 4),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_RULE, 6),
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
