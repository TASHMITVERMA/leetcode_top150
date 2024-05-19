#include <vector>
#include <unordered_map>
#include <algorithm>
class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> numIndexMap;
        for (int i = 0; i < nums.size(); ++i) {
            if (numIndexMap.find(nums[i]) != numIndexMap.end() && 
                i - numIndexMap[nums[i]] <= k) {
                return true;
            }
            numIndexMap[nums[i]] = i;
        }
        return false;
    }
};
//sc-O(N)
//tc-O(N)
//algo-hash
