// class Solution {
// public:
//     int climbStairs(int n) {
//         return climbStairsRecursive(n, 0);
//     }

// private:
//     int climbStairsRecursive(int n, int i) {
//         if (i > n) {
//             return 0;
//         }
//         if (i == n) {
//             return 1;
//         }

//         return climbStairsRecursive(n, i + 1) + climbStairsRecursive(n, i + 2);
//     }
// };
class Solution {
public:
    int solve(int n,vector<int>&dp){
        if(n<0)return 0;
        if(n==0)return 1;
        if(dp[n]!=-1)return dp[n];
        dp[n]= solve(n-1,dp) + solve(n-2,dp);    
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
}; 
//time complexity=O(N)
//space complexity=O(N)
//DP
