class Solution {
  public:
  vector<vector<int>> dp;

      bool canSolve(int idx, vector<int>& nums, int target) {
        if (target == 0)
            return true;
        if (idx >= nums.size() || target < 0)
            return false;

        if (dp[idx][target] != -1)
            return dp[idx][target];

        bool include = canSolve(idx + 1, nums, target - nums[idx]);
        bool exclude = canSolve(idx + 1, nums, target);

        return dp[idx][target] = include || exclude;
    }
    bool equalPartition(vector<int>& nums) {
        // code here
        int sum = accumulate(nums.begin(), nums.end(), 0);

        if (sum % 2 != 0)
            return false;

        int target = sum / 2;
        dp = vector<vector<int>>(nums.size(), vector<int>(target + 1, -1));

        return canSolve(0, nums, target);
    }
};