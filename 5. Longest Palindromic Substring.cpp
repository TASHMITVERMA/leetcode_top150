//tc=O(n2)
//sc=O(n)
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";
        vector<vector<bool>> dp(n, vector<bool>(n, false)); 
        int maxLen = 1; 
        int start = 0;  
        for (int i = 0; i < n; ++i)
            dp[i][i] = true;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                start = i;
                maxLen = 2;
            }
        }
        for (int len = 3; len <= n; ++len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1; 
                if (s[i] == s[j] && dp[i + 1][j - 1]) {
                    dp[i][j] = true;
                    if (len > maxLen) {
                        start = i;
                        maxLen = len;
                    }
                }
            }
        }
        return s.substr(start, maxLen);
    }
};





//tc=O(N3)
//sc=O(1)
// class Solution {
// private: 
//     bool check(string &s, int i, int j){
//         while(i<j){
//             if(s[i] != s[j]){
//                 return false;
//             }
//             i++;
//             j--;
//         }
//         return true;
//     }            
// public:
//     string longestPalindrome(string s) {
//         int n = s.size();
//         int starting_index = 0;
//         int max_len = 0;
//         for(int i=0; i<n; i++){
//             for(int j=i; j<n; j++){
//                 if(check(s, i, j)){
//                     if(j-i+1 > max_len){
//                         max_len = j-i+1;
//                         starting_index = i;
//                     }
//                 }
//             }
//         }
//         return s.substr(starting_index, max_len);
//     }
// }; 
