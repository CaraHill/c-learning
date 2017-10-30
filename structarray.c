/* Make an array of structs to hold peoples name and ages, fill array and iterate across it print out the names */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct person {
  char *name;
  int age;
} person;

int main (int argc, char **argv)
{
  // allocate space for 10 pointers to strings
  char **namearray = (char**)malloc(10*sizeof(char*));
  int i = 0;
  //allocate space for each string
  // here allocate 50 bytes, which is more than enough for the strings
  for(i = 0; i < 10; i++){
    namearray[i] = (char*)malloc(50*sizeof(char));
  }
  //assign them all something
  sprintf(namearray[0], "Polly McMolly");
  sprintf(namearray[1], "George Foreman");
  sprintf(namearray[2], "Uma Thurman");
  sprintf(namearray[3], "James Dean");
  sprintf(namearray[4], "Hermione Granger");
  sprintf(namearray[5], "Harry Potter");
  sprintf(namearray[6], "Beyonce");
  sprintf(namearray[7], "James Bond");
  sprintf(namearray[8], "Elizabeth Bathory");
  sprintf(namearray[9], "Tina Turner");

  // convert the argument from a string to an integer
  int arraylength = atoi(argv[1]);

  // create an array of the person struct
  struct person people[arraylength];

  int index = 0;

  while(index < arraylength)
  {
    people[index].name = namearray[rand() % 10];
    printf("Person #%d in the array is called %s.\n", index + 1, people[index].name);
    index++;
  }

  return 0;
}
