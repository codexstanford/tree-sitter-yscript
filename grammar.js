module.exports = grammar({
  name: 'yscript',
  rules: {
    code: $ => repeat($._block),

    _block: $ => choice($.rule_definition),

    rule_definition: $ => seq('RULE', field('name', $.descriptor), 'PROVIDES', field('body', $.rule_body)),

    rule_body: $ => seq($._statement),

    _statement: $ => choice($.only_if),

    only_if: $ => seq(field('dest_fact', $.descriptor), 'ONLY IF', field('src_expr', $._expr)),

    _expr: $ => choice($._bool_expr),

    _bool_expr: $ => choice(
      alias($.descriptor, $.fact_expr),
      $.and_expr,
      $.or_expr
    ),

    and_expr: $ => prec.left(seq($._bool_expr, 'AND', $._bool_expr)),

    or_expr:  $ => prec.left(seq($._bool_expr, 'OR',  $._bool_expr)),

    descriptor: $ => repeat1(/\S+/)
  }
});
