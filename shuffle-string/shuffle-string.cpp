class Solution {
public:
  string restoreString(string s, vector<int>& indices) {
    string result = s;
    
    int n = indices.size();
    for ( int i = 0; i < n; i++ ) {
      result[indices[i]] = s[i];
    }

    return result;
  }
};