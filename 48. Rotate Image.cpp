class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();
        // step 1 transpose
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // step 2 reverse every row
        for(int i = 0;i<n;i++){
            // row is matrix[i]
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
