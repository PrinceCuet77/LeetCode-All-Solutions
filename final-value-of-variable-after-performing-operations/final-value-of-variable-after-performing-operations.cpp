class Solution {
public:
  int finalValueAfterOperations(vector<string>& operations) {
    int result = 0;

    for ( auto value : operations ) {
      if ( value[1] == '+' ) {
        result++;
      } else {
        result--;
      }
    }

    return result;
  }
};