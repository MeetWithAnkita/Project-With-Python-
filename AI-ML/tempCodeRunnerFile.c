#include <stdio.h>
// #include <stdbool.h>

// #define N 8

// int board[N][N]; // Chessboard

// // Function prototypes
// void printBoard();
// bool isSafe(int row, int col);
// bool solveNQueens(int row);

// int main() {
//     // Initialize the chessboard
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             board[i][j] = 0;
//         }
//     }

//     // Solve the problem
//     if (solveNQueens(0)) {
//         printBoard();
//     } else {
//         printf("No solution exists\n");
//     }

//     return 0;
// }

// // Function to check if the placement is safe
// bool isSafe(int row, int col) {
//     // Check column
//     for (int i = 0; i < row; i++) {
//         if (board[i][col] == 1) {
//             return false;
//         }
//     }
//     // Check diagonals
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
//         if (board[i][j] == 1) {
//             return false;
//         }
//     }
//     for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
//         if (board[i][j] == 1) {
//             return false;
//         }
//     }
//     return true;
// }

// // Function to solve using backtracking
// bool solveNQueens(int row) {
//     if (row == N) {
//         return true; // All queens placed
//     }
//     for (int col = 0; col < N; col++) {
//         if (isSafe(row, col)) {
//             board[row][col] = 1; // Place queen
//             if (solveNQueens(row + 1)) {
//                 return true;
//             }
//             board[row][col] = 0; // Backtrack
//         }
//     }
//     return false; // No valid position
// }

// // Function to print the chessboard
// void printBoard() {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             printf("%d ", board[i][j]);
//         }
//         printf("\n");
//     }
// }