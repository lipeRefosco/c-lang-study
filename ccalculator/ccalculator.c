#include <stdio.h>

enum Commands{
    EXIT,
    ADD,
    SUB
};

int commandSelector() {
    int tmp;

    printf("Choose a command:\n");

    if(scanf("%d", &tmp) != 1) {
        while(getchar() != '\n');
        return -1;
    }

    return tmp;
}

int main() {
    int command;
    enum Commands existCommand = EXIT;

    while(command != existCommand) {
        command = commandSelector();

        switch(command) {
            case EXIT:
                printf("Bye...\n");
                break;
            default:
                printf("Wrong selection!\n");
        }

    }

    return EXIT;
}
