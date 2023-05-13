#include <stdio.h>
int main() {

    int c; // declare input variable
    int nb = 0; // declare variable named nb with value of 0

    while ((c = getchar()) != EOF) { // while the input is not equal to the endoffile do the following
        if ( c != '\t' || c != '\\' || c != '\b') { // if the input doesnt equal to the specified characters set nb to 0
            nb = 0;
        }
        if (c == '\t') {// if c is equal to tab replace it with \t and increment nb to 1
            putchar('\\');
            putchar('t');
            ++nb;
        }
        if (c == '\\') { // same but with backslash
            putchar('\\');
            putchar('\\');
            ++nb;
        }
        if (c == '\b') { // same but with backspave
            putchar('\\');
            putchar('b');
            ++nb;
        }
        if (nb == 0) { // if nb is equal to 0 output the input
            putchar(c);
        }
    }
    return 0;
}