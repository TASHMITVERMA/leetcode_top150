class Solution {
public:
    void generatePermutations(int index, vector<int>& nums, vector<vector<int>>& result) {
        if (index == nums.size() - 1) {
            result.push_back(nums); 
            return;
        }
        for (int i = index; i < nums.size(); ++i) {
            swap(nums[index], nums[i]); // Swap current element with each element to its right
            generatePermutations(index + 1, nums, result); 
            swap(nums[index], nums[i]); // Backtrack: restore the original state
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        generatePermutations(0, nums, result);
        return result;
    }
};
//tc=O(N*N!)
//sc=O(N)
