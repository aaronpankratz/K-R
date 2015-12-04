#include <stdio.h>

#define IN 1
#define OUT 0

// the number of characters to keep count of
// we are keeping track of characters 32 - 126 of the ASCII table
#define FIRST_CHARACTER ' '
#define LAST_CHARACTER '~'
#define NUMBER_OF_CHARACTERS (LAST_CHARACTER - FIRST_CHARACTER) + 1

void printWordLengthHistogram(int characterCounts[]) {
 for (int i = 0; i < NUMBER_OF_CHARACTERS; ++i) {
   printf("number of occurences of the character, %c :", i + FIRST_CHARACTER);
    for (int j = characterCounts[i]; j > 0; --j) {
      printf("|");
      if (j != characterCounts[i]
	  && ((characterCounts[i] - j) % 5) == 0) {
	printf(" ");
      }
    }
    printf("\n");
  }
}

int main() {
  int c;
  int characterCounts[NUMBER_OF_CHARACTERS];

  for (int i = 0; i < NUMBER_OF_CHARACTERS; ++i) {
    characterCounts[i] = 0;
  }

  do {
    c = getchar();
    ++characterCounts[c - FIRST_CHARACTER];
  } while (c != EOF);

  printWordLengthHistogram(characterCounts);
}
