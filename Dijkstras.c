/*#include <stdio.h>

#define INF 99999

int V;

int minDistance(int dist[], int visited[]) {
    int min = INF;
    int min_index = -1;

    for (int i = 0; i < V; i++) {
        if (visited[i] == 0 && dist[i] < min) {
            min = dist[i];
            min_index = i;
        }
    }

    return min_index;
}

void dijkstra(int graph[50][50], int src) {
    int dist[50];
    int visited[50];

    for (int i = 0; i < V; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {

        int u = minDistance(dist, visited);
        visited[u] = 1;

        for (int v = 0; v < V; v++) {

            // distance matrix logic:
            // graph[u][v] already represents weight (INF if no edge)

            if (!visited[v] &&
                graph[u][v] != INF &&
                dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v]) {

                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("\nVertex \t Distance from Source\n");
    for (int i = 0; i < V; i++) {
        printf("%d \t\t %d\n", i, dist[i]);
    }
}

int main() {
    int graph[50][50];
    int source;

    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter distance matrix (use %d for INF):\n", INF);
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter source vertex: ");
    scanf("%d", &source);

    dijkstra(graph, source);

    return 0;
}
*/
