//space=O(N) hence not valid
class Solution {
public:
    string reverseWords(string s) {
        string str="";
        string temp="";
        stack<string> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                temp="";
            }
            while(s[i]!=' ' && i<s.length())
            {
                temp+=s[i];
                i++;
            }
            if(temp!="")
                st.push(temp);
            temp="";  
        }
        for(int i=st.size()-1;i>=0;i--)
        {
            str=str+st.top();
            st.pop();
            if(i!=0)
                str+=' ';
        }
        return str;
    }
};
