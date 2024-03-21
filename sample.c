#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
char cmd[256] = "wc -c < ";

  sprintf(cmd, argv[1]);
system(cmd);
  
}

