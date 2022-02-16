#ifndef UNTITLED1_VECTOR_H
#define UNTITLED1_VECTOR_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct vector {
    int *data;
    size_t size;
    size_t capacity;
} vector;

// создает вектор размера n.
vector createVector(size_t n);

// изменяет количество
//памяти, выделенное под хранение элементов вектора.
void reserve(vector *v, size_t newCapacity);

// удаляет элементы из контейнера.
void clear(vector *v);

//освобождает память, выделенную под
//неиспользуемые элементы.
void shrinkToFit(vector *v);

//освобождает память, выделенную векору.
void deleteVector(vector *v);


#endif
