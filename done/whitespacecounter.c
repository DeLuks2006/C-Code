#include <stdio.h>

int main() {
#define green "\x1b[32m"
#define reset "\x1b[0m"
#define lime "\x1b[92m"

  int blank, newline, tab, c;
  blank = 0;
  tab = 0;
  newline = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++newline;
    }
    if (c == '\t') {
      ++tab;
    }
    if (c == ' ') {
      ++blank;
    }
  }
  printf(green "Total:\n\n" reset);
  printf(lime "blanks: %d\ntabs: %d\nnew-lines: %d\n", blank, tab, newline);
  return 0;
}