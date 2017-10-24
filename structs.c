/* make a programme to hold people names and ages, make two variables that are the type of the struct and set their values and print them out again */

#include <stdio.h>

typedef struct person {
  char *name;
  char *age;
} person;

int main (int argc, char **argv)
{
  struct person p;

  p.name = argv[1];
  p.age = argv[2];

  printf("The person's name is: %s, and his age is: %s.\n", p.name, p.age);

  struct person per;

  per.name = argv[3];
  per.age = argv[4];

  printf("The person's name is: %s, and his age is: %s.\n", per.name, per.age);

  return 0;
}
