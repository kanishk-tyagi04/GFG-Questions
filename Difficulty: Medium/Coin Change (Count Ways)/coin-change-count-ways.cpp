class Solution {
  public:
    int count(vector<int>& coins, int sum) {
        // code here.
        int n = coins.size();
        vector<int> dp(sum + 1, 0);
        dp[0] = 1;
        for (int coin : coins) {
            for (int x = coin; x <= sum; x++) {
                dp[x] += dp[x - coin];
            }
        }
        return dp[sum];
    }
};