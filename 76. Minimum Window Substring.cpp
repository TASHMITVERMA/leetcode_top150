class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) {
            return "";
        }
        vector<int> mp(128, 0);
        int count = t.length();
        int start = 0, end = 0, minLen = INT_MAX, startIndex = 0;

        for (char c : t) {
            mp[c]++;
        }//freq

        while (end < s.length()) {
            if (mp[s[end++]]-- > 0) {
                count--;
            }
            //all char of 't' are found in the current window
            while (count == 0) {
                 // urrent window is smaller than the minimum found 
                if (end - start < minLen) {
                    startIndex = start;
                    minLen = end - start;
                }

                if (mp[s[start++]]++ == 0) {
                    count++;
                }
            }
        }

        return minLen == INT_MAX ? "" : s.substr(startIndex, minLen);
    }
};
//time complexity=O(N)
//space=O(1)
//sliding window with hash
