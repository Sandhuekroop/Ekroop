#include <iostream>
using namespace std;

const int N = 4;  // Set N to the desired board size

// Function to check if it's safe to place a queen at (row, col)
bool isSafe(int board[][N], int row, int col) {
    // Check the column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return false;
        }
    }

    // Check the left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // Check the right diagonal
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}

bool nQueen(int board[][N], int row) {
    if (row == N) {
        // All queens are placed successfully.
        // You can print the board here or perform other actions.
        return true;
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 1;  // Place a queen

            if (nQueen(board, row + 1)) {
                return true;  // If placing a queen in this position leads to a solution
            }

            board[row][col] = 0;  // Backtrack if no solution is found
        }
    }

    return false;  // If no solution is found in this row
}

int main() {
    int board[N][N] = {0};  // Initialize the chessboard with zeros
    
    if (nQueen(board, 0)) {
        // Solution found, print the board or perform other actions here
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}
