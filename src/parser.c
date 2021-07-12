#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASH = 3,
  anon_sym_SLASH_GT = 4,
  anon_sym_EQ = 5,
  aux_sym_tag_name_token1 = 6,
  aux_sym_attribute_value_token1 = 7,
  anon_sym_SQUOTE = 8,
  aux_sym_attribute_value_token2 = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_attribute_value_token3 = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  aux_sym__no_dangling_curly_token1 = 14,
  anon_sym_LBRACE_RBRACE = 15,
  sym_text = 16,
  sym_fragment = 17,
  sym__node = 18,
  sym_element = 19,
  sym_start_tag = 20,
  sym_end_tag = 21,
  sym_self_closing_tag = 22,
  sym_attribute = 23,
  sym_tag_name = 24,
  sym_attribute_name = 25,
  sym_attribute_value = 26,
  sym_elixir_expression = 27,
  sym__no_dangling_curly = 28,
  aux_sym_fragment_repeat1 = 29,
  aux_sym_start_tag_repeat1 = 30,
  aux_sym_elixir_expression_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_EQ] = "=",
  [aux_sym_tag_name_token1] = "tag_name_token1",
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_attribute_value_token2] = "attribute_value_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_attribute_value_token3] = "attribute_value_token3",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__no_dangling_curly_token1] = "_no_dangling_curly_token1",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_attribute] = "attribute",
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_elixir_expression] = "elixir_expression",
  [sym__no_dangling_curly] = "_no_dangling_curly",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_elixir_expression_repeat1] = "elixir_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_tag_name_token1] = aux_sym_tag_name_token1,
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_attribute_value_token2] = aux_sym_attribute_value_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_attribute_value_token3] = aux_sym_attribute_value_token3,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__no_dangling_curly_token1] = aux_sym__no_dangling_curly_token1,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_attribute] = sym_attribute,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_elixir_expression] = sym_elixir_expression,
  [sym__no_dangling_curly] = sym__no_dangling_curly,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_elixir_expression_repeat1] = aux_sym_elixir_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_value_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_value_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__no_dangling_curly_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_elixir_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__no_dangling_curly] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_elixir_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_attribute_value_token1_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '{'
      ? (c < '<'
        ? c == '\''
        : c <= '=')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym_attribute_value_token1_character_set_2(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '{'
      ? (c < '<'
        ? c == '\''
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(11);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(30);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(30);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '>') ADVANCE(13);
      if (!aux_sym_attribute_value_token1_character_set_1(lookahead)) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (!aux_sym_attribute_value_token1_character_set_2(lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_attribute_value_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_attribute_value_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__no_dangling_curly_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__no_dangling_curly_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_attribute_value_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(40),
    [sym__node] = STATE(5),
    [sym_element] = STATE(5),
    [sym_start_tag] = STATE(2),
    [sym_self_closing_tag] = STATE(21),
    [aux_sym_fragment_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(13), 1,
      sym_text,
    STATE(2), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_end_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(3), 3,
      sym__node,
      sym_element,
      aux_sym_fragment_repeat1,
  [24] = 7,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(15), 1,
      sym_text,
    STATE(2), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_end_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(4), 3,
      sym__node,
      sym_element,
      aux_sym_fragment_repeat1,
  [48] = 6,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(22), 1,
      sym_text,
    STATE(2), 1,
      sym_start_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    STATE(4), 3,
      sym__node,
      sym_element,
      aux_sym_fragment_repeat1,
  [70] = 6,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      sym_text,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_tag,
    STATE(21), 1,
      sym_self_closing_tag,
    STATE(4), 3,
      sym__node,
      sym_element,
      aux_sym_fragment_repeat1,
  [91] = 6,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      aux_sym__no_dangling_curly_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(38), 1,
      sym_elixir_expression,
    STATE(9), 2,
      sym__no_dangling_curly,
      aux_sym_elixir_expression_repeat1,
  [111] = 5,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(37), 1,
      anon_sym_SLASH_GT,
    ACTIONS(39), 1,
      aux_sym_tag_name_token1,
    STATE(17), 1,
      sym_attribute_name,
    STATE(10), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [128] = 5,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    ACTIONS(46), 1,
      aux_sym__no_dangling_curly_token1,
    ACTIONS(49), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(8), 2,
      sym__no_dangling_curly,
      aux_sym_elixir_expression_repeat1,
  [145] = 5,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      aux_sym__no_dangling_curly_token1,
    ACTIONS(56), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(8), 2,
      sym__no_dangling_curly,
      aux_sym_elixir_expression_repeat1,
  [162] = 4,
    ACTIONS(60), 1,
      aux_sym_tag_name_token1,
    STATE(17), 1,
      sym_attribute_name,
    ACTIONS(58), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(10), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [177] = 5,
    ACTIONS(39), 1,
      aux_sym_tag_name_token1,
    ACTIONS(63), 1,
      anon_sym_GT,
    ACTIONS(65), 1,
      anon_sym_SLASH_GT,
    STATE(17), 1,
      sym_attribute_name,
    STATE(7), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [194] = 5,
    ACTIONS(67), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_attribute_value,
  [210] = 2,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      sym_text,
  [219] = 2,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      sym_text,
  [228] = 2,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      sym_text,
  [237] = 1,
    ACTIONS(87), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      aux_sym_tag_name_token1,
  [244] = 2,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(89), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      aux_sym_tag_name_token1,
  [253] = 4,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      aux_sym__no_dangling_curly_token1,
    ACTIONS(97), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(42), 1,
      sym__no_dangling_curly,
  [266] = 2,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      sym_text,
  [275] = 2,
    ACTIONS(105), 1,
      aux_sym__no_dangling_curly_token1,
    ACTIONS(103), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
  [284] = 2,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      sym_text,
  [293] = 2,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      sym_text,
  [302] = 4,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      aux_sym__no_dangling_curly_token1,
    ACTIONS(117), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(39), 1,
      sym__no_dangling_curly,
  [315] = 2,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(121), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [323] = 1,
    ACTIONS(123), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      aux_sym_tag_name_token1,
  [329] = 1,
    ACTIONS(125), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      aux_sym_tag_name_token1,
  [335] = 1,
    ACTIONS(127), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      aux_sym_tag_name_token1,
  [341] = 1,
    ACTIONS(129), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      aux_sym_tag_name_token1,
  [347] = 1,
    ACTIONS(131), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      aux_sym_tag_name_token1,
  [353] = 2,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(135), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [361] = 2,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      aux_sym_attribute_value_token2,
  [368] = 2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym_attribute_value_token3,
  [375] = 2,
    ACTIONS(141), 1,
      aux_sym_tag_name_token1,
    STATE(37), 1,
      sym_tag_name,
  [382] = 2,
    ACTIONS(141), 1,
      aux_sym_tag_name_token1,
    STATE(11), 1,
      sym_tag_name,
  [389] = 1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
  [393] = 1,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
  [397] = 1,
    ACTIONS(145), 1,
      anon_sym_GT,
  [401] = 1,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
  [405] = 1,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
  [409] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [413] = 1,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
  [417] = 1,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 219,
  [SMALL_STATE(15)] = 228,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 244,
  [SMALL_STATE(18)] = 253,
  [SMALL_STATE(19)] = 266,
  [SMALL_STATE(20)] = 275,
  [SMALL_STATE(21)] = 284,
  [SMALL_STATE(22)] = 293,
  [SMALL_STATE(23)] = 302,
  [SMALL_STATE(24)] = 315,
  [SMALL_STATE(25)] = 323,
  [SMALL_STATE(26)] = 329,
  [SMALL_STATE(27)] = 335,
  [SMALL_STATE(28)] = 341,
  [SMALL_STATE(29)] = 347,
  [SMALL_STATE(30)] = 353,
  [SMALL_STATE(31)] = 361,
  [SMALL_STATE(32)] = 368,
  [SMALL_STATE(33)] = 375,
  [SMALL_STATE(34)] = 382,
  [SMALL_STATE(35)] = 389,
  [SMALL_STATE(36)] = 393,
  [SMALL_STATE(37)] = 397,
  [SMALL_STATE(38)] = 401,
  [SMALL_STATE(39)] = 405,
  [SMALL_STATE(40)] = 409,
  [SMALL_STATE(41)] = 413,
  [SMALL_STATE(42)] = 417,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(34),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_elixir_expression_repeat1, 2), SHIFT_REPEAT(23),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_elixir_expression_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_elixir_expression_repeat1, 2), SHIFT_REPEAT(8),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_elixir_expression_repeat1, 2), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elixir_expression, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__no_dangling_curly, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__no_dangling_curly, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_surface(void) {
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
