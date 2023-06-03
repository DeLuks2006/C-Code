#include <stdio.h>

int converter(int i);

int main() {
  int celsius, fahrenheit;
  int lower = 0;
  int upper = 300;
  int step = 20;

  fahrenheit = lower;
  while (fahrenheit <= upper) {
    celsius = converter(fahrenheit); // make fahr equal to fahrenheit
    printf("%3d\t%4d\n", fahrenheit, celsius);
    fahrenheit += step;
  }
}

int converter(int fahr) {
  int i;
  i = 5 * (fahr - 32) / 9;
  return i;
}