#include <stdio.h>
int main() {
  int c;      // declare input variable
  int uwu = 0; // declare variable named nb with value of 0

  printf("\x1b[95m UWU -- wewcome to Totaw UwU Conwewtew -- UWU \n \x1b[35mpwease input youw message hewe bewow: \n\n\x1b[97m");
  
  while ((c = getchar()) != EOF) {
    if (c != '\t' || c != '\\' || c != '\b') {
      uwu = 0;
    }
    if (c == 'l' || c == 'r') { 
      putchar('w');
      ++uwu;
    }
    if (uwu == 0) {
      putchar(c);
    }
  }
  return 0;
}