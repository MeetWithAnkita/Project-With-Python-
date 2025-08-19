#include <stdio.h>
#include <stdbool.h>

#define MAX_PEOPLE 3

typedef struct {
    int M_left, C_left, M_right, C_right;
    int boat; // 0 for left, 1 for right
} State;

// Function prototypes
bool isValidState(State state);
bool isGoalState(State state);
void solveMissionariesCannibals();

int main() {
    solveMissionariesCannibals();
    return 0;
}

// Function to check if a state is valid
bool isValidState(State state) {
    if (state.M_left < 0 || state.C_left < 0 || state.M_right < 0 || state.C_right < 0) {
        return false;
    }
    if (state.M_left > 0 && state.M_left < state.C_left) {
        return false; // Cannibals outnumber missionaries on the left bank
    }
    if (state.M_right > 0 && state.M_right < state.C_right) {
        return false; // Cannibals outnumber missionaries on the right bank
    }
    return true;
}

// Function to check if the goal state is reached
bool isGoalState(State state) {
    return state.M_left == 0 && state.C_left == 0 && state.M_right == MAX_PEOPLE && state.C_right == MAX_PEOPLE;
}

// Function to solve the problem (implement BFS or DFS here)
void solveMissionariesCannibals() {
    // Implement search logic here
    printf("Solution logic goes here.\n");
}
