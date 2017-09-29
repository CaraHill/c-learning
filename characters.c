/* Make a program where you type in an argument and in the program take the argument and iterate across it printing out each character.
put in git
tell Jake where the git is */

#include <stdlib.h> /* "The stdlib.h header defines four variable types, several macros, and various functions for performing general functions." */
#include <string.h> /* "The string.h header defines one variable type, one macro, and various functions for manipulating arrays of characters." */
#include <stdio.h> /* "The stdio.h header defines three variable types, several macros, and various functions for performing input and output." */
/* include a combination of the above depending on what you need in the programme. */

int main (int argc, char **argv) /* ** = Pointer to Pointer */
{
  int currentArgc = 0;
  while(++currentArgc < argc) /* when I run: ./a.out 'Hello Poopface!' argc = 2, so while currentArgc is less than 2 */
    {
      printf("Full word:\n");
      printf("%s\n", argv[currentArgc]); /* will print the string that is passed in, because that occurs at index 1 in the argument array */

      int i = 0;
      printf("Characters:\n");

      while(argv[currentArgc][i]!='\0') /* while the character is not a null pointer; this keeps it from printing past the end of the string */
      {
        printf("%c\n", argv[currentArgc][i]); /* print each character, by index */
        i++;
      }
      printf("That is the end of the argument!\n");
    }

  return 0;
}
