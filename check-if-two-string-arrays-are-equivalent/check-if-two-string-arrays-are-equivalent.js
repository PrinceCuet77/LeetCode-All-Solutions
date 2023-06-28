/**
 * @param {string[]} word1
 * @param {string[]} word2
 * @return {boolean}
 */
var arrayStringsAreEqual = function(word1, word2) {
  let word1Index = 0, word2Index = 0, char1Index = 0, char2Index = 0;

    while ( true ) {
      let word1Char = word1[word1Index][char1Index];
      let word2Char = word2[word2Index][char2Index];

      if ( word1Char != word2Char ) {
        return false;
      }

      char1Index++;
      char2Index++;

      if ( char1Index == word1[word1Index].length ) {
        word1Index++;
        char1Index = 0;
      }

      if ( char2Index == word2[word2Index].length ) {
        word2Index++;
        char2Index = 0;
      }

      if ( word1Index == word1.length && word2Index == word2.length ) {
        break;
      }

      if ( word1Index == word1.length || word2Index == word2.length ) {
        return false;
      } 
    }

    return true;
};