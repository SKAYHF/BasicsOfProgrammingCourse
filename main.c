#include "libs/data_structures/vector/vector.h"


void test_createVector_zeroVector(){
    vector v = createVector(0);
    assert(NULL == v.data);
    assert(v.size == 0);
    assert(v.capacity == 0);
    deleteVector(&v);
}

void test_createVector_emptyVector(){
    vector v = createVector(10);
    assert(v.size = 0);
    assert(v.capacity == 10);
    deleteVector(&v);
}

void test_createVector() {
    test_createVector_zeroVector();
    test_createVector_emptyVector();
}

void test_reserve_zeroCapacity(){
    vector v = createVector(10);
    reserve(&v, 0);
    assert(v.data == 0);
    assert(v.capacity == 0);
    assert(v.size == 0);
    deleteVector(&v);

}

void test_reserve_toZeroVector_emptyVector() {
    vector v = createVector(7);
    pushBack(&v, 6);
    reserve(&v, 5);
    assert(v.capacity == 5);
    assert(v.size == 1);
    deleteVector(&v);
}

void test_reserve_increasingTheSize() {
    vector v = createVector(8);
    pushBack(&v,8);
    pushBack(&v,6);
    reserve(&v,3);
    assert(v.capacity == 3);
    assert(v.size == 3);
    deleteVector(&v);
}

void test_clear_vector(){
    vector v = createVector(2);
    pushBack(&v,2);
    pushBack(&v,3);
    clear(&v);
    assert(v.capacity == 0);
    assert(v.size == 0);
    deleteVector(&v);
}

void test_isEmpty_toFitNotVectorWithCapacityMoreSize() {
    vector  v = createVector(5);
    pushBack(&v, 6);
    pushBack(&v, 7);
    shrinkToFit(&v);
    assert(isEmpty(&v));
    deleteVector(&v);
}

void test_isEmpty_vector(){
    vector v = createVector(3);
    shrinkToFit(&v);
    assert(isEmpty(&v));
    deleteVector(&v);
}

void test_isEmply_fullVector(){
    vector  v = createVector(5);
    pushBack(&v, 3);
    shrinkToFit(&v);
    assert(isEmpty(&v));
    deleteVector(&v);
}

void test_pushBack_Vector(){
    vector v = createVector(0);
    pushBack(&v,3);
    assert(v.size == 1);
    assert(v.capacity == 1);
    deleteVector(&v);

}

void test_pushBack_fullVector(){
    vector v = createVector(3);
    pushBack(&v,1);
    assert(v.size == 2);
    assert(v.capacity == 3);
}

void test_pushBack_notEmptyVector(){
    vector v = createVector(9);
    pushBack(&v, 7);
    assert(v.size == 2);
    assert(v.capacity == 9);
    deleteVector(&v);
}



int main() {
    vector v = createVector(SIZE_MAX);
    return 0;
}
