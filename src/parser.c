#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 1
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_RULE = 1,
  anon_sym_PROVIDES = 2,
  anon_sym_IF = 3,
  anon_sym_THEN = 4,
  anon_sym_ONLYIF = 5,
  anon_sym_NOT = 6,
  anon_sym_AND = 7,
  anon_sym_OR = 8,
  aux_sym_descriptor_token1 = 9,
  sym_code = 10,
  sym__block = 11,
  sym_rule_definition = 12,
  sym_rule_body = 13,
  sym__statement = 14,
  sym_if_then = 15,
  sym_only_if = 16,
  sym__expr = 17,
  sym__bool_expr = 18,
  sym_not_expr = 19,
  sym_and_expr = 20,
  sym_or_expr = 21,
  sym_descriptor = 22,
  aux_sym_code_repeat1 = 23,
  aux_sym_descriptor_repeat1 = 24,
  alias_sym_fact_expr = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_RULE] = "RULE",
  [anon_sym_PROVIDES] = "PROVIDES",
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
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
  [sym_if_then] = "if_then",
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
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
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
  [sym_if_then] = sym_if_then,
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
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
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
  [sym_if_then] = {
    .visible = true,
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
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 3},
    {field_name, 1},
  [2] =
    {field_dest_fact, 0},
    {field_src_expr, 2},
  [4] =
    {field_dest_fact, 3},
    {field_src_expr, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_fact_expr,
  },
  [3] = {
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
      if (eof) ADVANCE(28);
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == 'O') ADVANCE(54);
      if (lookahead == 'P') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == 'D') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'F') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == 'H') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'I') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'I') ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(2);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'S') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'V') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(59);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == 'A') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(19);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RULE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RULE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PROVIDES);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PROVIDES);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_THEN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_ONLYIF);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'H') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'I') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'L') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'L') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'N') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == 'R') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'N') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'O') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'O') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'R') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'U') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'V') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'Y') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RULE] = ACTIONS(1),
    [anon_sym_PROVIDES] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_ONLYIF] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [aux_sym_descriptor_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_code] = STATE(38),
    [sym__block] = STATE(11),
    [sym_rule_definition] = STATE(11),
    [aux_sym_code_repeat1] = STATE(11),
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
    STATE(10), 1,
      aux_sym_descriptor_repeat1,
    STATE(17), 1,
      sym_descriptor,
    STATE(31), 1,
      sym__expr,
    STATE(20), 4,
      sym__bool_expr,
      sym_not_expr,
      sym_and_expr,
      sym_or_expr,
  [22] = 6,
    ACTIONS(11), 1,
      anon_sym_NOT,
    ACTIONS(13), 1,
      aux_sym_descriptor_token1,
    STATE(15), 1,
      aux_sym_descriptor_repeat1,
    STATE(17), 1,
      sym_descriptor,
    STATE(35), 1,
      sym__expr,
    STATE(27), 4,
      sym__bool_expr,
      sym_not_expr,
      sym_and_expr,
      sym_or_expr,
  [44] = 5,
    ACTIONS(7), 1,
      anon_sym_NOT,
    ACTIONS(9), 1,
      aux_sym_descriptor_token1,
    STATE(10), 1,
      aux_sym_descriptor_repeat1,
    STATE(17), 1,
      sym_descriptor,
    STATE(12), 4,
      sym__bool_expr,
      sym_not_expr,
      sym_and_expr,
      sym_or_expr,
  [63] = 6,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      aux_sym_descriptor_token1,
    STATE(25), 1,
      aux_sym_descriptor_repeat1,
    STATE(34), 1,
      sym_rule_body,
    STATE(36), 1,
      sym_descriptor,
    STATE(33), 3,
      sym__statement,
      sym_if_then,
      sym_only_if,
  [84] = 5,
    ACTIONS(7), 1,
      anon_sym_NOT,
    ACTIONS(9), 1,
      aux_sym_descriptor_token1,
    STATE(10), 1,
      aux_sym_descriptor_repeat1,
    STATE(17), 1,
      sym_descriptor,
    STATE(16), 4,
      sym__bool_expr,
      sym_not_expr,
      sym_and_expr,
      sym_or_expr,
  [103] = 5,
    ACTIONS(11), 1,
      anon_sym_NOT,
    ACTIONS(13), 1,
      aux_sym_descriptor_token1,
    STATE(15), 1,
      aux_sym_descriptor_repeat1,
    STATE(17), 1,
      sym_descriptor,
    STATE(12), 4,
      sym__bool_expr,
      sym_not_expr,
      sym_and_expr,
      sym_or_expr,
  [122] = 5,
    ACTIONS(11), 1,
      anon_sym_NOT,
    ACTIONS(13), 1,
      aux_sym_descriptor_token1,
    STATE(15), 1,
      aux_sym_descriptor_repeat1,
    STATE(17), 1,
      sym_descriptor,
    STATE(16), 4,
      sym__bool_expr,
      sym_not_expr,
      sym_and_expr,
      sym_or_expr,
  [141] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_descriptor_token1,
    STATE(9), 1,
      aux_sym_descriptor_repeat1,
    ACTIONS(21), 3,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [156] = 4,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      aux_sym_descriptor_token1,
    STATE(9), 1,
      aux_sym_descriptor_repeat1,
    ACTIONS(28), 3,
      anon_sym_RULE,
      anon_sym_AND,
      anon_sym_OR,
  [171] = 3,
    ACTIONS(5), 1,
      anon_sym_RULE,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(13), 3,
      sym__block,
      sym_rule_definition,
      aux_sym_code_repeat1,
  [183] = 1,
    ACTIONS(34), 5,
      ts_builtin_sym_end,
      anon_sym_RULE,
      anon_sym_THEN,
      anon_sym_AND,
      anon_sym_OR,
  [191] = 3,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_RULE,
    STATE(13), 3,
      sym__block,
      sym_rule_definition,
      aux_sym_code_repeat1,
  [203] = 3,
    ACTIONS(41), 1,
      aux_sym_descriptor_token1,
    STATE(14), 1,
      aux_sym_descriptor_repeat1,
    ACTIONS(21), 3,
      anon_sym_THEN,
      anon_sym_AND,
      anon_sym_OR,
  [215] = 3,
    ACTIONS(44), 1,
      aux_sym_descriptor_token1,
    STATE(14), 1,
      aux_sym_descriptor_repeat1,
    ACTIONS(28), 3,
      anon_sym_THEN,
      anon_sym_AND,
      anon_sym_OR,
  [227] = 1,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      anon_sym_RULE,
      anon_sym_THEN,
      anon_sym_AND,
      anon_sym_OR,
  [235] = 1,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_RULE,
      anon_sym_THEN,
      anon_sym_AND,
      anon_sym_OR,
  [243] = 1,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      anon_sym_RULE,
      anon_sym_THEN,
      anon_sym_AND,
      anon_sym_OR,
  [251] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_RULE,
    ACTIONS(52), 1,
      aux_sym_descriptor_token1,
    STATE(19), 1,
      aux_sym_descriptor_repeat1,
  [264] = 3,
    ACTIONS(57), 1,
      anon_sym_AND,
    ACTIONS(59), 1,
      anon_sym_OR,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [275] = 4,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_RULE,
    ACTIONS(61), 1,
      aux_sym_descriptor_token1,
    STATE(19), 1,
      aux_sym_descriptor_repeat1,
  [288] = 3,
    ACTIONS(21), 1,
      anon_sym_PROVIDES,
    ACTIONS(63), 1,
      aux_sym_descriptor_token1,
    STATE(22), 1,
      aux_sym_descriptor_repeat1,
  [298] = 3,
    ACTIONS(66), 1,
      aux_sym_descriptor_token1,
    STATE(21), 1,
      aux_sym_descriptor_repeat1,
    STATE(32), 1,
      sym_descriptor,
  [308] = 3,
    ACTIONS(68), 1,
      aux_sym_descriptor_token1,
    STATE(30), 1,
      aux_sym_descriptor_repeat1,
    STATE(37), 1,
      sym_descriptor,
  [318] = 3,
    ACTIONS(26), 1,
      anon_sym_ONLYIF,
    ACTIONS(70), 1,
      aux_sym_descriptor_token1,
    STATE(26), 1,
      aux_sym_descriptor_repeat1,
  [328] = 3,
    ACTIONS(19), 1,
      anon_sym_ONLYIF,
    ACTIONS(72), 1,
      aux_sym_descriptor_token1,
    STATE(26), 1,
      aux_sym_descriptor_repeat1,
  [338] = 3,
    ACTIONS(55), 1,
      anon_sym_THEN,
    ACTIONS(75), 1,
      anon_sym_AND,
    ACTIONS(77), 1,
      anon_sym_OR,
  [348] = 3,
    ACTIONS(79), 1,
      aux_sym_descriptor_token1,
    STATE(15), 1,
      aux_sym_descriptor_repeat1,
    STATE(18), 1,
      sym_descriptor,
  [358] = 3,
    ACTIONS(81), 1,
      aux_sym_descriptor_token1,
    STATE(10), 1,
      aux_sym_descriptor_repeat1,
    STATE(18), 1,
      sym_descriptor,
  [368] = 3,
    ACTIONS(28), 1,
      anon_sym_PROVIDES,
    ACTIONS(83), 1,
      aux_sym_descriptor_token1,
    STATE(22), 1,
      aux_sym_descriptor_repeat1,
  [378] = 1,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [383] = 1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [388] = 1,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [393] = 1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [398] = 1,
    ACTIONS(93), 1,
      anon_sym_THEN,
  [402] = 1,
    ACTIONS(95), 1,
      anon_sym_ONLYIF,
  [406] = 1,
    ACTIONS(97), 1,
      anon_sym_PROVIDES,
  [410] = 1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 103,
  [SMALL_STATE(8)] = 122,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 171,
  [SMALL_STATE(12)] = 183,
  [SMALL_STATE(13)] = 191,
  [SMALL_STATE(14)] = 203,
  [SMALL_STATE(15)] = 215,
  [SMALL_STATE(16)] = 227,
  [SMALL_STATE(17)] = 235,
  [SMALL_STATE(18)] = 243,
  [SMALL_STATE(19)] = 251,
  [SMALL_STATE(20)] = 264,
  [SMALL_STATE(21)] = 275,
  [SMALL_STATE(22)] = 288,
  [SMALL_STATE(23)] = 298,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 318,
  [SMALL_STATE(26)] = 328,
  [SMALL_STATE(27)] = 338,
  [SMALL_STATE(28)] = 348,
  [SMALL_STATE(29)] = 358,
  [SMALL_STATE(30)] = 368,
  [SMALL_STATE(31)] = 378,
  [SMALL_STATE(32)] = 383,
  [SMALL_STATE(33)] = 388,
  [SMALL_STATE(34)] = 393,
  [SMALL_STATE(35)] = 398,
  [SMALL_STATE(36)] = 402,
  [SMALL_STATE(37)] = 406,
  [SMALL_STATE(38)] = 410,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_descriptor_repeat1, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(9),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descriptor, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(24),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(14),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_expr, 1, .production_id = 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expr, 2, .production_id = 3),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(19),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(22),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(26),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_if, 3, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then, 4, .production_id = 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 4, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [99] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
