#include <stdio.h>
#include <limits.h>

#define MAX 100

int n;                 
int cost[MAX][MAX];    


void prims() {
    int visited[MAX] = {0};
    int min, u = 0, v = 0;
    int total_cost = 0;

    visited[0] = 1; 
    printf("\nEdges in Minimum Spanning Tree:\n");

    for (int i = 0; i < n - 1; i++) {
        min = INT_MAX;

        for (int j = 0; j < n; j++) {
            if (visited[j]) {
                for (int k = 0; k < n; k++) {
                    if (!visited[k] && cost[j][k] < min) {
                        min = cost[j][k];
                        u = j;
                        v = k;
                    }
                }
            }
        }

        printf("%d -> %d  cost = %d\n", u, v, min);
        total_cost += min;
        visited[v] = 1;
    }

    printf("\nTotal Minimum Cost = %d\n", total_cost);
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost adjacency matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);

           
            if (cost[i][j] == 0)
                cost[i][j] = INT_MAX;
        }
    }

    prims();

    return 0;
}
