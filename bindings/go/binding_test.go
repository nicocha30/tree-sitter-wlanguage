package tree_sitter_wlanguage_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_wlanguage "github.com/tree-sitter/tree-sitter-wlanguage/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_wlanguage.Language())
	if language == nil {
		t.Errorf("Error loading WLanguage grammar")
	}
}
