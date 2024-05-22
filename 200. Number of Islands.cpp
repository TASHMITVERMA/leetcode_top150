class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int rows = grid.size();
        int cols = grid[0].size();
        int numIslands = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == '1') {
                    ++numIslands;
                    dfs(grid, i, j);
                }
            }
        }
        return numIslands;
    }
private:
    void dfs(vector<vector<char>>& grid, int row, int col) {
        int rows = grid.size();
        int cols = grid[0].size();
        if (row < 0 || row >= rows || col < 0 || col >= cols || grid[row][col] == '0')
            return;
        grid[row][col] = '0'; //visited
        dfs(grid, row + 1, col); // down
        dfs(grid, row - 1, col); // up
        dfs(grid, row, col + 1); // right
        dfs(grid, row, col - 1); // left
    }
};
//O(N2)
//SC=O(n2)
