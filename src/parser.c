#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 2
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LT = 1,
  anon_sym_POUNDMarkdown = 2,
  anon_sym_GT = 3,
  anon_sym_LT_SLASH = 4,
  anon_sym_SLASH_GT = 5,
  anon_sym_LBRACE = 6,
  anon_sym_EQ = 7,
  anon_sym_DOT_DOT_DOT = 8,
  anon_sym_CARET = 9,
  anon_sym_RBRACE = 10,
  aux_sym_expression_value_token1 = 11,
  anon_sym_LBRACE_RBRACE = 12,
  anon_sym_LT_BANG_DASH_DASH = 13,
  aux_sym__public_comment_token1 = 14,
  anon_sym_DASH_DASH_GT = 15,
  anon_sym_LBRACE_BANG_DASH_DASH = 16,
  anon_sym_DASH_DASH_RBRACE = 17,
  anon_sym_LBRACE_POUND = 18,
  anon_sym_if = 19,
  anon_sym_unless = 20,
  anon_sym_for = 21,
  anon_sym_case = 22,
  anon_sym_LBRACE_SLASH = 23,
  anon_sym_else = 24,
  anon_sym_elseif = 25,
  anon_sym_match = 26,
  aux_sym_attribute_value_token1 = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_attribute_value_token2 = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_attribute_value_token3 = 31,
  sym_tag_name = 32,
  sym_attribute_name = 33,
  sym_text = 34,
  sym_fragment = 35,
  sym__node = 36,
  sym_tag = 37,
  sym_block = 38,
  sym_start_markdown = 39,
  sym_end_markdown = 40,
  sym_start_tag = 41,
  sym_end_tag = 42,
  sym_self_closing_tag = 43,
  sym_expression = 44,
  sym_expression_value = 45,
  sym_comment = 46,
  sym__public_comment = 47,
  sym__private_comment = 48,
  sym_start_block = 49,
  sym_block_name = 50,
  sym_end_block = 51,
  sym_subblock = 52,
  sym_subblock_name = 53,
  sym_attribute = 54,
  sym_attribute_value = 55,
  aux_sym_fragment_repeat1 = 56,
  aux_sym_block_repeat1 = 57,
  aux_sym_start_markdown_repeat1 = 58,
  aux_sym__public_comment_repeat1 = 59,
  anon_alias_sym_comment = 60,
  anon_alias_sym_expression_value = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_POUNDMarkdown] = "tag_name",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_CARET] = "^",
  [anon_sym_RBRACE] = "}",
  [aux_sym_expression_value_token1] = "expression_value_token1",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym__public_comment_token1] = "_public_comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LBRACE_BANG_DASH_DASH] = "{!--",
  [anon_sym_DASH_DASH_RBRACE] = "--}",
  [anon_sym_LBRACE_POUND] = "{#",
  [anon_sym_if] = "if",
  [anon_sym_unless] = "unless",
  [anon_sym_for] = "for",
  [anon_sym_case] = "case",
  [anon_sym_LBRACE_SLASH] = "{/",
  [anon_sym_else] = "else",
  [anon_sym_elseif] = "elseif",
  [anon_sym_match] = "match",
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_attribute_value_token2] = "attribute_value_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_attribute_value_token3] = "attribute_value_token3",
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym_block] = "block",
  [sym_start_markdown] = "start_markdown",
  [sym_end_markdown] = "end_markdown",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_expression] = "expression",
  [sym_expression_value] = "expression_value",
  [sym_comment] = "comment",
  [sym__public_comment] = "_public_comment",
  [sym__private_comment] = "_private_comment",
  [sym_start_block] = "start_block",
  [sym_block_name] = "block_name",
  [sym_end_block] = "end_block",
  [sym_subblock] = "subblock",
  [sym_subblock_name] = "subblock_name",
  [sym_attribute] = "attribute",
  [sym_attribute_value] = "attribute_value",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_start_markdown_repeat1] = "start_markdown_repeat1",
  [aux_sym__public_comment_repeat1] = "_public_comment_repeat1",
  [anon_alias_sym_comment] = "comment",
  [anon_alias_sym_expression_value] = "expression_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_POUNDMarkdown] = sym_tag_name,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_expression_value_token1] = aux_sym_expression_value_token1,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym__public_comment_token1] = aux_sym__public_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LBRACE_BANG_DASH_DASH] = anon_sym_LBRACE_BANG_DASH_DASH,
  [anon_sym_DASH_DASH_RBRACE] = anon_sym_DASH_DASH_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_LBRACE_SLASH] = anon_sym_LBRACE_SLASH,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_match] = anon_sym_match,
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_attribute_value_token2] = aux_sym_attribute_value_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_attribute_value_token3] = aux_sym_attribute_value_token3,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym_block] = sym_block,
  [sym_start_markdown] = sym_start_markdown,
  [sym_end_markdown] = sym_end_markdown,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_expression] = sym_expression,
  [sym_expression_value] = sym_expression_value,
  [sym_comment] = sym_comment,
  [sym__public_comment] = sym__public_comment,
  [sym__private_comment] = sym__private_comment,
  [sym_start_block] = sym_start_block,
  [sym_block_name] = sym_block_name,
  [sym_end_block] = sym_end_block,
  [sym_subblock] = sym_subblock,
  [sym_subblock_name] = sym_subblock_name,
  [sym_attribute] = sym_attribute,
  [sym_attribute_value] = sym_attribute_value,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_start_markdown_repeat1] = aux_sym_start_markdown_repeat1,
  [aux_sym__public_comment_repeat1] = aux_sym__public_comment_repeat1,
  [anon_alias_sym_comment] = anon_alias_sym_comment,
  [anon_alias_sym_expression_value] = anon_alias_sym_expression_value,
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
  [anon_sym_POUNDMarkdown] = {
    .visible = true,
    .named = true,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expression_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__public_comment_token1] = {
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
  [anon_sym_DASH_DASH_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
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
  [anon_sym_LBRACE_SLASH] = {
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
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
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
  [sym_start_markdown] = {
    .visible = true,
    .named = true,
  },
  [sym_end_markdown] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__public_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__private_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_start_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_name] = {
    .visible = true,
    .named = true,
  },
  [sym_end_block] = {
    .visible = true,
    .named = true,
  },
  [sym_subblock] = {
    .visible = true,
    .named = true,
  },
  [sym_subblock_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
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
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_markdown_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__public_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_expression_value] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_alias_sym_comment,
  },
  [2] = {
    [1] = anon_alias_sym_expression_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_expression_value, 2,
    sym_expression_value,
    anon_alias_sym_expression_value,
  sym__public_comment, 2,
    sym__public_comment,
    anon_alias_sym_comment,
  sym__private_comment, 2,
    sym__private_comment,
    anon_alias_sym_comment,
  aux_sym__public_comment_repeat1, 2,
    aux_sym__public_comment_repeat1,
    anon_alias_sym_comment,
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
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '^') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '-' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == '}') ADVANCE(97);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 'w') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == '}') ADVANCE(97);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '-' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 53:
      if (eof) ADVANCE(56);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(12);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_POUNDMarkdown);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUNDMarkdown);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(98);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '/') ADVANCE(103);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '}') ADVANCE(81);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(81);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '!') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG_DASH_DASH);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (!aux_sym_attribute_value_token1_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_attribute_value_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_attribute_value_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'M') ADVANCE(115);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(120);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(119);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(116);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(60);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(121);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(117);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(118);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 55},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 55},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 55},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 55},
  [22] = {.lex_state = 55},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 55},
  [25] = {.lex_state = 55},
  [26] = {.lex_state = 55},
  [27] = {.lex_state = 55},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 55},
  [45] = {.lex_state = 55},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 49},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 49},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 49},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 49},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 17},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 49},
  [80] = {.lex_state = 49},
  [81] = {.lex_state = 49},
  [82] = {.lex_state = 49},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 55},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 55},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 52},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 55},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 52},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 55},
  [129] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_POUNDMarkdown] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_LBRACE_SLASH] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(124),
    [sym__node] = STATE(12),
    [sym_tag] = STATE(12),
    [sym_block] = STATE(12),
    [sym_start_markdown] = STATE(128),
    [sym_start_tag] = STATE(10),
    [sym_self_closing_tag] = STATE(23),
    [sym_expression] = STATE(12),
    [sym_comment] = STATE(12),
    [sym__public_comment] = STATE(22),
    [sym__private_comment] = STATE(22),
    [sym_start_block] = STATE(5),
    [aux_sym_fragment_repeat1] = STATE(12),
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
  [0] = 14,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(29), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(8), 1,
      sym_start_tag,
    STATE(41), 1,
      sym_self_closing_tag,
    STATE(49), 1,
      sym_end_block,
    STATE(123), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(6), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [50] = 14,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(31), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(8), 1,
      sym_start_tag,
    STATE(41), 1,
      sym_self_closing_tag,
    STATE(57), 1,
      sym_end_block,
    STATE(123), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(2), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [100] = 14,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE_SLASH,
    STATE(3), 1,
      sym_start_block,
    STATE(8), 1,
      sym_start_tag,
    STATE(25), 1,
      sym_end_block,
    STATE(41), 1,
      sym_self_closing_tag,
    STATE(123), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(6), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [150] = 14,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(35), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(8), 1,
      sym_start_tag,
    STATE(21), 1,
      sym_end_block,
    STATE(41), 1,
      sym_self_closing_tag,
    STATE(123), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(4), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [200] = 13,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(46), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(49), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(52), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(54), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(8), 1,
      sym_start_tag,
    STATE(41), 1,
      sym_self_closing_tag,
    STATE(123), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(6), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [247] = 14,
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
    ACTIONS(57), 1,
      anon_sym_LT_SLASH,
    ACTIONS(59), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(10), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(51), 1,
      sym_end_tag,
    STATE(128), 1,
      sym_start_markdown,
    STATE(22), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(9), 6,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [296] = 14,
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
    ACTIONS(57), 1,
      anon_sym_LT_SLASH,
    ACTIONS(61), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(10), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(55), 1,
      sym_end_tag,
    STATE(128), 1,
      sym_start_markdown,
    STATE(22), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(7), 6,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [345] = 13,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(74), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(80), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(10), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(128), 1,
      sym_start_markdown,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    STATE(22), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(9), 6,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [392] = 14,
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
    ACTIONS(83), 1,
      anon_sym_LT_SLASH,
    ACTIONS(85), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(10), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(27), 1,
      sym_end_tag,
    STATE(128), 1,
      sym_start_markdown,
    STATE(22), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(11), 6,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [441] = 14,
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
      sym_text,
    ACTIONS(83), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_start_block,
    STATE(10), 1,
      sym_start_tag,
    STATE(20), 1,
      sym_end_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(128), 1,
      sym_start_markdown,
    STATE(22), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(9), 6,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [490] = 13,
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
      sym_text,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_start_block,
    STATE(10), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(128), 1,
      sym_start_markdown,
    STATE(22), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(9), 6,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [536] = 2,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
  [550] = 2,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_DASH_DASH_RBRACE,
      anon_sym_LBRACE_POUND,
  [564] = 5,
    ACTIONS(99), 1,
      anon_sym_else,
    STATE(61), 1,
      sym_subblock_name,
    STATE(64), 1,
      sym_block_name,
    ACTIONS(101), 2,
      anon_sym_elseif,
      anon_sym_match,
    ACTIONS(97), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [584] = 2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [597] = 2,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [610] = 2,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [623] = 2,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [636] = 2,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [649] = 2,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [662] = 2,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [675] = 2,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [688] = 2,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [701] = 2,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [714] = 2,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [727] = 2,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [740] = 2,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [753] = 2,
    ACTIONS(155), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(157), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [765] = 2,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(111), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [777] = 4,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_expression_value,
    ACTIONS(163), 2,
      aux_sym_expression_value_token1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(161), 3,
      anon_sym_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_CARET,
  [793] = 2,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(167), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [805] = 4,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_expression_value,
    ACTIONS(163), 2,
      aux_sym_expression_value_token1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(169), 3,
      anon_sym_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_CARET,
  [821] = 5,
    ACTIONS(171), 1,
      anon_sym_GT,
    ACTIONS(173), 1,
      anon_sym_SLASH_GT,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      sym_attribute_name,
    STATE(48), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_markdown_repeat1,
  [839] = 4,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_expression_value,
    ACTIONS(163), 2,
      aux_sym_expression_value_token1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(179), 3,
      anon_sym_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_CARET,
  [855] = 5,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(181), 1,
      anon_sym_GT,
    ACTIONS(183), 1,
      anon_sym_SLASH_GT,
    STATE(34), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_markdown_repeat1,
  [873] = 5,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(181), 1,
      anon_sym_GT,
    ACTIONS(185), 1,
      anon_sym_SLASH_GT,
    STATE(46), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_markdown_repeat1,
  [891] = 2,
    ACTIONS(187), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(189), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [903] = 2,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(107), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [915] = 2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(103), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [927] = 2,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(131), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [939] = 2,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(135), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [951] = 2,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(127), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [963] = 2,
    ACTIONS(191), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(193), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [975] = 2,
    ACTIONS(195), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(197), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [987] = 5,
    ACTIONS(171), 1,
      anon_sym_GT,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(199), 1,
      anon_sym_SLASH_GT,
    STATE(48), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_markdown_repeat1,
  [1005] = 2,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(115), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1017] = 4,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_attribute_name,
    ACTIONS(201), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(48), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_markdown_repeat1,
  [1033] = 2,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(139), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1045] = 2,
    ACTIONS(209), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(211), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1057] = 2,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(119), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1069] = 2,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(93), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1081] = 2,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(89), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1093] = 2,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(143), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1105] = 2,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(147), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1117] = 2,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(151), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1129] = 2,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(123), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1141] = 6,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_expression,
    STATE(75), 1,
      sym_attribute_value,
  [1160] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(219), 1,
      anon_sym_GT,
    STATE(60), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_markdown_repeat1,
  [1175] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(221), 1,
      anon_sym_GT,
    STATE(48), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_markdown_repeat1,
  [1190] = 5,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      aux_sym_expression_value_token1,
    STATE(129), 1,
      sym_expression_value,
  [1206] = 2,
    ACTIONS(229), 1,
      anon_sym_EQ,
    ACTIONS(227), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1216] = 2,
    STATE(108), 1,
      sym_block_name,
    ACTIONS(231), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1226] = 5,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(225), 1,
      aux_sym_expression_value_token1,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_expression_value,
  [1242] = 2,
    STATE(64), 1,
      sym_block_name,
    ACTIONS(97), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1252] = 2,
    STATE(115), 1,
      sym_block_name,
    ACTIONS(231), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1262] = 1,
    ACTIONS(235), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1269] = 4,
    ACTIONS(237), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(239), 1,
      aux_sym__public_comment_token1,
    STATE(87), 1,
      aux_sym__public_comment_repeat1,
    STATE(126), 1,
      sym__public_comment,
  [1282] = 4,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(225), 1,
      aux_sym_expression_value_token1,
    STATE(118), 1,
      sym_expression_value,
  [1295] = 1,
    ACTIONS(143), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1302] = 4,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(225), 1,
      aux_sym_expression_value_token1,
    STATE(113), 1,
      sym_expression_value,
  [1315] = 1,
    ACTIONS(241), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1322] = 1,
    ACTIONS(115), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1329] = 4,
    ACTIONS(243), 1,
      aux_sym__public_comment_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(83), 1,
      aux_sym__public_comment_repeat1,
    STATE(112), 1,
      sym__private_comment,
  [1342] = 1,
    ACTIONS(247), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1349] = 4,
    ACTIONS(243), 1,
      aux_sym__public_comment_token1,
    ACTIONS(245), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(84), 1,
      aux_sym__public_comment_repeat1,
    STATE(107), 1,
      sym__private_comment,
  [1362] = 1,
    ACTIONS(249), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1369] = 4,
    ACTIONS(237), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(239), 1,
      aux_sym__public_comment_token1,
    STATE(85), 1,
      aux_sym__public_comment_repeat1,
    STATE(105), 1,
      sym__public_comment,
  [1382] = 2,
    ACTIONS(253), 1,
      aux_sym_expression_value_token1,
    ACTIONS(251), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
  [1391] = 2,
    ACTIONS(257), 1,
      aux_sym_expression_value_token1,
    ACTIONS(255), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
  [1400] = 4,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(225), 1,
      aux_sym_expression_value_token1,
    STATE(101), 1,
      sym_expression_value,
  [1413] = 4,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(225), 1,
      aux_sym_expression_value_token1,
    STATE(100), 1,
      sym_expression_value,
  [1426] = 3,
    ACTIONS(243), 1,
      aux_sym__public_comment_token1,
    ACTIONS(259), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(86), 1,
      aux_sym__public_comment_repeat1,
  [1436] = 3,
    ACTIONS(243), 1,
      aux_sym__public_comment_token1,
    ACTIONS(261), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(86), 1,
      aux_sym__public_comment_repeat1,
  [1446] = 3,
    ACTIONS(239), 1,
      aux_sym__public_comment_token1,
    ACTIONS(263), 1,
      anon_sym_DASH_DASH_GT,
    STATE(88), 1,
      aux_sym__public_comment_repeat1,
  [1456] = 3,
    ACTIONS(265), 1,
      aux_sym__public_comment_token1,
    ACTIONS(268), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(86), 1,
      aux_sym__public_comment_repeat1,
  [1466] = 3,
    ACTIONS(239), 1,
      aux_sym__public_comment_token1,
    ACTIONS(270), 1,
      anon_sym_DASH_DASH_GT,
    STATE(88), 1,
      aux_sym__public_comment_repeat1,
  [1476] = 3,
    ACTIONS(268), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(272), 1,
      aux_sym__public_comment_token1,
    STATE(88), 1,
      aux_sym__public_comment_repeat1,
  [1486] = 1,
    ACTIONS(275), 2,
      aux_sym__public_comment_token1,
      anon_sym_DASH_DASH_RBRACE,
  [1491] = 2,
    ACTIONS(277), 1,
      anon_sym_LT_SLASH,
    STATE(51), 1,
      sym_end_markdown,
  [1498] = 2,
    ACTIONS(279), 1,
      anon_sym_POUNDMarkdown,
    ACTIONS(281), 1,
      sym_tag_name,
  [1505] = 2,
    ACTIONS(279), 1,
      anon_sym_POUNDMarkdown,
    ACTIONS(283), 1,
      sym_tag_name,
  [1512] = 2,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_attribute_value_token3,
  [1519] = 2,
    ACTIONS(289), 1,
      anon_sym_LT_SLASH,
    STATE(20), 1,
      sym_end_markdown,
  [1526] = 2,
    ACTIONS(285), 1,
      anon_sym_SQUOTE,
    ACTIONS(291), 1,
      aux_sym_attribute_value_token2,
  [1533] = 1,
    ACTIONS(275), 2,
      aux_sym__public_comment_token1,
      anon_sym_DASH_DASH_GT,
  [1538] = 1,
    ACTIONS(293), 1,
      sym_text,
  [1542] = 1,
    ACTIONS(295), 1,
      anon_sym_GT,
  [1546] = 1,
    ACTIONS(297), 1,
      anon_sym_GT,
  [1550] = 1,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
  [1554] = 1,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
  [1558] = 1,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
  [1562] = 1,
    ACTIONS(305), 1,
      anon_sym_POUNDMarkdown,
  [1566] = 1,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
  [1570] = 1,
    ACTIONS(309), 1,
      anon_sym_DASH_DASH_GT,
  [1574] = 1,
    ACTIONS(311), 1,
      anon_sym_GT,
  [1578] = 1,
    ACTIONS(313), 1,
      anon_sym_DASH_DASH_RBRACE,
  [1582] = 1,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
  [1586] = 1,
    ACTIONS(317), 1,
      sym_text,
  [1590] = 1,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
  [1594] = 1,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
  [1598] = 1,
    ACTIONS(321), 1,
      anon_sym_DASH_DASH_RBRACE,
  [1602] = 1,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
  [1606] = 1,
    ACTIONS(325), 1,
      sym_tag_name,
  [1610] = 1,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
  [1614] = 1,
    ACTIONS(329), 1,
      anon_sym_GT,
  [1618] = 1,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
  [1622] = 1,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
  [1626] = 1,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
  [1630] = 1,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
  [1634] = 1,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
  [1638] = 1,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
  [1642] = 1,
    ACTIONS(341), 1,
      sym_text,
  [1646] = 1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
  [1650] = 1,
    ACTIONS(345), 1,
      sym_tag_name,
  [1654] = 1,
    ACTIONS(347), 1,
      anon_sym_DASH_DASH_GT,
  [1658] = 1,
    ACTIONS(349), 1,
      anon_sym_POUNDMarkdown,
  [1662] = 1,
    ACTIONS(351), 1,
      sym_text,
  [1666] = 1,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 296,
  [SMALL_STATE(9)] = 345,
  [SMALL_STATE(10)] = 392,
  [SMALL_STATE(11)] = 441,
  [SMALL_STATE(12)] = 490,
  [SMALL_STATE(13)] = 536,
  [SMALL_STATE(14)] = 550,
  [SMALL_STATE(15)] = 564,
  [SMALL_STATE(16)] = 584,
  [SMALL_STATE(17)] = 597,
  [SMALL_STATE(18)] = 610,
  [SMALL_STATE(19)] = 623,
  [SMALL_STATE(20)] = 636,
  [SMALL_STATE(21)] = 649,
  [SMALL_STATE(22)] = 662,
  [SMALL_STATE(23)] = 675,
  [SMALL_STATE(24)] = 688,
  [SMALL_STATE(25)] = 701,
  [SMALL_STATE(26)] = 714,
  [SMALL_STATE(27)] = 727,
  [SMALL_STATE(28)] = 740,
  [SMALL_STATE(29)] = 753,
  [SMALL_STATE(30)] = 765,
  [SMALL_STATE(31)] = 777,
  [SMALL_STATE(32)] = 793,
  [SMALL_STATE(33)] = 805,
  [SMALL_STATE(34)] = 821,
  [SMALL_STATE(35)] = 839,
  [SMALL_STATE(36)] = 855,
  [SMALL_STATE(37)] = 873,
  [SMALL_STATE(38)] = 891,
  [SMALL_STATE(39)] = 903,
  [SMALL_STATE(40)] = 915,
  [SMALL_STATE(41)] = 927,
  [SMALL_STATE(42)] = 939,
  [SMALL_STATE(43)] = 951,
  [SMALL_STATE(44)] = 963,
  [SMALL_STATE(45)] = 975,
  [SMALL_STATE(46)] = 987,
  [SMALL_STATE(47)] = 1005,
  [SMALL_STATE(48)] = 1017,
  [SMALL_STATE(49)] = 1033,
  [SMALL_STATE(50)] = 1045,
  [SMALL_STATE(51)] = 1057,
  [SMALL_STATE(52)] = 1069,
  [SMALL_STATE(53)] = 1081,
  [SMALL_STATE(54)] = 1093,
  [SMALL_STATE(55)] = 1105,
  [SMALL_STATE(56)] = 1117,
  [SMALL_STATE(57)] = 1129,
  [SMALL_STATE(58)] = 1141,
  [SMALL_STATE(59)] = 1160,
  [SMALL_STATE(60)] = 1175,
  [SMALL_STATE(61)] = 1190,
  [SMALL_STATE(62)] = 1206,
  [SMALL_STATE(63)] = 1216,
  [SMALL_STATE(64)] = 1226,
  [SMALL_STATE(65)] = 1242,
  [SMALL_STATE(66)] = 1252,
  [SMALL_STATE(67)] = 1262,
  [SMALL_STATE(68)] = 1269,
  [SMALL_STATE(69)] = 1282,
  [SMALL_STATE(70)] = 1295,
  [SMALL_STATE(71)] = 1302,
  [SMALL_STATE(72)] = 1315,
  [SMALL_STATE(73)] = 1322,
  [SMALL_STATE(74)] = 1329,
  [SMALL_STATE(75)] = 1342,
  [SMALL_STATE(76)] = 1349,
  [SMALL_STATE(77)] = 1362,
  [SMALL_STATE(78)] = 1369,
  [SMALL_STATE(79)] = 1382,
  [SMALL_STATE(80)] = 1391,
  [SMALL_STATE(81)] = 1400,
  [SMALL_STATE(82)] = 1413,
  [SMALL_STATE(83)] = 1426,
  [SMALL_STATE(84)] = 1436,
  [SMALL_STATE(85)] = 1446,
  [SMALL_STATE(86)] = 1456,
  [SMALL_STATE(87)] = 1466,
  [SMALL_STATE(88)] = 1476,
  [SMALL_STATE(89)] = 1486,
  [SMALL_STATE(90)] = 1491,
  [SMALL_STATE(91)] = 1498,
  [SMALL_STATE(92)] = 1505,
  [SMALL_STATE(93)] = 1512,
  [SMALL_STATE(94)] = 1519,
  [SMALL_STATE(95)] = 1526,
  [SMALL_STATE(96)] = 1533,
  [SMALL_STATE(97)] = 1538,
  [SMALL_STATE(98)] = 1542,
  [SMALL_STATE(99)] = 1546,
  [SMALL_STATE(100)] = 1550,
  [SMALL_STATE(101)] = 1554,
  [SMALL_STATE(102)] = 1558,
  [SMALL_STATE(103)] = 1562,
  [SMALL_STATE(104)] = 1566,
  [SMALL_STATE(105)] = 1570,
  [SMALL_STATE(106)] = 1574,
  [SMALL_STATE(107)] = 1578,
  [SMALL_STATE(108)] = 1582,
  [SMALL_STATE(109)] = 1586,
  [SMALL_STATE(110)] = 1590,
  [SMALL_STATE(111)] = 1594,
  [SMALL_STATE(112)] = 1598,
  [SMALL_STATE(113)] = 1602,
  [SMALL_STATE(114)] = 1606,
  [SMALL_STATE(115)] = 1610,
  [SMALL_STATE(116)] = 1614,
  [SMALL_STATE(117)] = 1618,
  [SMALL_STATE(118)] = 1622,
  [SMALL_STATE(119)] = 1626,
  [SMALL_STATE(120)] = 1630,
  [SMALL_STATE(121)] = 1634,
  [SMALL_STATE(122)] = 1638,
  [SMALL_STATE(123)] = 1642,
  [SMALL_STATE(124)] = 1646,
  [SMALL_STATE(125)] = 1650,
  [SMALL_STATE(126)] = 1654,
  [SMALL_STATE(127)] = 1658,
  [SMALL_STATE(128)] = 1662,
  [SMALL_STATE(129)] = 1666,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(92),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(76),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(91),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(35),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(68),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(74),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(65),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(9),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__public_comment, 3, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__public_comment, 3, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__private_comment, 3, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__private_comment, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_block, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_block, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_markdown, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_markdown, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_markdown_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_markdown_repeat1, 2), SHIFT_REPEAT(31),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_markdown_repeat1, 2), SHIFT_REPEAT(62),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_name, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock_name, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock_name, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2), SHIFT_REPEAT(89),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2), SHIFT_REPEAT(96),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_markdown, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_markdown, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_value, 3, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_value, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [343] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
