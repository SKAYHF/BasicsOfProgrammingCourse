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

bool isEmpty(vector *v){
    return v->size == 0;
}

bool isFull(vector *v){
    v->size == v->capacity;
}

int getVectorValue(vector *v, size_t i){
    return v->data[i];
}

void pushBack(vector *v, int x){
    if(isFull(v)){
        reserve(v, v->capacity ? v->capacity * 2 : 1);
    } else {
        v->data[v->size] = x;
        v->size++;
    }
}

void popBack(vector *v){
    if (isEmpty(v)){
        fprintf(stderr, "empty vector ");
        exit(1);
    }
    v->size--;
}

int* atVector(vector *v, size_t index){
    if (index < v->size){
        return &v->data[index];
    } else{
        fprintf(stderr, "empty vector ");
        exit(1);
    }
}

int* back(vector *v){
    return atVector(v,v->size - 1);
}

int *front(vector *v){
    return atVector(v,0);
}