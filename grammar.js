module.exports = grammar({
  name: 'WMS',

  rules: {
    // The production rules of the context-free grammar
    WMS: $ => repeat($.RULE),
    RULE: $ => seq($.NON_TERMINAL, $.SPACING, $.EQUAL, $.SPACING, $.TERMINAL, $.SPACING, $.COMMENT, ';'),
    SPACING: $ => repeat1(' '),
    EQUAL: $ => '::=',
    NON_TERMINAL: $ => /[A-Z_]+/,
    TERMINAL: $ => seq('[', /[0-9A-Z]{2}/, ']'),
    COMMENT: $ => seq('--', $.BLABLABLA),
    BLABLABLA: $ => /[^;]*/,
  }
});
