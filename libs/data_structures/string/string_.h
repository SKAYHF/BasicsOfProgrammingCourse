#ifndef UNTITLED1_STRING__H
#define UNTITLED1_STRING__H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct WordDescriptor {
    char *begin; // позиция начала слова
    char *end; // позиция первого символа, после последнего символа слова
} WordDescriptor;

#endif
