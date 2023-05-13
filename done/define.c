// its bad practice to bury "magic numbers" like 300 and 20 in a program;
// they convey little information to someone who might have to read the
// program later, and they are hard to change in a systematic way.

// one way to deal with magic numbers is to give them meaningful names.
// A # define line defines a symbolic name or symbolic constant to be a particular string of characters

// #define name replacement text

// thereafter, any occurence of name (not in quotes or part of another name)
// will be replaced by the corresponding replacement text. the name has
// the same form as a variable name: a sequence of letters and digits that begins
// with a letter. the replacement text can be any sequence of characters; its not limited to numbers

#include <stdio.h>

#define lower 0
#define upper 300
#define step 20

int main() {
    int fahr;

    for (fahr = lower; fahr <= upper; fahr += step) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}
