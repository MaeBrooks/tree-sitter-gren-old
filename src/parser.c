#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  anon_sym_module = 1,
  anon_sym_port = 2,
  anon_sym_exposing = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_type = 7,
  anon_sym_EQ = 8,
  anon_sym_number = 9,
  anon_sym_Float = 10,
  anon_sym_Int = 11,
  anon_sym_Char = 12,
  anon_sym_String = 13,
  anon_sym_Bool = 14,
  anon_sym_DASH_GT = 15,
  sym_spread = 16,
  sym_module_name = 17,
  sym_identifier = 18,
  sym_Identifier = 19,
  sym_number = 20,
  sym_source_file = 21,
  sym__definition = 22,
  sym_module = 23,
  sym_exposing = 24,
  sym__exposed = 25,
  sym_type_with_constructors = 26,
  sym_type_definition = 27,
  sym__type = 28,
  sym_primative = 29,
  sym_type_chain = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_exposing_repeat1 = 32,
  aux_sym_type_with_constructors_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_port] = "port",
  [anon_sym_exposing] = "exposing",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_number] = "number",
  [anon_sym_Float] = "Float",
  [anon_sym_Int] = "Int",
  [anon_sym_Char] = "Char",
  [anon_sym_String] = "String",
  [anon_sym_Bool] = "Bool",
  [anon_sym_DASH_GT] = "->",
  [sym_spread] = "spread",
  [sym_module_name] = "module_name",
  [sym_identifier] = "identifier",
  [sym_Identifier] = "Identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_module] = "module",
  [sym_exposing] = "exposing",
  [sym__exposed] = "_exposed",
  [sym_type_with_constructors] = "type_with_constructors",
  [sym_type_definition] = "type_definition",
  [sym__type] = "_type",
  [sym_primative] = "primative",
  [sym_type_chain] = "type_chain",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_exposing_repeat1] = "exposing_repeat1",
  [aux_sym_type_with_constructors_repeat1] = "type_with_constructors_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_port] = anon_sym_port,
  [anon_sym_exposing] = anon_sym_exposing,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_Float] = anon_sym_Float,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_Char] = anon_sym_Char,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Bool] = anon_sym_Bool,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_spread] = sym_spread,
  [sym_module_name] = sym_module_name,
  [sym_identifier] = sym_identifier,
  [sym_Identifier] = sym_Identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_module] = sym_module,
  [sym_exposing] = sym_exposing,
  [sym__exposed] = sym__exposed,
  [sym_type_with_constructors] = sym_type_with_constructors,
  [sym_type_definition] = sym_type_definition,
  [sym__type] = sym__type,
  [sym_primative] = sym_primative,
  [sym_type_chain] = sym_type_chain,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_exposing_repeat1] = aux_sym_exposing_repeat1,
  [aux_sym_type_with_constructors_repeat1] = aux_sym_type_with_constructors_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_port] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exposing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_spread] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_Identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_exposing] = {
    .visible = true,
    .named = true,
  },
  [sym__exposed] = {
    .visible = false,
    .named = true,
  },
  [sym_type_with_constructors] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primative] = {
    .visible = true,
    .named = true,
  },
  [sym_type_chain] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exposing_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_with_constructors_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_constructor = 1,
  field_exposing = 2,
  field_left = 3,
  field_module_name = 4,
  field_name = 5,
  field_right = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_constructor] = "constructor",
  [field_exposing] = "exposing",
  [field_left] = "left",
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_exposing, 2},
    {field_module_name, 1},
  [2] =
    {field_name, 1},
    {field_value, 3},
  [4] =
    {field_left, 0},
    {field_right, 2},
  [6] =
    {field_name, 0},
  [7] =
    {field_constructor, 0},
  [8] =
    {field_constructor, 2},
    {field_name, 0},
  [10] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
  [12] =
    {field_constructor, 2, .inherited = true},
    {field_constructor, 3},
    {field_name, 0},
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      ADVANCE_MAP(
        '(', 51,
        ')', 53,
        ',', 52,
        '-', 3,
        '.', 2,
        '=', 55,
        'B', 28,
        'C', 13,
        'F', 18,
        'I', 21,
        'S', 36,
        'e', 42,
        'm', 23,
        'n', 40,
        'p', 27,
        't', 43,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '.') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 44:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      END_STATE();
    case 45:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      END_STATE();
    case 46:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_exposing);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_spread);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_Identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_Identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
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
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 44},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_port] = ACTIONS(1),
    [anon_sym_exposing] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Char] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_spread] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym__definition] = STATE(4),
    [sym_module] = STATE(4),
    [sym_type_definition] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(12), 3,
      sym__type,
      sym_primative,
      sym_type_chain,
    ACTIONS(9), 6,
      anon_sym_number,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [14] = 2,
    STATE(10), 3,
      sym__type,
      sym_primative,
      sym_type_chain,
    ACTIONS(9), 6,
      anon_sym_number,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [28] = 4,
    ACTIONS(5), 1,
      anon_sym_module,
    ACTIONS(7), 1,
      anon_sym_type,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(5), 4,
      sym__definition,
      sym_module,
      sym_type_definition,
      aux_sym_source_file_repeat1,
  [44] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_module,
    ACTIONS(18), 1,
      anon_sym_type,
    STATE(5), 4,
      sym__definition,
      sym_module,
      sym_type_definition,
      aux_sym_source_file_repeat1,
  [60] = 5,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 1,
      sym_spread,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_exposing_repeat1,
    STATE(23), 2,
      sym__exposed,
      sym_type_with_constructors,
  [77] = 4,
    ACTIONS(27), 1,
      sym_spread,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_exposing_repeat1,
    STATE(36), 2,
      sym__exposed,
      sym_type_with_constructors,
  [91] = 4,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_spread,
    STATE(7), 1,
      aux_sym_exposing_repeat1,
    STATE(22), 2,
      sym__exposed,
      sym_type_with_constructors,
  [105] = 3,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      aux_sym_type_with_constructors_repeat1,
    ACTIONS(37), 2,
      sym_spread,
      sym_identifier,
  [116] = 1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_DASH_GT,
  [123] = 1,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_DASH_GT,
  [130] = 2,
    ACTIONS(45), 1,
      anon_sym_DASH_GT,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [139] = 2,
    STATE(13), 1,
      aux_sym_type_with_constructors_repeat1,
    ACTIONS(47), 2,
      sym_spread,
      sym_identifier,
  [147] = 1,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [153] = 3,
    ACTIONS(52), 1,
      sym_spread,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym_type_with_constructors_repeat1,
  [163] = 1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [169] = 1,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [175] = 2,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [183] = 1,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [189] = 2,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
  [196] = 1,
    ACTIONS(70), 2,
      sym_spread,
      sym_identifier,
  [201] = 2,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
  [208] = 2,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
  [215] = 1,
    ACTIONS(78), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [220] = 2,
    ACTIONS(80), 1,
      anon_sym_exposing,
    STATE(16), 1,
      sym_exposing,
  [227] = 1,
    ACTIONS(82), 2,
      sym_spread,
      sym_identifier,
  [232] = 1,
    ACTIONS(84), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [237] = 2,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
  [244] = 2,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
  [251] = 1,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [256] = 1,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [261] = 1,
    ACTIONS(92), 1,
      sym_module_name,
  [265] = 1,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
  [269] = 1,
    ACTIONS(96), 1,
      anon_sym_EQ,
  [273] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [277] = 1,
    ACTIONS(72), 1,
      anon_sym_COMMA,
  [281] = 1,
    ACTIONS(100), 1,
      sym_Identifier,
  [285] = 1,
    ACTIONS(66), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 130,
  [SMALL_STATE(13)] = 139,
  [SMALL_STATE(14)] = 147,
  [SMALL_STATE(15)] = 153,
  [SMALL_STATE(16)] = 163,
  [SMALL_STATE(17)] = 169,
  [SMALL_STATE(18)] = 175,
  [SMALL_STATE(19)] = 183,
  [SMALL_STATE(20)] = 189,
  [SMALL_STATE(21)] = 196,
  [SMALL_STATE(22)] = 201,
  [SMALL_STATE(23)] = 208,
  [SMALL_STATE(24)] = 215,
  [SMALL_STATE(25)] = 220,
  [SMALL_STATE(26)] = 227,
  [SMALL_STATE(27)] = 232,
  [SMALL_STATE(28)] = 237,
  [SMALL_STATE(29)] = 244,
  [SMALL_STATE(30)] = 251,
  [SMALL_STATE(31)] = 256,
  [SMALL_STATE(32)] = 261,
  [SMALL_STATE(33)] = 265,
  [SMALL_STATE(34)] = 269,
  [SMALL_STATE(35)] = 273,
  [SMALL_STATE(36)] = 277,
  [SMALL_STATE(37)] = 281,
  [SMALL_STATE(38)] = 285,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_chain, 3, 0, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primative, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4, 0, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_with_constructors_repeat1, 2, 0, 7), SHIFT_REPEAT(38),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 5, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, 0, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exposed, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 3, 0, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_with_constructors_repeat1, 2, 0, 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 4, 0, 6),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 5, 0, 8),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
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

TS_PUBLIC const TSLanguage *tree_sitter_gren(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
