// #include <vector>

// using namespace std;

// class Solution {
// public:
//     void solve(vector<vector<char>>& board) {
//         int n = board.size();
//         if (n == 0) return; 
//         for (int i = 1; i < n-1; ++i) {
//             for (int j = 1; j < n-1; ++j) {
//                 if (board[i][j] == 'O' && check(board, i, j, n)) {
//                     flip(board, i, j);
//                 }
//             }
//         }
//     }
//     bool check(vector<vector<char>>& board, int i, int j, int n) {
//         bool a1 = false, a2 = false, a3 = false, a4 = false;
//         for (int k = i; k < n; ++k) {
//             if (board[k][j] == 'X') {
//                 a1 = true;
//                 break;
//             }
//         }
//         for (int k = i; k >= 0; --k) {
//             if (board[k][j] == 'X') {
//                 a2 = true;
//                 break;
//             }
//         }
//         for (int k = j; k >= 0; --k) {
//             if (board[i][k] == 'X') {
//                 a3 = true;
//                 break;
//             }
//         }
//         for (int k = j; k < n; ++k) {
//             if (board[i][k] == 'X') {
//                 a4 = true;
//                 break;
//             }
//         }
//         return a1 && a2 && a3 && a4;
//     }
//     void flip(vector<vector<char>>& board, int i, int j) {
//         board[i][j] = 'X';
//     }
// };

#include <vector>
using namespace std;
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        vector<vector<int>> vis(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O' && isBorder(board, i, j)) {
                    flip(board, i, j);
                } }}
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                } else if (board[i][j] == '#') {
                    board[i][j] = 'O';
                } } }}
    bool isBorder(vector<vector<char>>& board, int i, int j) {
        return (i == 0 || i == board.size() - 1 || j == 0 || j == board[0].size() - 1);}
    void flip(vector<vector<char>>& board, int i, int j) {
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'O') {
            return; }
        board[i][j] = '#';
        flip(board, i + 1, j);
        flip(board, i - 1, j);
        flip(board, i, j + 1);
        flip(board, i, j - 1);}
        };
