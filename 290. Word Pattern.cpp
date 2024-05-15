#include <string>
#include <unordered_map>
#include <sstream>

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
        vector<string> words;
        string word;
        while (iss >> word) {
            words.push_back(word);
        }
        if (pattern.length() != words.size()) {
            return false;
        }
        unordered_map<char, string> patternMap;
        unordered_map<string, char> wordMap;
        for (size_t i = 0; i < pattern.length(); ++i) {
            char c = pattern[i];
            const string& w = words[i];
            if (patternMap.find(c) == patternMap.end() && wordMap.find(w) == wordMap.end()) {
                patternMap[c] = w;
                wordMap[w] = c;
            } else {
                if (patternMap[c] != w || wordMap[w] != c) {
                    return false;
                }
            }
        }
        return true;
    }
};
//2 way mapping
//Time-O(N)
