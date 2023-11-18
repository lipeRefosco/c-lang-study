#ifndef COMMANDS_H
#define COMMANDS_H

enum Commands{
    EXIT,
    ADD,
    SUB
};

int commandSelector();

void commandAdd();

void commandSub();

#endif