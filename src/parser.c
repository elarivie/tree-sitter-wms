#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 59
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
  anon_sym_AMP = 6,
  sym_ENCODING_NAME = 7,
  sym_MULTI_01 = 8,
  sym_MULTI_0p = 9,
  sym_MULTI_1p = 10,
  sym_SYMBOL_INFINITY = 11,
  sym_SYMBOL_EQUAL = 12,
  sym_SYMBOL_MULTI_X_OPEN = 13,
  sym_SYMBOL_MULTI_X_CLOSE = 14,
  sym_SYMBOL_TERMINAL_OPEN = 15,
  sym_SYMBOL_TERMINAL_CLOSE = 16,
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
  [anon_sym_AMP] = "&",
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
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
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == 8734) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(8);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '{') ADVANCE(26);
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
      if (lookahead == 8734) ADVANCE(24);
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
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_HEX);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_NON_TERMINAL_NAME);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_ENCODING_NAME);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_MULTI_01);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_MULTI_0p);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_MULTI_1p);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_SYMBOL_INFINITY);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_SYMBOL_EQUAL);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_SYMBOL_MULTI_X_OPEN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_SYMBOL_MULTI_X_CLOSE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_SYMBOL_TERMINAL_OPEN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_SYMBOL_TERMINAL_CLOSE);
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
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 7},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_SYMBOL_RANGE_DELIMITER] = ACTIONS(1),
    [sym_MULTI_1p] = ACTIONS(1),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(1),
    [sym_RULE_END] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(1),
    [sym_SYMBOL_EQUAL] = ACTIONS(1),
    [sym_MULTI_0p] = ACTIONS(1),
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(1),
    [sym_MULTI_01] = ACTIONS(1),
    [sym_NON_TERMINAL_NAME] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_SYMBOL_OR] = ACTIONS(1),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(1),
    [sym_SYMBOL_INFINITY] = ACTIONS(1),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(1),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(1),
    [sym_HEX] = ACTIONS(1),
    [sym_ENCODING_NAME] = ACTIONS(1),
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
    [sym_SPACING] = ACTIONS(11),
    [sym_SYMBOL_EQUAL] = ACTIONS(13),
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
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(23),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(23),
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
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(33),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(35),
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
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(52),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(52),
    [sym_SPACING] = ACTIONS(54),
  },
  [12] = {
    [aux_sym_TOKEN_repeat1] = STATE(12),
    [sym_NON_TERMINAL_NAME] = ACTIONS(56),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(56),
    [sym_SYMBOL_EQUAL] = ACTIONS(56),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(56),
    [anon_sym_AMP] = ACTIONS(56),
    [sym_SPACING] = ACTIONS(58),
  },
  [13] = {
    [sym_MULTI] = STATE(22),
    [sym_MULTI_X] = STATE(21),
    [sym_MULTI_1p] = ACTIONS(61),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(63),
    [sym_RULE_END] = ACTIONS(63),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(63),
    [sym_MULTI_0p] = ACTIONS(61),
    [sym_SPACING] = ACTIONS(65),
    [sym_MULTI_01] = ACTIONS(61),
    [sym_NON_TERMINAL_NAME] = ACTIONS(63),
    [sym_SYMBOL_OR] = ACTIONS(63),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(63),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(67),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(63),
  },
  [14] = {
    [sym_ENCODING] = STATE(25),
    [sym_MIN_MAX] = STATE(26),
    [aux_sym_TOKEN_repeat1] = STATE(27),
    [sym_RANGE_MIN_MAX] = STATE(29),
    [sym_MIN] = STATE(28),
    [sym_HEX] = ACTIONS(69),
    [sym_ENCODING_NAME] = ACTIONS(71),
    [sym_SPACING] = ACTIONS(73),
  },
  [15] = {
    [aux_sym_TOKEN_repeat1] = STATE(16),
    [aux_sym_LEFT_repeat1] = STATE(17),
    [sym_GROUP] = STATE(13),
    [sym_TOKEN] = STATE(17),
    [sym_LEFT] = STATE(30),
    [sym_TERMINAL] = STATE(13),
    [sym_NON_TERMINAL_NAME] = ACTIONS(31),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(33),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(35),
    [sym_SPACING] = ACTIONS(37),
  },
  [16] = {
    [sym_GROUP] = STATE(31),
    [aux_sym_TOKEN_repeat1] = STATE(12),
    [sym_TERMINAL] = STATE(31),
    [sym_NON_TERMINAL_NAME] = ACTIONS(75),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(33),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(35),
    [sym_SPACING] = ACTIONS(27),
  },
  [17] = {
    [aux_sym_TOKEN_repeat1] = STATE(16),
    [aux_sym_LEFT_repeat1] = STATE(32),
    [sym_GROUP] = STATE(13),
    [sym_TOKEN] = STATE(32),
    [sym_TERMINAL] = STATE(13),
    [sym_NON_TERMINAL_NAME] = ACTIONS(31),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(33),
    [sym_SYMBOL_OR] = ACTIONS(77),
    [sym_RULE_END] = ACTIONS(77),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(35),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(77),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(77),
    [sym_SPACING] = ACTIONS(37),
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
    [sym_MIN_MAX] = STATE(26),
    [sym_MIN] = STATE(28),
    [sym_RANGE_MIN_MAX] = STATE(36),
    [sym_HEX] = ACTIONS(89),
  },
  [21] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(91),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(91),
    [sym_SYMBOL_OR] = ACTIONS(91),
    [sym_RULE_END] = ACTIONS(91),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(91),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(91),
    [sym_SPACING] = ACTIONS(93),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(91),
  },
  [22] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(95),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(95),
    [sym_SYMBOL_OR] = ACTIONS(95),
    [sym_RULE_END] = ACTIONS(95),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(95),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(95),
    [sym_SPACING] = ACTIONS(97),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(95),
  },
  [23] = {
    [sym_SYMBOL_RANGE_DELIMITER] = ACTIONS(99),
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(101),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(101),
  },
  [24] = {
    [aux_sym_TOKEN_repeat1] = STATE(37),
    [sym_SPACING] = ACTIONS(103),
  },
  [25] = {
    [sym_MIN_MAX] = STATE(26),
    [sym_MIN] = STATE(28),
    [sym_RANGE_MIN_MAX] = STATE(38),
    [sym_HEX] = ACTIONS(89),
  },
  [26] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(105),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(105),
  },
  [27] = {
    [sym_ENCODING] = STATE(39),
    [sym_MIN_MAX] = STATE(26),
    [aux_sym_TOKEN_repeat1] = STATE(58),
    [sym_RANGE_MIN_MAX] = STATE(38),
    [sym_MIN] = STATE(28),
    [sym_HEX] = ACTIONS(69),
    [sym_ENCODING_NAME] = ACTIONS(71),
    [sym_SPACING] = ACTIONS(107),
  },
  [28] = {
    [sym_SYMBOL_RANGE_DELIMITER] = ACTIONS(109),
  },
  [29] = {
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(111),
  },
  [30] = {
    [sym_OR] = STATE(43),
    [aux_sym_RULE_repeat1] = STATE(43),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(113),
    [sym_SYMBOL_OR] = ACTIONS(83),
  },
  [31] = {
    [sym_MULTI] = STATE(44),
    [sym_MULTI_X] = STATE(21),
    [sym_MULTI_1p] = ACTIONS(61),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(95),
    [sym_RULE_END] = ACTIONS(95),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(95),
    [sym_MULTI_0p] = ACTIONS(61),
    [sym_SPACING] = ACTIONS(97),
    [sym_MULTI_01] = ACTIONS(61),
    [sym_NON_TERMINAL_NAME] = ACTIONS(95),
    [sym_SYMBOL_OR] = ACTIONS(95),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(95),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(67),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(95),
  },
  [32] = {
    [aux_sym_TOKEN_repeat1] = STATE(16),
    [aux_sym_LEFT_repeat1] = STATE(32),
    [sym_GROUP] = STATE(13),
    [sym_TOKEN] = STATE(32),
    [sym_TERMINAL] = STATE(13),
    [sym_NON_TERMINAL_NAME] = ACTIONS(115),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(118),
    [sym_SYMBOL_OR] = ACTIONS(121),
    [sym_RULE_END] = ACTIONS(121),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(123),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(121),
    [sym_SPACING] = ACTIONS(126),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(121),
  },
  [33] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_SPACING] = ACTIONS(131),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(129),
  },
  [34] = {
    [aux_sym_TOKEN_repeat1] = STATE(16),
    [aux_sym_LEFT_repeat1] = STATE(45),
    [sym_RIGHT] = STATE(46),
    [sym_GROUP] = STATE(13),
    [sym_TOKEN] = STATE(45),
    [sym_TERMINAL] = STATE(13),
    [sym_NON_TERMINAL_NAME] = ACTIONS(31),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(33),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(35),
    [sym_SPACING] = ACTIONS(37),
  },
  [35] = {
    [sym_OR] = STATE(48),
    [aux_sym_RULE_repeat1] = STATE(48),
    [sym_COMMENT] = STATE(47),
    [sym_RULE_END] = ACTIONS(133),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(81),
    [sym_SYMBOL_OR] = ACTIONS(83),
  },
  [36] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(135),
  },
  [37] = {
    [aux_sym_TOKEN_repeat1] = STATE(12),
    [anon_sym_AMP] = ACTIONS(137),
    [sym_SPACING] = ACTIONS(27),
  },
  [38] = {
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(139),
  },
  [39] = {
    [sym_MIN_MAX] = STATE(26),
    [sym_MIN] = STATE(28),
    [sym_RANGE_MIN_MAX] = STATE(52),
    [sym_HEX] = ACTIONS(89),
  },
  [40] = {
    [sym_MAX] = STATE(54),
    [sym_HEX] = ACTIONS(141),
    [sym_SYMBOL_INFINITY] = ACTIONS(141),
  },
  [41] = {
    [sym_MULTI_1p] = ACTIONS(143),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(143),
    [sym_RULE_END] = ACTIONS(143),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(143),
    [sym_MULTI_0p] = ACTIONS(143),
    [sym_SPACING] = ACTIONS(145),
    [sym_MULTI_01] = ACTIONS(143),
    [sym_NON_TERMINAL_NAME] = ACTIONS(143),
    [sym_SYMBOL_OR] = ACTIONS(143),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(143),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(143),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(143),
  },
  [42] = {
    [sym_MULTI_1p] = ACTIONS(147),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(147),
    [sym_RULE_END] = ACTIONS(147),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(147),
    [sym_MULTI_0p] = ACTIONS(147),
    [sym_SPACING] = ACTIONS(149),
    [sym_MULTI_01] = ACTIONS(147),
    [sym_NON_TERMINAL_NAME] = ACTIONS(147),
    [sym_SYMBOL_OR] = ACTIONS(147),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(147),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(147),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(147),
  },
  [43] = {
    [sym_OR] = STATE(48),
    [aux_sym_RULE_repeat1] = STATE(48),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(151),
    [sym_SYMBOL_OR] = ACTIONS(83),
  },
  [44] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(153),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(153),
    [sym_SYMBOL_OR] = ACTIONS(153),
    [sym_RULE_END] = ACTIONS(153),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(153),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(153),
    [sym_SPACING] = ACTIONS(155),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(153),
  },
  [45] = {
    [aux_sym_TOKEN_repeat1] = STATE(16),
    [aux_sym_LEFT_repeat1] = STATE(32),
    [sym_GROUP] = STATE(13),
    [sym_TOKEN] = STATE(32),
    [sym_TERMINAL] = STATE(13),
    [sym_NON_TERMINAL_NAME] = ACTIONS(31),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(33),
    [sym_SYMBOL_OR] = ACTIONS(157),
    [sym_RULE_END] = ACTIONS(157),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(35),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(157),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(157),
    [sym_SPACING] = ACTIONS(37),
  },
  [46] = {
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(159),
    [sym_SYMBOL_OR] = ACTIONS(159),
    [sym_RULE_END] = ACTIONS(159),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(159),
  },
  [47] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(161),
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_SPACING] = ACTIONS(163),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(161),
  },
  [48] = {
    [sym_OR] = STATE(48),
    [aux_sym_RULE_repeat1] = STATE(48),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(165),
    [sym_SYMBOL_OR] = ACTIONS(167),
    [sym_RULE_END] = ACTIONS(165),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(165),
  },
  [49] = {
    [sym_NON_TERMINAL_NAME] = ACTIONS(170),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(170),
    [sym_SYMBOL_OR] = ACTIONS(170),
    [sym_RULE_END] = ACTIONS(170),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(170),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(170),
    [sym_SPACING] = ACTIONS(172),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(170),
  },
  [50] = {
    [aux_sym_TOKEN_repeat1] = STATE(56),
    [sym_HEX] = ACTIONS(174),
    [sym_SPACING] = ACTIONS(176),
  },
  [51] = {
    [sym_MULTI_1p] = ACTIONS(178),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(178),
    [sym_RULE_END] = ACTIONS(178),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(178),
    [sym_MULTI_0p] = ACTIONS(178),
    [sym_SPACING] = ACTIONS(180),
    [sym_MULTI_01] = ACTIONS(178),
    [sym_NON_TERMINAL_NAME] = ACTIONS(178),
    [sym_SYMBOL_OR] = ACTIONS(178),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(178),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(178),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(178),
  },
  [52] = {
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(182),
  },
  [53] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(184),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(184),
  },
  [54] = {
    [sym_SYMBOL_MULTI_X_CLOSE] = ACTIONS(186),
    [sym_SYMBOL_TERMINAL_CLOSE] = ACTIONS(186),
  },
  [55] = {
    [sym_MULTI_1p] = ACTIONS(188),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(188),
    [sym_RULE_END] = ACTIONS(188),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(188),
    [sym_MULTI_0p] = ACTIONS(188),
    [sym_SPACING] = ACTIONS(190),
    [sym_MULTI_01] = ACTIONS(188),
    [sym_NON_TERMINAL_NAME] = ACTIONS(188),
    [sym_SYMBOL_OR] = ACTIONS(188),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(188),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(188),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(188),
  },
  [56] = {
    [aux_sym_TOKEN_repeat1] = STATE(58),
    [sym_HEX] = ACTIONS(192),
    [sym_SPACING] = ACTIONS(107),
  },
  [57] = {
    [sym_MULTI_1p] = ACTIONS(194),
    [sym_SYMBOL_TERMINAL_OPEN] = ACTIONS(194),
    [sym_RULE_END] = ACTIONS(194),
    [sym_SYMBOL_GROUP_CLOSE] = ACTIONS(194),
    [sym_MULTI_0p] = ACTIONS(194),
    [sym_SPACING] = ACTIONS(196),
    [sym_MULTI_01] = ACTIONS(194),
    [sym_NON_TERMINAL_NAME] = ACTIONS(194),
    [sym_SYMBOL_OR] = ACTIONS(194),
    [sym_SYMBOL_GROUP_OPEN] = ACTIONS(194),
    [sym_SYMBOL_MULTI_X_OPEN] = ACTIONS(194),
    [sym_SYMBOL_COMMENT_START] = ACTIONS(194),
  },
  [58] = {
    [aux_sym_TOKEN_repeat1] = STATE(58),
    [sym_HEX] = ACTIONS(56),
    [sym_ENCODING_NAME] = ACTIONS(56),
    [sym_SPACING] = ACTIONS(198),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_WMS, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = false}, SHIFT(6),
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
  [61] = {.count = 1, .reusable = false}, SHIFT(21),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_TOKEN, 1),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_TOKEN, 1),
  [67] = {.count = 1, .reusable = false}, SHIFT(20),
  [69] = {.count = 1, .reusable = false}, SHIFT(23),
  [71] = {.count = 1, .reusable = false}, SHIFT(24),
  [73] = {.count = 1, .reusable = true}, SHIFT(27),
  [75] = {.count = 1, .reusable = false}, SHIFT(31),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_LEFT, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(33),
  [81] = {.count = 1, .reusable = true}, SHIFT(3),
  [83] = {.count = 1, .reusable = true}, SHIFT(34),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_COMMENT, 3),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_COMMENT, 3),
  [89] = {.count = 1, .reusable = true}, SHIFT(23),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_MULTI, 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_MULTI, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_TOKEN, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_TOKEN, 2),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_MIN, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_MIN_MAX, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(37),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_RANGE_MIN_MAX, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(58),
  [109] = {.count = 1, .reusable = true}, SHIFT(40),
  [111] = {.count = 1, .reusable = true}, SHIFT(41),
  [113] = {.count = 1, .reusable = true}, SHIFT(42),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_LEFT_repeat1, 2), SHIFT_REPEAT(13),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_LEFT_repeat1, 2), SHIFT_REPEAT(14),
  [121] = {.count = 1, .reusable = false}, REDUCE(aux_sym_LEFT_repeat1, 2),
  [123] = {.count = 2, .reusable = false}, REDUCE(aux_sym_LEFT_repeat1, 2), SHIFT_REPEAT(15),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_LEFT_repeat1, 2), SHIFT_REPEAT(16),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_RULE, 4),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_RULE, 4),
  [133] = {.count = 1, .reusable = true}, SHIFT(47),
  [135] = {.count = 1, .reusable = true}, SHIFT(49),
  [137] = {.count = 1, .reusable = false}, SHIFT(50),
  [139] = {.count = 1, .reusable = true}, SHIFT(51),
  [141] = {.count = 1, .reusable = true}, SHIFT(53),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_TERMINAL, 3),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_TERMINAL, 3),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_GROUP, 3),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_GROUP, 3),
  [151] = {.count = 1, .reusable = true}, SHIFT(55),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_TOKEN, 3),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_TOKEN, 3),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_RIGHT, 1),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_OR, 2),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_RULE, 5),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_RULE, 5),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym_RULE_repeat1, 2),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_RULE_repeat1, 2), SHIFT_REPEAT(34),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_MULTI_X, 3),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_MULTI_X, 3),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_ENCODING, 3),
  [176] = {.count = 1, .reusable = true}, SHIFT(56),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_TERMINAL, 4),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_TERMINAL, 4),
  [182] = {.count = 1, .reusable = true}, SHIFT(57),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_MAX, 1),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_RANGE_MIN_MAX, 3),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_GROUP, 4),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_GROUP, 4),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_ENCODING, 4),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_TERMINAL, 5),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_TERMINAL, 5),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_TOKEN_repeat1, 2), SHIFT_REPEAT(58),
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
