/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: "gren",
    rules: {
      source_file: $ => repeat($._definition),
      _definition: $ => choice(
        $.module,
      ),
      module: $ => seq(
        "module",
        field("module_name", $.module_name),
        field("exposing", $.exposing),
      ),
      port: $ => seq(
        "port",
        choice(
          $.module,
        )
      ),
      exposing: $ => seq(
        "exposing",
        list({
          rule: $._exposed,
          openingDelimiter: "(",
          closingDelimiter: ")",
          seperator: ","
        })
      ),
      _exposed: $ => choice(
        $.spread,
        $.type_with_constructors,
        $.identifier,
      ),
      type_with_constructors: $ => seq(
        field("name", $.identifier),
        list({
          rule: field("constructor", choice($.spread, $.identifier)),
          openingDelimiter: "(",
          closingDelimiter: ")",
          seperator: ","
        })
      ),
      _type_expression: $ => choice(
        $.type_number,
        $.type_float,
        $.type_int,
        $.type_char,
        $.type_string,
        $.type_bool,
      ),
      type_number: $ => "number",
      type_float: $ => "Float",
      type_int: $ => "Int",
      type_char: $ => "Char",
      type_string: $ => "String",
      type_bool: $ => "Bool",
      spread: $ => "..",
      module_name: $ => /[A-Z]\w*(\.[A-Z]\w*)*/,
      identifier: $ => /[\w]+([\w\d_])*/,
      number: $ => /\d+(\.\d*)*/,
    }
});

function list({ rule, seperator = ",", openingDelimiter = "(", closingDelimiter = ")"}) {
  return seq(
    openingDelimiter,
    optional(
      seq(
        optional(repeat1(seq(rule, seperator))),
        rule
      ),
    ),
    closingDelimiter
  )
}

