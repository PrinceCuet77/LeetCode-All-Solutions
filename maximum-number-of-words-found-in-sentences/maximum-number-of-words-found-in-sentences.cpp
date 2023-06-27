class Solution {
public:
  int mostWordsFound(vector<string>& sentences) {
    int maxWord = 0;
    for ( auto line : sentences ) {
      int count = 0;
      for ( int i = 0; i < line.length(); i++ ) {
        if ( line[i] == ' ' ) {
          count++;
        }
      }

      maxWord = maxWord < count ? count : maxWord;
    }

    return maxWord + 1;
  }
};