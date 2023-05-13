#include <stdio.h>

int main() {
    int fahr, celsius; // int means integer, u can also use float for KOMMAZAHLEN
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while ( fahr <= upper )  { 
        celsius = 5 * ( fahr - 32 ) / 9;
        printf("%d\t%d\n", fahr, celsius); //%d specifies the integer argument. \t stands for tab 
        fahr = fahr + step;
    }
    return 0;
}

// other data types include

/*
char     character- single byte
short    short integer
long     long integer
double   double-precision floating point*/

//scanf reads input... will be discussed in chapter 7