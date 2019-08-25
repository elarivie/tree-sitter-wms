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
TEST: INSTALL
	reset; ./node_modules/.bin/tree-sitter test;

.PHONY: PUBLISH
PUBLISH:
	npm publish

.PHONY: CLEAN
CLEAN:
	git clean -f -x -d
	rm -Rf ./src
