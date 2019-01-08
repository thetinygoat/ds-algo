#include <stdio.h>
#include <stdlib.h>

struct Graph
{
	int e;
	int v;
	int *adj;
};

struct nodeList
{
	int vertexNumber;
	struct nodeList *next;
};

struct Graph *adjList()
{
	int i, x, y;
	struct nodeList *temp;
	struct Graph *G = (struct Graph *)malloc(sizeof(struct Graph));
	if (!G)
	{
		printf('memory error!!!');
		return NULL;
	}
	printf("number of vertices: ");
	scanf(&G->v);
	printf("number of edges: ");
	scanf(&G->e);

	G->adj = malloc(G->v * sizeof(struct nodeList));

	for (i = 0; i < G->v; i++)
	{
		G->adj[i] = (struct nodeList *)malloc(sizeof(struct nodeList));
		G->adj[i]->vertexNumber = i;
		G->adj[i]->next = G->adj[i];
	}
}