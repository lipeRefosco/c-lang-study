#include <stdio.h>
#include "commands.h"

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
