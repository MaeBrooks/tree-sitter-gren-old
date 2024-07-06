package tree_sitter_gren_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-gren"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gren.Language())
	if language == nil {
		t.Errorf("Error loading Gren grammar")
	}
}
