//
// Created by rocks on 14.03.2022.
//

#include "replace.h"


void replace(char *source, char *w1, char *w2) {
    size_t w1Size = strlen(w1);
    size_t w2Size = strlen(w2);
    WordDescriptor word1 = {w1, w1 + w1Size};
    WordDescriptor word2 = {w2, w2 + w2Size};

    char *readPtr, *recPtr;
    if (w1Size >= w2Size) {
        readPtr = source;
        recPtr = source;
    } else {
        copy(source, getEndOfString(source), _stringBuffer);
        readPtr = _stringBuffer;
        recPtr = source;
    }
    WordDescriptor word;

    while (getWord(readPtr, &word)) {
        if (cmpWord(word, word1))
            recPtr = copy(word2.begin, word2.end, readPtr);
        else
            recPtr = copy(word.begin, word.end, recPtr);

        *recPtr = ' ';
        recPtr++;
        readPtr = word.end;
    }

    if (recPtr != source)
        *--recPtr = '\0';
}

