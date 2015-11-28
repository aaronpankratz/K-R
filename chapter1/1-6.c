#include <stdio.h>

/*
  prints the character and whether the character equals EOF
  on Mac OSX ctrl-z produces EOF
 */
int main() {
  int c;
  while ((c = getchar()) != EOF) {
    printf("c = %c %d\n", c, c != EOF);
  }
  printf("c = %c %d\n", c, c != EOF);
}
