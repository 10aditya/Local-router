#include "dijkstra.h"
#include <stdio.h>
#include <limits.h>

#define V 112

char** stations;
int minDistance(int dist[], int sptSet[]){
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == 0 && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}


void printPath(int parent[], int j){
    if (parent[j]==-1)
        return;
    printPath(parent, parent[j]);
    printf(" -> ");
    printf("%s", stations[j]);

}

int printSolution(int dist[], int se, int n, int parent[], int dest){
    int src = se;
    printf("Total distance to be traveled: %d KM\n", dist[dest]);
        printf("%s",stations[src]);
        printPath(parent, dest);

}

void dijkstra(int **graph, int src, int dest, char** s){
    int dist[V];
    int sptSet[V];
    int parent[V];

    stations = s;

    for (int i = 0; i < V; i++){
        parent[src] = -1;
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }


    dist[src] = 0;

    for (int count = 0; count < V-1; count++){
        int u = minDistance(dist, sptSet);
        sptSet[u] = 1;
        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v]){
                parent[v]  = u;
                dist[v] = dist[u] + graph[u][v];
            }
    }
    printSolution(dist, src, V, parent, dest);
}
