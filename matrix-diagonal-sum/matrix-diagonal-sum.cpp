class Solution {
public:
  int diagonalSum(vector<vector<int>>& mat) {
    int result = 0;

    int n = mat.size();
    for ( int i = 0; i < mat.size(); i++ ) {
      for ( int j = 0; j < mat[i].size(); j++ ) {
        if (i == j || j == n - 1) {
          result += mat[i][j];
        }
      }
      n--;
    }

    return result;
  }
};