#include <stdio.h>

#define IN 1
#define OUT 0

// the maximum word length to count
// all words with length > WORD_LENGTH are added to the count of words with length = WORD_LENGTH
#define MAX_WORD_LENGTH 10

void printWordLengthHistogram(int wordLengthFreq[]) {
 for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
    printf("number of words of length %d%s:", (i+1), (i == MAX_WORD_LENGTH-1) ? "+" : "  ");
    for (int j = wordLengthFreq[i]; j > 0; --j) {
      printf("|");
      if (j != wordLengthFreq[i]
	  && ((wordLengthFreq[i] - j) % 5) == 0) {
	printf(" ");
      }
    }
    printf("\n");
  }
}

int main() {
  int c, state, wordLength;
  int wordLengthFreq[MAX_WORD_LENGTH];

  state = OUT;
  wordLength = 0;
  for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
    wordLengthFreq[i] = 0;
  }

  // loop through the input, when we enter a word start counting its length
  // once we exit the word, increment the associated counter for that word's length
  do {
    c = getchar();
    if (c == ' '
	|| c == '\n'
	|| c == '\t'
	|| c == EOF) {
      if (state == IN) {
	// handle wordLengths >= 10 characters
	if (wordLength >= MAX_WORD_LENGTH) {
	  ++wordLengthFreq[MAX_WORD_LENGTH-1];
	}
	// handle wordLengths of 1 to 9 characters
	else {
	  ++wordLengthFreq[wordLength-1];
	}
	wordLength = 0;
      }
      state = OUT;
    }
    else {
      ++wordLength;
      state = IN;
    }
  } while (c != EOF);

  printWordLengthHistogram(wordLengthFreq);
}
