/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
  let maxWord = 0

  for ( let i = 0; i < sentences.length; i++ ) {
    let count = 0
    for ( let j = 0; j < sentences[i].length; j++ ) {
      if ( sentences[i][j] == ' ' ) {
        count++;
      }
    }

    maxWord = maxWord < count ? count : maxWord
  }

  return maxWord + 1
};