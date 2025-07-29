class Solution {
  public:
    int maxSubarraySum(vector<int> &nums) {
        // Code here
        int curr=nums[0];
        int maX=nums[0];
        
        for(int i=1;i<nums.size();i++){
            curr=max(nums[i],curr+nums[i]);
            maX=max(curr,maX);
        }
        return maX;
    }
};