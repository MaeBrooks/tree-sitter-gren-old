#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 11

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
  sym_type_chain = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_exposing_repeat1 = 33,
  aux_sym_type_with_constructors_repeat1 = 34,
  aux_sym_type_definition_repeat1 = 35,
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
  [sym_type_chain] = "type_chain",
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
  [sym_type_chain] = sym_type_chain,
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
  [aux_sym_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_constructor = 2,
  field_exposing = 3,
  field_left = 4,
  field_module_name = 5,
  field_name = 6,
  field_right = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
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
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 3},
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
    {field_left, 0},
    {field_right, 2},
  [12] =
    {field_constructor, 0},
  [13] =
    {field_constructor, 2},
    {field_name, 0},
  [15] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
  [17] =
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
  [20] = 7,
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '(', 36,
        ')', 38,
        ',', 37,
        '-', 3,
        '.', 2,
        '=', 41,
        'B', 69,
        'C', 63,
        'F', 66,
        'I', 67,
        'S', 74,
        'e', 25,
        'm', 14,
        'n', 23,
        'p', 15,
        't', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '=') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'x') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 27:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 28:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      END_STATE();
    case 29:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 't') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_exposing);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_Char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_Bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_spread);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'a') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'g') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'h') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'i') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'l') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'l') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'o') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 'r') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_Identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_Identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 28},
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
    [sym_Identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym__definition] = STATE(5),
    [sym_module] = STATE(5),
    [sym_type_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      anon_sym_number,
    ACTIONS(13), 1,
      sym_Identifier,
    STATE(17), 4,
      sym__type,
      sym_custom_type,
      sym_primative,
      sym_type_chain,
    ACTIONS(11), 5,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [20] = 4,
    ACTIONS(9), 1,
      anon_sym_number,
    ACTIONS(13), 1,
      sym_Identifier,
    STATE(14), 4,
      sym__type,
      sym_custom_type,
      sym_primative,
      sym_type_chain,
    ACTIONS(11), 5,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [40] = 4,
    ACTIONS(9), 1,
      anon_sym_number,
    ACTIONS(13), 1,
      sym_Identifier,
    STATE(16), 4,
      sym__type,
      sym_custom_type,
      sym_primative,
      sym_type_chain,
    ACTIONS(11), 5,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [60] = 4,
    ACTIONS(5), 1,
      anon_sym_module,
    ACTIONS(7), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(6), 4,
      sym__definition,
      sym_module,
      sym_type_definition,
      aux_sym_source_file_repeat1,
  [76] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_module,
    ACTIONS(22), 1,
      anon_sym_type,
    STATE(6), 4,
      sym__definition,
      sym_module,
      sym_type_definition,
      aux_sym_source_file_repeat1,
  [92] = 4,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_type_definition_repeat1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
    ACTIONS(27), 2,
      anon_sym_module,
      anon_sym_type,
  [107] = 5,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    ACTIONS(34), 1,
      sym_spread,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_exposing_repeat1,
    STATE(32), 2,
      sym__exposed,
      sym_type_with_constructors,
  [124] = 4,
    ACTIONS(42), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_type_definition_repeat1,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
    ACTIONS(40), 2,
      anon_sym_module,
      anon_sym_type,
  [139] = 4,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_type_definition_repeat1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
    ACTIONS(46), 2,
      anon_sym_module,
      anon_sym_type,
  [154] = 4,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(50), 1,
      sym_spread,
    STATE(12), 1,
      aux_sym_exposing_repeat1,
    STATE(29), 2,
      sym__exposed,
      sym_type_with_constructors,
  [168] = 4,
    ACTIONS(52), 1,
      sym_spread,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym_exposing_repeat1,
    STATE(42), 2,
      sym__exposed,
      sym_type_with_constructors,
  [182] = 1,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_DASH_GT,
  [189] = 1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_DASH_GT,
  [196] = 3,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_type_with_constructors_repeat1,
    ACTIONS(64), 2,
      sym_spread,
      sym_identifier,
  [207] = 2,
    ACTIONS(68), 1,
      anon_sym_DASH_GT,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [216] = 2,
    ACTIONS(68), 1,
      anon_sym_DASH_GT,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [225] = 1,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [231] = 3,
    ACTIONS(74), 1,
      anon_sym_EQ,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_type_definition_repeat1,
  [241] = 3,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(78), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym_type_definition_repeat1,
  [251] = 1,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [257] = 2,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [265] = 2,
    STATE(23), 1,
      aux_sym_type_with_constructors_repeat1,
    ACTIONS(87), 2,
      sym_spread,
      sym_identifier,
  [273] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [279] = 3,
    ACTIONS(92), 1,
      anon_sym_EQ,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym_type_definition_repeat1,
  [289] = 1,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [295] = 3,
    ACTIONS(98), 1,
      sym_spread,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym_type_with_constructors_repeat1,
  [305] = 2,
    ACTIONS(102), 1,
      anon_sym_exposing,
    STATE(26), 1,
      sym_exposing,
  [312] = 2,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
  [319] = 1,
    ACTIONS(108), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [324] = 2,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
  [331] = 2,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
  [338] = 1,
    ACTIONS(116), 2,
      sym_spread,
      sym_identifier,
  [343] = 1,
    ACTIONS(118), 2,
      sym_spread,
      sym_identifier,
  [348] = 1,
    ACTIONS(120), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [353] = 2,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
  [360] = 2,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
  [367] = 1,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [372] = 1,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [377] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [381] = 1,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
  [385] = 1,
    ACTIONS(104), 1,
      anon_sym_COMMA,
  [389] = 1,
    ACTIONS(132), 1,
      sym_module_name,
  [393] = 1,
    ACTIONS(110), 1,
      anon_sym_COMMA,
  [397] = 1,
    ACTIONS(134), 1,
      sym_Identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 139,
  [SMALL_STATE(11)] = 154,
  [SMALL_STATE(12)] = 168,
  [SMALL_STATE(13)] = 182,
  [SMALL_STATE(14)] = 189,
  [SMALL_STATE(15)] = 196,
  [SMALL_STATE(16)] = 207,
  [SMALL_STATE(17)] = 216,
  [SMALL_STATE(18)] = 225,
  [SMALL_STATE(19)] = 231,
  [SMALL_STATE(20)] = 241,
  [SMALL_STATE(21)] = 251,
  [SMALL_STATE(22)] = 257,
  [SMALL_STATE(23)] = 265,
  [SMALL_STATE(24)] = 273,
  [SMALL_STATE(25)] = 279,
  [SMALL_STATE(26)] = 289,
  [SMALL_STATE(27)] = 295,
  [SMALL_STATE(28)] = 305,
  [SMALL_STATE(29)] = 312,
  [SMALL_STATE(30)] = 319,
  [SMALL_STATE(31)] = 324,
  [SMALL_STATE(32)] = 331,
  [SMALL_STATE(33)] = 338,
  [SMALL_STATE(34)] = 343,
  [SMALL_STATE(35)] = 348,
  [SMALL_STATE(36)] = 353,
  [SMALL_STATE(37)] = 360,
  [SMALL_STATE(38)] = 367,
  [SMALL_STATE(39)] = 372,
  [SMALL_STATE(40)] = 377,
  [SMALL_STATE(41)] = 381,
  [SMALL_STATE(42)] = 385,
  [SMALL_STATE(43)] = 389,
  [SMALL_STATE(44)] = 393,
  [SMALL_STATE(45)] = 397,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_definition_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, 0, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_type, 1, 0, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, 0, 4),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_type, 2, 0, 4),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primative, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_chain, 3, 0, 6),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 5, 0, 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4, 0, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exposed, 1, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_with_constructors_repeat1, 2, 0, 9), SHIFT_REPEAT(44),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 5, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 3, 0, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_with_constructors_repeat1, 2, 0, 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 4, 0, 8),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 5, 0, 10),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
