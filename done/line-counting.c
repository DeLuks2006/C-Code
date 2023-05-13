/*
the next program counts input lines. as we mention above, the standard library
ensures that an input text stream appears as a sequence of lines, each terminated
by a newline. hence counting lines is just conting newlines:
*/

// TODO: this is broken!!! return to it later!

#include <stdio.h>

int main() {
    int c, nl;
    nl = 0;
    while((c = getchar()) != EOF) {
        if(c == '\n') { // == is the notation to 'is equal to'
            ++nl;
        }
    }
    printf("%d\n", nl);
    return 0;
}

/*
the body of the while consists now of an if, which in turn controls the increment ++nl

a character in single quotes represents an integer value equal to the numerical value of the character in the machine's character set.
this is called a character constant, altough it is just another way to write a small integer.

e.g. 'A' is a character constant; in the ASCII character set its value is 65, the internal representation of the character A.
of course 'A' is to be preferred over 65: its meaning is obvious, and it is independent of a particular character set.

the escape sequences used in strings constants are also legal in character constants, so '\n' stands for the value of the newline character,
which is 10 in ASCII.

you should note that '\n' is a single character, and in expressions is jut an integer; on the other hand, "\n" is a string constant that
happens to contain only one character. the topic of strings versus characters is discussed in chapter 2.
*/