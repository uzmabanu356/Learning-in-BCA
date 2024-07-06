#include<conio.h>
#include <stdio.h>
#include <limits.h>
#define V 5

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], int sptSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++) {
	if (sptSet[v] == 0 && dist[v] <= min) {
	    min = dist[v];
	    min_index = v;
	}
    }

    return min_index;
}

// Function to print the constructed distance array
void printSolution(int dist[]) {
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < V; i++)
	printf("%d \t %d\n", i, dist[i]);
}

// Function that implements Dijkstra's single source shortest path algorithm
void dijkstra(int graph[V][V], int src, int dest) {
    int dist[V];     // The output array dist[i] holds the shortest distance from src to i
    int sptSet[V];   // sptSet[i] will be true if vertex i is included in the shortest path tree or the shortest distance from src to i is finalized

    // Initialize all distances as INFINITE and sptSet[] as false
    for (int i = 0; i < V; i++) {
	dist[i] = INT_MAX;
	sptSet[i] = 0;
    }

    // Distance from the source vertex to itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
	int u = minDistance(dist, sptSet);
	sptSet[u] = 1;

	// Update dist value of the adjacent vertices of the picked vertex.
	for (int v = 0; v < V; v++) {
	    if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
		dist[v] = dist[u] + graph[u][v];
	}
    }

    // Print the constructed distance array
    printSolution(dist);

    // Print the shortest path from source to destination
    printf("\nShortest path from %d to %d is: %d\n", src, dest, dist[dest]);
}

int main() {
	clrscr();
    // Example graph represented as an adjacency matrix
    int graph[V][V] = {
	{0, 2, 0, 6, 0},
	{2, 0, 3, 8, 5},
	{0, 3, 0, 0, 7},
	{6, 8, 0, 0, 9},
	{0, 5, 7, 9, 0}
    };

    int source = 0;
    int destination = 4;

    dijkstra(graph, source, destination);

    getch();
    return 0;
}