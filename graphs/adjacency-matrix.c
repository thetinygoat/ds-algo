#include <stdio.h>
#include <stdlib.h>

struct Graph
{
	int v;
	int e;
	int **adj;
};

struct Graph *adjacenyMatrixOfGraph()
{
	int i, u, v;

	struct Graph *G = (struct Graph *)malloc(sizeof(struct Graph));
	G->adj = malloc(sizeof(G->v * G->v));
	if (!G)
	{
		printf("memory error !!");
		return NULL;
	}

	scanf("No. of vertices: %d, Number of edges: %d", &G->v, &G->e);
	for (u = 0; u < G->v; u++)
	{
		for (v = 0; v < G->v; v++)
		{
			G->adj[v][v] = 0;
		}
	}
	for (i = 0; i < G->e; i++)
	{
		scanf("reading edge: %d %d", &u, &v);
		// for undirected graph
		G->adj[u][v] = 1;
		G->adj[v][u] = 1;
	}
}

int main(int argc, char const *argv[])
{
	struct Graph *temp = adjacenyMatrixOfGraph();
	return 0;
}
