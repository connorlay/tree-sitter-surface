#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  anon_sym_LT_BANG_DASH_DASH = 7,
  aux_sym_public_comment_token1 = 8,
  anon_sym_DASH_DASH_GT = 9,
  anon_sym_LBRACE_BANG_DASH_DASH = 10,
  aux_sym_private_comment_token1 = 11,
  anon_sym_DASH_DASH_RBRACE = 12,
  aux_sym__matched_curly_brackets_token1 = 13,
  anon_sym_LBRACE_RBRACE = 14,
  anon_sym_LBRACE_POUND = 15,
  anon_sym_LBRACE_SLASH = 16,
  anon_sym_EQ = 17,
  sym_tag_name = 18,
  sym_attribute_name = 19,
  anon_sym_if = 20,
  anon_sym_unless = 21,
  anon_sym_for = 22,
  anon_sym_case = 23,
  anon_sym_else = 24,
  anon_sym_elseif = 25,
  anon_sym_match = 26,
  aux_sym_attribute_value_token1 = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_attribute_value_token2 = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_attribute_value_token3 = 31,
  sym_text = 32,
  sym_fragment = 33,
  sym__node = 34,
  sym_tag = 35,
  sym_block = 36,
  sym_start_tag = 37,
  sym_end_tag = 38,
  sym_self_closing_tag = 39,
  sym_expression = 40,
  sym_expression_value = 41,
  sym_public_comment = 42,
  sym_private_comment = 43,
  sym__matched_curly_brackets = 44,
  sym_start_block = 45,
  sym_end_block = 46,
  sym_attribute = 47,
  sym_block_name = 48,
  sym_attribute_value = 49,
  aux_sym_fragment_repeat1 = 50,
  aux_sym_start_tag_repeat1 = 51,
  aux_sym_expression_value_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym_public_comment_token1] = "public_comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LBRACE_BANG_DASH_DASH] = "{!--",
  [aux_sym_private_comment_token1] = "private_comment_token1",
  [anon_sym_DASH_DASH_RBRACE] = "--}",
  [aux_sym__matched_curly_brackets_token1] = "_matched_curly_brackets_token1",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym_LBRACE_POUND] = "{#",
  [anon_sym_LBRACE_SLASH] = "{/",
  [anon_sym_EQ] = "=",
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
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
  [sym_tag] = "tag",
  [sym_block] = "block",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_expression] = "expression",
  [sym_expression_value] = "expression_value",
  [sym_public_comment] = "public_comment",
  [sym_private_comment] = "private_comment",
  [sym__matched_curly_brackets] = "_matched_curly_brackets",
  [sym_start_block] = "start_block",
  [sym_end_block] = "end_block",
  [sym_attribute] = "attribute",
  [sym_block_name] = "block_name",
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
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym_public_comment_token1] = aux_sym_public_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LBRACE_BANG_DASH_DASH] = anon_sym_LBRACE_BANG_DASH_DASH,
  [aux_sym_private_comment_token1] = aux_sym_private_comment_token1,
  [anon_sym_DASH_DASH_RBRACE] = anon_sym_DASH_DASH_RBRACE,
  [aux_sym__matched_curly_brackets_token1] = aux_sym__matched_curly_brackets_token1,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [anon_sym_LBRACE_SLASH] = anon_sym_LBRACE_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
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
  [sym_tag] = sym_tag,
  [sym_block] = sym_block,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_expression] = sym_expression,
  [sym_expression_value] = sym_expression_value,
  [sym_public_comment] = sym_public_comment,
  [sym_private_comment] = sym_private_comment,
  [sym__matched_curly_brackets] = sym__matched_curly_brackets,
  [sym_start_block] = sym_start_block,
  [sym_end_block] = sym_end_block,
  [sym_attribute] = sym_attribute,
  [sym_block_name] = sym_block_name,
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
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_public_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_private_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_RBRACE] = {
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
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
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
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
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
  [sym_public_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_private_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__matched_curly_brackets] = {
    .visible = false,
    .named = true,
  },
  [sym_start_block] = {
    .visible = true,
    .named = true,
  },
  [sym_end_block] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_block_name] = {
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

static inline bool sym_tag_name_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '\''
        ? (c >= ' ' && c <= '"')
        : c <= '\'')))
    : (c <= '-' || (c < '{'
      ? (c < '<'
        ? c == '/'
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_attribute_name_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '}') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '-' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(7);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '#') ADVANCE(61);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '}') ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG_DASH_DASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_private_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_private_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__matched_curly_brackets_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__matched_curly_brackets_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (!aux_sym_attribute_value_token1_character_set_1(lookahead)) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_attribute_value_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_attribute_value_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 32},
  [50] = {.lex_state = 32},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 32},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 32},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 34},
  [68] = {.lex_state = 35},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 34},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 36},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 34},
  [92] = {.lex_state = 34},
  [93] = {.lex_state = 0},
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
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_LBRACE_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_fragment] = STATE(74),
    [sym__node] = STATE(11),
    [sym_tag] = STATE(11),
    [sym_block] = STATE(11),
    [sym_start_tag] = STATE(8),
    [sym_self_closing_tag] = STATE(25),
    [sym_expression] = STATE(11),
    [sym_public_comment] = STATE(11),
    [sym_private_comment] = STATE(11),
    [sym_start_block] = STATE(10),
    [aux_sym_fragment_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(9),
    [anon_sym_LBRACE_BANG_DASH_DASH] = ACTIONS(11),
    [anon_sym_LBRACE_POUND] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(22), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(28), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(34), 1,
      sym_text,
    STATE(8), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_block,
    STATE(25), 1,
      sym_self_closing_tag,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    STATE(2), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [41] = 12,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(43), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(47), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_tag,
    STATE(38), 1,
      sym_end_block,
    STATE(47), 1,
      sym_self_closing_tag,
    STATE(12), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [84] = 12,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    ACTIONS(51), 1,
      sym_text,
    STATE(8), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_block,
    STATE(25), 1,
      sym_self_closing_tag,
    STATE(39), 1,
      sym_end_tag,
    STATE(2), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [127] = 12,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(43), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(53), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_tag,
    STATE(43), 1,
      sym_end_block,
    STATE(47), 1,
      sym_self_closing_tag,
    STATE(3), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [170] = 12,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(43), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(47), 1,
      sym_text,
    ACTIONS(55), 1,
      anon_sym_LBRACE_SLASH,
    STATE(5), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_end_block,
    STATE(47), 1,
      sym_self_closing_tag,
    STATE(12), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [213] = 12,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    ACTIONS(57), 1,
      sym_text,
    STATE(8), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_block,
    STATE(25), 1,
      sym_self_closing_tag,
    STATE(46), 1,
      sym_end_tag,
    STATE(4), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [256] = 12,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(59), 1,
      anon_sym_LT_SLASH,
    ACTIONS(61), 1,
      sym_text,
    STATE(8), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_block,
    STATE(21), 1,
      sym_end_tag,
    STATE(25), 1,
      sym_self_closing_tag,
    STATE(9), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [299] = 12,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(51), 1,
      sym_text,
    ACTIONS(59), 1,
      anon_sym_LT_SLASH,
    STATE(8), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_block,
    STATE(17), 1,
      sym_end_tag,
    STATE(25), 1,
      sym_self_closing_tag,
    STATE(2), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [342] = 12,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(43), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(55), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(63), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_tag,
    STATE(24), 1,
      sym_end_block,
    STATE(47), 1,
      sym_self_closing_tag,
    STATE(6), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [385] = 11,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(51), 1,
      sym_text,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_block,
    STATE(25), 1,
      sym_self_closing_tag,
    STATE(2), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [425] = 11,
    ACTIONS(17), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(76), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(79), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    STATE(12), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [465] = 2,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [478] = 2,
    ACTIONS(88), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [491] = 2,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [504] = 2,
    ACTIONS(96), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [517] = 2,
    ACTIONS(100), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [530] = 2,
    ACTIONS(104), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [543] = 3,
    ACTIONS(108), 1,
      anon_sym_else,
    STATE(84), 1,
      sym_block_name,
    ACTIONS(106), 6,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
      anon_sym_elseif,
      anon_sym_match,
  [558] = 2,
    ACTIONS(112), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [571] = 2,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [584] = 2,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [597] = 3,
    ACTIONS(108), 1,
      anon_sym_else,
    STATE(80), 1,
      sym_block_name,
    ACTIONS(106), 6,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
      anon_sym_elseif,
      anon_sym_match,
  [612] = 2,
    ACTIONS(124), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [625] = 2,
    ACTIONS(128), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [638] = 3,
    ACTIONS(132), 1,
      anon_sym_else,
    STATE(48), 1,
      sym_block_name,
    ACTIONS(130), 6,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
      anon_sym_elseif,
      anon_sym_match,
  [653] = 2,
    ACTIONS(136), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [666] = 2,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(140), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [678] = 2,
    ACTIONS(88), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(86), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [690] = 5,
    ACTIONS(142), 1,
      anon_sym_GT,
    ACTIONS(144), 1,
      anon_sym_SLASH_GT,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      sym_attribute_name,
    STATE(45), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [708] = 5,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      sym_attribute_name,
    ACTIONS(150), 1,
      anon_sym_GT,
    ACTIONS(152), 1,
      anon_sym_SLASH_GT,
    STATE(30), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [726] = 5,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      sym_attribute_name,
    ACTIONS(150), 1,
      anon_sym_GT,
    ACTIONS(154), 1,
      anon_sym_SLASH_GT,
    STATE(37), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [744] = 2,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(118), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [756] = 2,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(82), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [768] = 2,
    ACTIONS(156), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(158), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [780] = 2,
    ACTIONS(96), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(94), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [792] = 5,
    ACTIONS(142), 1,
      anon_sym_GT,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      sym_attribute_name,
    ACTIONS(160), 1,
      anon_sym_SLASH_GT,
    STATE(45), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [810] = 2,
    ACTIONS(92), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(90), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [822] = 2,
    ACTIONS(100), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(98), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [834] = 2,
    ACTIONS(136), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(134), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [846] = 2,
    ACTIONS(112), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(110), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [858] = 2,
    ACTIONS(104), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(102), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [870] = 2,
    ACTIONS(124), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(122), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [882] = 2,
    ACTIONS(162), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(164), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [894] = 4,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_attribute_name,
    ACTIONS(166), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(45), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [910] = 2,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(114), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [922] = 2,
    ACTIONS(128), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(126), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [934] = 5,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(178), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(70), 1,
      sym_expression_value,
    STATE(53), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_value_repeat1,
  [951] = 5,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(178), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(85), 1,
      sym_expression_value,
    STATE(53), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_value_repeat1,
  [968] = 5,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(178), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(73), 1,
      sym_expression_value,
    STATE(53), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_value_repeat1,
  [985] = 5,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(178), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(76), 1,
      sym_expression_value,
    STATE(53), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_value_repeat1,
  [1002] = 6,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(180), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_expression,
    STATE(57), 1,
      sym_attribute_value,
  [1021] = 5,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(190), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(54), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_value_repeat1,
  [1038] = 5,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(200), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(54), 2,
      sym__matched_curly_brackets,
      aux_sym_expression_value_repeat1,
  [1055] = 2,
    ACTIONS(205), 1,
      anon_sym_EQ,
    ACTIONS(203), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1065] = 1,
    ACTIONS(207), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1072] = 1,
    ACTIONS(209), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1079] = 1,
    ACTIONS(211), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1086] = 1,
    ACTIONS(213), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1093] = 4,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(219), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(82), 1,
      sym__matched_curly_brackets,
  [1106] = 2,
    ACTIONS(223), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(221), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
  [1115] = 4,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(227), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(71), 1,
      sym__matched_curly_brackets,
  [1128] = 1,
    ACTIONS(102), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1135] = 2,
    ACTIONS(231), 1,
      aux_sym__matched_curly_brackets_token1,
    ACTIONS(229), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
  [1143] = 2,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_attribute_value_token2,
  [1150] = 2,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym_attribute_value_token3,
  [1157] = 1,
    ACTIONS(239), 1,
      sym_tag_name,
  [1161] = 1,
    ACTIONS(241), 1,
      aux_sym_public_comment_token1,
  [1165] = 1,
    ACTIONS(243), 1,
      anon_sym_GT,
  [1169] = 1,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
  [1173] = 1,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
  [1177] = 1,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
  [1181] = 1,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
  [1185] = 1,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
  [1189] = 1,
    ACTIONS(253), 1,
      anon_sym_DASH_DASH_RBRACE,
  [1193] = 1,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
  [1197] = 1,
    ACTIONS(257), 1,
      anon_sym_DASH_DASH_GT,
  [1201] = 1,
    ACTIONS(259), 1,
      anon_sym_DASH_DASH_RBRACE,
  [1205] = 1,
    ACTIONS(261), 1,
      aux_sym_private_comment_token1,
  [1209] = 1,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
  [1213] = 1,
    ACTIONS(265), 1,
      anon_sym_DASH_DASH_GT,
  [1217] = 1,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
  [1221] = 1,
    ACTIONS(269), 1,
      anon_sym_GT,
  [1225] = 1,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
  [1229] = 1,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
  [1233] = 1,
    ACTIONS(275), 1,
      sym_tag_name,
  [1237] = 1,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
  [1241] = 1,
    ACTIONS(279), 1,
      aux_sym_public_comment_token1,
  [1245] = 1,
    ACTIONS(281), 1,
      aux_sym_private_comment_token1,
  [1249] = 1,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
  [1253] = 1,
    ACTIONS(283), 1,
      sym_tag_name,
  [1257] = 1,
    ACTIONS(285), 1,
      sym_tag_name,
  [1261] = 1,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 213,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 342,
  [SMALL_STATE(11)] = 385,
  [SMALL_STATE(12)] = 425,
  [SMALL_STATE(13)] = 465,
  [SMALL_STATE(14)] = 478,
  [SMALL_STATE(15)] = 491,
  [SMALL_STATE(16)] = 504,
  [SMALL_STATE(17)] = 517,
  [SMALL_STATE(18)] = 530,
  [SMALL_STATE(19)] = 543,
  [SMALL_STATE(20)] = 558,
  [SMALL_STATE(21)] = 571,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 597,
  [SMALL_STATE(24)] = 612,
  [SMALL_STATE(25)] = 625,
  [SMALL_STATE(26)] = 638,
  [SMALL_STATE(27)] = 653,
  [SMALL_STATE(28)] = 666,
  [SMALL_STATE(29)] = 678,
  [SMALL_STATE(30)] = 690,
  [SMALL_STATE(31)] = 708,
  [SMALL_STATE(32)] = 726,
  [SMALL_STATE(33)] = 744,
  [SMALL_STATE(34)] = 756,
  [SMALL_STATE(35)] = 768,
  [SMALL_STATE(36)] = 780,
  [SMALL_STATE(37)] = 792,
  [SMALL_STATE(38)] = 810,
  [SMALL_STATE(39)] = 822,
  [SMALL_STATE(40)] = 834,
  [SMALL_STATE(41)] = 846,
  [SMALL_STATE(42)] = 858,
  [SMALL_STATE(43)] = 870,
  [SMALL_STATE(44)] = 882,
  [SMALL_STATE(45)] = 894,
  [SMALL_STATE(46)] = 910,
  [SMALL_STATE(47)] = 922,
  [SMALL_STATE(48)] = 934,
  [SMALL_STATE(49)] = 951,
  [SMALL_STATE(50)] = 968,
  [SMALL_STATE(51)] = 985,
  [SMALL_STATE(52)] = 1002,
  [SMALL_STATE(53)] = 1021,
  [SMALL_STATE(54)] = 1038,
  [SMALL_STATE(55)] = 1055,
  [SMALL_STATE(56)] = 1065,
  [SMALL_STATE(57)] = 1072,
  [SMALL_STATE(58)] = 1079,
  [SMALL_STATE(59)] = 1086,
  [SMALL_STATE(60)] = 1093,
  [SMALL_STATE(61)] = 1106,
  [SMALL_STATE(62)] = 1115,
  [SMALL_STATE(63)] = 1128,
  [SMALL_STATE(64)] = 1135,
  [SMALL_STATE(65)] = 1143,
  [SMALL_STATE(66)] = 1150,
  [SMALL_STATE(67)] = 1157,
  [SMALL_STATE(68)] = 1161,
  [SMALL_STATE(69)] = 1165,
  [SMALL_STATE(70)] = 1169,
  [SMALL_STATE(71)] = 1173,
  [SMALL_STATE(72)] = 1177,
  [SMALL_STATE(73)] = 1181,
  [SMALL_STATE(74)] = 1185,
  [SMALL_STATE(75)] = 1189,
  [SMALL_STATE(76)] = 1193,
  [SMALL_STATE(77)] = 1197,
  [SMALL_STATE(78)] = 1201,
  [SMALL_STATE(79)] = 1205,
  [SMALL_STATE(80)] = 1209,
  [SMALL_STATE(81)] = 1213,
  [SMALL_STATE(82)] = 1217,
  [SMALL_STATE(83)] = 1221,
  [SMALL_STATE(84)] = 1225,
  [SMALL_STATE(85)] = 1229,
  [SMALL_STATE(86)] = 1233,
  [SMALL_STATE(87)] = 1237,
  [SMALL_STATE(88)] = 1241,
  [SMALL_STATE(89)] = 1245,
  [SMALL_STATE(90)] = 1249,
  [SMALL_STATE(91)] = 1253,
  [SMALL_STATE(92)] = 1257,
  [SMALL_STATE(93)] = 1261,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(92),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(50),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(68),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(79),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(26),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(86),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(51),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(88),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(89),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(12),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_public_comment, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_public_comment, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_block, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_block, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_private_comment, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_private_comment, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(49),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(55),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(62),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(54),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(54),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__matched_curly_brackets, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__matched_curly_brackets, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_name, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [251] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
