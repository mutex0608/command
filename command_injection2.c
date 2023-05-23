#include <stdio.h>

void main(char* filename) {
    char cmd[100];
    FILE *fp;

    snprintf(cmd, sizeof(cmd), "ls %s", filename);

    fp = popen(cmd, "r");
    if (fp == NULL) {
        printf("Failed to run command\n");
        return;
    }

    // read command output
    char output[100];
    while (fgets(output, sizeof(output), fp) != NULL) {
        printf("%s", output);
    }

    pclose(fp);
}
