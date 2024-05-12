
class Solution {
public:
    // int maxProfit(vector<int>& prices) {
    //     if(prices.empty()) return 0;
    //     vector<int> dp(prices.size(), 0);
    //     int minPrice = prices[0];
    //     for(int i = 1; i < prices.size(); i++) {
    //         minPrice = min(minPrice, prices[i]);
    //         dp[i] = max(dp[i-1], prices[i] - minPrice);
    //     }
    //     return dp[prices.size() - 1];
    // }
    int maxProfit(vector<int> &Arr){
	int mP = 0;
	int mini = Arr[0];
	//max profit is mP and min is mini for index
	for(int i=1;i<Arr.size();i++){
        int cP = Arr[i] - mini;
        mP = max(mP,cP);
        mini = min(mini,Arr[i]);
        }
	return mP;
}
};
