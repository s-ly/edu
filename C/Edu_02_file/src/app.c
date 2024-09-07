#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE* fp = fopen("file2.txt", "r");
  if (fp == NULL) {
    perror("Error opening");
    exit(EXIT_FAILURE);
  }
  fclose(fp);
  return 0;
}