class Solution {
public:
    int solve(vector<int>& nums, int i, vector<int>& dp)
    {
        if(i == 0)
        {
            return nums[i];
        }

        if(i < 0)
        {
            return 0;
        }

        if(dp[i] != -1) 
            return dp[i];

        int ans1 = solve(nums, i - 2, dp) + nums[i];
        int ans2 = solve(nums, i - 1, dp) + 0;

        return dp[i] = max(ans2, ans1);
    }

    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> dp(n, -1);
        return solve(nums, n - 1, dp);
    }
};