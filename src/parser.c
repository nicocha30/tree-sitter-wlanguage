#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 182
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_estune = 1,
  anon_sym_estun = 2,
  anon_sym_est = 3,
  anon_sym_EQ = 4,
  anon_sym_SEMI = 5,
  anon_sym_DOT = 6,
  sym_identifier = 7,
  anon_sym_entier = 8,
  anon_sym_ru00e9el = 9,
  anon_sym_chaine = 10,
  anon_sym_monu00e9taire = 11,
  anon_sym_boolu00e9en = 12,
  anon_sym_date = 13,
  anon_sym_heure = 14,
  anon_sym_duru00e9e = 15,
  sym_number = 16,
  sym_string = 17,
  anon_sym_VRAI = 18,
  anon_sym_FAUX = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  anon_sym_LT_GT = 24,
  anon_sym_GT = 25,
  anon_sym_LT = 26,
  anon_sym_GT_EQ = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_COMMA = 31,
  anon_sym_SI = 32,
  anon_sym_ALORS = 33,
  anon_sym_FIN = 34,
  anon_sym_SINON = 35,
  anon_sym_POUR = 36,
  anon_sym_TANTQUE = 37,
  sym_line_comment = 38,
  sym_block_comment = 39,
  sym_program = 40,
  sym__statement = 41,
  sym_variable_declaration = 42,
  sym_assignment = 43,
  sym_expression = 44,
  sym_identifier_chain = 45,
  sym_type = 46,
  sym_boolean = 47,
  sym_binary_expression = 48,
  sym_function_call = 49,
  sym_argument_list = 50,
  sym_if_statement = 51,
  sym_else_clause = 52,
  sym_for_statement = 53,
  sym_while_statement = 54,
  sym_comment = 55,
  aux_sym_program_repeat1 = 56,
  aux_sym_identifier_chain_repeat1 = 57,
  aux_sym_argument_list_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_estune] = "est une",
  [anon_sym_estun] = "est un",
  [anon_sym_est] = "est",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [anon_sym_entier] = "entier",
  [anon_sym_ru00e9el] = "r\u00e9el",
  [anon_sym_chaine] = "chaine",
  [anon_sym_monu00e9taire] = "mon\u00e9taire",
  [anon_sym_boolu00e9en] = "bool\u00e9en",
  [anon_sym_date] = "date",
  [anon_sym_heure] = "heure",
  [anon_sym_duru00e9e] = "dur\u00e9e",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_VRAI] = "VRAI",
  [anon_sym_FAUX] = "FAUX",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_SI] = "SI",
  [anon_sym_ALORS] = "ALORS",
  [anon_sym_FIN] = "FIN",
  [anon_sym_SINON] = "SINON",
  [anon_sym_POUR] = "POUR",
  [anon_sym_TANTQUE] = "TANTQUE",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [sym_identifier_chain] = "identifier_chain",
  [sym_type] = "type",
  [sym_boolean] = "boolean",
  [sym_binary_expression] = "binary_expression",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_identifier_chain_repeat1] = "identifier_chain_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_estune] = anon_sym_estune,
  [anon_sym_estun] = anon_sym_estun,
  [anon_sym_est] = anon_sym_est,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [anon_sym_entier] = anon_sym_entier,
  [anon_sym_ru00e9el] = anon_sym_ru00e9el,
  [anon_sym_chaine] = anon_sym_chaine,
  [anon_sym_monu00e9taire] = anon_sym_monu00e9taire,
  [anon_sym_boolu00e9en] = anon_sym_boolu00e9en,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_heure] = anon_sym_heure,
  [anon_sym_duru00e9e] = anon_sym_duru00e9e,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_VRAI] = anon_sym_VRAI,
  [anon_sym_FAUX] = anon_sym_FAUX,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SI] = anon_sym_SI,
  [anon_sym_ALORS] = anon_sym_ALORS,
  [anon_sym_FIN] = anon_sym_FIN,
  [anon_sym_SINON] = anon_sym_SINON,
  [anon_sym_POUR] = anon_sym_POUR,
  [anon_sym_TANTQUE] = anon_sym_TANTQUE,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
  [sym_identifier_chain] = sym_identifier_chain,
  [sym_type] = sym_type,
  [sym_boolean] = sym_boolean,
  [sym_binary_expression] = sym_binary_expression,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_identifier_chain_repeat1] = aux_sym_identifier_chain_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_estune] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_estun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_est] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_entier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ru00e9el] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chaine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monu00e9taire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolu00e9en] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_heure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duru00e9e] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_VRAI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FAUX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALORS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SINON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TANTQUE] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_chain] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_chain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 2,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 11,
  [18] = 13,
  [19] = 9,
  [20] = 20,
  [21] = 13,
  [22] = 15,
  [23] = 20,
  [24] = 11,
  [25] = 20,
  [26] = 9,
  [27] = 14,
  [28] = 28,
  [29] = 14,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 28,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 35,
  [42] = 30,
  [43] = 43,
  [44] = 35,
  [45] = 45,
  [46] = 30,
  [47] = 47,
  [48] = 31,
  [49] = 39,
  [50] = 36,
  [51] = 51,
  [52] = 38,
  [53] = 43,
  [54] = 37,
  [55] = 55,
  [56] = 37,
  [57] = 31,
  [58] = 38,
  [59] = 43,
  [60] = 47,
  [61] = 51,
  [62] = 39,
  [63] = 63,
  [64] = 55,
  [65] = 47,
  [66] = 55,
  [67] = 36,
  [68] = 51,
  [69] = 63,
  [70] = 63,
  [71] = 11,
  [72] = 9,
  [73] = 20,
  [74] = 14,
  [75] = 20,
  [76] = 76,
  [77] = 77,
  [78] = 37,
  [79] = 37,
  [80] = 76,
  [81] = 76,
  [82] = 77,
  [83] = 83,
  [84] = 39,
  [85] = 36,
  [86] = 38,
  [87] = 43,
  [88] = 77,
  [89] = 31,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 51,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 92,
  [99] = 92,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 92,
  [106] = 106,
  [107] = 104,
  [108] = 108,
  [109] = 104,
  [110] = 100,
  [111] = 90,
  [112] = 101,
  [113] = 94,
  [114] = 102,
  [115] = 90,
  [116] = 100,
  [117] = 101,
  [118] = 102,
  [119] = 108,
  [120] = 91,
  [121] = 103,
  [122] = 106,
  [123] = 95,
  [124] = 96,
  [125] = 91,
  [126] = 103,
  [127] = 94,
  [128] = 106,
  [129] = 95,
  [130] = 96,
  [131] = 108,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 132,
  [136] = 136,
  [137] = 137,
  [138] = 136,
  [139] = 133,
  [140] = 132,
  [141] = 141,
  [142] = 134,
  [143] = 136,
  [144] = 134,
  [145] = 133,
  [146] = 134,
  [147] = 134,
  [148] = 137,
  [149] = 133,
  [150] = 141,
  [151] = 137,
  [152] = 152,
  [153] = 141,
  [154] = 152,
  [155] = 152,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 157,
  [160] = 160,
  [161] = 157,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 163,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 166,
  [170] = 163,
  [171] = 163,
  [172] = 167,
  [173] = 167,
  [174] = 174,
  [175] = 164,
  [176] = 166,
  [177] = 168,
  [178] = 166,
  [179] = 168,
  [180] = 90,
  [181] = 164,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        ')', 183,
        '*', 175,
        '+', 173,
        ',', 184,
        '-', 174,
        '.', 87,
        '/', 176,
        ';', 86,
        '<', 179,
        '=', 85,
        '>', 178,
        'A', 15,
        'F', 9,
        'P', 20,
        'S', 13,
        'T', 11,
        'V', 25,
        'b', 58,
        'c', 45,
        'd', 32,
        'e', 54,
        'h', 36,
        'm', 56,
        'r', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        '*', 175,
        '+', 173,
        '-', 174,
        '.', 87,
        '/', 176,
        ';', 86,
        '<', 179,
        '=', 85,
        '>', 178,
        'F', 88,
        'P', 99,
        'S', 93,
        'T', 90,
        'V', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        '*', 175,
        '+', 173,
        '-', 174,
        '.', 87,
        '/', 176,
        ';', 86,
        '<', 179,
        '=', 85,
        '>', 178,
        'F', 88,
        'P', 99,
        'S', 95,
        'T', 90,
        'V', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        '*', 175,
        '+', 173,
        '-', 174,
        '.', 87,
        '/', 176,
        '<', 179,
        '=', 85,
        '>', 178,
        'F', 88,
        'P', 99,
        'S', 93,
        'T', 90,
        'V', 103,
        'e', 138,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        '*', 175,
        '+', 173,
        '-', 174,
        '.', 87,
        '/', 176,
        '<', 179,
        '=', 85,
        '>', 178,
        'F', 88,
        'P', 99,
        'S', 95,
        'T', 90,
        'V', 103,
        'e', 138,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == 'V') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(186);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(169);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(189);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(191);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'Q') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(193);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(188);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'X') ADVANCE(171);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 69:
      if (lookahead == 0xe9) ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 0xe9) ADVANCE(38);
      END_STATE();
    case 71:
      if (lookahead == 0xe9) ADVANCE(66);
      END_STATE();
    case 72:
      if (lookahead == 0xe9) ADVANCE(44);
      END_STATE();
    case 73:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 78:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        ')', 183,
        '*', 175,
        '+', 173,
        ',', 184,
        '-', 174,
        '.', 87,
        '/', 176,
        ';', 86,
        '<', 179,
        '=', 85,
        '>', 178,
        'F', 89,
        'P', 99,
        'S', 93,
        'T', 90,
        'V', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 79:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        '*', 175,
        '+', 173,
        '-', 174,
        '.', 87,
        '/', 176,
        '<', 179,
        '=', 85,
        '>', 178,
        'F', 89,
        'P', 99,
        'S', 93,
        'T', 90,
        'V', 103,
        'e', 138,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_estune);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_estun);
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_est);
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_est);
      if (lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0xe9) ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0xe9) ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0xe9) ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0xe9) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_entier);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_entier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_ru00e9el);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ru00e9el);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_chaine);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_chaine);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_monu00e9taire);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_monu00e9taire);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_boolu00e9en);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_boolu00e9en);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_date);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_heure);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_heure);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_duru00e9e);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_duru00e9e);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_VRAI);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_VRAI);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_FAUX);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_FAUX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(197);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '>') ADVANCE(177);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == 'N') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SI);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ALORS);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_FIN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_FIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SINON);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SINON);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_POUR);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_POUR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_TANTQUE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_TANTQUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 78},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 78},
  [12] = {.lex_state = 79},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 78},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 78},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 78},
  [32] = {.lex_state = 78},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 78},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 78},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 78},
  [39] = {.lex_state = 78},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 78},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 78},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 78},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 78},
  [65] = {.lex_state = 78},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 78},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 78},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 78},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 78},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 78},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 78},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 78},
  [115] = {.lex_state = 78},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 78},
  [126] = {.lex_state = 78},
  [127] = {.lex_state = 78},
  [128] = {.lex_state = 78},
  [129] = {.lex_state = 78},
  [130] = {.lex_state = 78},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 35},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 35},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 35},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 73},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 73},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 73},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 73},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 73},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 73},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 73},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_estune] = ACTIONS(1),
    [anon_sym_estun] = ACTIONS(1),
    [anon_sym_est] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_entier] = ACTIONS(1),
    [anon_sym_ru00e9el] = ACTIONS(1),
    [anon_sym_chaine] = ACTIONS(1),
    [anon_sym_monu00e9taire] = ACTIONS(1),
    [anon_sym_boolu00e9en] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_heure] = ACTIONS(1),
    [anon_sym_duru00e9e] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_VRAI] = ACTIONS(1),
    [anon_sym_FAUX] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SI] = ACTIONS(1),
    [anon_sym_ALORS] = ACTIONS(1),
    [anon_sym_FIN] = ACTIONS(1),
    [anon_sym_SINON] = ACTIONS(1),
    [anon_sym_POUR] = ACTIONS(1),
    [anon_sym_TANTQUE] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(162),
    [sym__statement] = STATE(34),
    [sym_variable_declaration] = STATE(34),
    [sym_assignment] = STATE(34),
    [sym_expression] = STATE(70),
    [sym_identifier_chain] = STATE(64),
    [sym_boolean] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_function_call] = STATE(31),
    [sym_if_statement] = STATE(34),
    [sym_for_statement] = STATE(34),
    [sym_while_statement] = STATE(34),
    [sym_comment] = STATE(34),
    [aux_sym_program_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_VRAI] = ACTIONS(9),
    [anon_sym_FAUX] = ACTIONS(9),
    [anon_sym_SI] = ACTIONS(11),
    [anon_sym_POUR] = ACTIONS(13),
    [anon_sym_TANTQUE] = ACTIONS(15),
    [sym_line_comment] = ACTIONS(17),
    [sym_block_comment] = ACTIONS(17),
  },
  [2] = {
    [sym__statement] = STATE(41),
    [sym_variable_declaration] = STATE(41),
    [sym_assignment] = STATE(41),
    [sym_expression] = STATE(69),
    [sym_identifier_chain] = STATE(66),
    [sym_boolean] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_if_statement] = STATE(41),
    [sym_for_statement] = STATE(41),
    [sym_while_statement] = STATE(41),
    [sym_comment] = STATE(41),
    [aux_sym_program_repeat1] = STATE(41),
    [anon_sym_EQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_VRAI] = ACTIONS(25),
    [anon_sym_FAUX] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_SI] = ACTIONS(29),
    [anon_sym_FIN] = ACTIONS(31),
    [anon_sym_POUR] = ACTIONS(33),
    [anon_sym_TANTQUE] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(37),
    [sym_block_comment] = ACTIONS(37),
  },
  [3] = {
    [sym__statement] = STATE(46),
    [sym_variable_declaration] = STATE(46),
    [sym_assignment] = STATE(46),
    [sym_expression] = STATE(69),
    [sym_identifier_chain] = STATE(66),
    [sym_boolean] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_if_statement] = STATE(46),
    [sym_for_statement] = STATE(46),
    [sym_while_statement] = STATE(46),
    [sym_comment] = STATE(46),
    [aux_sym_program_repeat1] = STATE(46),
    [anon_sym_EQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_VRAI] = ACTIONS(25),
    [anon_sym_FAUX] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_SI] = ACTIONS(29),
    [anon_sym_FIN] = ACTIONS(39),
    [anon_sym_POUR] = ACTIONS(33),
    [anon_sym_TANTQUE] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(37),
    [sym_block_comment] = ACTIONS(37),
  },
  [4] = {
    [sym__statement] = STATE(35),
    [sym_variable_declaration] = STATE(35),
    [sym_assignment] = STATE(35),
    [sym_expression] = STATE(69),
    [sym_identifier_chain] = STATE(66),
    [sym_boolean] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_if_statement] = STATE(35),
    [sym_for_statement] = STATE(35),
    [sym_while_statement] = STATE(35),
    [sym_comment] = STATE(35),
    [aux_sym_program_repeat1] = STATE(35),
    [anon_sym_EQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_VRAI] = ACTIONS(25),
    [anon_sym_FAUX] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_SI] = ACTIONS(29),
    [anon_sym_FIN] = ACTIONS(41),
    [anon_sym_POUR] = ACTIONS(33),
    [anon_sym_TANTQUE] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(37),
    [sym_block_comment] = ACTIONS(37),
  },
  [5] = {
    [sym__statement] = STATE(30),
    [sym_variable_declaration] = STATE(30),
    [sym_assignment] = STATE(30),
    [sym_expression] = STATE(69),
    [sym_identifier_chain] = STATE(66),
    [sym_boolean] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_if_statement] = STATE(30),
    [sym_for_statement] = STATE(30),
    [sym_while_statement] = STATE(30),
    [sym_comment] = STATE(30),
    [aux_sym_program_repeat1] = STATE(30),
    [anon_sym_EQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_VRAI] = ACTIONS(25),
    [anon_sym_FAUX] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_SI] = ACTIONS(29),
    [anon_sym_FIN] = ACTIONS(43),
    [anon_sym_POUR] = ACTIONS(33),
    [anon_sym_TANTQUE] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(37),
    [sym_block_comment] = ACTIONS(37),
  },
  [6] = {
    [sym__statement] = STATE(44),
    [sym_variable_declaration] = STATE(44),
    [sym_assignment] = STATE(44),
    [sym_expression] = STATE(69),
    [sym_identifier_chain] = STATE(66),
    [sym_boolean] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_if_statement] = STATE(44),
    [sym_for_statement] = STATE(44),
    [sym_while_statement] = STATE(44),
    [sym_comment] = STATE(44),
    [aux_sym_program_repeat1] = STATE(44),
    [anon_sym_EQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_VRAI] = ACTIONS(25),
    [anon_sym_FAUX] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_SI] = ACTIONS(29),
    [anon_sym_FIN] = ACTIONS(45),
    [anon_sym_POUR] = ACTIONS(33),
    [anon_sym_TANTQUE] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(37),
    [sym_block_comment] = ACTIONS(37),
  },
  [7] = {
    [sym__statement] = STATE(42),
    [sym_variable_declaration] = STATE(42),
    [sym_assignment] = STATE(42),
    [sym_expression] = STATE(69),
    [sym_identifier_chain] = STATE(66),
    [sym_boolean] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_if_statement] = STATE(42),
    [sym_for_statement] = STATE(42),
    [sym_while_statement] = STATE(42),
    [sym_comment] = STATE(42),
    [aux_sym_program_repeat1] = STATE(42),
    [anon_sym_EQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_VRAI] = ACTIONS(25),
    [anon_sym_FAUX] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_SI] = ACTIONS(29),
    [anon_sym_FIN] = ACTIONS(47),
    [anon_sym_POUR] = ACTIONS(33),
    [anon_sym_TANTQUE] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(37),
    [sym_block_comment] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(49), 1,
      anon_sym_estune,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(51), 2,
      anon_sym_estun,
      anon_sym_est,
    ACTIONS(57), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(53), 12,
      anon_sym_EQ,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [41] = 4,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(64), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(59), 16,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [77] = 6,
    ACTIONS(66), 1,
      anon_sym_estune,
    ACTIONS(70), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(68), 2,
      anon_sym_estun,
      anon_sym_est,
    ACTIONS(57), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(53), 12,
      anon_sym_EQ,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [117] = 4,
    ACTIONS(74), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(76), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(72), 16,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [153] = 6,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(78), 1,
      anon_sym_estune,
    STATE(11), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(80), 2,
      anon_sym_estun,
      anon_sym_est,
    ACTIONS(57), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [193] = 14,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SI,
    ACTIONS(90), 1,
      anon_sym_FIN,
    ACTIONS(92), 1,
      anon_sym_SINON,
    ACTIONS(94), 1,
      anon_sym_POUR,
    ACTIONS(96), 1,
      anon_sym_TANTQUE,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    STATE(175), 1,
      sym_else_clause,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(98), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(15), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [248] = 2,
    ACTIONS(64), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(59), 17,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [279] = 14,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SI,
    ACTIONS(92), 1,
      anon_sym_SINON,
    ACTIONS(94), 1,
      anon_sym_POUR,
    ACTIONS(96), 1,
      anon_sym_TANTQUE,
    ACTIONS(100), 1,
      anon_sym_FIN,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    STATE(172), 1,
      sym_else_clause,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(98), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(28), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [334] = 14,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SI,
    ACTIONS(92), 1,
      anon_sym_SINON,
    ACTIONS(94), 1,
      anon_sym_POUR,
    ACTIONS(96), 1,
      anon_sym_TANTQUE,
    ACTIONS(102), 1,
      anon_sym_FIN,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    STATE(167), 1,
      sym_else_clause,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(98), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(28), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [389] = 4,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(76), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(72), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [424] = 14,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SI,
    ACTIONS(92), 1,
      anon_sym_SINON,
    ACTIONS(94), 1,
      anon_sym_POUR,
    ACTIONS(96), 1,
      anon_sym_TANTQUE,
    ACTIONS(104), 1,
      anon_sym_FIN,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    STATE(164), 1,
      sym_else_clause,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(98), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(16), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [479] = 4,
    ACTIONS(106), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(64), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(59), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [514] = 4,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(57), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(53), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [549] = 14,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SI,
    ACTIONS(92), 1,
      anon_sym_SINON,
    ACTIONS(94), 1,
      anon_sym_POUR,
    ACTIONS(96), 1,
      anon_sym_TANTQUE,
    ACTIONS(109), 1,
      anon_sym_FIN,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    STATE(181), 1,
      sym_else_clause,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(98), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(22), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [604] = 14,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SI,
    ACTIONS(92), 1,
      anon_sym_SINON,
    ACTIONS(94), 1,
      anon_sym_POUR,
    ACTIONS(96), 1,
      anon_sym_TANTQUE,
    ACTIONS(111), 1,
      anon_sym_FIN,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    STATE(173), 1,
      sym_else_clause,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(98), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(28), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [659] = 4,
    ACTIONS(70), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(57), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(53), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [693] = 4,
    ACTIONS(70), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(76), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(72), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [727] = 4,
    ACTIONS(74), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(57), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(53), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [761] = 4,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(64), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(59), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [795] = 2,
    ACTIONS(64), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(59), 14,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [825] = 12,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SI,
    ACTIONS(130), 1,
      anon_sym_POUR,
    ACTIONS(133), 1,
      anon_sym_TANTQUE,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    ACTIONS(119), 2,
      sym_number,
      sym_string,
    ACTIONS(122), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(128), 2,
      anon_sym_FIN,
      anon_sym_SINON,
    ACTIONS(136), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(28), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [875] = 2,
    ACTIONS(64), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(59), 14,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [904] = 12,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(139), 1,
      anon_sym_FIN,
    STATE(66), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(33), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [953] = 2,
    ACTIONS(143), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(141), 15,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [982] = 12,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_SI,
    ACTIONS(159), 1,
      anon_sym_POUR,
    ACTIONS(162), 1,
      anon_sym_TANTQUE,
    STATE(64), 1,
      sym_identifier_chain,
    STATE(70), 1,
      sym_expression,
    ACTIONS(150), 2,
      sym_number,
      sym_string,
    ACTIONS(153), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(165), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(32), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [1031] = 12,
    ACTIONS(128), 1,
      anon_sym_FIN,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_SI,
    ACTIONS(180), 1,
      anon_sym_POUR,
    ACTIONS(183), 1,
      anon_sym_TANTQUE,
    STATE(66), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(171), 2,
      sym_number,
      sym_string,
    ACTIONS(174), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(186), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(33), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [1080] = 12,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_SI,
    ACTIONS(13), 1,
      anon_sym_POUR,
    ACTIONS(15), 1,
      anon_sym_TANTQUE,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_identifier_chain,
    STATE(70), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(17), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(32), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [1129] = 12,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(191), 1,
      anon_sym_FIN,
    STATE(66), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(33), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [1178] = 2,
    ACTIONS(195), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(193), 15,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [1207] = 3,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(141), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1238] = 2,
    ACTIONS(201), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(199), 15,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [1267] = 2,
    ACTIONS(205), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(203), 15,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [1296] = 12,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(207), 1,
      anon_sym_FIN,
    STATE(66), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(45), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [1345] = 12,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(209), 1,
      anon_sym_FIN,
    STATE(66), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(33), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [1394] = 12,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(211), 1,
      anon_sym_FIN,
    STATE(66), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(33), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [1443] = 2,
    ACTIONS(215), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(213), 15,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [1472] = 12,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(217), 1,
      anon_sym_FIN,
    STATE(66), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(33), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [1521] = 12,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(219), 1,
      anon_sym_FIN,
    STATE(66), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(33), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [1570] = 12,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(221), 1,
      anon_sym_FIN,
    STATE(66), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(33), 8,
      sym__statement,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
      sym_comment,
      aux_sym_program_repeat1,
  [1619] = 5,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(231), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [1653] = 2,
    ACTIONS(143), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(141), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1681] = 2,
    ACTIONS(205), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(203), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1709] = 2,
    ACTIONS(195), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(193), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1737] = 5,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(231), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(235), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [1771] = 2,
    ACTIONS(201), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(199), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1799] = 2,
    ACTIONS(215), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(213), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1827] = 3,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(141), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1857] = 4,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(141), 10,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [1889] = 3,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(141), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1919] = 2,
    ACTIONS(143), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(141), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1946] = 2,
    ACTIONS(201), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(199), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1973] = 2,
    ACTIONS(215), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(213), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [2000] = 5,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(27), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(19), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2033] = 5,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(251), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(235), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(247), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2066] = 2,
    ACTIONS(205), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(203), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [2093] = 4,
    ACTIONS(231), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(253), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2124] = 4,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_EQ,
    ACTIONS(143), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(141), 11,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [2155] = 5,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(251), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(227), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(247), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2188] = 4,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(141), 10,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2219] = 2,
    ACTIONS(195), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(193), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [2246] = 5,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    ACTIONS(27), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(19), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(235), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2279] = 4,
    ACTIONS(27), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(19), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(253), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2309] = 4,
    ACTIONS(251), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(253), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(247), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2339] = 4,
    ACTIONS(265), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(76), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2364] = 4,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(64), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2389] = 4,
    ACTIONS(265), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2414] = 2,
    ACTIONS(64), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2434] = 4,
    ACTIONS(74), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 11,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2458] = 4,
    ACTIONS(270), 1,
      anon_sym_EQ,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    ACTIONS(276), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(274), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2481] = 2,
    ACTIONS(278), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(280), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2500] = 3,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 11,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2521] = 3,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2541] = 4,
    ACTIONS(284), 1,
      anon_sym_EQ,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    ACTIONS(276), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(274), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2563] = 4,
    ACTIONS(288), 1,
      anon_sym_EQ,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(276), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(274), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2585] = 2,
    ACTIONS(278), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(280), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2603] = 5,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(294), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2627] = 2,
    ACTIONS(205), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(203), 11,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2645] = 2,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 11,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2663] = 2,
    ACTIONS(201), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 11,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2681] = 2,
    ACTIONS(215), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(213), 11,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2699] = 2,
    ACTIONS(280), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(278), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
  [2717] = 2,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 11,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2735] = 2,
    ACTIONS(302), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(300), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2752] = 2,
    ACTIONS(306), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(304), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2769] = 8,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_identifier_chain,
    STATE(83), 1,
      sym_expression,
    STATE(170), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(31), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [2798] = 4,
    ACTIONS(237), 1,
      anon_sym_TANTQUE,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(316), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2819] = 2,
    ACTIONS(320), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2836] = 2,
    ACTIONS(324), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2853] = 2,
    ACTIONS(328), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(326), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2870] = 3,
    ACTIONS(294), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(292), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2889] = 8,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_identifier_chain,
    STATE(83), 1,
      sym_expression,
    STATE(165), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(31), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [2918] = 8,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_identifier_chain,
    STATE(83), 1,
      sym_expression,
    STATE(163), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(31), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [2947] = 2,
    ACTIONS(338), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2964] = 2,
    ACTIONS(342), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2981] = 2,
    ACTIONS(346), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(344), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2998] = 2,
    ACTIONS(350), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3015] = 2,
    ACTIONS(354), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(352), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3032] = 8,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_identifier_chain,
    STATE(83), 1,
      sym_expression,
    STATE(171), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(31), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3061] = 2,
    ACTIONS(360), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3078] = 2,
    ACTIONS(354), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(352), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3094] = 3,
    ACTIONS(362), 1,
      anon_sym_ALORS,
    ACTIONS(316), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3112] = 2,
    ACTIONS(354), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(352), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3128] = 2,
    ACTIONS(338), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3144] = 2,
    ACTIONS(302), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(300), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3160] = 2,
    ACTIONS(342), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3176] = 2,
    ACTIONS(320), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3192] = 2,
    ACTIONS(346), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(344), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3208] = 2,
    ACTIONS(302), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(300), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3224] = 2,
    ACTIONS(338), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3240] = 2,
    ACTIONS(342), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3256] = 2,
    ACTIONS(346), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(344), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3272] = 3,
    ACTIONS(364), 1,
      anon_sym_ALORS,
    ACTIONS(316), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3290] = 2,
    ACTIONS(306), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(304), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3306] = 2,
    ACTIONS(350), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3322] = 2,
    ACTIONS(360), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3338] = 2,
    ACTIONS(324), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3354] = 2,
    ACTIONS(328), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(326), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3370] = 2,
    ACTIONS(306), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(304), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3386] = 2,
    ACTIONS(350), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3402] = 2,
    ACTIONS(320), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3418] = 2,
    ACTIONS(360), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3434] = 2,
    ACTIONS(324), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3450] = 2,
    ACTIONS(328), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(326), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3466] = 3,
    ACTIONS(366), 1,
      anon_sym_ALORS,
    ACTIONS(316), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3484] = 2,
    STATE(81), 1,
      sym_type,
    ACTIONS(368), 9,
      sym_identifier,
      anon_sym_entier,
      anon_sym_ru00e9el,
      anon_sym_chaine,
      anon_sym_monu00e9taire,
      anon_sym_boolu00e9en,
      anon_sym_date,
      anon_sym_heure,
      anon_sym_duru00e9e,
  [3499] = 6,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(78), 1,
      sym_identifier_chain,
    STATE(93), 1,
      sym_expression,
    ACTIONS(372), 2,
      sym_number,
      sym_string,
    ACTIONS(374), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(89), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3522] = 6,
    ACTIONS(376), 1,
      sym_identifier,
    STATE(37), 1,
      sym_identifier_chain,
    STATE(50), 1,
      sym_expression,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3545] = 2,
    STATE(80), 1,
      sym_type,
    ACTIONS(378), 9,
      sym_identifier,
      anon_sym_entier,
      anon_sym_ru00e9el,
      anon_sym_chaine,
      anon_sym_monu00e9taire,
      anon_sym_boolu00e9en,
      anon_sym_date,
      anon_sym_heure,
      anon_sym_duru00e9e,
  [3560] = 6,
    ACTIONS(376), 1,
      sym_identifier,
    STATE(37), 1,
      sym_identifier_chain,
    STATE(47), 1,
      sym_expression,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3583] = 6,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(4), 1,
      sym_expression,
    STATE(54), 1,
      sym_identifier_chain,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3606] = 6,
    ACTIONS(382), 1,
      sym_identifier,
    STATE(56), 1,
      sym_identifier_chain,
    STATE(65), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(31), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3629] = 6,
    ACTIONS(382), 1,
      sym_identifier,
    STATE(56), 1,
      sym_identifier_chain,
    STATE(61), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(31), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3652] = 2,
    STATE(76), 1,
      sym_type,
    ACTIONS(384), 9,
      sym_identifier,
      anon_sym_entier,
      anon_sym_ru00e9el,
      anon_sym_chaine,
      anon_sym_monu00e9taire,
      anon_sym_boolu00e9en,
      anon_sym_date,
      anon_sym_heure,
      anon_sym_duru00e9e,
  [3667] = 6,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expression,
    STATE(54), 1,
      sym_identifier_chain,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3690] = 6,
    ACTIONS(382), 1,
      sym_identifier,
    STATE(36), 1,
      sym_expression,
    STATE(56), 1,
      sym_identifier_chain,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(31), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3713] = 6,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(54), 1,
      sym_identifier_chain,
    STATE(60), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3736] = 6,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(54), 1,
      sym_identifier_chain,
    STATE(67), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3759] = 6,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(54), 1,
      sym_identifier_chain,
    STATE(68), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3782] = 6,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(78), 1,
      sym_identifier_chain,
    STATE(85), 1,
      sym_expression,
    ACTIONS(372), 2,
      sym_number,
      sym_string,
    ACTIONS(374), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(89), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3805] = 6,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(36), 1,
      sym_expression,
    STATE(79), 1,
      sym_identifier_chain,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(31), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3828] = 6,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expression,
    STATE(54), 1,
      sym_identifier_chain,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3851] = 6,
    ACTIONS(376), 1,
      sym_identifier,
    STATE(37), 1,
      sym_identifier_chain,
    STATE(51), 1,
      sym_expression,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3874] = 6,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(7), 1,
      sym_expression,
    STATE(54), 1,
      sym_identifier_chain,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3897] = 6,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expression,
    STATE(54), 1,
      sym_identifier_chain,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3920] = 6,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(78), 1,
      sym_identifier_chain,
    STATE(119), 1,
      sym_expression,
    ACTIONS(372), 2,
      sym_number,
      sym_string,
    ACTIONS(374), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(89), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3943] = 6,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(3), 1,
      sym_expression,
    STATE(54), 1,
      sym_identifier_chain,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3966] = 6,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(78), 1,
      sym_identifier_chain,
    STATE(131), 1,
      sym_expression,
    ACTIONS(372), 2,
      sym_number,
      sym_string,
    ACTIONS(374), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(89), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3989] = 6,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(78), 1,
      sym_identifier_chain,
    STATE(108), 1,
      sym_expression,
    ACTIONS(372), 2,
      sym_number,
      sym_string,
    ACTIONS(374), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(89), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [4012] = 6,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(79), 1,
      sym_identifier_chain,
    STATE(97), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(31), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [4035] = 3,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(168), 1,
      sym_assignment,
    STATE(174), 1,
      sym_identifier_chain,
  [4045] = 3,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_argument_list_repeat1,
  [4055] = 3,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(174), 1,
      sym_identifier_chain,
    STATE(179), 1,
      sym_assignment,
  [4065] = 3,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_argument_list_repeat1,
  [4075] = 3,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(174), 1,
      sym_identifier_chain,
    STATE(177), 1,
      sym_assignment,
  [4085] = 1,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
  [4089] = 1,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
  [4093] = 1,
    ACTIONS(397), 1,
      anon_sym_FIN,
  [4097] = 1,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
  [4101] = 1,
    ACTIONS(401), 1,
      sym_identifier,
  [4105] = 1,
    ACTIONS(403), 1,
      anon_sym_FIN,
  [4109] = 1,
    ACTIONS(405), 1,
      anon_sym_TANTQUE,
  [4113] = 1,
    ACTIONS(407), 1,
      sym_identifier,
  [4117] = 1,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [4121] = 1,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
  [4125] = 1,
    ACTIONS(413), 1,
      anon_sym_FIN,
  [4129] = 1,
    ACTIONS(415), 1,
      anon_sym_FIN,
  [4133] = 1,
    ACTIONS(417), 1,
      anon_sym_EQ,
  [4137] = 1,
    ACTIONS(419), 1,
      anon_sym_FIN,
  [4141] = 1,
    ACTIONS(421), 1,
      sym_identifier,
  [4145] = 1,
    ACTIONS(423), 1,
      anon_sym_TANTQUE,
  [4149] = 1,
    ACTIONS(425), 1,
      sym_identifier,
  [4153] = 1,
    ACTIONS(427), 1,
      anon_sym_TANTQUE,
  [4157] = 1,
    ACTIONS(302), 1,
      anon_sym_TANTQUE,
  [4161] = 1,
    ACTIONS(429), 1,
      anon_sym_FIN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 41,
  [SMALL_STATE(10)] = 77,
  [SMALL_STATE(11)] = 117,
  [SMALL_STATE(12)] = 153,
  [SMALL_STATE(13)] = 193,
  [SMALL_STATE(14)] = 248,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 334,
  [SMALL_STATE(17)] = 389,
  [SMALL_STATE(18)] = 424,
  [SMALL_STATE(19)] = 479,
  [SMALL_STATE(20)] = 514,
  [SMALL_STATE(21)] = 549,
  [SMALL_STATE(22)] = 604,
  [SMALL_STATE(23)] = 659,
  [SMALL_STATE(24)] = 693,
  [SMALL_STATE(25)] = 727,
  [SMALL_STATE(26)] = 761,
  [SMALL_STATE(27)] = 795,
  [SMALL_STATE(28)] = 825,
  [SMALL_STATE(29)] = 875,
  [SMALL_STATE(30)] = 904,
  [SMALL_STATE(31)] = 953,
  [SMALL_STATE(32)] = 982,
  [SMALL_STATE(33)] = 1031,
  [SMALL_STATE(34)] = 1080,
  [SMALL_STATE(35)] = 1129,
  [SMALL_STATE(36)] = 1178,
  [SMALL_STATE(37)] = 1207,
  [SMALL_STATE(38)] = 1238,
  [SMALL_STATE(39)] = 1267,
  [SMALL_STATE(40)] = 1296,
  [SMALL_STATE(41)] = 1345,
  [SMALL_STATE(42)] = 1394,
  [SMALL_STATE(43)] = 1443,
  [SMALL_STATE(44)] = 1472,
  [SMALL_STATE(45)] = 1521,
  [SMALL_STATE(46)] = 1570,
  [SMALL_STATE(47)] = 1619,
  [SMALL_STATE(48)] = 1653,
  [SMALL_STATE(49)] = 1681,
  [SMALL_STATE(50)] = 1709,
  [SMALL_STATE(51)] = 1737,
  [SMALL_STATE(52)] = 1771,
  [SMALL_STATE(53)] = 1799,
  [SMALL_STATE(54)] = 1827,
  [SMALL_STATE(55)] = 1857,
  [SMALL_STATE(56)] = 1889,
  [SMALL_STATE(57)] = 1919,
  [SMALL_STATE(58)] = 1946,
  [SMALL_STATE(59)] = 1973,
  [SMALL_STATE(60)] = 2000,
  [SMALL_STATE(61)] = 2033,
  [SMALL_STATE(62)] = 2066,
  [SMALL_STATE(63)] = 2093,
  [SMALL_STATE(64)] = 2124,
  [SMALL_STATE(65)] = 2155,
  [SMALL_STATE(66)] = 2188,
  [SMALL_STATE(67)] = 2219,
  [SMALL_STATE(68)] = 2246,
  [SMALL_STATE(69)] = 2279,
  [SMALL_STATE(70)] = 2309,
  [SMALL_STATE(71)] = 2339,
  [SMALL_STATE(72)] = 2364,
  [SMALL_STATE(73)] = 2389,
  [SMALL_STATE(74)] = 2414,
  [SMALL_STATE(75)] = 2434,
  [SMALL_STATE(76)] = 2458,
  [SMALL_STATE(77)] = 2481,
  [SMALL_STATE(78)] = 2500,
  [SMALL_STATE(79)] = 2521,
  [SMALL_STATE(80)] = 2541,
  [SMALL_STATE(81)] = 2563,
  [SMALL_STATE(82)] = 2585,
  [SMALL_STATE(83)] = 2603,
  [SMALL_STATE(84)] = 2627,
  [SMALL_STATE(85)] = 2645,
  [SMALL_STATE(86)] = 2663,
  [SMALL_STATE(87)] = 2681,
  [SMALL_STATE(88)] = 2699,
  [SMALL_STATE(89)] = 2717,
  [SMALL_STATE(90)] = 2735,
  [SMALL_STATE(91)] = 2752,
  [SMALL_STATE(92)] = 2769,
  [SMALL_STATE(93)] = 2798,
  [SMALL_STATE(94)] = 2819,
  [SMALL_STATE(95)] = 2836,
  [SMALL_STATE(96)] = 2853,
  [SMALL_STATE(97)] = 2870,
  [SMALL_STATE(98)] = 2889,
  [SMALL_STATE(99)] = 2918,
  [SMALL_STATE(100)] = 2947,
  [SMALL_STATE(101)] = 2964,
  [SMALL_STATE(102)] = 2981,
  [SMALL_STATE(103)] = 2998,
  [SMALL_STATE(104)] = 3015,
  [SMALL_STATE(105)] = 3032,
  [SMALL_STATE(106)] = 3061,
  [SMALL_STATE(107)] = 3078,
  [SMALL_STATE(108)] = 3094,
  [SMALL_STATE(109)] = 3112,
  [SMALL_STATE(110)] = 3128,
  [SMALL_STATE(111)] = 3144,
  [SMALL_STATE(112)] = 3160,
  [SMALL_STATE(113)] = 3176,
  [SMALL_STATE(114)] = 3192,
  [SMALL_STATE(115)] = 3208,
  [SMALL_STATE(116)] = 3224,
  [SMALL_STATE(117)] = 3240,
  [SMALL_STATE(118)] = 3256,
  [SMALL_STATE(119)] = 3272,
  [SMALL_STATE(120)] = 3290,
  [SMALL_STATE(121)] = 3306,
  [SMALL_STATE(122)] = 3322,
  [SMALL_STATE(123)] = 3338,
  [SMALL_STATE(124)] = 3354,
  [SMALL_STATE(125)] = 3370,
  [SMALL_STATE(126)] = 3386,
  [SMALL_STATE(127)] = 3402,
  [SMALL_STATE(128)] = 3418,
  [SMALL_STATE(129)] = 3434,
  [SMALL_STATE(130)] = 3450,
  [SMALL_STATE(131)] = 3466,
  [SMALL_STATE(132)] = 3484,
  [SMALL_STATE(133)] = 3499,
  [SMALL_STATE(134)] = 3522,
  [SMALL_STATE(135)] = 3545,
  [SMALL_STATE(136)] = 3560,
  [SMALL_STATE(137)] = 3583,
  [SMALL_STATE(138)] = 3606,
  [SMALL_STATE(139)] = 3629,
  [SMALL_STATE(140)] = 3652,
  [SMALL_STATE(141)] = 3667,
  [SMALL_STATE(142)] = 3690,
  [SMALL_STATE(143)] = 3713,
  [SMALL_STATE(144)] = 3736,
  [SMALL_STATE(145)] = 3759,
  [SMALL_STATE(146)] = 3782,
  [SMALL_STATE(147)] = 3805,
  [SMALL_STATE(148)] = 3828,
  [SMALL_STATE(149)] = 3851,
  [SMALL_STATE(150)] = 3874,
  [SMALL_STATE(151)] = 3897,
  [SMALL_STATE(152)] = 3920,
  [SMALL_STATE(153)] = 3943,
  [SMALL_STATE(154)] = 3966,
  [SMALL_STATE(155)] = 3989,
  [SMALL_STATE(156)] = 4012,
  [SMALL_STATE(157)] = 4035,
  [SMALL_STATE(158)] = 4045,
  [SMALL_STATE(159)] = 4055,
  [SMALL_STATE(160)] = 4065,
  [SMALL_STATE(161)] = 4075,
  [SMALL_STATE(162)] = 4085,
  [SMALL_STATE(163)] = 4089,
  [SMALL_STATE(164)] = 4093,
  [SMALL_STATE(165)] = 4097,
  [SMALL_STATE(166)] = 4101,
  [SMALL_STATE(167)] = 4105,
  [SMALL_STATE(168)] = 4109,
  [SMALL_STATE(169)] = 4113,
  [SMALL_STATE(170)] = 4117,
  [SMALL_STATE(171)] = 4121,
  [SMALL_STATE(172)] = 4125,
  [SMALL_STATE(173)] = 4129,
  [SMALL_STATE(174)] = 4133,
  [SMALL_STATE(175)] = 4137,
  [SMALL_STATE(176)] = 4141,
  [SMALL_STATE(177)] = 4145,
  [SMALL_STATE(178)] = 4149,
  [SMALL_STATE(179)] = 4153,
  [SMALL_STATE(180)] = 4157,
  [SMALL_STATE(181)] = 4161,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_chain, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_chain, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_chain, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_chain, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_wlanguage(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
