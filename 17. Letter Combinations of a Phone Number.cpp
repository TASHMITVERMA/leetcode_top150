class Solution {
public:
    void generateCombos(int idx,string& digits,string temp, vector<string>& sol,vector<string>& mp) 
    {
        if (idx == digits.length()) {
            if (!temp.empty())
                sol.push_back(temp);
            return;
        }
        int n=digits[idx]-'0';
        string a=mp[n];
        for(auto b:a)
        {
            generateCombos(idx+1,digits,temp+b,sol,mp);
        }
    }
    vector<string> letterCombinations(string digits)
    {
       vector<string> sol;
        if (!digits.empty()) {
            vector<string> mp = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
            generateCombos(0, digits, "", sol, mp);
        }
        return sol;    
    }
};
//tc=4^digit length*n
//recursion
