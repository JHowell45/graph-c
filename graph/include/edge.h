#ifndef EDGE_H
#define EDGE_H

#include "vertex.h"

typedef struct vertex vertex_t;

typedef struct edge {
    char *label;
    vertex_t *from;
    vertex_t *to;
} edge_t;

#endif