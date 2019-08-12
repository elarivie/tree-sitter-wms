try {
  module.exports = require("./build/Release/tree_sitter_WMS_binding");
} catch (error) {
  try {
    module.exports = require("./build/Debug/tree_sitter_WMS_binding");
  } catch (_) {
    throw error
  }
}

try {
  module.exports.nodeTypeInfo = require("./src/node-types.json");
} catch (_) {}

// Override getGrammars to work around bug with tree-sitter grammars never
// applying; see:
// <https://github.com/atom/atom/issues/17029#issuecomment-457084440>
atom.grammars.getGrammars = function() {
  const allGrammars = atom.grammars.textmateRegistry.getGrammars();
  const tsGrammars = Object.values(atom.grammars.treeSitterGrammarsById);
  const combinedGrammars = tsGrammars.concat(allGrammars);
  const combinedGrammarNames = combinedGrammars.map(grammar => grammar.name);
  return combinedGrammars.filter((grammar, g) => (grammar.constructor.name === 'TreeSitterGrammar') || ((grammar.constructor.name !== 'TreeSitterGrammar') && (combinedGrammarNames.indexOf(grammar.name) === g)));
};
