class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0;

        for(auto iter: nums){
            ones = (ones ^ iter) & (~twos);
            twos = (twos ^ iter) & (~ones);
        }
        return ones;    
    }
};
