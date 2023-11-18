#include <stdio.h>

enum Commands{
    EXIT,
    ADD,
    SUB
};

int readInt(char msg[]) {
    int tmp;

    if(scanf("%d", &tmp) != 1) {
        while(getchar() != '\n');
        printf("%s\n", msg);
        return readInt(msg);
    }

    return tmp;
}

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
            case SUB:
                commandSub();
                break;
            default:
                printf("Wrong selection!\n");
        }

    }

    return EXIT;
}
