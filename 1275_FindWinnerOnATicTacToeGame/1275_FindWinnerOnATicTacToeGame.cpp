#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> board(3, vector<char>(3, ' ')); // 3x3 grid initialized with ' '
        bool turn = false; // false: A's turn (X), true: B's turn (O)

        // Store the board record based on moves
        for (const auto &move : moves) {
            if (!turn) {
                board[move[0]][move[1]] = 'X'; // A places 'X'
                turn = true;
            } else {
                board[move[0]][move[1]] = 'O'; // B places 'O'
                turn = false;
            }
        }

        // Check rows, columns, and diagonals for a winner
        for (int i = 0; i < 3; ++i) {
            // Check rows
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
                return board[i][0] == 'X' ? "A" : "B";
            // Check columns
            if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
                return board[0][i] == 'X' ? "A" : "B";
        }

        // Check diagonals
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
            return board[0][0] == 'X' ? "A" : "B";
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
            return board[0][2] == 'X' ? "A" : "B";

        // If no winner but all moves are played, it's a draw
        if (moves.size() == 9)
            return "Draw";

        // Otherwise, the game is still pending
        return "Pending";
    }
};