class Solution {
public:
  vector<int> runningSum(vector<int>& nums) {
    vector < int > result;

    result.push_back(nums[0]);
    for ( int i = 0; i < nums.size() - 1; i++ ) {
      result.push_back(result[i] + nums[i+1]);
    }

    return result;
  }
};