#include <stdio.h>
#include "readers.h"

int readInt(char msg[]) {
    int tmp;

    if(scanf("%d", &tmp) != 1) {
        while(getchar() != '\n');
        printf("%s\n", msg);
        return readInt(msg);
    }

    return tmp;
}