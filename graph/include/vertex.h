#ifndef VERTEX_H
#define VERTEX_H

#include <uuid/uuid.h>

#include "edge.h"

typedef struct edge edge_t;

typedef struct vertex {
    uuid_t key;
    edge_t **forward_relationships;
    edge_t **backward_relationships;
} vertex_t;

vertex_t *createVertex();
void freeVertex(vertex_t *vertex);
void printVertex(vertex_t *vertex);

void vertexAddForwardRelationship(vertex_t *vertex, edge_t *new_relationship);

#endif