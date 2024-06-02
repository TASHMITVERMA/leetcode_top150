class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> ans;
        int sum = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (sum > maxi) {
                maxi = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxi;
    }
};
