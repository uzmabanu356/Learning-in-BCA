#include<stdio.h>
#include<conio.h>

#define MAX_NODES 5

int main() {
	clrscr();
    int nodes, edges;

    printf("Enter the number of nodes in the graph (max %d): ", MAX_NODES);
    scanf("%d", &nodes);

    int graph[MAX_NODES][MAX_NODES] = {0};

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (source destination):\n");
    for (int i = 0; i < edges; i++) {
        int source, destination;
        scanf("%d %d", &source, &destination);

        if (source >= 0 && source < nodes && destination >= 0 && destination < nodes) {
            graph[source][destination] = 1;
            // Uncomment the next line if the graph is undirected
            // graph[destination][source] = 1;
        } else {
            printf("Invalid edge. Node indices should be between 0 and %d.\n", nodes - 1);
            i--;
        }
    }

    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < nodes; i++) {
        for (int j = 0; j < nodes; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
