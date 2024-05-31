class Solution {
public:
int lengthOfLIS(vector<int>& nums) 
    {
if(nums.empty()) return 0;
    vector<int> help(nums.size(), 0);
    int size = 0;
    for(int num : nums) {
        int left = 0, right = size;
        while(left < right) {
            int mid = left + (right - left) / 2;
            if(help[mid] < num)
                left = mid + 1;
            else
                right = mid;
        }
        help[left] = num;
        if(left == size)
            size++;
    }
    return size;
}
//time complexity=O(nlog n)
//space complexity=O(n)
//binary search






















//     int lengthOfLIS(vector<int>& nums) {
//      int N=nums.size();
//      int dp[N];
//     int ans =1;
//    for(int i=N-1;i>=0;i--){
//         int maxx =0;
//         if(i==N-1){
//               dp[i]=1;
//               ans= max(ans,dp[i]);
//               continue;
//            }
//      for(int j=i+1;j<N;j++){  
//          if(nums[i]<nums[j]){ 
//            maxx= max(maxx,dp[j]);
//            }
//        }
//         dp[i]= 1+maxx;
//         ans= max(ans,dp[i]);
//      }

//     return ans;
//     }

};
