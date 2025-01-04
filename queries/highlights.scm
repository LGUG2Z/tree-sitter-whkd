;; Keywords
(shell_config
  ".shell" @keyword)

;; Shell types
(shell_config
  (_ "pwsh" @variant)
  (_ "powershell" @variant)
  (_ "cmd" @variant))

;; Process names
(process_name) @type

;; Hotkey components
(hotkey_sequence
  (key
    (key_identifier) @constant.builtin))

(hotkey_sequence
  (key
    (number) @constant.numeric))

(hotkey_sequence
  "+" @operator)

;; Delimiters
"[" @punctuation.bracket
"]" @punctuation.bracket
":" @punctuation.delimiter

;; Commands
(command) @string

;; Comments
(comment) @comment

;; Errors
(ERROR) @error
