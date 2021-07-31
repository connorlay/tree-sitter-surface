# Tree-sitter Surface

[Tree-sitter] (https://tree-sitter.github.io/tree-sitter/) grammar and parser for [Surface](https://surface-ui.org), the server-side rendering component library for [Phoenix](https://www.phoenixframework.org/).

Supports the Surface 0.5+ template syntax.

## Features

Parsing support for the following nodes:

* Tags
* Components
* Blocks
* Directives
* Expressions
* Attributes
* Text
* Comments

## Queries

* Highlights
* Folds
* Indents
* Injections

Currently supported in NeoVim via [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter). When combined with [tree-sitter-elixir](https://github.com/nvim-treesitter/nvim-treesitter), expressions are highlighted as injected Elixir code.
