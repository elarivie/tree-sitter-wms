PARSE:
	reset; ./node_modules/.bin/tree-sitter generate; ./node_modules/.bin/tree-sitter parse ./corpus/sample.wms; ./node_modules/.bin/tree-sitter test

HIGHLIGHT:
	export PATH=:$PATH;reset; ./node_modules/.bin/tree-sitter highlight;

INSTALL:
	npm install --dev
	./node_modules/.bin/node-gyp configure
	./node_modules/.bin/node-gyp build

PUBLISH:
	npm publish
