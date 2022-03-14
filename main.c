#include <stdio.h>
#include "libs/data_structures/string/tasks_test.h"



int main(){
    void tests_tasks();
}

























//#include <stdio.h>
//#include <stdbool.h>
//
//
//void Inversion(const bool *a, bool *c) { //Инверсия
//    for (int i = 0; i < 9; ++i) {
//        c[i] = !a[i];
//    }
//}
//
//void Denial(const bool *a, const bool *b, bool *c) { //Разность множеств
//    for (int i = 0; i < 9; ++i) {
//        if (a[i] == true && a[i] != b[i])
//            c[i] = true;
//        else
//            c[i] = false;
//    }
//}
//
//void Addition(const bool *a, const bool *b, bool *c) { //Дополнение(xor)
//    for (int i = 0; i < 9; ++i) {
//        if (a[i] == true && a[i] != b[i])
//            c[i] = true;
//    }
//    for (int i = 0; i < 9; ++i) {
//        if (b[i] == true && b[i] != a[i])
//            c[i] = true;
//    }
//}
//
//void Intersection(const bool *a, const bool *b, bool *c) { //Пересечение
//    for (int i = 0; i < 9; ++i) {
//        if (a[i] == true && a[i] == b[i])
//            c[i] = true;
//        else
//            c[i] = false;
//    }
//}
//
//void Unification(const bool *a, const bool *b, bool *c) { //Объединение
//    for (int i = 0; i < 9; ++i) {
//        c[i] = a[i] | b[i];
//    }
//}
//
//void Conclusion(const bool *a) {
//    for (int i = 0; i < 9; ++i)
//        if (a[i] == true)
//            printf("%d ", i + 1);
//    printf("\n");
//}
//
//int main() {
//// 1, 2, 3, 4, 5, 6, 7, 8, 9
//    const bool A[] = {true, true, false, true, true, false, false, true, false};
//    const bool B[] = {false, true, true, false, true, true, false, false, true};
//    const bool C[] = {false, false, false, true, true, true, true, false, true};
//    bool d1[10] = {false};
//    bool d2[10] = {false};
//    bool D[10] = {false};
//    Addition(A, C, d1);
//    Conclusion(d1);
//    Intersection(A, C, d2);
//    Conclusion(d2);
//    Intersection(B, d1, d1);
//    Conclusion(d1);
//    Unification(B, d1, d1);
//    Conclusion(d1);
//    Denial(d2, d1, D);
//    Conclusion(D);
//    return 0;
//}

