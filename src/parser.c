#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 1
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_RULE = 1,
  anon_sym_PROVIDES = 2,
  anon_sym_ONLYIF = 3,
  anon_sym_NOT = 4,
  anon_sym_AND = 5,
  anon_sym_OR = 6,
  aux_sym_descriptor_token1 = 7,
  sym_code = 8,
  sym__block = 9,
  sym_rule_definition = 10,
  sym_rule_body = 11,
  sym__statement = 12,
  sym_only_if = 13,
  sym__expr = 14,
  sym__bool_expr = 15,
  sym_not_expr = 16,
  sym_and_expr = 17,
  sym_or_expr = 18,
  sym_descriptor = 19,
  aux_sym_code_repeat1 = 20,
  aux_sym_descriptor_repeat1 = 21,
  alias_sym_fact_expr = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_RULE] = "RULE",
  [anon_sym_PROVIDES] = "PROVIDES",
  [anon_sym_ONLYIF] = "ONLY IF",
  [anon_sym_NOT] = "NOT",
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
  [sym_not_expr] = "not_expr",
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
  [anon_sym_NOT] = anon_sym_NOT,
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
  [sym_not_expr] = sym_not_expr,
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
  [anon_sym_NOT] = {
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
  [sym_not_expr] = {
    .visible = true,
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
  [4] = {
    [1] = alias_sym_fact_expr,
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
      if (eof) ADVANCE(22);
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(47);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == 'D') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'F') ADVANCE(27);
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
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(1);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == 'P') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'U') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'V') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead == 'O') ADVANCE(46);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(14);
      if (lookahead == 'P') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RULE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RULE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PROVIDES);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PROVIDES);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_ONLYIF);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'E') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'L') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'N') ADVANCE(39);
      if (lookahead == 'R') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'N') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'O') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'O') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'R') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'U') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'V') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'Y') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RULE] = ACTIONS(1),
    [anon_sym_PROVIDES] = ACTIONS(1),
    [anon_sym_ONLYIF] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [aux_sym_descriptor_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_code] = STATE(26),
    [sym__block] = STATE(8),
    [sym_rule_definition] = STATE(8),
    [aux_sym_code_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_RULE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_NOT,
    ACTIONS(9), 1,
      aux_sym_descriptor_token1,
    STATE(6), 1,
      aux_sym_descriptor_repeat1,
    STATE(10), 1,
      sym_descriptor,
    STATE(21), 1,
      sym__expr,
    STATE(14), 4,
      sym__bool_expr,
      sym_not_expr,
      sym_and_expr,
      sym_or_expr,
  [22] = 5,
    ACTIONS(7), 1,
      anon_sym_NOT,
    ACTIONS(9), 1,
      aux_sym_descriptor_token1,
    STATE(6), 1,
      aux_sym_descriptor_repeat1,
    STATE(10), 1,
      sym_descriptor,
    STATE(11), 4,
      sym__bool_expr,
      sym_not_expr,
      sym_and_expr,
      sym_or_expr,
  [41] = 5,
    ACTIONS(7), 1,
      anon_sym_NOT,
    ACTIONS(9), 1,
      aux_sym_descriptor_token1,
    STATE(6), 1,
      aux_sym_descriptor_repeat1,
    STATE(10), 1,
      sym_descriptor,
    STATE(12), 4,
      sym__bool_expr,
      sym_not_expr,
      sym_and_expr,
      sym_or_expr,
  [60] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      aux_sym_descriptor_token1,
    STATE(5), 1,
      aux_sym_descriptor_repeat1,
    ACTIONS(13), 3,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [75] = 4,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      aux_sym_descriptor_token1,
    STATE(5), 1,
      aux_sym_descriptor_repeat1,
    ACTIONS(20), 3,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [90] = 5,
    ACTIONS(24), 1,
      aux_sym_descriptor_token1,
    STATE(19), 1,
      aux_sym_descriptor_repeat1,
    STATE(23), 1,
      sym_rule_body,
    STATE(24), 1,
      sym_descriptor,
    STATE(22), 2,
      sym__statement,
      sym_only_if,
  [107] = 3,
    ACTIONS(5), 1,
      anon_sym_RULE,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(9), 3,
      sym__block,
      sym_rule_definition,
      aux_sym_code_repeat1,
  [119] = 3,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_RULE,
    STATE(9), 3,
      sym__block,
      sym_rule_definition,
      aux_sym_code_repeat1,
  [131] = 1,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [138] = 1,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [145] = 1,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [152] = 1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [159] = 3,
    ACTIONS(43), 1,
      anon_sym_AND,
    ACTIONS(45), 1,
      anon_sym_OR,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [170] = 3,
    ACTIONS(20), 1,
      anon_sym_PROVIDES,
    ACTIONS(47), 1,
      aux_sym_descriptor_token1,
    STATE(18), 1,
      aux_sym_descriptor_repeat1,
  [180] = 3,
    ACTIONS(49), 1,
      aux_sym_descriptor_token1,
    STATE(6), 1,
      aux_sym_descriptor_repeat1,
    STATE(13), 1,
      sym_descriptor,
  [190] = 3,
    ACTIONS(51), 1,
      aux_sym_descriptor_token1,
    STATE(15), 1,
      aux_sym_descriptor_repeat1,
    STATE(25), 1,
      sym_descriptor,
  [200] = 3,
    ACTIONS(13), 1,
      anon_sym_PROVIDES,
    ACTIONS(53), 1,
      aux_sym_descriptor_token1,
    STATE(18), 1,
      aux_sym_descriptor_repeat1,
  [210] = 3,
    ACTIONS(18), 1,
      anon_sym_ONLYIF,
    ACTIONS(56), 1,
      aux_sym_descriptor_token1,
    STATE(20), 1,
      aux_sym_descriptor_repeat1,
  [220] = 3,
    ACTIONS(11), 1,
      anon_sym_ONLYIF,
    ACTIONS(58), 1,
      aux_sym_descriptor_token1,
    STATE(20), 1,
      aux_sym_descriptor_repeat1,
  [230] = 1,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [235] = 1,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [240] = 1,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [245] = 1,
    ACTIONS(67), 1,
      anon_sym_ONLYIF,
  [249] = 1,
    ACTIONS(69), 1,
      anon_sym_PROVIDES,
  [253] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 75,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 119,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 138,
  [SMALL_STATE(12)] = 145,
  [SMALL_STATE(13)] = 152,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 170,
  [SMALL_STATE(16)] = 180,
  [SMALL_STATE(17)] = 190,
  [SMALL_STATE(18)] = 200,
  [SMALL_STATE(19)] = 210,
  [SMALL_STATE(20)] = 220,
  [SMALL_STATE(21)] = 230,
  [SMALL_STATE(22)] = 235,
  [SMALL_STATE(23)] = 240,
  [SMALL_STATE(24)] = 245,
  [SMALL_STATE(25)] = 249,
  [SMALL_STATE(26)] = 253,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_descriptor_repeat1, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(5),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor, 1),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descriptor, 1),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expr, 1, .production_id = 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expr, 2, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(18),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(20),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_if, 3, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 4, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
