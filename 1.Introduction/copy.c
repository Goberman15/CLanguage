#include <stdio.h>

int main(int argc, char const *argv[])
{
  // c is storing the ascii number of the current char
  int c;

  // the getchar read a single character from stdin and return it to the program
  // the program will wait for input from stdin, and read it one char at a time
  // c = getchar();

  while ((c = getchar()) != EOF)
  {
    // putchar print current char store on c to the stdout
    putchar(c);
    printf("\n");
    printf("ascii code: %i\n", c);
    // c = getchar();
  }

  if (c == EOF)
  {
    // The EOF value is -1
    printf("EOF: %i", c);
  }

  return 0;
}
