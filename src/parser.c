#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_module = 1,
  anon_sym_port = 2,
  anon_sym_exposing = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  sym_type_number = 7,
  sym_type_float = 8,
  sym_type_int = 9,
  sym_type_char = 10,
  sym_type_string = 11,
  sym_type_bool = 12,
  sym_spread = 13,
  sym_module_name = 14,
  sym_identifier = 15,
  sym_number = 16,
  sym_source_file = 17,
  sym__definition = 18,
  sym_module = 19,
  sym_exposing = 20,
  sym__exposed = 21,
  sym_type_with_constructors = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_exposing_repeat1 = 24,
  aux_sym_type_with_constructors_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_port] = "port",
  [anon_sym_exposing] = "exposing",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_type_number] = "type_number",
  [sym_type_float] = "type_float",
  [sym_type_int] = "type_int",
  [sym_type_char] = "type_char",
  [sym_type_string] = "type_string",
  [sym_type_bool] = "type_bool",
  [sym_spread] = "spread",
  [sym_module_name] = "module_name",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_module] = "module",
  [sym_exposing] = "exposing",
  [sym__exposed] = "_exposed",
  [sym_type_with_constructors] = "type_with_constructors",
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
  [sym_type_number] = sym_type_number,
  [sym_type_float] = sym_type_float,
  [sym_type_int] = sym_type_int,
  [sym_type_char] = sym_type_char,
  [sym_type_string] = sym_type_string,
  [sym_type_bool] = sym_type_bool,
  [sym_spread] = sym_spread,
  [sym_module_name] = sym_module_name,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_module] = sym_module,
  [sym_exposing] = sym_exposing,
  [sym__exposed] = sym__exposed,
  [sym_type_with_constructors] = sym_type_with_constructors,
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
  [sym_type_number] = {
    .visible = true,
    .named = true,
  },
  [sym_type_float] = {
    .visible = true,
    .named = true,
  },
  [sym_type_int] = {
    .visible = true,
    .named = true,
  },
  [sym_type_char] = {
    .visible = true,
    .named = true,
  },
  [sym_type_string] = {
    .visible = true,
    .named = true,
  },
  [sym_type_bool] = {
    .visible = true,
    .named = true,
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
  field_module_name = 3,
  field_name = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_constructor] = "constructor",
  [field_exposing] = "exposing",
  [field_module_name] = "module_name",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_exposing, 2},
    {field_module_name, 1},
  [2] =
    {field_name, 0},
  [3] =
    {field_constructor, 0},
  [4] =
    {field_constructor, 2},
    {field_name, 0},
  [6] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
  [8] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '(', 29,
        ')', 31,
        ',', 30,
        '.', 2,
        'B', 48,
        'C', 42,
        'F', 45,
        'I', 47,
        'S', 53,
        'e', 22,
        'm', 12,
        'n', 20,
        'p', 13,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '.') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == 'b') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 23:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 24:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_exposing);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_type_number);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_type_float);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_type_int);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_type_char);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_type_string);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_type_bool);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_spread);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'g') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
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
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
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
    [sym_type_number] = ACTIONS(1),
    [sym_type_float] = ACTIONS(1),
    [sym_type_int] = ACTIONS(1),
    [sym_type_char] = ACTIONS(1),
    [sym_type_string] = ACTIONS(1),
    [sym_type_bool] = ACTIONS(1),
    [sym_spread] = ACTIONS(1),
    [sym_module_name] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym__definition] = STATE(3),
    [sym_module] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 1,
      sym_spread,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(6), 1,
      aux_sym_exposing_repeat1,
    STATE(14), 2,
      sym__exposed,
      sym_type_with_constructors,
  [17] = 3,
    ACTIONS(5), 1,
      anon_sym_module,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(5), 3,
      sym__definition,
      sym_module,
      aux_sym_source_file_repeat1,
  [29] = 4,
    ACTIONS(15), 1,
      sym_spread,
    ACTIONS(18), 1,
      sym_identifier,
    STATE(4), 1,
      aux_sym_exposing_repeat1,
    STATE(29), 2,
      sym__exposed,
      sym_type_with_constructors,
  [43] = 3,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_module,
    STATE(5), 3,
      sym__definition,
      sym_module,
      aux_sym_source_file_repeat1,
  [55] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(26), 1,
      sym_spread,
    STATE(4), 1,
      aux_sym_exposing_repeat1,
    STATE(16), 2,
      sym__exposed,
      sym_type_with_constructors,
  [69] = 3,
    ACTIONS(28), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_type_with_constructors_repeat1,
    ACTIONS(30), 2,
      sym_spread,
      sym_identifier,
  [80] = 2,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [88] = 2,
    STATE(9), 1,
      aux_sym_type_with_constructors_repeat1,
    ACTIONS(36), 2,
      sym_spread,
      sym_identifier,
  [96] = 3,
    ACTIONS(39), 1,
      sym_spread,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_type_with_constructors_repeat1,
  [106] = 1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [111] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [116] = 1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [121] = 2,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
  [128] = 1,
    ACTIONS(53), 2,
      sym_spread,
      sym_identifier,
  [133] = 2,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
  [140] = 1,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [145] = 2,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
  [152] = 2,
    ACTIONS(63), 1,
      anon_sym_exposing,
    STATE(12), 1,
      sym_exposing,
  [159] = 1,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [164] = 1,
    ACTIONS(67), 2,
      sym_spread,
      sym_identifier,
  [169] = 1,
    ACTIONS(69), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [174] = 2,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
  [181] = 2,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
  [188] = 1,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [193] = 1,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [198] = 1,
    ACTIONS(77), 1,
      sym_module_name,
  [202] = 1,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
  [206] = 1,
    ACTIONS(49), 1,
      anon_sym_COMMA,
  [210] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [214] = 1,
    ACTIONS(59), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 29,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 96,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 111,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 121,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 133,
  [SMALL_STATE(17)] = 140,
  [SMALL_STATE(18)] = 145,
  [SMALL_STATE(19)] = 152,
  [SMALL_STATE(20)] = 159,
  [SMALL_STATE(21)] = 164,
  [SMALL_STATE(22)] = 169,
  [SMALL_STATE(23)] = 174,
  [SMALL_STATE(24)] = 181,
  [SMALL_STATE(25)] = 188,
  [SMALL_STATE(26)] = 193,
  [SMALL_STATE(27)] = 198,
  [SMALL_STATE(28)] = 202,
  [SMALL_STATE(29)] = 206,
  [SMALL_STATE(30)] = 210,
  [SMALL_STATE(31)] = 214,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exposed, 1, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_with_constructors_repeat1, 2, 0, 5), SHIFT_REPEAT(31),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 4, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, 0, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 3, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 5, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_with_constructors_repeat1, 2, 0, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 4, 0, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 5, 0, 6),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
