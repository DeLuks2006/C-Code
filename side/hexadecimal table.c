#include <stdio.h>

int main() {

  /*copied this code for the colors :/ */
  #define green "\x1b[32m"
  #define reset "\x1b[0m"
  //now everything after this line is mine :D
  
  printf(green "-- Hexadecimal table --\n\n" reset);

  int number;
  int range;
  printf("Enter range of numbers: ");
  scanf("%d", &range);
  
  for (number = 0; number <= range; ++number) {
    printf("%d\t0x%x\n", number, number);
  }
}
