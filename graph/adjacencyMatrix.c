#include <stdio.h>
struct Graph {
    int V;
    int E;
    int **Adj;
};

struct Graph *adjacencyMatrix()
{
    int i, u, v;
    struct Graph *G = (struct Graph*)malloc(sizeof(struct Graph));
    if (!G) {
        printf("Memeory Error");
        return;
    }

    scanf("Number of vertices: %d, Number of Edges:%d", &G->V, &G->E);
    G->Adj = malloc(sizeof(G->V * G->V));
    for(u = 0; u < G->V;u++) {
        for(v=0; v < G->V; v++) {
            G->Adj[v][v]= 0;
        }
    }

    for (i = 0; i < G->E; i++) {
        scanf("Reading Edge: %d %d", &u, &v);
        G->Adj[u][v] = 1;
        G->Adj[v][u] = 1;
    }
    return G;
};



int main () {
    adjacencyMatrix();
}