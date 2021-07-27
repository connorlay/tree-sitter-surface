#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 114
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 2
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASH = 3,
  anon_sym_SLASH_GT = 4,
  anon_sym_LBRACE = 5,
  anon_sym_EQ = 6,
  anon_sym_DOT_DOT_DOT = 7,
  anon_sym_CARET = 8,
  anon_sym_RBRACE = 9,
  aux_sym_expression_value_token1 = 10,
  anon_sym_LBRACE_RBRACE = 11,
  anon_sym_LT_BANG_DASH_DASH = 12,
  aux_sym_public_comment_token1 = 13,
  anon_sym_DASH_DASH_GT = 14,
  anon_sym_LBRACE_BANG_DASH_DASH = 15,
  anon_sym_DASH_DASH_RBRACE = 16,
  anon_sym_LBRACE_POUND = 17,
  anon_sym_if = 18,
  anon_sym_unless = 19,
  anon_sym_for = 20,
  anon_sym_case = 21,
  anon_sym_LBRACE_SLASH = 22,
  anon_sym_else = 23,
  anon_sym_elseif = 24,
  anon_sym_match = 25,
  sym_tag_name = 26,
  sym_attribute_name = 27,
  aux_sym_attribute_value_token1 = 28,
  anon_sym_SQUOTE = 29,
  aux_sym_attribute_value_token2 = 30,
  anon_sym_DQUOTE = 31,
  aux_sym_attribute_value_token3 = 32,
  sym_text = 33,
  sym_fragment = 34,
  sym__node = 35,
  sym_tag = 36,
  sym_block = 37,
  sym_start_tag = 38,
  sym_end_tag = 39,
  sym_self_closing_tag = 40,
  sym_expression = 41,
  sym_expression_value = 42,
  sym_public_comment = 43,
  sym_private_comment = 44,
  sym_start_block = 45,
  sym_block_name = 46,
  sym_end_block = 47,
  sym_subblock = 48,
  sym_subblock_name = 49,
  sym_attribute = 50,
  sym_attribute_value = 51,
  aux_sym_fragment_repeat1 = 52,
  aux_sym_block_repeat1 = 53,
  aux_sym_start_tag_repeat1 = 54,
  aux_sym_public_comment_repeat1 = 55,
  anon_alias_sym_comment = 56,
  anon_alias_sym_expression_value = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
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
  [aux_sym_public_comment_token1] = "public_comment_token1",
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
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
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
  [sym_start_block] = "start_block",
  [sym_block_name] = "block_name",
  [sym_end_block] = "end_block",
  [sym_subblock] = "subblock",
  [sym_subblock_name] = "subblock_name",
  [sym_attribute] = "attribute",
  [sym_attribute_value] = "attribute_value",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_public_comment_repeat1] = "public_comment_repeat1",
  [anon_alias_sym_comment] = "comment",
  [anon_alias_sym_expression_value] = "expression_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
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
  [aux_sym_public_comment_token1] = aux_sym_public_comment_token1,
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
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
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
  [sym_start_block] = sym_start_block,
  [sym_block_name] = sym_block_name,
  [sym_end_block] = sym_end_block,
  [sym_subblock] = sym_subblock,
  [sym_subblock_name] = sym_subblock_name,
  [sym_attribute] = sym_attribute,
  [sym_attribute_value] = sym_attribute_value,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_public_comment_repeat1] = aux_sym_public_comment_repeat1,
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
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
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
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_public_comment_repeat1] = {
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
  sym_public_comment, 2,
    sym_public_comment,
    anon_alias_sym_comment,
  sym_private_comment, 2,
    sym_private_comment,
    anon_alias_sym_comment,
  aux_sym_public_comment_repeat1, 2,
    aux_sym_public_comment_repeat1,
    anon_alias_sym_comment,
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
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(99);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '^') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(99);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '^') ADVANCE(63);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == '}') ADVANCE(86);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == '}') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '-' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(96);
      END_STATE();
    case 44:
      if (eof) ADVANCE(47);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 45:
      if (eof) ADVANCE(47);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(11);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(87);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '/') ADVANCE(92);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '}') ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '^') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead == '!') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(83);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(83);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_public_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG_DASH_DASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (!aux_sym_attribute_value_token1_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_attribute_value_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_attribute_value_token3);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 46},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 46},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 44},
  [14] = {.lex_state = 45},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 46},
  [17] = {.lex_state = 46},
  [18] = {.lex_state = 46},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 46},
  [22] = {.lex_state = 46},
  [23] = {.lex_state = 46},
  [24] = {.lex_state = 46},
  [25] = {.lex_state = 46},
  [26] = {.lex_state = 46},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 46},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 46},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 40},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 40},
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 40},
  [75] = {.lex_state = 40},
  [76] = {.lex_state = 40},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 43},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 43},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 43},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 43},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
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
    [sym_fragment] = STATE(89),
    [sym__node] = STATE(12),
    [sym_tag] = STATE(12),
    [sym_block] = STATE(12),
    [sym_start_tag] = STATE(8),
    [sym_self_closing_tag] = STATE(16),
    [sym_expression] = STATE(12),
    [sym_public_comment] = STATE(12),
    [sym_private_comment] = STATE(12),
    [sym_start_block] = STATE(4),
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
  [0] = 12,
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
    STATE(6), 1,
      sym_start_tag,
    STATE(24), 1,
      sym_end_block,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(9), 8,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [44] = 12,
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
    ACTIONS(31), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(33), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_tag,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(39), 1,
      sym_end_block,
    STATE(5), 8,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [88] = 12,
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
    ACTIONS(35), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_tag,
    STATE(17), 1,
      sym_end_block,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(2), 8,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [132] = 12,
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
    ACTIONS(31), 1,
      anon_sym_LBRACE_SLASH,
    STATE(3), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_tag,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(46), 1,
      sym_end_block,
    STATE(9), 8,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [176] = 12,
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
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(8), 1,
      sym_start_tag,
    STATE(16), 1,
      sym_self_closing_tag,
    STATE(37), 1,
      sym_end_tag,
    STATE(11), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [219] = 12,
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
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    ACTIONS(43), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(8), 1,
      sym_start_tag,
    STATE(16), 1,
      sym_self_closing_tag,
    STATE(23), 1,
      sym_end_tag,
    STATE(10), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [262] = 12,
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
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    ACTIONS(45), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(8), 1,
      sym_start_tag,
    STATE(16), 1,
      sym_self_closing_tag,
    STATE(25), 1,
      sym_end_tag,
    STATE(7), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [305] = 11,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(56), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(59), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(62), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(64), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_tag,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(9), 8,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [346] = 11,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(78), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(81), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(84), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(8), 1,
      sym_start_tag,
    STATE(16), 1,
      sym_self_closing_tag,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    STATE(10), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [387] = 12,
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
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(43), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(8), 1,
      sym_start_tag,
    STATE(16), 1,
      sym_self_closing_tag,
    STATE(47), 1,
      sym_end_tag,
    STATE(10), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [430] = 11,
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
    ACTIONS(43), 1,
      sym_text,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_block,
    STATE(8), 1,
      sym_start_tag,
    STATE(16), 1,
      sym_self_closing_tag,
    STATE(10), 7,
      sym__node,
      sym_tag,
      sym_block,
      sym_expression,
      sym_public_comment,
      sym_private_comment,
      aux_sym_fragment_repeat1,
  [470] = 2,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_DASH_DASH_RBRACE,
      anon_sym_LBRACE_POUND,
  [484] = 2,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
  [498] = 5,
    ACTIONS(99), 1,
      anon_sym_else,
    STATE(55), 1,
      sym_subblock_name,
    STATE(59), 1,
      sym_block_name,
    ACTIONS(101), 2,
      anon_sym_elseif,
      anon_sym_match,
    ACTIONS(97), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [518] = 2,
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
  [531] = 2,
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
  [544] = 2,
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
  [557] = 2,
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
  [570] = 2,
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
  [583] = 2,
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
  [596] = 2,
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
  [609] = 2,
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
  [622] = 2,
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
  [635] = 2,
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
  [648] = 2,
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
  [661] = 2,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(149), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [673] = 2,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(153), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [685] = 4,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_expression_value,
    ACTIONS(159), 2,
      aux_sym_expression_value_token1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(157), 3,
      anon_sym_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_CARET,
  [701] = 2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(103), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [713] = 4,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_expression_value,
    ACTIONS(159), 2,
      aux_sym_expression_value_token1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(161), 3,
      anon_sym_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_CARET,
  [729] = 5,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_SLASH_GT,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      sym_attribute_name,
    STATE(51), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [747] = 4,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_expression_value,
    ACTIONS(159), 2,
      aux_sym_expression_value_token1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(171), 3,
      anon_sym_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_CARET,
  [763] = 5,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      sym_attribute_name,
    ACTIONS(173), 1,
      anon_sym_GT,
    ACTIONS(175), 1,
      anon_sym_SLASH_GT,
    STATE(32), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [781] = 2,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(179), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [793] = 5,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      sym_attribute_name,
    ACTIONS(173), 1,
      anon_sym_GT,
    ACTIONS(181), 1,
      anon_sym_SLASH_GT,
    STATE(40), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [811] = 2,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(139), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [823] = 2,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(185), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [835] = 2,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(107), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [847] = 5,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      sym_attribute_name,
    ACTIONS(187), 1,
      anon_sym_SLASH_GT,
    STATE(51), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [865] = 2,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(115), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [877] = 2,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(143), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [889] = 2,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(127), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [901] = 2,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(191), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [913] = 2,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(111), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [925] = 2,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(135), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [937] = 2,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(131), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [949] = 2,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(123), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [961] = 2,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(89), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [973] = 2,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(93), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [985] = 4,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_attribute_name,
    ACTIONS(193), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(51), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1001] = 2,
    ACTIONS(201), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(203), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1013] = 2,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(119), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1025] = 6,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_expression,
    STATE(66), 1,
      sym_attribute_value,
  [1044] = 5,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      aux_sym_expression_value_token1,
    STATE(109), 1,
      sym_expression_value,
  [1060] = 2,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(215), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1070] = 2,
    STATE(111), 1,
      sym_block_name,
    ACTIONS(219), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1080] = 2,
    STATE(59), 1,
      sym_block_name,
    ACTIONS(97), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1090] = 5,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(213), 1,
      aux_sym_expression_value_token1,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_expression_value,
  [1106] = 2,
    STATE(102), 1,
      sym_block_name,
    ACTIONS(219), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1116] = 4,
    ACTIONS(223), 1,
      aux_sym_public_comment_token1,
    ACTIONS(225), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(80), 1,
      aux_sym_public_comment_repeat1,
    STATE(106), 1,
      sym_private_comment,
  [1129] = 1,
    ACTIONS(127), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1136] = 1,
    ACTIONS(227), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1143] = 4,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(213), 1,
      aux_sym_expression_value_token1,
    STATE(104), 1,
      sym_expression_value,
  [1156] = 4,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(213), 1,
      aux_sym_expression_value_token1,
    STATE(88), 1,
      sym_expression_value,
  [1169] = 1,
    ACTIONS(229), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1176] = 1,
    ACTIONS(231), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1183] = 4,
    ACTIONS(223), 1,
      aux_sym_public_comment_token1,
    ACTIONS(225), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(82), 1,
      aux_sym_public_comment_repeat1,
    STATE(87), 1,
      sym_private_comment,
  [1196] = 4,
    ACTIONS(233), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(235), 1,
      aux_sym_public_comment_token1,
    STATE(77), 1,
      aux_sym_public_comment_repeat1,
    STATE(94), 1,
      sym_public_comment,
  [1209] = 1,
    ACTIONS(237), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1216] = 2,
    ACTIONS(241), 1,
      aux_sym_expression_value_token1,
    ACTIONS(239), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
  [1225] = 4,
    ACTIONS(233), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(235), 1,
      aux_sym_public_comment_token1,
    STATE(79), 1,
      aux_sym_public_comment_repeat1,
    STATE(112), 1,
      sym_public_comment,
  [1238] = 1,
    ACTIONS(119), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1245] = 2,
    ACTIONS(245), 1,
      aux_sym_expression_value_token1,
    ACTIONS(243), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
  [1254] = 4,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(213), 1,
      aux_sym_expression_value_token1,
    STATE(90), 1,
      sym_expression_value,
  [1267] = 4,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(213), 1,
      aux_sym_expression_value_token1,
    STATE(97), 1,
      sym_expression_value,
  [1280] = 3,
    ACTIONS(235), 1,
      aux_sym_public_comment_token1,
    ACTIONS(247), 1,
      anon_sym_DASH_DASH_GT,
    STATE(81), 1,
      aux_sym_public_comment_repeat1,
  [1290] = 3,
    ACTIONS(249), 1,
      aux_sym_public_comment_token1,
    ACTIONS(252), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(78), 1,
      aux_sym_public_comment_repeat1,
  [1300] = 3,
    ACTIONS(235), 1,
      aux_sym_public_comment_token1,
    ACTIONS(254), 1,
      anon_sym_DASH_DASH_GT,
    STATE(81), 1,
      aux_sym_public_comment_repeat1,
  [1310] = 3,
    ACTIONS(223), 1,
      aux_sym_public_comment_token1,
    ACTIONS(256), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(78), 1,
      aux_sym_public_comment_repeat1,
  [1320] = 3,
    ACTIONS(252), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(258), 1,
      aux_sym_public_comment_token1,
    STATE(81), 1,
      aux_sym_public_comment_repeat1,
  [1330] = 3,
    ACTIONS(223), 1,
      aux_sym_public_comment_token1,
    ACTIONS(261), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(78), 1,
      aux_sym_public_comment_repeat1,
  [1340] = 2,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      aux_sym_attribute_value_token2,
  [1347] = 2,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym_attribute_value_token3,
  [1354] = 1,
    ACTIONS(269), 2,
      aux_sym_public_comment_token1,
      anon_sym_DASH_DASH_GT,
  [1359] = 1,
    ACTIONS(269), 2,
      aux_sym_public_comment_token1,
      anon_sym_DASH_DASH_RBRACE,
  [1364] = 1,
    ACTIONS(271), 1,
      anon_sym_DASH_DASH_RBRACE,
  [1368] = 1,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
  [1372] = 1,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
  [1376] = 1,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
  [1380] = 1,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
  [1384] = 1,
    ACTIONS(281), 1,
      sym_tag_name,
  [1388] = 1,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
  [1392] = 1,
    ACTIONS(285), 1,
      anon_sym_DASH_DASH_GT,
  [1396] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1400] = 1,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
  [1404] = 1,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
  [1408] = 1,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
  [1412] = 1,
    ACTIONS(295), 1,
      anon_sym_GT,
  [1416] = 1,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
  [1420] = 1,
    ACTIONS(297), 1,
      anon_sym_GT,
  [1424] = 1,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
  [1428] = 1,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
  [1432] = 1,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
  [1436] = 1,
    ACTIONS(305), 1,
      sym_tag_name,
  [1440] = 1,
    ACTIONS(307), 1,
      anon_sym_DASH_DASH_RBRACE,
  [1444] = 1,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
  [1448] = 1,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
  [1452] = 1,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
  [1456] = 1,
    ACTIONS(313), 1,
      sym_tag_name,
  [1460] = 1,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
  [1464] = 1,
    ACTIONS(317), 1,
      anon_sym_DASH_DASH_GT,
  [1468] = 1,
    ACTIONS(319), 1,
      sym_tag_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 219,
  [SMALL_STATE(8)] = 262,
  [SMALL_STATE(9)] = 305,
  [SMALL_STATE(10)] = 346,
  [SMALL_STATE(11)] = 387,
  [SMALL_STATE(12)] = 430,
  [SMALL_STATE(13)] = 470,
  [SMALL_STATE(14)] = 484,
  [SMALL_STATE(15)] = 498,
  [SMALL_STATE(16)] = 518,
  [SMALL_STATE(17)] = 531,
  [SMALL_STATE(18)] = 544,
  [SMALL_STATE(19)] = 557,
  [SMALL_STATE(20)] = 570,
  [SMALL_STATE(21)] = 583,
  [SMALL_STATE(22)] = 596,
  [SMALL_STATE(23)] = 609,
  [SMALL_STATE(24)] = 622,
  [SMALL_STATE(25)] = 635,
  [SMALL_STATE(26)] = 648,
  [SMALL_STATE(27)] = 661,
  [SMALL_STATE(28)] = 673,
  [SMALL_STATE(29)] = 685,
  [SMALL_STATE(30)] = 701,
  [SMALL_STATE(31)] = 713,
  [SMALL_STATE(32)] = 729,
  [SMALL_STATE(33)] = 747,
  [SMALL_STATE(34)] = 763,
  [SMALL_STATE(35)] = 781,
  [SMALL_STATE(36)] = 793,
  [SMALL_STATE(37)] = 811,
  [SMALL_STATE(38)] = 823,
  [SMALL_STATE(39)] = 835,
  [SMALL_STATE(40)] = 847,
  [SMALL_STATE(41)] = 865,
  [SMALL_STATE(42)] = 877,
  [SMALL_STATE(43)] = 889,
  [SMALL_STATE(44)] = 901,
  [SMALL_STATE(45)] = 913,
  [SMALL_STATE(46)] = 925,
  [SMALL_STATE(47)] = 937,
  [SMALL_STATE(48)] = 949,
  [SMALL_STATE(49)] = 961,
  [SMALL_STATE(50)] = 973,
  [SMALL_STATE(51)] = 985,
  [SMALL_STATE(52)] = 1001,
  [SMALL_STATE(53)] = 1013,
  [SMALL_STATE(54)] = 1025,
  [SMALL_STATE(55)] = 1044,
  [SMALL_STATE(56)] = 1060,
  [SMALL_STATE(57)] = 1070,
  [SMALL_STATE(58)] = 1080,
  [SMALL_STATE(59)] = 1090,
  [SMALL_STATE(60)] = 1106,
  [SMALL_STATE(61)] = 1116,
  [SMALL_STATE(62)] = 1129,
  [SMALL_STATE(63)] = 1136,
  [SMALL_STATE(64)] = 1143,
  [SMALL_STATE(65)] = 1156,
  [SMALL_STATE(66)] = 1169,
  [SMALL_STATE(67)] = 1176,
  [SMALL_STATE(68)] = 1183,
  [SMALL_STATE(69)] = 1196,
  [SMALL_STATE(70)] = 1209,
  [SMALL_STATE(71)] = 1216,
  [SMALL_STATE(72)] = 1225,
  [SMALL_STATE(73)] = 1238,
  [SMALL_STATE(74)] = 1245,
  [SMALL_STATE(75)] = 1254,
  [SMALL_STATE(76)] = 1267,
  [SMALL_STATE(77)] = 1280,
  [SMALL_STATE(78)] = 1290,
  [SMALL_STATE(79)] = 1300,
  [SMALL_STATE(80)] = 1310,
  [SMALL_STATE(81)] = 1320,
  [SMALL_STATE(82)] = 1330,
  [SMALL_STATE(83)] = 1340,
  [SMALL_STATE(84)] = 1347,
  [SMALL_STATE(85)] = 1354,
  [SMALL_STATE(86)] = 1359,
  [SMALL_STATE(87)] = 1364,
  [SMALL_STATE(88)] = 1368,
  [SMALL_STATE(89)] = 1372,
  [SMALL_STATE(90)] = 1376,
  [SMALL_STATE(91)] = 1380,
  [SMALL_STATE(92)] = 1384,
  [SMALL_STATE(93)] = 1388,
  [SMALL_STATE(94)] = 1392,
  [SMALL_STATE(95)] = 1396,
  [SMALL_STATE(96)] = 1400,
  [SMALL_STATE(97)] = 1404,
  [SMALL_STATE(98)] = 1408,
  [SMALL_STATE(99)] = 1412,
  [SMALL_STATE(100)] = 1416,
  [SMALL_STATE(101)] = 1420,
  [SMALL_STATE(102)] = 1424,
  [SMALL_STATE(103)] = 1428,
  [SMALL_STATE(104)] = 1432,
  [SMALL_STATE(105)] = 1436,
  [SMALL_STATE(106)] = 1440,
  [SMALL_STATE(107)] = 1444,
  [SMALL_STATE(108)] = 1448,
  [SMALL_STATE(109)] = 1452,
  [SMALL_STATE(110)] = 1456,
  [SMALL_STATE(111)] = 1460,
  [SMALL_STATE(112)] = 1464,
  [SMALL_STATE(113)] = 1468,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(105),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(113),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(33),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(72),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(61),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(58),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(10),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_private_comment, 3, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_private_comment, 3, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_public_comment, 3, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_public_comment, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_block, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_block, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(29),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(56),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_name, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock_name, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock_name, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_public_comment_repeat1, 2), SHIFT_REPEAT(86),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_public_comment_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_public_comment_repeat1, 2), SHIFT_REPEAT(85),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_public_comment_repeat1, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [275] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_value, 3, .production_id = 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_value, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
