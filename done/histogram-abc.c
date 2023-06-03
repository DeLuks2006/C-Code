#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c = 0;          // input
  int array[3] = {0}; // array
  int state = IN;
  int nw = 0;
  int i, j, l = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
    }

    if (state == IN) {
      if (c == 'a' || c == 'A') {
        ++array[0];
      } else if (c == 'b' || c == 'B') {
        ++array[1];
      } else if (c == 'c' || c == 'C') {
        ++array[2];
      }
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("\ntotal words: %d\n", nw);
  printf("Letter Counts:\n");
  printf("A/a: ");
  for (i = 0; i < array[0]; ++i) {
    putchar('*');
  }
  putchar('\n');

  printf("B/b: ");
  for (j = 0; j < array[1]; ++j) {
    putchar('*');
  }
  putchar('\n');

  printf("C/c: ");
  for (l = 0; l < array[2]; ++l) {
    putchar('*');
  }
  putchar('\n');
  return 0;
}