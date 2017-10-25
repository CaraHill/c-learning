/* Make an array of structs to hold peoples name and ages, fill array and iterate across it print out the names */

#include <string.h>
#include <stdio.h>

typedef struct person {
  char *name;
  int age;
} person;

int main ()
{
  struct person people[5];

  people[0].name = "Polly McMolly";
  people[1].name = "George Foreman";
  people[2].name = "Uma Thurman";
  people[3].name = "James Dean";
  people[4].name = "Hermione Granger";
  people[5].name = "Harry Potter";

  int index = 0;

  while(index < 6)
  {
    printf("Person #%d in the array is called %s.\n", index + 1, people[index].name);
    index++;
  }

  return 0;
}

/* Update by making the size of the array dynamic, and names are assigned to structs within the people array randomly from an array of strings. */
