#include "removeAdjacentEqualLetters.h"


void removeAdjacentEqualLetters(char *s) {
    if (*s == '\0') {
        return;
    }

    char *destination = s + 1;
    s++;

    while (s != destination) {
        if (*(s + 1) != *s) {
            memcpy(destination, s, sizeof(char));
        }
        s++;
    }
    destination++;
    destination = '\0';
}