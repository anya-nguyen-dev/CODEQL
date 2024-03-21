#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    char cmd[BUFSIZE] = "wc -c < ";
    strcat(cmd, argv[1]);
    system(cmd);
    
    return 0;
}
