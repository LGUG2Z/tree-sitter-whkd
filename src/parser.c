#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_key_identifier = 1,
  anon_sym_DOTshell = 2,
  anon_sym_pwsh = 3,
  anon_sym_powershell = 4,
  anon_sym_cmd = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_COLON = 8,
  sym_process_name = 9,
  anon_sym_PLUS = 10,
  sym_number = 11,
  sym_command = 12,
  sym_comment = 13,
  sym__whitespace = 14,
  sym_source_file = 15,
  sym_shell_config = 16,
  sym_process_binding = 17,
  sym_process_mapping = 18,
  sym_hotkey_binding = 19,
  sym_hotkey_sequence = 20,
  sym_key = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_source_file_repeat2 = 23,
  aux_sym_source_file_repeat3 = 24,
  aux_sym_process_binding_repeat1 = 25,
  aux_sym_hotkey_sequence_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_key_identifier] = "key_identifier",
  [anon_sym_DOTshell] = ".shell",
  [anon_sym_pwsh] = "pwsh",
  [anon_sym_powershell] = "powershell",
  [anon_sym_cmd] = "cmd",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [sym_process_name] = "process_name",
  [anon_sym_PLUS] = "+",
  [sym_number] = "number",
  [sym_command] = "command",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_source_file] = "source_file",
  [sym_shell_config] = "shell_config",
  [sym_process_binding] = "process_binding",
  [sym_process_mapping] = "process_mapping",
  [sym_hotkey_binding] = "hotkey_binding",
  [sym_hotkey_sequence] = "hotkey_sequence",
  [sym_key] = "key",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_process_binding_repeat1] = "process_binding_repeat1",
  [aux_sym_hotkey_sequence_repeat1] = "hotkey_sequence_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_key_identifier] = sym_key_identifier,
  [anon_sym_DOTshell] = anon_sym_DOTshell,
  [anon_sym_pwsh] = anon_sym_pwsh,
  [anon_sym_powershell] = anon_sym_powershell,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_process_name] = sym_process_name,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_number] = sym_number,
  [sym_command] = sym_command,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_source_file] = sym_source_file,
  [sym_shell_config] = sym_shell_config,
  [sym_process_binding] = sym_process_binding,
  [sym_process_mapping] = sym_process_mapping,
  [sym_hotkey_binding] = sym_hotkey_binding,
  [sym_hotkey_sequence] = sym_hotkey_sequence,
  [sym_key] = sym_key,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_process_binding_repeat1] = aux_sym_process_binding_repeat1,
  [aux_sym_hotkey_sequence_repeat1] = aux_sym_hotkey_sequence_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_key_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTshell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pwsh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_powershell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_process_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_config] = {
    .visible = true,
    .named = true,
  },
  [sym_process_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_process_mapping] = {
    .visible = true,
    .named = true,
  },
  [sym_hotkey_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_hotkey_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_process_binding_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hotkey_sequence_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == ']') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ']') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOTshell);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_process_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_key_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '\n') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(2);
      END_STATE();
    case 1:
      if (lookahead == 'm') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(4);
      if (lookahead == 'w') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_pwsh);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_powershell);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_key_identifier] = ACTIONS(1),
    [anon_sym_DOTshell] = ACTIONS(1),
    [anon_sym_pwsh] = ACTIONS(1),
    [anon_sym_powershell] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym_shell_config] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(19),
    [anon_sym_DOTshell] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    STATE(14), 1,
      sym_key,
    STATE(27), 1,
      sym_hotkey_sequence,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(9), 2,
      sym_key_identifier,
      sym_number,
    STATE(3), 2,
      sym_process_binding,
      aux_sym_source_file_repeat2,
    STATE(7), 2,
      sym_hotkey_binding,
      aux_sym_source_file_repeat3,
  [23] = 6,
    STATE(14), 1,
      sym_key,
    STATE(27), 1,
      sym_hotkey_sequence,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(9), 2,
      sym_key_identifier,
      sym_number,
    STATE(6), 2,
      sym_hotkey_binding,
      aux_sym_source_file_repeat3,
    STATE(10), 2,
      sym_process_binding,
      aux_sym_source_file_repeat2,
  [46] = 6,
    STATE(14), 1,
      sym_key,
    STATE(27), 1,
      sym_hotkey_sequence,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(9), 2,
      sym_key_identifier,
      sym_number,
    STATE(9), 2,
      sym_hotkey_binding,
      aux_sym_source_file_repeat3,
    STATE(10), 2,
      sym_process_binding,
      aux_sym_source_file_repeat2,
  [69] = 6,
    STATE(14), 1,
      sym_key,
    STATE(27), 1,
      sym_hotkey_sequence,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(9), 2,
      sym_key_identifier,
      sym_number,
    STATE(4), 2,
      sym_process_binding,
      aux_sym_source_file_repeat2,
    STATE(6), 2,
      sym_hotkey_binding,
      aux_sym_source_file_repeat3,
  [92] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_key,
    STATE(32), 1,
      sym_hotkey_sequence,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(9), 2,
      sym_key_identifier,
      sym_number,
    STATE(8), 2,
      sym_hotkey_binding,
      aux_sym_source_file_repeat3,
  [114] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_key,
    STATE(32), 1,
      sym_hotkey_sequence,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(9), 2,
      sym_key_identifier,
      sym_number,
    STATE(8), 2,
      sym_hotkey_binding,
      aux_sym_source_file_repeat3,
  [136] = 6,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_key,
    STATE(32), 1,
      sym_hotkey_sequence,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(17), 2,
      sym_key_identifier,
      sym_number,
    STATE(8), 2,
      sym_hotkey_binding,
      aux_sym_source_file_repeat3,
  [158] = 6,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_key,
    STATE(32), 1,
      sym_hotkey_sequence,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(9), 2,
      sym_key_identifier,
      sym_number,
    STATE(8), 2,
      sym_hotkey_binding,
      aux_sym_source_file_repeat3,
  [180] = 5,
    STATE(14), 1,
      sym_key,
    STATE(36), 1,
      sym_hotkey_sequence,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(22), 2,
      sym_key_identifier,
      sym_number,
    STATE(10), 2,
      sym_process_binding,
      aux_sym_source_file_repeat2,
  [199] = 4,
    ACTIONS(27), 1,
      anon_sym_PLUS,
    STATE(11), 1,
      aux_sym_hotkey_sequence_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 2,
      anon_sym_LBRACK,
      anon_sym_COLON,
  [214] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(30), 1,
      sym_process_name,
    ACTIONS(32), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
    STATE(16), 2,
      sym_process_mapping,
      aux_sym_process_binding_repeat1,
  [231] = 4,
    ACTIONS(36), 1,
      anon_sym_PLUS,
    STATE(11), 1,
      aux_sym_hotkey_sequence_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(34), 2,
      anon_sym_LBRACK,
      anon_sym_COLON,
  [246] = 4,
    ACTIONS(36), 1,
      anon_sym_PLUS,
    STATE(13), 1,
      aux_sym_hotkey_sequence_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(38), 2,
      anon_sym_LBRACK,
      anon_sym_COLON,
  [261] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(30), 1,
      sym_process_name,
    ACTIONS(40), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_source_file_repeat1,
    STATE(18), 2,
      sym_process_mapping,
      aux_sym_process_binding_repeat1,
  [278] = 4,
    ACTIONS(30), 1,
      sym_process_name,
    ACTIONS(42), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(17), 2,
      sym_process_mapping,
      aux_sym_process_binding_repeat1,
  [293] = 4,
    ACTIONS(44), 1,
      anon_sym_RBRACK,
    ACTIONS(46), 1,
      sym_process_name,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(17), 2,
      sym_process_mapping,
      aux_sym_process_binding_repeat1,
  [308] = 4,
    ACTIONS(30), 1,
      sym_process_name,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(17), 2,
      sym_process_mapping,
      aux_sym_process_binding_repeat1,
  [323] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      anon_sym_DOTshell,
    ACTIONS(40), 1,
      sym_comment,
    STATE(5), 1,
      sym_shell_config,
    STATE(21), 1,
      aux_sym_source_file_repeat1,
  [339] = 3,
    STATE(25), 1,
      sym_key,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(9), 2,
      sym_key_identifier,
      sym_number,
  [351] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(53), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(51), 2,
      anon_sym_DOTshell,
      sym_process_name,
  [365] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(56), 3,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_PLUS,
  [375] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      sym_key_identifier,
      sym_number,
  [385] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(60), 3,
      anon_sym_pwsh,
      anon_sym_powershell,
      anon_sym_cmd,
  [395] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(25), 3,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_PLUS,
  [405] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(62), 2,
      sym_key_identifier,
      sym_number,
  [414] = 3,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [425] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(68), 2,
      sym_key_identifier,
      sym_number,
  [434] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(70), 2,
      sym_key_identifier,
      sym_number,
  [443] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(72), 2,
      anon_sym_RBRACK,
      sym_process_name,
  [452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_command,
    ACTIONS(76), 1,
      sym__whitespace,
  [462] = 2,
    ACTIONS(66), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [470] = 2,
    ACTIONS(78), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym__whitespace,
    ACTIONS(80), 1,
      sym_command,
  [488] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [496] = 2,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 180,
  [SMALL_STATE(11)] = 199,
  [SMALL_STATE(12)] = 214,
  [SMALL_STATE(13)] = 231,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 261,
  [SMALL_STATE(16)] = 278,
  [SMALL_STATE(17)] = 293,
  [SMALL_STATE(18)] = 308,
  [SMALL_STATE(19)] = 323,
  [SMALL_STATE(20)] = 339,
  [SMALL_STATE(21)] = 351,
  [SMALL_STATE(22)] = 365,
  [SMALL_STATE(23)] = 375,
  [SMALL_STATE(24)] = 385,
  [SMALL_STATE(25)] = 395,
  [SMALL_STATE(26)] = 405,
  [SMALL_STATE(27)] = 414,
  [SMALL_STATE(28)] = 425,
  [SMALL_STATE(29)] = 434,
  [SMALL_STATE(30)] = 443,
  [SMALL_STATE(31)] = 452,
  [SMALL_STATE(32)] = 462,
  [SMALL_STATE(33)] = 470,
  [SMALL_STATE(34)] = 478,
  [SMALL_STATE(35)] = 488,
  [SMALL_STATE(36)] = 496,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0), SHIFT_REPEAT(22),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hotkey_sequence_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hotkey_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey_sequence, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey_sequence, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_process_binding_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_binding_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey_binding, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_config, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_binding, 5, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_binding, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_mapping, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_whkd(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_key_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
