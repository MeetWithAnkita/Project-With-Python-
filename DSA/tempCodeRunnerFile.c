#include <stdio.h>
#include <stdbool.h>

#define MAX 20 // Maximum size of the chessboard

int board[MAX][MAX];
int N;

// Function to print the chessboard
void printBoard() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Function to check if placing a queen at (row, col) is safe
bool isSafe(int row, int col) {
    // Check the left side of the row
    for (int i = 0; i < col; i++) {
        if (board[row][i]) return false;
    }
    // Check the upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) return false;
    }
    // Check the lower-left diagonal
    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j]) return false;
    }
    return true;
}

// Recursive function to solve the N-Queens problem
bool solveNQueens(int col) {
    if (col >= N) return true;

    // If a queen is already placed in the current column, skip placement
    for (int i = 0; i < N; i++) {
        if (board[i][col] == 1) {
            // Ensure the queen is in a safe position
            if (!isSafe(i, col)) {
                return false; // Return false if the user-defined position is invalid
            }
            // Recur to solve for the next column
            return solveNQueens(col + 1);
        }
    }

    // Attempt to place a queen in all rows of the current column
    for (int i = 0; i < N; i++) {
        if (isSafe(i, col)) {
            board[i][col] = 1;

            if (solveNQueens(col + 1)) return true;

            board[i][col] = 0; // Backtrack
        }
    }
    return false;
}

int main() {
    int row, col;
    printf("Enter the size of the chessboard (N): ");
    scanf("%d", &N);

    if (N < 4 || N > MAX) {
        printf("N-Queens problem is not solvable for N < 4 or N > %d.\n", MAX);
        return 0;
    }

    printf("Enter the initial queen position (row and column):\n");
    printf("Row (0 to %d): ", N - 1);
    scanf("%d", &row);
    printf("Column (0 to %d): ", N - 1);
    scanf("%d", &col);

    // Initialize the board with 0
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }

    // Place the user-defined queen
    board[row][col] = 1;

    // Solve the problem starting from column 0
    if (!solveNQueens(0)) {
        printf("No solution exists for the given initial position.\n");
    } else {
        printf("One of the solutions is:\n");
        printBoard();
    }

    return 0;
}
