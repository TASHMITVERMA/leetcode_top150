class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int m = s.size(), n = words.size(), len = words[0].size();
        vector<int> ans;
        unordered_map<string, int> dic;
        for (string word : words)
            dic[word]++;
        for (int i = 0; i < len; i++) {
            unordered_map<string, int> temp;
            // sliding window
            int lb = i, ub = i + len;
            bool flag = true;
            int count = 0;
            while (ub <= m) {
                if (flag) {
                    temp[s.substr(ub - len, len)]++;
                    count++;
                  } else {
                    temp[s.substr(lb - len, len)]--;
                    count--; 
                }
                string subStr = s.substr(ub - len, len);
                if (temp[subStr] > dic[subStr]) {
                    lb += len;
                    flag = false;
                } else {
                    ub += len;
                    flag = true;
                    if (count == n) {
                        ans.push_back(lb);
                    }
                }
            }
        }
        return ans;
    }
};
// class Solution {
// public:
//     vector<int> findSubstring(string s, vector<string>& words) {
//         int len = words[0].length(), size = words.size(), n = s.size();
//         vector<int> ans;
//         unordered_map<string, int> mp;
//         if (len * size > n)
//             return ans;
//         for (auto x : words)
//             mp[x]++;
//         for (int i = 0; i <= n - (len * size); i++) {//n
//             unordered_map<string, int> m;
//             for (int j = i; j < i + (len * size); j += len) {//n*n
//                 string current = s.substr(j, len);
//                 if (mp.find(current) == mp.end())
//                     break;
//                 m[current]++;
//                 if (m[current] > mp[current])
//                     break;
//             }
//             if (mp == m)
//                 ans.push_back(i);
//         }
//         return ans;
//     }
// };
// TC=O(n2*len)
