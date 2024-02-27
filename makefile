SRCFILE := dafny/main.dfy
HLFILE := queries/highlights.scm
GRAMMARFILE := grammar.js
TESTFOLDER := test/corpus
TESTFILES := $(shell find $(TESTFOLDER) -type f)

all: generate

generate: $(GRAMMARFILE)
	tree-sitter generate

parse: $(SRCFILE)
	tree-sitter parse $(SRCFILE)

hl: $(SRCFILE) $(HLFILE)
	tree-sitter highlight $(SRCFILE)

test: $(TESTFILES)
	tree-sitter test

