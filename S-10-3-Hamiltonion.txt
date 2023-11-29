#include <stdio.h>
#include <stdbool.h>

#define MAX 10

int path[MAX];
int graph[MAX][MAX];
int numVertices;

void printSolution() {
    printf("Hamiltonian Circuit: ");
    for (int i = 0; i < numVertices; i++) {
        printf("%d ", path[i]);
    }
    printf("%d\n", path[0]);  // Print the starting vertex to complete the cycle
}

bool isSafe(int v, int pos) {
    if (graph[path[pos - 1]][v] == 0) {
        return false;  // There is no edge between the last vertex in the path and v
    }

    for (int i = 0; i < pos; i++) {
        if (path[i] == v) {
            return false;  // Vertex v is already in the path
        }
    }

    return true;
}

bool hamiltonianUtil(int pos) {
    if (pos == numVertices) {
        // All vertices are included in the path
        // Check if there is an edge between the last and the first vertices
        if (graph[path[pos - 1]][path[0]] == 1) {
            printSolution();
            return true;
        } else {
            return false;
        }
    }

    for (int v = 1; v < numVertices; v++) {
        if (isSafe(v, pos)) {
            path[pos] = v;

            if (hamiltonianUtil(pos + 1)) {
                return true;  // A Hamiltonian circuit is found
            }

            path[pos] = -1;  // Backtrack
        }
    }

    return false;  // No Hamiltonian circuit found
}

void hamiltonianCircuit(int startVertex) {
    path[0] = startVertex;

    for (int i = 1; i < numVertices; i++) {
        path[i] = -1;
    }

    if (!hamiltonianUtil(1)) {
        printf("No Hamiltonian Circuit exists for the given graph.\n");
    }
}

int main() {
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int startVertex;
    printf("Enter the starting vertex: ");
    scanf("%d", &startVertex);

    hamiltonianCircuit(startVertex);

    return 0;
}
