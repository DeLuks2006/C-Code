#include <stdio.h>

int main() {

    int blank, newline, tab, c;
    blank = 0;
    tab = 0;
    newline = 0;

    while((c = getchar()) != EOF) {
        if ( c == '\n') {
            ++newline;
        }
        if (c == '\t') {
            ++tab;
        }
        if (c == ' ') {
            ++blank;
        }
    }
    printf("blanks: %d\ntabs: %d\nnew-lines: %d", blank,tab,newline);
    return 0;
}