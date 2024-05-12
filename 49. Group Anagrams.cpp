class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (string& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            map[key].push_back(str);
        }
        vector<vector<string>> anagramGroups;
        for (auto& pair : map) {
            anagramGroups.push_back(pair.second);
        }
        return anagramGroups;
    }
};
