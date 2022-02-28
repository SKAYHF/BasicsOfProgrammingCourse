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
    vector v = createVector(5);
    size_t newCapasity = 0;
    reserve(&v,newCapasity);
}




int main() {
    vector v = createVector(SIZE_MAX);
    return 0;
}
