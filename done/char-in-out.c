// character input and output

/* we are now going to consider a family of related programs for processing character data
   you will find that many programs are just expanded versions of the prototypes that we 
   discuss here.
   the model of input and output supported by the standard library is very simple.
   text input or output , regardless of where it originates or where it goes to is
   dealt with as streams of characters. A text stram is a sequence of characters divided
   into lines; each line consists of zero or more characters followed by a newline character.
   it is the responsobility of the library to make each input or output stream conform to this model;
   the C programmer using the library ned not worry about how lines are represented outside the program.
   The standard library provides several functions for reading or writing one character at a time,
   of which 'getchar' and 'putchar' are the simplest. each time it is called, 'getchar' reads the next
   input character from a text stream and returns its value. that is, after
   
   c = getchar()

   the varaible c contains the next character of input. the characters normally
   come from the keyboard; input from files is discussed in chapter 7.

   the function 'putchar' prints a character each time it is called:

   putchar(c)

   prints the contents of the integer variable c as a character, usually on the screen. 
   calls to putchar and printf may be interleaved; 
   the output will appear in the order in which the calls are made. 
   */

//  file copying

/* given getchar and putchar, you can write a suprising amount of useful 
   code without knowing anything more about input or output. The simplest 
   example is a program that copies its input to its output one character at a time:
   */

/*pseudo code:

read a character
while (character is not end-of-file indicator)
   output the character just read
   read character
   
*/

#include <stdio.h>

/*int main() {
   int c;

   c = getchar();
   while (c != EOF) { // != means not equal to 
      putchar(c);
      c = getchar();
   }
   return 0;
}*/

// or more concisely

int main(){
   int c;
   while ((c = getchar()) != EOF) {
      putchar(c);
   }
   return 0;
}