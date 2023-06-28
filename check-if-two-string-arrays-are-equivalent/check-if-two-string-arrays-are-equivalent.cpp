class Solution {
public:
  bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    bool result = false;

    string string1 = "", string2 = "";
    int n1 = word1.size();
    for ( int i = 0; i < n1; i++ ) {
      string1 += word1[i];
    }

    int n2 = word2.size();
    for ( int i = 0; i < n2; i++ ) {
      string2 += word2[i];
    }
 
    if ( string1 == string2 ) {
      result = true;
    }

    return result;
  }
};