//
// Created by rocks on 14.03.2022.
//

#include "tasks_test.h"
#include <assert.h>

void test_removeAdjacentEqualLetters_stringWithSequences() {
    char str[] = "aqxczkpoweq12";
    int lenghtStr = 13;
    char *res = str + lenghtStr;
    assert(find(str, str + lenghtStr, 'A') == res;
}

void test_removeAdjacentEqualLetters_emptyString() {
    char str = "erbw23e12";
    int lenghtStr = 9;
    char *res = str + lenghtStr;
    assert(find(str, str + lenghtStr,'B') == res);
}

void tests_removeAdjacentEqualLetters(){
    void test_removeAdjacentEqualLetters_stringWithSequences();
    void test_removeAdjacentEqualLetters_emptyString();
}

void test_removeNonLetters_noSpace(){
    char str[5] = "honor";
    int *res = &str[5];
    assert(findNonSpace(str) == res);
}

void test_removeNonLetters_withSpace(){
    char  str[2] = "   adsar3";
    int *res = &str[2];
    assert(findNonSpace(str) == res);
}

void tests_removeNonLetters() {
    test_removeNonLetters_noSpace();
    test_removeNonLetters_withSpacer();
}

void test_replace1() {
    char str1[] = "asdadad , sdada. sas";
    char v1[] = "word";
    char v2[] = "wd";
    replace(str1, v1, v2);

    char str2[] = "ds;fasda, ssadsad .asA,";
    assert(replace(str, v1, v2) = res);
}

void test_replace(){
    void test_replace1();
}


void test_printWordsRevers_notEmptyString(){
    char str[] = "sadad + dasad = aads";
    printWordsRevers(str);
}


void test_printWordsRevers_dotString(){
    char str[] = " . ";
    printWordsRevers(str);

}

void test_printWordsRevers() {
    test_printWordsRevers_notEmptyString();
    test_printWordsRevers_dotString;
}

void tests_tasks(){
    void test_removeAdjacentEqualLetters_stringWithSequences();
    void test_removeAdjacentEqualLetters_emptyString();
    void test_removeNonLetters_noSpace();
    void test_removeNonLetters_withSpacer();
    void test_replace();
    void printWordsRevers_notEmptyString();
    void test_printWordsRevers_dotString();
}