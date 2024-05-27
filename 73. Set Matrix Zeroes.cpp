class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> p;
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    p.push_back({i, j}); 
                }
            }
        }
        for(int k = 0; k < p.size(); k++) {
            int row = p[k].first;
            int col = p[k].second;
            for(int i = 0; i < matrix.size(); i++) {
                matrix[i][col] = 0; 
            }
            for(int j = 0; j < matrix[0].size(); j++) {
                matrix[row][j] = 0; 
            }
        }
    }
};
//space complexity=O(N)
//time complexity=O(N2)
