#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    char program_name[100];

    printf("Enter the program name to execute: ");
    fgets(program_name, sizeof(program_name), stdin);
    
    // Remove the newline character from fgets
    program_name[strcspn(program_name, "\n")] = 0;

    if (execl(program_name, program_name, (char *)0) < 0) {
        perror("execl error");
        return 1;
    }

    return 0;
}
