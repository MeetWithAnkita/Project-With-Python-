// #include <stdio.h>
// #include <stdbool.h>

// // Function prototypes
// void waterJugProblem(int x, int y, int z);

// int gcd(int a, int b) {
//     // Find the greatest common divisor
//     if (b == 0) return a;
//     return gcd(b, a % b);
// }

// void waterJugProblem(int x, int y, int z) {
//     if (z > x && z > y) {
//         printf("No solution possible\n");
//         return;
//     }
//     if (z % gcd(x, y) != 0) {
//         printf("No solution possible\n");
//         return;
//     }

//     int a = 0, b = 0; // Initial state
//     while (a != z && b != z) {
//         if (a == 0) {
//             // Fill jug X
//             printf("Fill jug X\n");
//             a = x;
//         } else if (b == y) {
//             // Empty jug Y
//             printf("Empty jug Y\n");
//             b = 0;
//         } else {
//             // Pour water from X to Y
//             int pour = (b + a > y) ? y - b : a;
//             a -= pour;
//             b += pour;
//             printf("Pour %d liters from X to Y\n", pour);
//         }
//         // Print the current state
//         printf("Jug X: %d liters, Jug Y: %d liters\n", a, b);
//     }
//     printf("Target %d liters achieved!\n", z);
// }

// int main() {
//     int x = 4; // Capacity of jug X
//     int y = 3; // Capacity of jug Y
//     int z = 2; // Target amount
//     waterJugProblem(x, y, z);
//     return 0;
// }


