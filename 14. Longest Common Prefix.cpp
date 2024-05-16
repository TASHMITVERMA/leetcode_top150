class Solution {
public:
    string longestCommonPrefix(vector<string>& str) 
    {
        sort(str.begin(), str.end()); 
        string ans=""; 
        for(int i=0;i<str[0].length();i++) 
        {
            if(str[0][i]!=str[str.size()-1][i]) // checking the characters of the first and last string
                break;
            ans+=str[0][i]; // concatinate if the characters are matching
        }
        return ans;
    }
};
