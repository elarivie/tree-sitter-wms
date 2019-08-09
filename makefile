.PHONY: INSTALL
INSTALL:
	npm install nan
	npm install --only=dev
	npm install
	reset; ./node_modules/.bin/tree-sitter generate;
	./node_modules/.bin/node-gyp configure
	./node_modules/.bin/node-gyp build

.PHONY: PARSE
PARSE:
	reset; ./node_modules/.bin/tree-sitter generate; ./node_modules/.bin/tree-sitter parse ./corpus/WMS.wms

.PHONY: TEST
TEST:
	reset; ./node_modules/.bin/tree-sitter test;

.PHONY: HIGHLIGHT
HIGHLIGHT:
	export PATH=:$PATH;reset; ./node_modules/.bin/tree-sitter highlight;

.PHONY: PUBLISH
PUBLISH:
	npm publish

.PHONY: CLEAN
CLEAN:
	git clean -f -x -d
	rm -Rf ./src
