#include <stdio.h>
#include "vector.h"

vector createVector(size_t n){
    int *data = (int*) malloc (n * sizeof(int));
    if(!data){
        fprintf(stderr, "bad alloc");
        exit(1);
    }
    return (vector) {data, .size = 0, n};
}

void reserve(vector *v, size_t newCapacity){
    v->data = (int*) malloc(v->size * sizeof(int));
    v->data = realloc(v->data, newCapacity * sizeof(int));

    if(!v->data){
        fprintf(stderr,"ba alloc");
        exit(1);
    }
    else if (newCapacity == 0){
        v->data = NULL;
    }
    else if (newCapacity < v->size){
        v->size = newCapacity;
    }
    free(v->data);
}

void clear(vector *v){
    v->size = 0;
}

void shrinkToFit(vector *v){
    reserve(v,v->size);
}
void deleteVector(vector *v){
    v->data = (int*) malloc(v->size = 0);
    realloc(v->data, 0);
}
