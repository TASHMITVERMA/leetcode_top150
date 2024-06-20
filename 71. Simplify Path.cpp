class Solution {
public:
    string simplifyPath(string s) 
    {
        string ok;
        vector<string>store;
        int i = 1, n = s.size();
        while(i < n)
        {
            while(s[i]=='/') i++;
            while(s[i] and s[i] != '/') ok += s[i++];

            if(ok == ".." and store.size()) store.pop_back();
            else if(ok.size() and ok != "." and ok != "..") store.push_back(ok);
            ok.clear();
        }
        
        ok = "/";
        for(auto str:store) ok += str, ok += "/";
        if(ok.size() > 1) ok.pop_back();
        
        return ok;
    }
};
