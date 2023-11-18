#include <stdio.h>

enum Commands{
    EXIT,
    ADD,
    SUB
};

int readInt() {
    int tmp;

    if(scanf("%d", &tmp) != 1) {
        while(getchar() != '\n');
        return -1;
    }

    return tmp;
}

int commandSelector() {
    printf("choice a command:\n");
    printf("(1) Add: \n");
    printf("(2) Sub: \n");
    return readInt();
}

void commandAdd() {
    int x, y;
    printf("Define x\n");
    x = readInt();
    printf("Define y\n");
    y = readInt();

    printf("Total: %d\n", x + y);
}

int main() {
    int command;

    while(command != EXIT) {
        command = commandSelector();

        switch(command) {
            case EXIT:
                printf("Bye...\n");
                break;
            case ADD:
                commandAdd();
                break;
            default:
                printf("Wrong selection!\n");
        }

    }

    return EXIT;
}
