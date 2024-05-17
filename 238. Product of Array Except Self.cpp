
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);
        // left product
        int left_product = 1;
        for (int i = 0; i < n; i++) {
            output[i] *= left_product;
            left_product *= nums[i];
        }
        // right product
        int right_product = 1;
        for (int i = n - 1; i >= 0; i--) {
            output[i] *= right_product;
            right_product *= nums[i];
        }
//to handle 0 case we must use left and right array nhi to smjh nhi aa rha mereko
        return output;
    }
};
