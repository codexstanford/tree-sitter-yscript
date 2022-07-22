module.exports = grammar({
  name: 'yscript',
  rules: {
    code: $ => repeat($._block),

    _block: $ => choice($.rule_definition),

    rule_definition: $ => seq('RULE', field('name', $.descriptor), 'PROVIDES', field('body', $.rule_body)),

    rule_body: $ => seq($._statement),

    _statement: $ => choice($.only_if),

    only_if: $ => seq(field('dest_fact', $.descriptor), 'ONLY IF', field('src_expr', $._expr)),

    _expr: $ => choice(alias($.descriptor, $.fact_expr)),

    descriptor: $ => /[a-z]+/
  }
});
