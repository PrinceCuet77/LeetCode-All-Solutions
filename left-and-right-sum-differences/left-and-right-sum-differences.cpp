class Solution {
public:
  vector<int> leftRightDifference(vector<int>& nums) {
    int leftSum = 0, rightSum = 0;
    for ( int i = nums.size() - 1; i > 0; i-- ) {
      rightSum += nums[i];
    }

    vector < int > result;
    result.push_back(abs(leftSum - rightSum));
    for ( int i = 0; i < nums.size() - 1; i++ ) {
      leftSum += nums[i];
      rightSum -= nums[i+1];
      result.push_back(abs(leftSum - rightSum));
    }

    return result;
  }
};