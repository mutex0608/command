#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main() {
    char* command;
    char user_input[20];

    fgets(user_input, sizeof(user_input), stdin);
    command = malloc(strlen("ls ") + strlen(user_input) + 1);

    strcat(command, "ls ");
    strcat(command, user_input);

    system(command);
}