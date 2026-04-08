class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(2, 0));
        dp[0][0] = 0;
        dp[0][1] = nums[0];
        int max1 = nums[0];
        for(int i = 1; i < n; i++) {
            dp[i][0] = max1;
            dp[i][1] = dp[i - 1][0] + nums[i];
            max1 = max(max1, dp[i][1]);
        }
        return max(dp[n - 1][0], dp[n - 1][1]);
    }
};
