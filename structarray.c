/* Make an array of structs to hold peoples name and ages, fill array and iterate across it print out the names */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct person {
  char *name;
  int age;
} person;

char *namearray[10];

namearray[0] = "Polly McMolly";
namearray[1] = "George Foreman";
namearray[2] = "Uma Thurman";
namearray[3] = "James Dean";
namearray[4] = "Hermione Granger";
namearray[5] = "Harry Potter";
namearray[6] = "James Bond";
namearray[7] = "Elizabeth Bathory";
namearray[8] = "Tina Turner";
namearray[9] = "Beyonce";

int main (int argc, int argv)
{
  struct person people[argv];

  int index = 0;

  while(index < 6)
  {
    people[index].name = namearray[rand() % 10];
    printf("Person #%d in the array is called %s.\n", index + 1, people[index].name);
    index++;
  }

  return 0;
}

/* Update by making the size of the array dynamic, and names are assigned to structs within the people array randomly from an array of strings. */
