#include <stdio.h>

int main (int argc, char *argv[])
{
  int count;

  printf ("This program was called with \"%s\".\n",argv[0]);

  if (argc > 1)
    {
      for (count = 1; count < argc; count++)
  {
    printf("argv[%d] = %s\n", count, argv[count]);
  }
    }
  else
    {
      printf("The command had no other arguments.\n");
    }

  return 0;
}


Make a program where you type in an argument and in the program take the argument and iterate across it printing out each character.
put in git
tell Jake where the git is

printf("%c\n", foo );
