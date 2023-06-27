class Solution {
public:
  vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector < int > result;

    int n = nums.size();
    for ( int i = 0; i < n; i++ ) {
      if ( result.size() == index[i] ) {
        result.push_back(nums[i]);
      } else {
        result.push_back(0);
        for ( int j = result.size() - 1; j > index[i]; j-- ) {
          result[j] = result[j - 1];
        }
        result[index[i]] = nums[i];
      }
    }

    return result;
  }
};