class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (needle.empty()) return 0; 

        int needleLength = needle.size();
        int haystackLength = haystack.size();

        for (int i = 0; i <= haystackLength - needleLength; i++) {
            int j = 0;
            while (j < needleLength && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == needleLength) {
                return i; 
            }
        }
        return -1; 
    }
};
