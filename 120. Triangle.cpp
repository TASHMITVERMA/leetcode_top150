#include <vector>
#include <algorithm> // For min

class Solution {
public:
    int minimumTotal(std::vector<std::vector<int>>& triangle) {
        int n = triangle.size();
        std::vector<int> dp(n, 0);
        dp[0] = triangle[0][0];
        for (int i = 1; i < n; i++) {
            dp[i] = dp[i - 1] + triangle[i][i]; // Adding the last element of each row
            for (int j = i - 1; j > 0; j--) {
                dp[j] = std::min(dp[j - 1], dp[j]) + triangle[i][j]; // For elements other than the last one
            }
            dp[0] += triangle[i][0]; // Adding the first element of each row
        }
        return *std::min_element(dp.begin(), dp.end()); // Return the minimum element of dp
    }
};
//tc=O(N2)
//sc=O(N)
