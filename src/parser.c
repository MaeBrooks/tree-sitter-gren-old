#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 10

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
  sym_custom_type = 29,
  sym_primative = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_exposing_repeat1 = 32,
  aux_sym_type_with_constructors_repeat1 = 33,
  aux_sym_type_definition_repeat1 = 34,
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
  [sym_custom_type] = "custom_type",
  [sym_primative] = "primative",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_exposing_repeat1] = "exposing_repeat1",
  [aux_sym_type_with_constructors_repeat1] = "type_with_constructors_repeat1",
  [aux_sym_type_definition_repeat1] = "type_definition_repeat1",
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
  [sym_custom_type] = sym_custom_type,
  [sym_primative] = sym_primative,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_exposing_repeat1] = aux_sym_exposing_repeat1,
  [aux_sym_type_with_constructors_repeat1] = aux_sym_type_with_constructors_repeat1,
  [aux_sym_type_definition_repeat1] = aux_sym_type_definition_repeat1,
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
  [sym_custom_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primative] = {
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
  [aux_sym_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_constructor = 2,
  field_exposing = 3,
  field_module_name = 4,
  field_name = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_constructor] = "constructor",
  [field_exposing] = "exposing",
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_exposing, 2},
    {field_module_name, 1},
  [2] =
    {field_name, 0},
  [3] =
    {field_name, 1},
    {field_value, 3},
  [5] =
    {field_args, 1},
    {field_name, 0},
  [7] =
    {field_args, 2},
    {field_name, 1},
    {field_value, 4},
  [10] =
    {field_constructor, 0},
  [11] =
    {field_constructor, 2},
    {field_name, 0},
  [13] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
  [15] =
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
  [21] = 8,
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '(', 54,
        ')', 56,
        ',', 55,
        '-', 3,
        '.', 2,
        '=', 59,
        'B', 29,
        'C', 14,
        'F', 19,
        'I', 22,
        'S', 37,
        'e', 43,
        'm', 24,
        'n', 41,
        'p', 28,
        't', 44,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '=') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'S') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 45:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      END_STATE();
    case 46:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      END_STATE();
    case 47:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 't') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_exposing);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_Bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_spread);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_Identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 46},
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
    [sym_source_file] = STATE(41),
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
  [0] = 3,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(19), 3,
      sym__type,
      sym_custom_type,
      sym_primative,
    ACTIONS(9), 6,
      anon_sym_number,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [17] = 3,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(25), 3,
      sym__type,
      sym_custom_type,
      sym_primative,
    ACTIONS(9), 6,
      anon_sym_number,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [34] = 4,
    ACTIONS(5), 1,
      anon_sym_module,
    ACTIONS(7), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(5), 4,
      sym__definition,
      sym_module,
      sym_type_definition,
      aux_sym_source_file_repeat1,
  [50] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_module,
    ACTIONS(20), 1,
      anon_sym_type,
    STATE(5), 4,
      sym__definition,
      sym_module,
      sym_type_definition,
      aux_sym_source_file_repeat1,
  [66] = 5,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      sym_spread,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_exposing_repeat1,
    STATE(31), 2,
      sym__exposed,
      sym_type_with_constructors,
  [83] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_spread,
    STATE(10), 1,
      aux_sym_exposing_repeat1,
    STATE(27), 2,
      sym__exposed,
      sym_type_with_constructors,
  [97] = 4,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_type_definition_repeat1,
    ACTIONS(33), 2,
      anon_sym_module,
      anon_sym_type,
  [111] = 4,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_type_definition_repeat1,
    ACTIONS(40), 2,
      anon_sym_module,
      anon_sym_type,
  [125] = 4,
    ACTIONS(44), 1,
      sym_spread,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_exposing_repeat1,
    STATE(40), 2,
      sym__exposed,
      sym_type_with_constructors,
  [139] = 4,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_type_definition_repeat1,
    ACTIONS(52), 2,
      anon_sym_module,
      anon_sym_type,
  [153] = 3,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_type_with_constructors_repeat1,
    ACTIONS(58), 2,
      sym_spread,
      sym_identifier,
  [164] = 1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [170] = 3,
    ACTIONS(62), 1,
      anon_sym_EQ,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym_type_definition_repeat1,
  [180] = 1,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [186] = 3,
    ACTIONS(68), 1,
      anon_sym_EQ,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_type_definition_repeat1,
  [196] = 2,
    STATE(17), 1,
      aux_sym_type_with_constructors_repeat1,
    ACTIONS(72), 2,
      sym_spread,
      sym_identifier,
  [204] = 1,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [210] = 1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [216] = 1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [222] = 3,
    ACTIONS(31), 1,
      anon_sym_EQ,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_type_definition_repeat1,
  [232] = 1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [238] = 2,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [246] = 3,
    ACTIONS(90), 1,
      sym_spread,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym_type_with_constructors_repeat1,
  [256] = 1,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [262] = 1,
    ACTIONS(96), 2,
      sym_spread,
      sym_identifier,
  [267] = 2,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
  [274] = 1,
    ACTIONS(102), 2,
      sym_spread,
      sym_identifier,
  [279] = 1,
    ACTIONS(104), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [284] = 2,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
  [291] = 2,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
  [298] = 2,
    ACTIONS(112), 1,
      anon_sym_exposing,
    STATE(15), 1,
      sym_exposing,
  [305] = 1,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [310] = 2,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
  [317] = 2,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
  [324] = 1,
    ACTIONS(120), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [329] = 1,
    ACTIONS(120), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [334] = 1,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
  [338] = 1,
    ACTIONS(124), 1,
      sym_Identifier,
  [342] = 1,
    ACTIONS(98), 1,
      anon_sym_COMMA,
  [346] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [350] = 1,
    ACTIONS(106), 1,
      anon_sym_COMMA,
  [354] = 1,
    ACTIONS(128), 1,
      sym_module_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 153,
  [SMALL_STATE(13)] = 164,
  [SMALL_STATE(14)] = 170,
  [SMALL_STATE(15)] = 180,
  [SMALL_STATE(16)] = 186,
  [SMALL_STATE(17)] = 196,
  [SMALL_STATE(18)] = 204,
  [SMALL_STATE(19)] = 210,
  [SMALL_STATE(20)] = 216,
  [SMALL_STATE(21)] = 222,
  [SMALL_STATE(22)] = 232,
  [SMALL_STATE(23)] = 238,
  [SMALL_STATE(24)] = 246,
  [SMALL_STATE(25)] = 256,
  [SMALL_STATE(26)] = 262,
  [SMALL_STATE(27)] = 267,
  [SMALL_STATE(28)] = 274,
  [SMALL_STATE(29)] = 279,
  [SMALL_STATE(30)] = 284,
  [SMALL_STATE(31)] = 291,
  [SMALL_STATE(32)] = 298,
  [SMALL_STATE(33)] = 305,
  [SMALL_STATE(34)] = 310,
  [SMALL_STATE(35)] = 317,
  [SMALL_STATE(36)] = 324,
  [SMALL_STATE(37)] = 329,
  [SMALL_STATE(38)] = 334,
  [SMALL_STATE(39)] = 338,
  [SMALL_STATE(40)] = 342,
  [SMALL_STATE(41)] = 346,
  [SMALL_STATE(42)] = 350,
  [SMALL_STATE(43)] = 354,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_definition_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, 0, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_type, 1, 0, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, 0, 4),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_type, 2, 0, 4),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 4, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_with_constructors_repeat1, 2, 0, 8), SHIFT_REPEAT(42),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primative, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4, 0, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 5, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exposed, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 5, 0, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_with_constructors_repeat1, 2, 0, 6),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 3, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 4, 0, 7),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 5, 0, 9),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
