#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {

char *cmdargv = argv[1];  
char cmdsize[256] = {0};
  encodeShellString(cmdsize, 256, cmdargv); 

char cmd[256] = {0};

sprintf(cmd, "userinfo -v %s", cmdsize);
system(cmd);
}
