#include <stdio.h>

int main() {
  int c, i, nwhite, nother;
  int ndigit[10]; // declares ndigit to be an array of 10 integers

  nwhite = nother = 0;
  for (i = 0; i < 10; ++i) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') { // checks if the character is a digit
      ++ndigit[c - '0']; // of it is the numeric value of that digit is c - '0'
    }
    else if (c == ' ' || c == '\n' || c == '\t') {
      ++nwhite;
    }
    else {
      ++nother;
    }
    }
  printf("\ndigits =");
  for (i = 0; i < 10; ++i) { 
    printf(" %d", ndigit[i]);
  }
  printf(", white space = %d, other = %d\n", nwhite, nother);
  return 0;
}