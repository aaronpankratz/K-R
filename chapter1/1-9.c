#include <stdio.h>

void omitConsecutiveBlanks() {
  int c;
  while ((c = getchar()) == ' ') {
  }
  printf("%c", c);
}

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      omitConsecutiveBlanks();
    }
    else {
      printf("%c", c);
    }
  }
}
