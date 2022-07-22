#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
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
  aux_sym_descriptor_token1 = 4,
  sym_code = 5,
  sym__block = 6,
  sym_rule_definition = 7,
  sym_rule_body = 8,
  sym__statement = 9,
  sym_only_if = 10,
  sym__expr = 11,
  sym_descriptor = 12,
  aux_sym_code_repeat1 = 13,
  aux_sym_descriptor_repeat1 = 14,
  alias_sym_fact_expr = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_RULE] = "RULE",
  [anon_sym_PROVIDES] = "PROVIDES",
  [anon_sym_ONLYIF] = "ONLY IF",
  [aux_sym_descriptor_token1] = "descriptor_token1",
  [sym_code] = "code",
  [sym__block] = "_block",
  [sym_rule_definition] = "rule_definition",
  [sym_rule_body] = "rule_body",
  [sym__statement] = "_statement",
  [sym_only_if] = "only_if",
  [sym__expr] = "_expr",
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
  [aux_sym_descriptor_token1] = aux_sym_descriptor_token1,
  [sym_code] = sym_code,
  [sym__block] = sym__block,
  [sym_rule_definition] = sym_rule_definition,
  [sym_rule_body] = sym_rule_body,
  [sym__statement] = sym__statement,
  [sym_only_if] = sym_only_if,
  [sym__expr] = sym__expr,
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
      if (eof) ADVANCE(18);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(33);
      if (lookahead == 'R') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == 'D') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'F') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'I') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'I') ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == 'L') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'P') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 'V') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == 'R') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RULE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RULE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PROVIDES);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PROVIDES);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_ONLYIF);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(38);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'I') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'L') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'N') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'O') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'R') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'S') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'U') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'V') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead == 'Y') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_descriptor_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RULE] = ACTIONS(1),
    [anon_sym_PROVIDES] = ACTIONS(1),
    [anon_sym_ONLYIF] = ACTIONS(1),
    [aux_sym_descriptor_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_code] = STATE(17),
    [sym__block] = STATE(3),
    [sym_rule_definition] = STATE(3),
    [aux_sym_code_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_RULE] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      aux_sym_descriptor_token1,
    STATE(11), 1,
      aux_sym_descriptor_repeat1,
    STATE(13), 1,
      sym_rule_body,
    STATE(19), 1,
      sym_descriptor,
    STATE(14), 2,
      sym__statement,
      sym_only_if,
  [17] = 3,
    ACTIONS(5), 1,
      anon_sym_RULE,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(4), 3,
      sym__block,
      sym_rule_definition,
      aux_sym_code_repeat1,
  [29] = 3,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_RULE,
    STATE(4), 3,
      sym__block,
      sym_rule_definition,
      aux_sym_code_repeat1,
  [41] = 4,
    ACTIONS(16), 1,
      aux_sym_descriptor_token1,
    STATE(6), 1,
      aux_sym_descriptor_repeat1,
    STATE(15), 1,
      sym__expr,
    STATE(16), 1,
      sym_descriptor,
  [54] = 4,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      anon_sym_RULE,
    ACTIONS(22), 1,
      aux_sym_descriptor_token1,
    STATE(7), 1,
      aux_sym_descriptor_repeat1,
  [67] = 4,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_RULE,
    ACTIONS(28), 1,
      aux_sym_descriptor_token1,
    STATE(7), 1,
      aux_sym_descriptor_repeat1,
  [80] = 3,
    ACTIONS(31), 1,
      aux_sym_descriptor_token1,
    STATE(9), 1,
      aux_sym_descriptor_repeat1,
    STATE(18), 1,
      sym_descriptor,
  [90] = 3,
    ACTIONS(20), 1,
      anon_sym_PROVIDES,
    ACTIONS(33), 1,
      aux_sym_descriptor_token1,
    STATE(10), 1,
      aux_sym_descriptor_repeat1,
  [100] = 3,
    ACTIONS(26), 1,
      anon_sym_PROVIDES,
    ACTIONS(35), 1,
      aux_sym_descriptor_token1,
    STATE(10), 1,
      aux_sym_descriptor_repeat1,
  [110] = 3,
    ACTIONS(18), 1,
      anon_sym_ONLYIF,
    ACTIONS(38), 1,
      aux_sym_descriptor_token1,
    STATE(12), 1,
      aux_sym_descriptor_repeat1,
  [120] = 3,
    ACTIONS(24), 1,
      anon_sym_ONLYIF,
    ACTIONS(40), 1,
      aux_sym_descriptor_token1,
    STATE(12), 1,
      aux_sym_descriptor_repeat1,
  [130] = 1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [135] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [140] = 1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [145] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_RULE,
  [150] = 1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
  [154] = 1,
    ACTIONS(53), 1,
      anon_sym_PROVIDES,
  [158] = 1,
    ACTIONS(55), 1,
      anon_sym_ONLYIF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 29,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 110,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 130,
  [SMALL_STATE(14)] = 135,
  [SMALL_STATE(15)] = 140,
  [SMALL_STATE(16)] = 145,
  [SMALL_STATE(17)] = 150,
  [SMALL_STATE(18)] = 154,
  [SMALL_STATE(19)] = 158,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(8),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descriptor, 1),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descriptor, 1),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_descriptor_repeat1, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_descriptor_repeat1, 2), SHIFT_REPEAT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 4, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_if, 3, .production_id = 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, .production_id = 3),
  [51] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
