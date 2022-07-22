#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 1
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_RULE = 1,
  anon_sym_PROVIDES = 2,
  anon_sym_ONLYIF = 3,
  anon_sym_AND = 4,
  anon_sym_OR = 5,
  aux_sym_descriptor_token1 = 6,
  sym_code = 7,
  sym__block = 8,
  sym_rule_definition = 9,
  sym_rule_body = 10,
  sym__statement = 11,
  sym_only_if = 12,
  sym__expr = 13,
  sym__bool_expr = 14,
  sym_and_expr = 15,
  sym_or_expr = 16,
  sym_descriptor = 17,
  aux_sym_code_repeat1 = 18,
  aux_sym_descriptor_repeat1 = 19,
  alias_sym_fact_expr = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_RULE] = "RULE",
  [anon_sym_PROVIDES] = "PROVIDES",
  [anon_sym_ONLYIF] = "ONLY IF",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [aux_sym_descriptor_token1] = "descriptor_token1",
  [sym_code] = "code",
  [sym__block] = "_block",
  [sym_rule_definition] = "rule_definition",
  [sym_rule_body] = "rule_body",
  [sym__statement] = "_statement",
  [sym_only_if] = "only_if",
  [sym__expr] = "_expr",
  [sym__bool_expr] = "_bool_expr",
  [sym_and_expr] = "and_expr",
  [sym_or_expr] = "or_expr",
  [sym_descriptor] = "descriptor",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_descriptor_repeat1] = "descriptor_repeat1",
  [alias_sym_fact_expr] = "fact_expr",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_RULE] = anon_sym_RULE,
  [anon_sym_PROVIDES] = anon_sym_PROVIDES,
  [anon_sym_ONLYIF] = anon_sym_ONLYIF,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [aux_sym_descriptor_token1] = aux_sym_descriptor_token1,
  [sym_code] = sym_code,
  [sym__block] = sym__block,
  [sym_rule_definition] = sym_rule_definition,
  [sym_rule_body] = sym_rule_body,
  [sym__statement] = sym__statement,
  [sym_only_if] = sym_only_if,
  [sym__expr] = sym__expr,
  [sym__bool_expr] = sym__bool_expr,
  [sym_and_expr] = sym_and_expr,
  [sym_or_expr] = sym_or_expr,
  [sym_descriptor] = sym_descriptor,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_descriptor_repeat1] = aux_sym_descriptor_repeat1,
  [alias_sym_fact_expr] = alias_sym_fact_expr,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_RULE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROVIDES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ONLYIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_descriptor_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_rule_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_body] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_only_if] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__bool_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_and_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_or_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_descriptor] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_descriptor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_fact_expr] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
  field_dest_fact = 2,
  field_name = 3,
  field_src_expr = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_dest_fact] = "dest_fact",
  [field_name] = "name",
  [field_src_expr] = "src_expr",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 3},
    {field_name, 1},
  [2] =
    {field_dest_fact, 0},
    {field_src_expr, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_fact_expr,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_descriptor, 2,
    sym_descriptor,
    alias_sym_fact_expr,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'P') ADVANCE(44);
      if (lookahead == 'R') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == 'D') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'F') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'I') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == 'L') ADVANCE(3);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(1);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'P') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'U') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'V') ADVANCE(7);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == 'A') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(14);
      if (lookahead == 'R') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RULE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RULE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PROVIDES);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PROVIDES);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ONLYIF);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(49);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'I') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'L') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'O') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'R') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'U') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'Y') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RULE] = ACTIONS(1),
    [anon_sym_PROVIDES] = ACTIONS(1),
    [anon_sym_ONLYIF] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [aux_sym_descriptor_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_code] = STATE(24),
    [sym__block] = STATE(8),
    [sym_rule_definition] = STATE(8),
    [aux_sym_code_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_RULE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      aux_sym_descriptor_token1,
    STATE(4), 1,
      aux_sym_descriptor_repeat1,
    STATE(13), 1,
      sym_descriptor,
    STATE(19), 1,
      sym__expr,
    STATE(10), 3,
      sym__bool_expr,
      sym_and_expr,
      sym_or_expr,
  [18] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_descriptor_token1,
    STATE(3), 1,
      aux_sym_descriptor_repeat1,
    ACTIONS(11), 3,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [33] = 4,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      aux_sym_descriptor_token1,
    STATE(3), 1,
      aux_sym_descriptor_repeat1,
    ACTIONS(18), 3,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [48] = 5,
    ACTIONS(22), 1,
      aux_sym_descriptor_token1,
    STATE(17), 1,
      aux_sym_descriptor_repeat1,
    STATE(21), 1,
      sym_rule_body,
    STATE(22), 1,
      sym_descriptor,
    STATE(20), 2,
      sym__statement,
      sym_only_if,
  [65] = 4,
    ACTIONS(7), 1,
      aux_sym_descriptor_token1,
    STATE(4), 1,
      aux_sym_descriptor_repeat1,
    STATE(13), 1,
      sym_descriptor,
    STATE(11), 3,
      sym__bool_expr,
      sym_and_expr,
      sym_or_expr,
  [80] = 4,
    ACTIONS(7), 1,
      aux_sym_descriptor_token1,
    STATE(4), 1,
      aux_sym_descriptor_repeat1,
    STATE(13), 1,
      sym_descriptor,
    STATE(12), 3,
      sym__bool_expr,
      sym_and_expr,
      sym_or_expr,
  [95] = 3,
    ACTIONS(5), 1,
      anon_sym_RULE,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(9), 3,
      sym__block,
      sym_rule_definition,
      aux_sym_code_repeat1,
  [107] = 3,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_RULE,
    STATE(9), 3,
      sym__block,
      sym_rule_definition,
      aux_sym_code_repeat1,
  [119] = 3,
    ACTIONS(33), 1,
      anon_sym_AND,
    ACTIONS(35), 1,
      anon_sym_OR,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [130] = 1,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [137] = 1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [144] = 1,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [151] = 3,
    ACTIONS(18), 1,
      anon_sym_PROVIDES,
    ACTIONS(43), 1,
      aux_sym_descriptor_token1,
    STATE(16), 1,
      aux_sym_descriptor_repeat1,
  [161] = 3,
    ACTIONS(45), 1,
      aux_sym_descriptor_token1,
    STATE(14), 1,
      aux_sym_descriptor_repeat1,
    STATE(23), 1,
      sym_descriptor,
  [171] = 3,
    ACTIONS(11), 1,
      anon_sym_PROVIDES,
    ACTIONS(47), 1,
      aux_sym_descriptor_token1,
    STATE(16), 1,
      aux_sym_descriptor_repeat1,
  [181] = 3,
    ACTIONS(16), 1,
      anon_sym_ONLYIF,
    ACTIONS(50), 1,
      aux_sym_descriptor_token1,
    STATE(18), 1,
      aux_sym_descriptor_repeat1,
  [191] = 3,
    ACTIONS(9), 1,
      anon_sym_ONLYIF,
    ACTIONS(52), 1,
      aux_sym_descriptor_token1,
    STATE(18), 1,
      aux_sym_descriptor_repeat1,
  [201] = 1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [206] = 1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [211] = 1,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [216] = 1,
    ACTIONS(61), 1,
      anon_sym_ONLYIF,
  [220] = 1,
    ACTIONS(63), 1,
      anon_sym_PROVIDES,
  [224] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 107,
  [SMALL_STATE(10)] = 119,
  [SMALL_STATE(11)] = 130,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 144,
  [SMALL_STATE(14)] = 151,
  [SMALL_STATE(15)] = 161,
  [SMALL_STATE(16)] = 171,
  [SMALL_STATE(17)] = 181,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 201,
  [SMALL_STATE(20)] = 206,
  [SMALL_STATE(21)] = 211,
  [SMALL_STATE(22)] = 216,
  [SMALL_STATE(23)] = 220,
  [SMALL_STATE(24)] = 224,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_descriptor_repeat1, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(3),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor, 1),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descriptor, 1),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expr, 1, .production_id = 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(16),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_if, 3, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 4, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_yscript(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
