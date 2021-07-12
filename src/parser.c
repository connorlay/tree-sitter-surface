#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  anon_sym_RBRACE = 6,
  aux_sym__matched_curly_brackets_token1 = 7,
  anon_sym_LBRACE_RBRACE = 8,
  anon_sym_EQ = 9,
  aux_sym_tag_name_token1 = 10,
  anon_sym_if = 11,
  anon_sym_unless = 12,
  anon_sym_for = 13,
  anon_sym_case = 14,
  anon_sym_else = 15,
  anon_sym_elseif = 16,
  anon_sym_match = 17,
  aux_sym_attribute_value_token1 = 18,
  anon_sym_SQUOTE = 19,
  aux_sym_attribute_value_token2 = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_attribute_value_token3 = 22,
  sym_text = 23,
  sym_fragment = 24,
  sym__node = 25,
  sym_element = 26,
  sym_start_tag = 27,
  sym_end_tag = 28,
  sym_self_closing_tag = 29,
  sym_expression = 30,
  sym_expression_value = 31,
  sym__matched_curly_brackets = 32,
  sym_attribute = 33,
  sym_tag_name = 34,
  sym_attribute_name = 35,
  sym_attribute_value = 36,
  aux_sym_fragment_repeat1 = 37,
  aux_sym_start_tag_repeat1 = 38,
  aux_sym_expression_value_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__matched_curly_brackets_token1] = "_matched_curly_brackets_token1",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym_EQ] = "=",
  [aux_sym_tag_name_token1] = "tag_name_token1",
  [anon_sym_if] = "if",
  [anon_sym_unless] = "unless",
  [anon_sym_for] = "for",
  [anon_sym_case] = "case",
  [anon_sym_else] = "else",
  [anon_sym_elseif] = "elseif",
  [anon_sym_match] = "match",
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_attribute_value_token2] = "attribute_value_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_attribute_value_token3] = "attribute_value_token3",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_expression] = "expression",
  [sym_expression_value] = "expression_value",
  [sym__matched_curly_brackets] = "_matched_curly_brackets",
  [sym_attribute] = "attribute",
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_value_repeat1] = "expression_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__matched_curly_brackets_token1] = aux_sym__matched_curly_brackets_token1,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_tag_name_token1] = aux_sym_tag_name_token1,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_match] = anon_sym_match,
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_attribute_value_token2] = aux_sym_attribute_value_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_attribute_value_token3] = aux_sym_attribute_value_token3,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_expression] = sym_expression,
  [sym_expression_value] = sym_expression_value,
  [sym__matched_curly_brackets] = sym__matched_curly_brackets,
  [sym_attribute] = sym_attribute,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_value_repeat1] = aux_sym_expression_value_repeat1,
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
  [anon_sym_RBRACE] = {
    .visible = true,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
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
  [sym_expression_value] = {
    .visible = true,
    .named = true,
  },
  [sym__matched_curly_brackets] = {
    .visible = false,
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
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_value_repeat1] = {
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
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(11);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(55);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__matched_curly_brackets_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__matched_curly_brackets_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(35);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'a') ADVANCE(39);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(29);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(44);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(45);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'e') ADVANCE(38);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'f') ADVANCE(41);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'f') ADVANCE(46);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'h') ADVANCE(47);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(26);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'l') ADVANCE(37);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'n') ADVANCE(30);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'o') ADVANCE(34);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(43);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(24);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(42);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(25);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(36);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(23);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_if);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_unless);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_for);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_case);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(28);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_match);
      if (!aux_sym_tag_name_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (!aux_sym_attribute_value_token1_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_attribute_value_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_attribute_value_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
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
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
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
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_tag_name_token1] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(45),
    [sym__node] = STATE(5),
    [sym_element] = STATE(5),
    [sym_start_tag] = STATE(3),
    [sym_self_closing_tag] = STATE(18),
    [sym_expression] = STATE(5),
    [aux_sym_fragment_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_SLASH,
    ACTIONS(15), 1,
      sym_text,
    STATE(3), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_end_tag,
    STATE(18), 1,
      sym_self_closing_tag,
    STATE(4), 4,
      sym__node,
      sym_element,
      sym_expression,
      aux_sym_fragment_repeat1,
  [28] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_SLASH,
    ACTIONS(17), 1,
      sym_text,
    STATE(3), 1,
      sym_start_tag,
    STATE(18), 1,
      sym_self_closing_tag,
    STATE(21), 1,
      sym_end_tag,
    STATE(2), 4,
      sym__node,
      sym_element,
      sym_expression,
      aux_sym_fragment_repeat1,
  [56] = 7,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(24), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_text,
    STATE(3), 1,
      sym_start_tag,
    STATE(18), 1,
      sym_self_closing_tag,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    STATE(4), 4,
      sym__node,
      sym_element,
      sym_expression,
      aux_sym_fragment_repeat1,
  [82] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_text,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_start_tag,
    STATE(18), 1,
      sym_self_closing_tag,
    STATE(4), 4,
      sym__node,
      sym_element,
      sym_expression,
      aux_sym_fragment_repeat1,
  [107] = 5,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      aux_sym_tag_name_token1,
    STATE(20), 1,
      sym_attribute_name,
    ACTIONS(32), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(6), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [126] = 6,
    ACTIONS(40), 1,
      anon_sym_GT,
    ACTIONS(42), 1,
      anon_sym_SLASH_GT,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      aux_sym_tag_name_token1,
    STATE(20), 1,
      sym_attribute_name,
    STATE(8), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [147] = 6,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      aux_sym_tag_name_token1,
    ACTIONS(48), 1,
      anon_sym_GT,
    ACTIONS(50), 1,
      anon_sym_SLASH_GT,
    STATE(20), 1,
      sym_attribute_name,
    STATE(6), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [168] = 5,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(56), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(38), 1,
      sym_expression_value,
    STATE(13), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_value_repeat1,
  [185] = 6,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(60), 1,
      anon_sym_SQUOTE,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_expression,
    STATE(31), 1,
      sym_attribute_value,
  [204] = 5,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(72), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(11), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_value_repeat1,
  [221] = 5,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(56), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(43), 1,
      sym_expression_value,
    STATE(13), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_value_repeat1,
  [238] = 5,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(79), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(11), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_value_repeat1,
  [255] = 2,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_text,
  [265] = 2,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_text,
  [275] = 2,
    ACTIONS(91), 1,
      anon_sym_LT,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_text,
  [285] = 2,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_text,
  [295] = 2,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_text,
  [305] = 1,
    ACTIONS(101), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_EQ,
      aux_sym_tag_name_token1,
  [313] = 2,
    ACTIONS(105), 1,
      anon_sym_EQ,
    ACTIONS(103), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      aux_sym_tag_name_token1,
  [323] = 2,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_text,
  [333] = 2,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_text,
  [343] = 4,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(119), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(46), 1,
      sym__matched_curly_brackets,
  [356] = 1,
    ACTIONS(121), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      aux_sym_tag_name_token1,
  [363] = 1,
    ACTIONS(111), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      aux_sym_tag_name_token1,
  [370] = 2,
    ACTIONS(123), 1,
      anon_sym_LT,
    ACTIONS(125), 3,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_text,
  [379] = 2,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(129), 3,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      sym_text,
  [388] = 4,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(133), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(44), 1,
      sym__matched_curly_brackets,
  [401] = 2,
    ACTIONS(137), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(135), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
  [410] = 1,
    ACTIONS(139), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      aux_sym_tag_name_token1,
  [417] = 1,
    ACTIONS(141), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      aux_sym_tag_name_token1,
  [424] = 1,
    ACTIONS(143), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      aux_sym_tag_name_token1,
  [431] = 1,
    ACTIONS(145), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      aux_sym_tag_name_token1,
  [438] = 2,
    ACTIONS(147), 1,
      aux_sym_tag_name_token1,
    STATE(40), 1,
      sym_tag_name,
  [445] = 2,
    ACTIONS(147), 1,
      aux_sym_tag_name_token1,
    STATE(7), 1,
      sym_tag_name,
  [452] = 2,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      aux_sym_attribute_value_token2,
  [459] = 2,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym_attribute_value_token3,
  [466] = 1,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
  [470] = 1,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
  [474] = 1,
    ACTIONS(159), 1,
      anon_sym_GT,
  [478] = 1,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
  [482] = 1,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
  [486] = 1,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
  [490] = 1,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
  [494] = 1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
  [498] = 1,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 126,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 168,
  [SMALL_STATE(10)] = 185,
  [SMALL_STATE(11)] = 204,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 238,
  [SMALL_STATE(14)] = 255,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 275,
  [SMALL_STATE(17)] = 285,
  [SMALL_STATE(18)] = 295,
  [SMALL_STATE(19)] = 305,
  [SMALL_STATE(20)] = 313,
  [SMALL_STATE(21)] = 323,
  [SMALL_STATE(22)] = 333,
  [SMALL_STATE(23)] = 343,
  [SMALL_STATE(24)] = 356,
  [SMALL_STATE(25)] = 363,
  [SMALL_STATE(26)] = 370,
  [SMALL_STATE(27)] = 379,
  [SMALL_STATE(28)] = 388,
  [SMALL_STATE(29)] = 401,
  [SMALL_STATE(30)] = 410,
  [SMALL_STATE(31)] = 417,
  [SMALL_STATE(32)] = 424,
  [SMALL_STATE(33)] = 431,
  [SMALL_STATE(34)] = 438,
  [SMALL_STATE(35)] = 445,
  [SMALL_STATE(36)] = 452,
  [SMALL_STATE(37)] = 459,
  [SMALL_STATE(38)] = 466,
  [SMALL_STATE(39)] = 470,
  [SMALL_STATE(40)] = 474,
  [SMALL_STATE(41)] = 478,
  [SMALL_STATE(42)] = 482,
  [SMALL_STATE(43)] = 486,
  [SMALL_STATE(44)] = 490,
  [SMALL_STATE(45)] = 494,
  [SMALL_STATE(46)] = 498,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(35),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(9),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(19),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(23),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(11),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(11),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__matched_curly_brackets, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__matched_curly_brackets, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [165] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
