class Solution {
public:
    int trailingZeroes(int n) {
        int div = 5;
        int ans = 0;
        while(div <= n){
            ans += n/div;
            div *= 5;
        }
        return ans;
    }
};//logn
//number of factor of 5*2
