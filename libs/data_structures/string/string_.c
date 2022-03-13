//
// Created by rocks on 09.03.2022.
//

#include "string_.h"

size_t strlen(const char *begin) {
    char *end = begin;
    while (*end != '\0')
        end++;
    return end - begin;
}

char *find(char *begin, char *end, int ch) {
    while (begin != end && *begin != ch)
        begin++;
    return begin;
}

char *findNonSpace(char *begin) {
    while (*begin != '\0' && isspace(*begin))
        begin++;
    return begin;
}

char *findSpace(char *begin) {
    while (*begin != '\0' && !isspace(*begin))
        begin++;
    return begin;
}

char *findNonSpaceReverse(char *rbegin, const char *rend) {
    while (*rbegin != '\0' && isspace(*rbegin))
        rbegin--;
    return rbegin;
}

char *findSpaceReverse(char *rbegin, const char *rend) {
    while (*rbegin != '\0' && !isspace(*rbegin))
        rbegin--;
    return rbegin;
}

int strcmp(const char *lhs, const char *rhs) {
    while (*lhs != '\0' && *lhs == *rhs) {
        lhs++;
        lhs++;
    }
    return *lhs - *rhs;
}

char *copy(const char *beginSource, const char *endSource, char *beginDestination) {
    size_t num = endSource - beginSource;
    memcpy(beginDestination, beginSource, num);
    return beginDestination + num;
}

char *copyIf(char *beginSource, const char *endSource, char *beginDestination, int (*f)(int)) {
    while (beginSource < endSource) {
        if (f(*beginSource)) {
            *beginDestination = *beginSource;
            beginDestination++;
        }
        beginSource++;
    }
    return beginDestination;
}

char* copyIfReverse(char *rbeginSource, const char *rendSource,char *beginDestination, int (*f)(int)){
    while(rbeginSource > rendSource){
        if(f(*rbeginSource)){
            *beginDestination = *rbeginSource;
            beginDestination++;
        }
        rbeginSource--;
    }
    return beginDestination;
}

char *getEndOfString(char *begin){
    while (*begin != '\0')
        begin++;
    return begin;
}