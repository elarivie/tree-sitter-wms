#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 61
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_RULE_END = 1,
  sym_HEX = 2,
  sym_SPACING = 3,
  sym_BLABLABLA = 4,
  sym_NON_TERMINAL_NAME = 5,
  sym_ENCODING_NAME = 6,
  sym_MULTI_01 = 7,
  sym_MULTI_0p = 8,
  sym_MULTI_1p = 9,
  sym_SYMBOL_INFINITY = 10,
  sym_SYMBOL_EQUAL = 11,
  sym_SYMBOL_MULTI_X_OPEN = 12,
  sym_SYMBOL_MULTI_X_CLOSE = 13,
  sym_SYMBOL_TERMINAL_OPEN = 14,
  sym_SYMBOL_TERMINAL_CLOSE = 15,
  sym_SYMBOL_ENCODING_END = 16,
  sym_SYMBOL_GROUP_OPEN = 17,
  sym_SYMBOL_GROUP_CLOSE = 18,
  sym_SYMBOL_COMMENT_START = 19,
  sym_SYMBOL_OR = 20,
  sym_SYMBOL_RANGE_DELIMITER = 21,
  sym_WMS = 22,
  sym_RULE = 23,
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
  sym_ENCODING = 36,
  sym_MULTI = 37,
  sym_MULTI_X = 38,
  aux_sym_WMS_repeat1 = 39,
  aux_sym_RULE_repeat1 = 40,
  aux_sym_TOKEN_repeat1 = 41,
  aux_sym_LEFT_repeat1 = 42,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_RULE_END] = "RULE_END",
  [sym_HEX] = "HEX",
  [sym_SPACING] = "SPACING",
  [sym_BLABLABLA] = "BLABLABLA",
  [sym_NON_TERMINAL_NAME] = "NON_TERMINAL_NAME",
  [sym_ENCODING_NAME] = "ENCODING_NAME",
  [sym_MULTI_01] = "MULTI_01",
  [sym_MULTI_0p] = "MULTI_0p",
  [sym_MULTI_1p] = "MULTI_1p",
  [sym_SYMBOL_INFINITY] = "SYMBOL_INFINITY",
  [sym_SYMBOL_EQUAL] = "SYMBOL_EQUAL",
  [sym_SYMBOL_MULTI_X_OPEN] = "SYMBOL_MULTI_X_OPEN",
  [sym_SYMBOL_MULTI_X_CLOSE] = "SYMBOL_MULTI_X_CLOSE",
  [sym_SYMBOL_TERMINAL_OPEN] = "SYMBOL_TERMINAL_OPEN",
  [sym_SYMBOL_TERMINAL_CLOSE] = "SYMBOL_TERMINAL_CLOSE",
  [sym_SYMBOL_ENCODING_END] = "SYMBOL_ENCODING_END",
  [sym_SYMBOL_GROUP_OPEN] = "SYMBOL_GROUP_OPEN",
  [sym_SYMBOL_GROUP_CLOSE] = "SYMBOL_GROUP_CLOSE",
  [sym_SYMBOL_COMMENT_START] = "SYMBOL_COMMENT_START",
  [sym_SYMBOL_OR] = "SYMBOL_OR",
  [sym_SYMBOL_RANGE_DELIMITER] = "SYMBOL_RANGE_DELIMITER",
  [sym_WMS] = "WMS",
  [sym_RULE] = "RULE",
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
  [sym_ENCODING] = "ENCODING",
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
  [sym_RULE_END] = {
    .visible = true,
    .named = true,
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
  [sym_ENCODING_NAME] = {
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
  [sym_SYMBOL_ENCODING_END] = {
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
  [sym_ENCODING] = {
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
      if (lookahead == 0) ADVANCE(8);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == 8734) ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(8);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == 8734) ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_RULE_END);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_HEX);
      if (lookahead == '_') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_HEX);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_HEX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(12);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_HEX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_SPACING);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_BLABLABLA);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_BLABLABLA);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_NON_TERMINAL_NAME);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_NON_TERMINAL_NAME);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_ENCODING_NAME);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_MULTI_01);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_MULTI_0p);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_MULTI_1p);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_SYMBOL_INFINITY);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_SYMBOL_EQUAL);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_SYMBOL_MULTI_X_OPEN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_SYMBOL_MULTI_X_CLOSE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_SYMBOL_TERMINAL_OPEN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_SYMBOL_TERMINAL_CLOSE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_SYMBOL_ENCODING_END);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_SYMBOL_GROUP_OPEN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_SYMBOL_GROUP_CLOSE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_SYMBOL_COMMENT_START);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_SYMBOL_OR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_SYMBOL_RANGE_DELIMITER);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_SYMBOL_RANGE_DELIMITER);
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 7},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_SYMBOL_RANGE_DELIMITER] = ACTIONS(1),
    [sym_SYMBOL_INFINITY] = ACTIONS(1),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(1),
    [sym_RULE_END] = ACTIONS(1),
    [sym_ENCODING_NAME] = ACTIONS(1),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(1),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(1),
    [sym_MULTI_1p] = ACTIONS(1),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(1),
    [sym_MULTI_0p] = ACTIONS(1),
    [sym_NON_TERMINAL_NAME] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_SYMBOL_OR] = ACTIONS(1),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(1),
    [sym_SYMBOL_EQUAL] = ACTIONS(1),
    [sym_SYMBOL_ENCODING_END] = ACTIONS(1),
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(1),
    [sym_HEX] = ACTIONS(1),
    [sym_MULTI_01] = ACTIONS(1),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(1),
  },
  [1] = {
    [sym_COMMENT] = STATE(4),
    [aux_sym_WMS_repeat1] = STATE(4),
    [sym_RULE] = STATE(4),
    [sym_WMS] = STATE(5),
    [sym_NON_TERMINAL_NAME] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(7),
    [sym_SPACING] = ACTIONS(9),
  },
  [2] = {
    [aux_sym_TOKEN_repeat1] = STATE(7),
    [sym_EQUAL] = STATE(8),
    [sym_SYMBOL_EQUAL] = ACTIONS(11),
    [sym_SPACING] = ACTIONS(13),
  },
  [3] = {
    [sym_BLABLABLA] = ACTIONS(15),
  },
  [4] = {
    [sym_RULE] = STATE(10),
    [sym_COMMENT] = STATE(10),
    [aux_sym_WMS_repeat1] = STATE(10),
    [sym_NON_TERMINAL_NAME] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(7),
    [sym_SPACING] = ACTIONS(19),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(21),
  },
  [6] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(23),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(23),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(23),
    [sym_SPACING] = ACTIONS(25),
  },
  [7] = {
    [aux_sym_TOKEN_repeat1] = STATE(12),
    [sym_SPACING] = ACTIONS(27),
    [sym_SYMBOL_EQUAL] = ACTIONS(29),
  },
  [8] = {
    [sym_GROUP] = STATE(13),
    [aux_sym_TOKEN_repeat1] = STATE(16),
    [aux_sym_LEFT_repeat1] = STATE(17),
    [sym_TOKEN] = STATE(17),
    [sym_LEFT] = STATE(18),
    [sym_TERMINAL] = STATE(13),
    [sym_NON_TERMINAL_NAME] = ACTIONS(31),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(33),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(35),
    [sym_SPACING] = ACTIONS(37),
  },
  [9] = {
    [sym_RULE_END] = ACTIONS(39),
  },
  [10] = {
    [sym_RULE] = STATE(10),
    [sym_COMMENT] = STATE(10),
    [aux_sym_WMS_repeat1] = STATE(10),
    [sym_NON_TERMINAL_NAME] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_SPACING] = ACTIONS(46),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(49),
  },
  [11] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(52),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(52),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(52),
    [sym_SPACING] = ACTIONS(54),
  },
  [12] = {
    [aux_sym_TOKEN_repeat1] = STATE(12),
    [sym_NON_TERMINAL_NAME] = ACTIONS(56),
    [sym_SYMBOL_ENCODING_END] = ACTIONS(56),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(56),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(56),
    [sym_SPACING] = ACTIONS(58),
    [sym_SYMBOL_EQUAL] = ACTIONS(56),
  },
  [13] = {
    [sym_MULTI] = STATE(22),
    [sym_MULTI_X] = STATE(20),
    [sym_RULE_END] = ACTIONS(61),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(61),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(63),
    [sym_MULTI_1p] = ACTIONS(65),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(61),
    [sym_SPACING] = ACTIONS(67),
    [sym_MULTI_0p] = ACTIONS(65),
    [sym_NON_TERMINAL_NAME] = ACTIONS(61),
    [sym_SYMBOL_OR] = ACTIONS(61),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(61),
    [sym_MULTI_01] = ACTIONS(65),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(61),
  },
  [14] = {
    [aux_sym_TOKEN_repeat1] = STATE(16),
    [aux_sym_LEFT_repeat1] = STATE(17),
    [sym_GROUP] = STATE(13),
    [sym_TOKEN] = STATE(17),
    [sym_LEFT] = STATE(23),
    [sym_TERMINAL] = STATE(13),
    [sym_NON_TERMINAL_NAME] = ACTIONS(31),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(33),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(35),
    [sym_SPACING] = ACTIONS(37),
  },
  [15] = {
    [sym_ENCODING] = STATE(26),
    [sym_MIN_MAX] = STATE(27),
    [aux_sym_TOKEN_repeat1] = STATE(28),
    [sym_RANGE_MIN_MAX] = STATE(30),
    [sym_MIN] = STATE(29),
    [sym_HEX] = ACTIONS(69),
    [sym_ENCODING_NAME] = ACTIONS(71),
    [sym_SPACING] = ACTIONS(73),
  },
  [16] = {
    [sym_GROUP] = STATE(31),
    [aux_sym_TOKEN_repeat1] = STATE(12),
    [sym_TERMINAL] = STATE(31),
    [sym_NON_TERMINAL_NAME] = ACTIONS(75),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(33),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(35),
    [sym_SPACING] = ACTIONS(27),
  },
  [17] = {
    [aux_sym_TOKEN_repeat1] = STATE(16),
    [aux_sym_LEFT_repeat1] = STATE(32),
    [sym_GROUP] = STATE(13),
    [sym_TOKEN] = STATE(32),
    [sym_TERMINAL] = STATE(13),
    [sym_NON_TERMINAL_NAME] = ACTIONS(31),
    [sym_SYMBOL_OR] = ACTIONS(77),
    [sym_RULE_END] = ACTIONS(77),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(33),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(77),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(35),
    [sym_SPACING] = ACTIONS(37),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(77),
  },
  [18] = {
    [sym_OR] = STATE(35),
    [aux_sym_RULE_repeat1] = STATE(35),
    [sym_COMMENT] = STATE(33),
    [sym_RULE_END] = ACTIONS(79),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(81),
    [sym_SYMBOL_OR] = ACTIONS(83),
  },
  [19] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(85),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_SPACING] = ACTIONS(87),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(85),
  },
  [20] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(89),
    [sym_SYMBOL_OR] = ACTIONS(89),
    [sym_RULE_END] = ACTIONS(89),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(89),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(89),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(89),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(89),
    [sym_SPACING] = ACTIONS(91),
  },
  [21] = {
    [sym_MIN_MAX] = STATE(27),
    [sym_MIN] = STATE(29),
    [sym_RANGE_MIN_MAX] = STATE(36),
    [sym_HEX] = ACTIONS(93),
  },
  [22] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(95),
    [sym_SYMBOL_OR] = ACTIONS(95),
    [sym_RULE_END] = ACTIONS(95),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(95),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(95),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(95),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(95),
    [sym_SPACING] = ACTIONS(97),
  },
  [23] = {
    [sym_OR] = STATE(38),
    [aux_sym_RULE_repeat1] = STATE(38),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(99),
    [sym_SYMBOL_OR] = ACTIONS(83),
  },
  [24] = {
    [sym_SYMBOL_RANGE_DELIMITER] = ACTIONS(101),
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(103),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(103),
  },
  [25] = {
    [aux_sym_TOKEN_repeat1] = STATE(40),
    [sym_SPACING] = ACTIONS(105),
    [sym_SYMBOL_ENCODING_END] = ACTIONS(107),
  },
  [26] = {
    [sym_MIN_MAX] = STATE(27),
    [sym_MIN] = STATE(29),
    [sym_RANGE_MIN_MAX] = STATE(41),
    [sym_HEX] = ACTIONS(93),
  },
  [27] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(109),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(109),
  },
  [28] = {
    [sym_ENCODING] = STATE(42),
    [sym_MIN_MAX] = STATE(27),
    [aux_sym_TOKEN_repeat1] = STATE(60),
    [sym_RANGE_MIN_MAX] = STATE(41),
    [sym_MIN] = STATE(29),
    [sym_HEX] = ACTIONS(69),
    [sym_ENCODING_NAME] = ACTIONS(71),
    [sym_SPACING] = ACTIONS(111),
  },
  [29] = {
    [sym_SYMBOL_RANGE_DELIMITER] = ACTIONS(113),
  },
  [30] = {
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(115),
  },
  [31] = {
    [sym_MULTI] = STATE(45),
    [sym_MULTI_X] = STATE(20),
    [sym_RULE_END] = ACTIONS(95),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(95),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(63),
    [sym_MULTI_1p] = ACTIONS(65),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(95),
    [sym_SPACING] = ACTIONS(97),
    [sym_MULTI_0p] = ACTIONS(65),
    [sym_NON_TERMINAL_NAME] = ACTIONS(95),
    [sym_SYMBOL_OR] = ACTIONS(95),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(95),
    [sym_MULTI_01] = ACTIONS(65),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(95),
  },
  [32] = {
    [aux_sym_TOKEN_repeat1] = STATE(16),
    [aux_sym_LEFT_repeat1] = STATE(32),
    [sym_GROUP] = STATE(13),
    [sym_TOKEN] = STATE(32),
    [sym_TERMINAL] = STATE(13),
    [sym_NON_TERMINAL_NAME] = ACTIONS(117),
    [sym_SYMBOL_OR] = ACTIONS(120),
    [sym_RULE_END] = ACTIONS(120),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(122),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(120),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(125),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(120),
    [sym_SPACING] = ACTIONS(128),
  },
  [33] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(131),
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_SPACING] = ACTIONS(133),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(131),
  },
  [34] = {
    [aux_sym_TOKEN_repeat1] = STATE(16),
    [aux_sym_LEFT_repeat1] = STATE(46),
    [sym_RIGHT] = STATE(47),
    [sym_GROUP] = STATE(13),
    [sym_TOKEN] = STATE(46),
    [sym_TERMINAL] = STATE(13),
    [sym_NON_TERMINAL_NAME] = ACTIONS(31),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(33),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(35),
    [sym_SPACING] = ACTIONS(37),
  },
  [35] = {
    [sym_OR] = STATE(49),
    [aux_sym_RULE_repeat1] = STATE(49),
    [sym_COMMENT] = STATE(48),
    [sym_RULE_END] = ACTIONS(135),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(81),
    [sym_SYMBOL_OR] = ACTIONS(83),
  },
  [36] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(137),
  },
  [37] = {
    [sym_RULE_END] = ACTIONS(139),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(139),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(139),
    [sym_MULTI_1p] = ACTIONS(139),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(139),
    [sym_SPACING] = ACTIONS(141),
    [sym_MULTI_0p] = ACTIONS(139),
    [sym_NON_TERMINAL_NAME] = ACTIONS(139),
    [sym_SYMBOL_OR] = ACTIONS(139),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(139),
    [sym_MULTI_01] = ACTIONS(139),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(139),
  },
  [38] = {
    [sym_OR] = STATE(49),
    [aux_sym_RULE_repeat1] = STATE(49),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(143),
    [sym_SYMBOL_OR] = ACTIONS(83),
  },
  [39] = {
    [aux_sym_TOKEN_repeat1] = STATE(52),
    [sym_HEX] = ACTIONS(145),
    [sym_SPACING] = ACTIONS(147),
  },
  [40] = {
    [aux_sym_TOKEN_repeat1] = STATE(12),
    [sym_SPACING] = ACTIONS(27),
    [sym_SYMBOL_ENCODING_END] = ACTIONS(149),
  },
  [41] = {
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(151),
  },
  [42] = {
    [sym_MIN_MAX] = STATE(27),
    [sym_MIN] = STATE(29),
    [sym_RANGE_MIN_MAX] = STATE(55),
    [sym_HEX] = ACTIONS(93),
  },
  [43] = {
    [sym_MAX] = STATE(57),
    [sym_HEX] = ACTIONS(153),
    [sym_SYMBOL_INFINITY] = ACTIONS(153),
  },
  [44] = {
    [sym_RULE_END] = ACTIONS(155),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(155),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(155),
    [sym_MULTI_1p] = ACTIONS(155),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(155),
    [sym_SPACING] = ACTIONS(157),
    [sym_MULTI_0p] = ACTIONS(155),
    [sym_NON_TERMINAL_NAME] = ACTIONS(155),
    [sym_SYMBOL_OR] = ACTIONS(155),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(155),
    [sym_MULTI_01] = ACTIONS(155),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(155),
  },
  [45] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(159),
    [sym_SYMBOL_OR] = ACTIONS(159),
    [sym_RULE_END] = ACTIONS(159),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(159),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(159),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(159),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(159),
    [sym_SPACING] = ACTIONS(161),
  },
  [46] = {
    [aux_sym_TOKEN_repeat1] = STATE(16),
    [aux_sym_LEFT_repeat1] = STATE(32),
    [sym_GROUP] = STATE(13),
    [sym_TOKEN] = STATE(32),
    [sym_TERMINAL] = STATE(13),
    [sym_NON_TERMINAL_NAME] = ACTIONS(31),
    [sym_SYMBOL_OR] = ACTIONS(163),
    [sym_RULE_END] = ACTIONS(163),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(33),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(163),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(35),
    [sym_SPACING] = ACTIONS(37),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(163),
  },
  [47] = {
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(165),
    [sym_SYMBOL_OR] = ACTIONS(165),
    [sym_RULE_END] = ACTIONS(165),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(165),
  },
  [48] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_SPACING] = ACTIONS(169),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(167),
  },
  [49] = {
    [sym_OR] = STATE(49),
    [aux_sym_RULE_repeat1] = STATE(49),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(171),
    [sym_SYMBOL_OR] = ACTIONS(173),
    [sym_RULE_END] = ACTIONS(171),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(171),
  },
  [50] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(176),
    [sym_SYMBOL_OR] = ACTIONS(176),
    [sym_RULE_END] = ACTIONS(176),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(176),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(176),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(176),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(176),
    [sym_SPACING] = ACTIONS(178),
  },
  [51] = {
    [sym_RULE_END] = ACTIONS(180),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(180),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(180),
    [sym_MULTI_1p] = ACTIONS(180),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(180),
    [sym_SPACING] = ACTIONS(182),
    [sym_MULTI_0p] = ACTIONS(180),
    [sym_NON_TERMINAL_NAME] = ACTIONS(180),
    [sym_SYMBOL_OR] = ACTIONS(180),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(180),
    [sym_MULTI_01] = ACTIONS(180),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(180),
  },
  [52] = {
    [aux_sym_TOKEN_repeat1] = STATE(60),
    [sym_HEX] = ACTIONS(184),
    [sym_SPACING] = ACTIONS(111),
  },
  [53] = {
    [aux_sym_TOKEN_repeat1] = STATE(58),
    [sym_HEX] = ACTIONS(184),
    [sym_SPACING] = ACTIONS(186),
  },
  [54] = {
    [sym_RULE_END] = ACTIONS(188),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(188),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(188),
    [sym_MULTI_1p] = ACTIONS(188),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(188),
    [sym_SPACING] = ACTIONS(190),
    [sym_MULTI_0p] = ACTIONS(188),
    [sym_NON_TERMINAL_NAME] = ACTIONS(188),
    [sym_SYMBOL_OR] = ACTIONS(188),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(188),
    [sym_MULTI_01] = ACTIONS(188),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(188),
  },
  [55] = {
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(192),
  },
  [56] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(194),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(194),
  },
  [57] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(196),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(196),
  },
  [58] = {
    [aux_sym_TOKEN_repeat1] = STATE(60),
    [sym_HEX] = ACTIONS(198),
    [sym_SPACING] = ACTIONS(111),
  },
  [59] = {
    [sym_RULE_END] = ACTIONS(200),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(200),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(200),
    [sym_MULTI_1p] = ACTIONS(200),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(200),
    [sym_SPACING] = ACTIONS(202),
    [sym_MULTI_0p] = ACTIONS(200),
    [sym_NON_TERMINAL_NAME] = ACTIONS(200),
    [sym_SYMBOL_OR] = ACTIONS(200),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(200),
    [sym_MULTI_01] = ACTIONS(200),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(200),
  },
  [60] = {
    [aux_sym_TOKEN_repeat1] = STATE(60),
    [sym_HEX] = ACTIONS(56),
    [sym_ENCODING_NAME] = ACTIONS(56),
    [sym_SPACING] = ACTIONS(204),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_WMS, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_WMS, 1),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_EQUAL, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_EQUAL, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = false}, SHIFT(11),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = false}, SHIFT(14),
  [35] = {.count = 1, .reusable = false}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(19),
  [41] = {.count = 2, .reusable = false}, REDUCE(aux_sym_WMS_repeat1, 2), SHIFT_REPEAT(2),
  [44] = {.count = 1, .reusable = true}, REDUCE(aux_sym_WMS_repeat1, 2),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_WMS_repeat1, 2), SHIFT_REPEAT(10),
  [49] = {.count = 2, .reusable = false}, REDUCE(aux_sym_WMS_repeat1, 2), SHIFT_REPEAT(3),
  [52] = {.count = 1, .reusable = false}, REDUCE(sym_EQUAL, 2),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_EQUAL, 2),
  [56] = {.count = 1, .reusable = false}, REDUCE(aux_sym_TOKEN_repeat1, 2),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_TOKEN_repeat1, 2), SHIFT_REPEAT(12),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_TOKEN, 1),
  [63] = {.count = 1, .reusable = false}, SHIFT(21),
  [65] = {.count = 1, .reusable = false}, SHIFT(20),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_TOKEN, 1),
  [69] = {.count = 1, .reusable = false}, SHIFT(24),
  [71] = {.count = 1, .reusable = false}, SHIFT(25),
  [73] = {.count = 1, .reusable = true}, SHIFT(28),
  [75] = {.count = 1, .reusable = false}, SHIFT(31),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_LEFT, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(33),
  [81] = {.count = 1, .reusable = true}, SHIFT(3),
  [83] = {.count = 1, .reusable = true}, SHIFT(34),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_COMMENT, 3),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_COMMENT, 3),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_MULTI, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_MULTI, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(24),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_TOKEN, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_TOKEN, 2),
  [99] = {.count = 1, .reusable = true}, SHIFT(37),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_MIN, 1),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_MIN_MAX, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(40),
  [107] = {.count = 1, .reusable = false}, SHIFT(39),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_RANGE_MIN_MAX, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(60),
  [113] = {.count = 1, .reusable = true}, SHIFT(43),
  [115] = {.count = 1, .reusable = true}, SHIFT(44),
  [117] = {.count = 2, .reusable = false}, REDUCE(aux_sym_LEFT_repeat1, 2), SHIFT_REPEAT(13),
  [120] = {.count = 1, .reusable = false}, REDUCE(aux_sym_LEFT_repeat1, 2),
  [122] = {.count = 2, .reusable = false}, REDUCE(aux_sym_LEFT_repeat1, 2), SHIFT_REPEAT(14),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_LEFT_repeat1, 2), SHIFT_REPEAT(15),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_LEFT_repeat1, 2), SHIFT_REPEAT(16),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_RULE, 4),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_RULE, 4),
  [135] = {.count = 1, .reusable = true}, SHIFT(48),
  [137] = {.count = 1, .reusable = true}, SHIFT(50),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_GROUP, 3),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_GROUP, 3),
  [143] = {.count = 1, .reusable = true}, SHIFT(51),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_ENCODING, 2),
  [147] = {.count = 1, .reusable = true}, SHIFT(52),
  [149] = {.count = 1, .reusable = false}, SHIFT(53),
  [151] = {.count = 1, .reusable = true}, SHIFT(54),
  [153] = {.count = 1, .reusable = true}, SHIFT(56),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_TERMINAL, 3),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_TERMINAL, 3),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_TOKEN, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_TOKEN, 3),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_RIGHT, 1),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_OR, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_RULE, 5),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_RULE, 5),
  [171] = {.count = 1, .reusable = true}, REDUCE(aux_sym_RULE_repeat1, 2),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_RULE_repeat1, 2), SHIFT_REPEAT(34),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_MULTI_X, 3),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_MULTI_X, 3),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_GROUP, 4),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_GROUP, 4),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_ENCODING, 3),
  [186] = {.count = 1, .reusable = true}, SHIFT(58),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_TERMINAL, 4),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_TERMINAL, 4),
  [192] = {.count = 1, .reusable = true}, SHIFT(59),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_MAX, 1),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_RANGE_MIN_MAX, 3),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_ENCODING, 4),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_TERMINAL, 5),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_TERMINAL, 5),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym_TOKEN_repeat1, 2), SHIFT_REPEAT(60),
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
