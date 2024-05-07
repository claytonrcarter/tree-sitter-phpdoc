package tree_sitter_phpdoc_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-phpdoc"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_phpdoc.Language())
	if language == nil {
		t.Errorf("Error loading Phpdoc grammar")
	}
}
