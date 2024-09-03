#include <stdlib.h>
#include <uuid/uuid.h>

#include "vertex.h"

#define DEFAULT_RELATIONSHIPS_SIZE 10

vertex_t *createVertex()
{
    vertex_t *vertex = malloc(sizeof(vertex_t));
    uuid_generate_random(vertex->key);
    vertex->forward_relationships =
        calloc(DEFAULT_RELATIONSHIPS_SIZE, sizeof(edge_t));
    vertex->backward_relationships =
        calloc(DEFAULT_RELATIONSHIPS_SIZE, sizeof(edge_t));
    return vertex;
}
void freeVertex(vertex_t *vertex)
{
    free(vertex->forward_relationships);
    free(vertex->backward_relationships);
    free(vertex);
}

void vertexAddForwardRelationship(vertex_t *vertex, edge_t *new_relationship)
{
}