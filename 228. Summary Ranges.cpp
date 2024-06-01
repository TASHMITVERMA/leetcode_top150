
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int start = 0;
        for (int end = 0; end < nums.size(); ++end) {
            if (end + 1 == nums.size() || nums[end + 1] != nums[end] + 1) {
                if (start == end) {
                    result.push_back(to_string(nums[start]));
                } else {
                    result.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
                }
                start = end + 1;
            }
        }
        return result;
    }
};
//sc=tc=O(N)

