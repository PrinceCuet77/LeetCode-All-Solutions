class Solution {
public:
  vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector < int > result;
    
    map < int, int > mp;
    int n = nums.size();
    for ( int i = 0; i < n; i++ ) {
      int count = 0;
      if ( mp[nums[i]] == 0 ) {
        for ( int j = 0; j < n; j++ ) {
          if ( i != j && nums[i] > nums[j] ) {
            count++;
          }
        }

        result.push_back(count);
        mp[nums[i]] = count;
      } else {
        result.push_back(mp[nums[i]]);
      }
    }

    return result;
  }
};