#include <stdio.h>

int main() {
    int c;
    int nw = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ') {
            putchar('\n');
            ++nw;
        }
        if(c != ' ') {
            putchar(c);
        }
    }
    return 0;
}