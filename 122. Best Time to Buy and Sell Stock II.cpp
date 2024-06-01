// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//               if(prices.empty()) return 0;
//         vector<int> dp(prices.size(), 0);
//         int minPrice = prices[0];
//         for(int i = 1; i < prices.size(); i++) {
//             minPrice = min(minPrice, prices[i]);
//             dp[i] = max(dp[i-1], prices[i] - minPrice);
//         }
//         return dp[prices.size() - 1];
//     }
// }; 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                maxProfit += prices[i] - prices[i - 1];
            }
        }
        return maxProfit;
    }
};
//sc=tc=O(N)
