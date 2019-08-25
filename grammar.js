module.exports = grammar({
  name: 'WMS',

  rules: {
    // The production rules of the context-free grammar
    WMS: $ =>
      repeat(
        choice(
          $.SPACING,
          $.RULE,
          $.COMMENT,
        )
    ),
    RULE: $ => seq($.NON_TERMINAL_NAME, $.EQUAL, $.LEFT, repeat($.OR), choice($.COMMENT, $.RULE_END)),
    RULE_END: $ => ';',

    MIN: $ => $.HEX,
    MIN_MAX: $ => $.HEX,
    MAX: $ => choice($.HEX, $.SYMBOL_INFINITY),
    RANGE_MIN_MAX: $ => choice(seq($.MIN, $.SYMBOL_RANGE_DELIMITER, $.MAX), $.MIN_MAX),
    GROUP: $ => seq($.SYMBOL_GROUP_OPEN, $.LEFT, repeat($.OR), $.SYMBOL_GROUP_CLOSE),
    TOKEN: $ => seq(repeat($.SPACING), choice($.GROUP, $.TERMINAL, $.NON_TERMINAL_NAME), optional($.MULTI)),
    LEFT: $ => repeat1($.TOKEN),
    RIGHT: $ => repeat1($.TOKEN),
    OR: $ => seq($.SYMBOL_OR, $.RIGHT),
    HEX: $ => /[0-9A-F]+/,
    SPACING: $ => /[ \n\r\t]/,
    EQUAL: $ => seq(repeat($.SPACING), $.SYMBOL_EQUAL),
    COMMENT: $ => seq($.SYMBOL_COMMENT_START, $.BLABLABLA, $.RULE_END),
    BLABLABLA: $ => /[^;]*/,
    NON_TERMINAL_NAME: $ => /[0-9A-Z_]+/,
    TERMINAL: $ => seq($.SYMBOL_TERMINAL_OPEN, repeat($.SPACING), optional($.ENCODING), $.RANGE_MIN_MAX, $.SYMBOL_TERMINAL_CLOSE),
    ENCODING: $ => seq($.ENCODING_NAME, repeat($.SPACING), $.SYMBOL_ENCODING_END, repeat($.SPACING)),
    ENCODING_NAME: $ => /[0-9a-z_]+/,
    MULTI: $ => choice($.MULTI_01, $.MULTI_0p, $.MULTI_1p, $.MULTI_X),
    MULTI_01: $ => '?',
    MULTI_0p: $ => '*',
    MULTI_1p: $ => '+',
    MULTI_X: $ => seq($.SYMBOL_MULTI_X_OPEN, $.RANGE_MIN_MAX, $.SYMBOL_MULTI_X_CLOSE),
    SYMBOL_INFINITY: $ => '∞',
    SYMBOL_EQUAL: $ => '::=',
    SYMBOL_MULTI_X_OPEN: $ => '{',
    SYMBOL_MULTI_X_CLOSE: $ => '}',
    SYMBOL_TERMINAL_OPEN: $ => '[',
    SYMBOL_TERMINAL_CLOSE: $ => ']',
    SYMBOL_ENCODING_END: $ => '&',
    SYMBOL_GROUP_OPEN: $ => '(',
    SYMBOL_GROUP_CLOSE: $ => ')',
    SYMBOL_COMMENT_START: $ => '--',
    SYMBOL_OR: $ => '|',
    SYMBOL_RANGE_DELIMITER: $ => '-'
  }
});
