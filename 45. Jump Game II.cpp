class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int currentJumpEnd = 0;  
        int maxReachable = 0;   
        for (int i = 0; i < nums.size() - 1; i++) {
            maxReachable = max(maxReachable, i + nums[i]);
            if (i == currentJumpEnd) {
                jumps++;
                currentJumpEnd = maxReachable;
            }
        }
        return jumps;
    }
};
