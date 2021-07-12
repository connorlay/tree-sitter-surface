#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASH = 3,
  anon_sym_SLASH_GT = 4,
  anon_sym_LBRACE = 5,
  anon_sym_LBRACE_EQ = 6,
  anon_sym_LBRACE_DOT_DOT_DOT = 7,
  anon_sym_LBRACE_CARET = 8,
  anon_sym_RBRACE = 9,
  anon_sym_EQ = 10,
  aux_sym_tag_name_token1 = 11,
  aux_sym_attribute_value_token1 = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_attribute_value_token2 = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_attribute_value_token3 = 16,
  aux_sym__matched_curly_brackets_token1 = 17,
  anon_sym_LBRACE_RBRACE = 18,
  sym_text = 19,
  sym_fragment = 20,
  sym__node = 21,
  sym_element = 22,
  sym_start_tag = 23,
  sym_end_tag = 24,
  sym_self_closing_tag = 25,
  sym_expression = 26,
  sym_attribute = 27,
  sym_tag_name = 28,
  sym_attribute_name = 29,
  sym_attribute_value = 30,
  sym__matched_curly_brackets = 31,
  aux_sym_fragment_repeat1 = 32,
  aux_sym_start_tag_repeat1 = 33,
  aux_sym_expression_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LBRACE_EQ] = "{=",
  [anon_sym_LBRACE_DOT_DOT_DOT] = "{...",
  [anon_sym_LBRACE_CARET] = "{^",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [aux_sym_tag_name_token1] = "tag_name_token1",
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_attribute_value_token2] = "attribute_value_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_attribute_value_token3] = "attribute_value_token3",
  [aux_sym__matched_curly_brackets_token1] = "_matched_curly_brackets_token1",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_expression] = "expression",
  [sym_attribute] = "attribute",
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym__matched_curly_brackets] = "_matched_curly_brackets",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LBRACE_EQ] = anon_sym_LBRACE_EQ,
  [anon_sym_LBRACE_DOT_DOT_DOT] = anon_sym_LBRACE_DOT_DOT_DOT,
  [anon_sym_LBRACE_CARET] = anon_sym_LBRACE_CARET,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_tag_name_token1] = aux_sym_tag_name_token1,
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_attribute_value_token2] = aux_sym_attribute_value_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_attribute_value_token3] = aux_sym_attribute_value_token3,
  [aux_sym__matched_curly_brackets_token1] = aux_sym__matched_curly_brackets_token1,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_expression] = sym_expression,
  [sym_attribute] = sym_attribute,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym__matched_curly_brackets] = sym__matched_curly_brackets,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [aux_sym__matched_curly_brackets_token1] = {
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
  [sym_expression] = {
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
  [sym__matched_curly_brackets] = {
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
  [aux_sym_expression_repeat1] = {
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

static inline bool aux_sym_tag_name_token1_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < '<'
        ? c == '/'
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

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
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(34);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(34);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '^') ADVANCE(20);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '^') ADVANCE(20);
      if (lookahead == '}') ADVANCE(33);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(33);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE_DOT_DOT_DOT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE_CARET);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (!aux_sym_attribute_value_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_attribute_value_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_attribute_value_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__matched_curly_brackets_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__matched_curly_brackets_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_EQ] = ACTIONS(1),
    [anon_sym_LBRACE_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACE_CARET] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_tag_name_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(43),
    [sym__node] = STATE(5),
    [sym_element] = STATE(5),
    [sym_start_tag] = STATE(2),
    [sym_self_closing_tag] = STATE(15),
    [sym_expression] = STATE(5),
    [aux_sym_fragment_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_EQ] = ACTIONS(9),
    [anon_sym_LBRACE_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_LBRACE_CARET] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LT_SLASH,
    ACTIONS(17), 1,
      sym_text,
    STATE(2), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_end_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    ACTIONS(9), 3,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
    STATE(4), 4,
      sym__node,
      sym_element,
      sym_expression,
      aux_sym_fragment_repeat1,
  [33] = 8,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(24), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      sym_text,
    STATE(2), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(27), 3,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
    STATE(3), 4,
      sym__node,
      sym_element,
      sym_expression,
      aux_sym_fragment_repeat1,
  [64] = 9,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      anon_sym_LT_SLASH,
    ACTIONS(33), 1,
      sym_text,
    STATE(2), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    STATE(17), 1,
      sym_end_tag,
    ACTIONS(9), 3,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
    STATE(3), 4,
      sym__node,
      sym_element,
      sym_expression,
      aux_sym_fragment_repeat1,
  [97] = 8,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_text,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    ACTIONS(9), 3,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
    STATE(3), 4,
      sym__node,
      sym_element,
      sym_expression,
      aux_sym_fragment_repeat1,
  [127] = 6,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_tag_name_token1,
    STATE(14), 1,
      sym_attribute_name,
    ACTIONS(37), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    ACTIONS(42), 3,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
    STATE(6), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [151] = 7,
    ACTIONS(48), 1,
      anon_sym_GT,
    ACTIONS(50), 1,
      anon_sym_SLASH_GT,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      aux_sym_tag_name_token1,
    STATE(14), 1,
      sym_attribute_name,
    ACTIONS(54), 3,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
    STATE(6), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [177] = 7,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      aux_sym_tag_name_token1,
    ACTIONS(58), 1,
      anon_sym_GT,
    ACTIONS(60), 1,
      anon_sym_SLASH_GT,
    STATE(14), 1,
      sym_attribute_name,
    ACTIONS(54), 3,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
    STATE(7), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [203] = 7,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_attribute_value,
    STATE(20), 1,
      sym_expression,
    ACTIONS(54), 3,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
  [227] = 2,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      anon_sym_EQ,
      aux_sym_tag_name_token1,
  [240] = 2,
    ACTIONS(74), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      sym_text,
  [253] = 2,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      sym_text,
  [266] = 2,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      sym_text,
  [279] = 3,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_EQ,
    ACTIONS(84), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      aux_sym_tag_name_token1,
  [294] = 2,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      sym_text,
  [307] = 2,
    ACTIONS(96), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      sym_text,
  [320] = 2,
    ACTIONS(100), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      sym_text,
  [333] = 2,
    ACTIONS(104), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      sym_text,
  [346] = 2,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      aux_sym_tag_name_token1,
  [358] = 2,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      aux_sym_tag_name_token1,
  [370] = 2,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      aux_sym_tag_name_token1,
  [382] = 2,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      aux_sym_tag_name_token1,
  [394] = 2,
    ACTIONS(118), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(120), 5,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      sym_text,
  [406] = 2,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      aux_sym_tag_name_token1,
  [418] = 2,
    ACTIONS(126), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(128), 5,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      sym_text,
  [430] = 2,
    ACTIONS(132), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_EQ,
      anon_sym_LBRACE_DOT_DOT_DOT,
      anon_sym_LBRACE_CARET,
      aux_sym_tag_name_token1,
  [442] = 5,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(140), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(28), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_repeat1,
  [459] = 5,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(147), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(150), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(28), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_repeat1,
  [476] = 5,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(140), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_repeat1,
  [493] = 4,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(157), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(27), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_repeat1,
  [507] = 4,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(161), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(29), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_repeat1,
  [521] = 2,
    ACTIONS(165), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(163), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
  [530] = 4,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(39), 1,
      sym__matched_curly_brackets,
  [543] = 4,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(175), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(45), 1,
      sym__matched_curly_brackets,
  [556] = 2,
    ACTIONS(177), 1,
      aux_sym_tag_name_token1,
    STATE(8), 1,
      sym_tag_name,
  [563] = 2,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      aux_sym_attribute_value_token2,
  [570] = 2,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_attribute_value_token3,
  [577] = 2,
    ACTIONS(177), 1,
      aux_sym_tag_name_token1,
    STATE(40), 1,
      sym_tag_name,
  [584] = 1,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
  [588] = 1,
    ACTIONS(187), 1,
      anon_sym_GT,
  [592] = 1,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
  [596] = 1,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
  [600] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [604] = 1,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
  [608] = 1,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 127,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 203,
  [SMALL_STATE(10)] = 227,
  [SMALL_STATE(11)] = 240,
  [SMALL_STATE(12)] = 253,
  [SMALL_STATE(13)] = 266,
  [SMALL_STATE(14)] = 279,
  [SMALL_STATE(15)] = 294,
  [SMALL_STATE(16)] = 307,
  [SMALL_STATE(17)] = 320,
  [SMALL_STATE(18)] = 333,
  [SMALL_STATE(19)] = 346,
  [SMALL_STATE(20)] = 358,
  [SMALL_STATE(21)] = 370,
  [SMALL_STATE(22)] = 382,
  [SMALL_STATE(23)] = 394,
  [SMALL_STATE(24)] = 406,
  [SMALL_STATE(25)] = 418,
  [SMALL_STATE(26)] = 430,
  [SMALL_STATE(27)] = 442,
  [SMALL_STATE(28)] = 459,
  [SMALL_STATE(29)] = 476,
  [SMALL_STATE(30)] = 493,
  [SMALL_STATE(31)] = 507,
  [SMALL_STATE(32)] = 521,
  [SMALL_STATE(33)] = 530,
  [SMALL_STATE(34)] = 543,
  [SMALL_STATE(35)] = 556,
  [SMALL_STATE(36)] = 563,
  [SMALL_STATE(37)] = 570,
  [SMALL_STATE(38)] = 577,
  [SMALL_STATE(39)] = 584,
  [SMALL_STATE(40)] = 588,
  [SMALL_STATE(41)] = 592,
  [SMALL_STATE(42)] = 596,
  [SMALL_STATE(43)] = 600,
  [SMALL_STATE(44)] = 604,
  [SMALL_STATE(45)] = 608,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(35),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(30),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(30),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(31),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(31),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(10),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_name, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(33),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(28),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(28),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__matched_curly_brackets, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__matched_curly_brackets, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [191] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
