module.exports = grammar({
  name: "whkd",

  rules: {
    source_file: ($) =>
      seq(
        optional(repeat($.comment)),
        $.shell_config,
        optional(repeat($.process_binding)),
        repeat1($.hotkey_binding)
      ),

    shell_config: ($) => seq(".shell", choice("pwsh", "powershell", "cmd")),

    process_binding: ($) =>
      seq(
        $.hotkey_sequence,
        "[",
        repeat($.comment),
        repeat1($.process_mapping),
        "]"
      ),

    process_mapping: ($) => seq($.process_name, ":", $.command),

    process_name: ($) => /[A-Za-z][A-Za-z0-9\s]*/,

    hotkey_binding: ($) => seq($.hotkey_sequence, ":", $.command),

    hotkey_sequence: ($) => seq($.key, repeat(seq("+", $.key))),

    key: ($) => choice($.key_identifier, $.number),

    // Modified to allow underscores and be more permissive with numbers
    key_identifier: ($) => /[A-Za-z][A-Za-z0-9_]*/,

    number: ($) => /[0-9]+/,

    command: ($) => /[^\n#]*/,

    comment: ($) => token(seq("#", /[^\n]*/)),

    _whitespace: ($) => /\s+/,
  },

  extras: ($) => [$.comment, $._whitespace],

  conflicts: ($) => [[$.hotkey_sequence, $.process_binding]],

  word: ($) => $.key_identifier,
});
