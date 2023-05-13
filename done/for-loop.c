#include <stdio.h>

// the for statement

int main() {
    int fahr;

    for (fahr = 300; //initialization
        fahr >= 0; //test condition that controls the loop
        fahr = fahr - 20) // increment step
        {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}