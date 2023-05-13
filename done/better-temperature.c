#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Welcome to the Better Temperature Conversion Table (BTCT)");

    while (fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}


/*
%d      print as decimal integer
%6d     print as decimal integer, atleast 6 characters wide
%f      print as a floating point
%6f     print as a floating point, at least 6 characters wide
%.2f    print as a floating point, 2 characters after decimal point
%6.2f   print as a floating point, at least 6 wide and 2 after decimal point

among others C recognizes: 
%o for octal, 
%x for hexadecimal, 
%c for characters,
%s for character string,
%% for % itself 
*/