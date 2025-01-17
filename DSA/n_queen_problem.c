#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100 

int board[MAX_SIZE][MAX_SIZE];


void printSolution(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(" %d ", board[i][j]);
        }
        printf("\n");
    }
}


bool isSafe(int row, int col, int N) {

    for (int i = 0; i < col; i++) {
        if (board[row][i]) {
            return false;
        }
    }

 
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false;
        }
    }

    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j]) {
            return false;
        }
    }

    return true;
}

bool solveNQueens(int col, int N) {
    if (col >= N) {
        return true;
    }

    for (int i = 0; i < N; i++) {
        if (isSafe(i, col, N)) {
            board[i][col] = 1; 

            if (solveNQueens(col + 1, N)) {
                return true;
            }

            board[i][col] = 0; 
        }
    }

    return false;
}

int main() {
    int N;
    printf("Enter the size of the chessboard: ");
    scanf("%d", &N);

    if (N < 4 || N > MAX_SIZE)
    {
        printf("Invalid board size. Must be between 4 and %d.\n", MAX_SIZE);
        return 1;
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }

    if (solveNQueens(0, N)) {
        printf("Solution exists:\n");
        printSolution(N);
    } else {
        printf("Solution does not exist\n");
    }

    return 0;
}

