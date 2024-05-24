class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> combinations;
        generate("", n, n, combinations);
        return combinations;
    }
    void generate(string s,int left,int right,vector<string>& combinations) {
        if (left == 0 && right == 0) {
            combinations.push_back(s);
            return;
        }
        if (left > 0) {
            generate(s + "(", left - 1, right, combinations);
        }
        if (right > left) {
            generate(s + ")", left, right - 1, combinations);
        }
    }
};
//tc=O(2^N)
//sc=O(1)
//recursion
