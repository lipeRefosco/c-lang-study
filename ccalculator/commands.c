#include <stdio.h>
#include "commands.h"
#include "readers.h"

int commandSelector() {
    printf("Choice a command:\n");
    printf("(%d) Add: \n", ADD);
    printf("(%d) Sub: \n", SUB);
    return readInt("Only Integers!");
}

void commandAdd() {
    int x, y;

    printf("Define x\n");
    x = readInt("Only Integers!");

    printf("Define y\n");
    y = readInt("Only Integers!");
        
    printf("Total: %d\n", x + y);
}

void commandSub() {
    int x, y;

    printf("Define x\n");
    x = readInt("Only Integers!");

    printf("Define y\n");
    y = readInt("Only Integers!");

    printf("Total: %d\n", x - y);
}
