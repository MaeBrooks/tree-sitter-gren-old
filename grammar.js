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
        repeated({
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
        repeated({
          rule: field("constructor", choice($.spread, $.identifier)),
          openingDelimiter: "(",
          closingDelimiter: ")",
          seperator: ","
        })
      ),
      type_definition: $ => seq(
        "type",
        choice(
          $._basic_type_definition,
          $._alias_type_definition,
        )
      ),
      _basic_type_definition: $ => seq(
        field("name", $.Identifier),
        field("args", optional(repeat1($.identifier))),
        "=",
        field("value", $._type),
        field("value", optional(repeat(seq(
          "|",
          $._type
        ))))
      ),
      _alias_type_definition: $ => seq(
        "alias",
        field("name", $.Identifier),
        field("args", optional(repeat1($.identifier))),
        "=",
        field("value", $._complex_type),
      ),
      _complex_type: $ => choice(
          $.record_type,
          $._type,
      ),
      _type: $ => choice(
        $.primative,
        $.custom_type,
      ),
      record_type: $ => repeated({
        openingDelimiter: "{",
        rule: seq(
          field("field", $.identifier),
          ":",
          field("value", $._complex_type),
        ),
        closingDelimiter: "}",
        seperator: ","
      }),
      custom_type: $ => seq(
        field("name", $.identifier),
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

function repeated({ rule, seperator = ",", openingDelimiter = "(", closingDelimiter = ")"}) {
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

