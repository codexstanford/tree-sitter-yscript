#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 1
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_RULE = 1,
  anon_sym_PROVIDES = 2,
  anon_sym_ONLYIF = 3,
  sym_descriptor = 4,
  sym_code = 5,
  sym__block = 6,
  sym_rule_definition = 7,
  sym_rule_body = 8,
  sym__statement = 9,
  sym_only_if = 10,
  sym__expr = 11,
  aux_sym_code_repeat1 = 12,
  alias_sym_fact_expr = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_RULE] = "RULE",
  [anon_sym_PROVIDES] = "PROVIDES",
  [anon_sym_ONLYIF] = "ONLY IF",
  [sym_descriptor] = "descriptor",
  [sym_code] = "code",
  [sym__block] = "_block",
  [sym_rule_definition] = "rule_definition",
  [sym_rule_body] = "rule_body",
  [sym__statement] = "_statement",
  [sym_only_if] = "only_if",
  [sym__expr] = "_expr",
  [aux_sym_code_repeat1] = "code_repeat1",
  [alias_sym_fact_expr] = "fact_expr",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_RULE] = anon_sym_RULE,
  [anon_sym_PROVIDES] = anon_sym_PROVIDES,
  [anon_sym_ONLYIF] = anon_sym_ONLYIF,
  [sym_descriptor] = sym_descriptor,
  [sym_code] = sym_code,
  [sym__block] = sym__block,
  [sym_rule_definition] = sym_rule_definition,
  [sym_rule_body] = sym_rule_body,
  [sym__statement] = sym__statement,
  [sym_only_if] = sym_only_if,
  [sym__expr] = sym__expr,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
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
  [sym_descriptor] = {
    .visible = true,
    .named = true,
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
  [aux_sym_code_repeat1] = {
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
  [3] = {.index = 2, .length = 2},
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
  [2] = {
    [0] = alias_sym_fact_expr,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == 'O') ADVANCE(10);
      if (lookahead == 'P') ADVANCE(12);
      if (lookahead == 'R') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'F') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'I') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'L') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'S') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'U') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'V') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == 'Y') ADVANCE(1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RULE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PROVIDES);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_ONLYIF);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_descriptor);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RULE] = ACTIONS(1),
    [anon_sym_PROVIDES] = ACTIONS(1),
    [anon_sym_ONLYIF] = ACTIONS(1),
    [sym_descriptor] = ACTIONS(1),
  },
  [1] = {
    [sym_code] = STATE(11),
    [sym__block] = STATE(2),
    [sym_rule_definition] = STATE(2),
    [aux_sym_code_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_RULE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_RULE,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym__block,
      sym_rule_definition,
      aux_sym_code_repeat1,
  [12] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_RULE,
    STATE(3), 3,
      sym__block,
      sym_rule_definition,
      aux_sym_code_repeat1,
  [24] = 3,
    ACTIONS(14), 1,
      sym_descriptor,
    STATE(5), 1,
      sym_rule_body,
    STATE(6), 2,
      sym__statement,
      sym_only_if,
  [35] = 1,
    ACTIONS(16), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [40] = 1,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [45] = 2,
    ACTIONS(20), 1,
      sym_descriptor,
    STATE(9), 1,
      sym__expr,
  [52] = 1,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [57] = 1,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [62] = 1,
    ACTIONS(26), 1,
      sym_descriptor,
  [66] = 1,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
  [70] = 1,
    ACTIONS(30), 1,
      anon_sym_PROVIDES,
  [74] = 1,
    ACTIONS(32), 1,
      anon_sym_ONLYIF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 57,
  [SMALL_STATE(10)] = 62,
  [SMALL_STATE(11)] = 66,
  [SMALL_STATE(12)] = 70,
  [SMALL_STATE(13)] = 74,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(10),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 4, .production_id = 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, .production_id = 2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_if, 3, .production_id = 3),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [28] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
