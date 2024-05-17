class Solution {
public:
int solveUtil(int n, vector<int>& arr, vector<int>& dp) {
    dp[0] = arr[0];
    for (int i = 1; i < n; i++) {
        int pick = arr[i];
         if (i > 1)
             pick += dp[i - 2];
        int nonPick = dp[i - 1];
        dp[i] = max(pick, nonPick);
    }
    return dp[n - 1];
}

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
    return solveUtil(nums.size(), nums, dp);
    }
};
