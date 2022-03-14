//
// Created by rocks on 14.03.2022.
//

#include "printWordsRevers.h"

void printWordsRevers(char *beginString){
    getBagOfWords(&bag,beginString);

    for (int i = bag.size - 1; i >= 0 ; --i) {
        printf("%d", bag.words[i]);
        printf('\n');
    }
}