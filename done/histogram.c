#include <stdio.h>

#define maxword 10
#define IN 1
#define OUT 0

int main() {
  int c; // input
  int i, j; // for loop shit
  int state = IN;
  int nc = 0; // character counter

  int array[maxword + 1];

  for (i = 0; i <= maxword; ++i) {
    array[i] = 0; // set every item in array to 0 
  }
  while ((c = getchar()) != EOF) {
    ++nc;

    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      --nc;
    } else if (state == OUT) { // peeked at solution
      if (nc != 0 && nc <= maxword) { // if new character is not 0 and is max. equal to 10
        ++array[nc]; // increments the corresponding element in the array to record the frequency of that word length. 
      }
      state = IN; // resets the state to IN and resets nc to 0 to start counting the next word.
      nc = 0;
    }
  }
  
  for (i = 1; i <= maxword; ++i) { 
    printf("|%2d| ", i);
    for (j = 0; j < array[i]; ++j) {
      putchar('*');
    }
    putchar('\n');
  }
  return 0;
}