
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; 

        // Reverse the entire array
        reverse(nums.begin(), nums.end());
        
        //  first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        //  rest of the elements after k
        reverse(nums.begin() + k, nums.end());
    }
};
// Time complexity:O(N)
// Space complexity:O(1)
