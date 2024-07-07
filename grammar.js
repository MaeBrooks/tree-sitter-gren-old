/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: "gren",
    rules: {
      source_file: $ => repeat($._definition),
      _definition: $ => choice(
        $.module,
        $.type_definition,
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
      type_definition: $ => seq(
        "type",
        choice(
          seq(
            field("name", $.Identifier),
            field("args", optional(repeat1($.identifier))),
            "=",
            field("value", $._type)),
        )
      ),
      _type: $ => choice(
        $.type_chain,
        $.primative,
        $.custom_type,
      ),
      custom_type: $ => seq(
        field("name", $.Identifier),
        field("args", optional(repeat1($.identifier))),
      ),
      primative: $ => choice(
        "number",
        "Float",
        "Int",
        "Char",
        "String",
        "Bool"
      ),
      type_chain: $ => prec.left(
        1,
        seq(
          field("left", $._type),
          "->",
          field("right", $._type),
        ),
      ),
      spread: $ => "..",
      module_name: $ => /[A-Z]\w*(\.[A-Z]\w*)*/,
      identifier: $ => /[\w]+([\w\d_])*/,
      Identifier: $ => /[A-Z]+([\w\d_])*/,
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

