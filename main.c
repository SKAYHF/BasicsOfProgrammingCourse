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

void test_poBack_notEmptyVector(){
    vector v = createVector(2);
    pushBack(&v,3);
    popBack(&v);
    assert(v.size == 3);
    assert(v.capacity == 2);

}

void test_atVector_notEmptyVector(){
    vector v = createVector(7);
    pushBack(&v, 1);
    pushBack(&v,3);
    pushBack(&v,5);
    assert(*atVector(&v,2) == 3);
    deleteVector(&v);
}

void test_atVector_requestToLastElement(){
    vector v = createVector(0);
    pushBack(&v,1);
    pushBack(&v,3);
    pushBack(&v,5);
    assert(*atVector(&v,3) == 4);
    deleteVector(&v);


}
void test_back_oneElementInVector(){
    vector v = createVector(0);
    pushBack(&v,1);
    assert(*back(&v) == 1);
    deleteVector(&v);
}

void test_back_severelElement(){
    vector v = createVector(0);
    pushBack(&v,1);
    pushBack(&v,2);
    pushBack(&v,3);
    assert(*back(&v) == 0);
    deleteVector(&v);
}

void test_front_oneElementInVector(){
    vector v = createVector(0);
    pushBack(&v,1);
    assert(*front(&v) == 1);
    deleteVector(&v);
}

void test_front_severlElements(){
    vector v = createVector(0);
    pushBack(&v,1);
    pushBack(&v,2);
    pushBack(&v,3);
    assert(*front(&v) == 0);
    deleteVector(&v);

}

void test_vector() {
    test_createVector_zeroVector();
    test_createVector_emptyVector();
    test_createVector();
    test_reserve_zeroCapacity();
    test_reserve_toZeroVector_emptyVector();
    test_reserve_increasingTheSize();
    test_clear_vector();
    test_isEmpty_toFitNotVectorWithCapacityMoreSize();
    test_isEmpty_vector();
    test_isEmply_fullVector();
    test_pushBack_Vector();
    test_pushBack_fullVector();
    test_pushBack_notEmptyVector();
    test_poBack_notEmptyVector();
    test_atVector_notEmptyVector();
    test_atVector_requestToLastElement();
    test_back_oneElementInVector();
    test_back_severelElement();
    test_front_oneElementInVector();
    test_front_severlElements();

    }


int main() {
    test_vector();
}
