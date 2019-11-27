#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ) {
  char ** arr;
  int i;
  for (i= 0; line != NULL; i++) {
    arr[i] = strsep(&line, " ");
  }
  arr[i] = NULL;
  return arr;
}

int main() {
  char line[100] = "ls -a -l";
  char ** args = parse_args(line);
  execvp(args[0], args);
  return 0;
}
