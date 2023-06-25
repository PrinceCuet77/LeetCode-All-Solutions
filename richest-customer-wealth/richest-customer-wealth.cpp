class Solution {
public:
  int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = 0;

    for ( auto customer : accounts ) {
      int countMoney = 0;
      for ( auto money : customer ) {
        countMoney += money;
      }

      maxWealth = maxWealth < countMoney ? countMoney : maxWealth;
    }

    return maxWealth;
  }
};