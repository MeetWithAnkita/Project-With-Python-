#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_VERTICES 100
int findMinColor(bool available[], int n) {
    for (int i = 0; i < n; i++) {
        if (available[i]) {
            return i;
        }
    }
    return -1;
}
int chromaticNumber(int graph[MAX_VERTICES][MAX_VERTICES], int vertices) {
    int color[vertices];
    bool available[vertices];
    for (int i = 0; i < vertices; i++) {
        color[i] = -1;
    }
    color[0] = 0;
    for (int u = 1; u < vertices; u++) {

        for (int i = 0; i < vertices; i++) {
            available[i] = true;
        }

        for (int v = 0; v < vertices; v++) {
            if (graph[u][v] && color[v] != -1) {
                available[color[v]] = false;
            }
        }

        color[u] = findMinColor(available, vertices);
    }
    int maxColor = 0;
    for (int i = 0; i < vertices; i++) {
        if (color[i] > maxColor) {
            maxColor = color[i];
        }
    }
    return maxColor + 1;
}
int main() {
    int vertices, edges;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    if (vertices > MAX_VERTICES) {
        printf("Maximum supported vertices is %d\n", MAX_VERTICES);
        return 1;
    }

    int graph[MAX_VERTICES][MAX_VERTICES] = {0};

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter the edges (format: u v for each edge):\n");
    for (int i = 0; i < edges; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    int chromaticNum = chromaticNumber(graph, vertices);
    printf("The chromatic number of the graph is: %d\n", chromaticNum);

    return 0;
}
