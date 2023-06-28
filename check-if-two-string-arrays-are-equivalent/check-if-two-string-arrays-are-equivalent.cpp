class Solution {
public:
  bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    int word1Index = 0, word2Index = 0, char1Index = 0, char2Index = 0;

    while ( true ) {
      char word1Char = word1[word1Index][char1Index];
      char word2Char = word2[word2Index][char2Index];

      if ( word1Char != word2Char ) { // If both character are not matched
        return false;
      }

      char1Index++; // Incrementing the character index of current word from 'word1'
      char2Index++; // Incrementing the character index of current word from 'word2'

      if ( char1Index == word1[word1Index].size() ) { // If current word from 'word1' is over
        word1Index++; // Move to next word of 'word1'
        char1Index = 0; // Reset character index to 0 for start from beginning
      }

      if ( char2Index == word2[word2Index].size() ) { // If current word from 'word2' is over
        word2Index++; // Move to next word of 'word1'
        char2Index = 0; // Reset character index to 0 for start from beginning
      }

      if ( word1Index == word1.size() && word2Index == word2.size() ) { // Both words are ended
        break;
      }

      // If 'word1' is finished and 'word2' is not finished then 'return false' and,
      // 'word1' is not finished and 'word2' is not finished then 'return false'
      if ( word1Index == word1.size() || word2Index == word2.size() ) {
        return false;
      } 
    }

    return true;
  }
};