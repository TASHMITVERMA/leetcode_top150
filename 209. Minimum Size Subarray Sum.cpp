class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minLength = INT_MAX;
        int sum = 0, start = 0;
        for (int end = 0; end < n; end++) {
            sum += nums[end];
            while (sum >= target) {
                minLength = min(minLength, end - start + 1);
                sum -= nums[start++];
            }
        }
        return minLength == INT_MAX ? 0 : minLength;
    }
};//sliding window
//tc=O(N)

// class Solution {
// public:
//     int minLen = INT_MAX; 
//     void f(int i, int target, int sum, int len, vector<int>& nums) {
//         if (sum >= target) {
//             minLen = min(minLen, len); 
//             return;
//         }
//         if (i == nums.size()) {
//             return;
//         }
//         f(i + 1, target, sum + nums[i], len + 1, nums); 
//         f(i + 1, target, sum, len, nums); 
//     }
//     int minSubArrayLen(int target, vector<int>& nums) {
//         f(0, target, 0, 0, nums);
//         return minLen == INT_MAX ? 0 : minLen; }
//};
//tc=O(2^N)
//sc=O(N)
