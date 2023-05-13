// character counting
/*
#include <stdio.h> // include library

int main() { //define main funciton
    long nc; //declare long variable

    nc = 0; // set variable to equal 0

    while (getchar() != EOF) { //while getchar is not equal to end of file
        ++nc; // add count to nc
        printf("%ld\n", nc); //print the value of nc
    }
    return 0;
}
*/
/*
the statement ++nc; presents a new operator, ++, which means increment by one.
you could instad write nc = nc +1 but ++nc is more conciese and ogten more efficient.
there is a corresponding operator -- to decrement by one. the operators ++ and -- can be 
either prefix operators (++nc) or postfix (nc++); these two forms have different values in expressions,
as will be shown in Chapter 2, but ++nc and nc++ both incremnet nc. for the moment we will stick to the 
prefix form.

the character counting program accumulates its count in a long variable instead of an int. 
long integers are atleast 32-bits. altough on some machines, int and long are the same size, on others
an int is 16-bits, with a maximum value of 32767, and it would take relatively little input to overflow
an int counter. the conversion specification %ld tells the printf that the corresponding argument is a long integer.

it may be possible to cope with even bigger numbers by using a double (double precision float). we will also use a for
statement instead of a while, to illustrate another way to write the loop

*/

#include <stdio.h>

int main() {
    double nc;
    nc = 0;

    for (nc = 0; getchar(); ++nc) {
        ;
    }
    printf("%0.f\n", nc);
    
}

/*
printf uses %f for both float and double; %.0f supresses printing of the decimal point and the fraction part, which is 0.
the body of this for loop is empty, because all the work is don ein the test and increment parts. but the grammatical rules of C
require that for a for statement have a body. the isolated semicolon, called a null statement, is there to satisfy that requirement.
we put it on a separate line to make it visible. before we leave the characters, the while or for test fails on the very first call to getchar,
and the program produces zero, the right anwser. this is important . one of the nice things about while and for is that they test at the top of
the loop, before proceeding with the body. if there is nothing to do, nothing is done, even if that means never going trough the loop body.
programs should act intelligently when given zero-length input.the while and for statements help ensure that the programs do reasonable things with boundarty conditions
*/