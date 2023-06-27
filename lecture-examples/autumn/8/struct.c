#include <stdio.h>
#include <stddef.h> // for offsetof
#include <string.h> // for strcpy

// declaration of a new datatype:
struct person{
  int age;
  char name[32];
};

int main(){
  struct person jack;

  jack.age = 10;
  // to store a string into the name field, use strcpy
  strcpy(jack.name, "Jack");
  printf("name is: %s\n", jack.name);

  printf("Offset of jack.age: %ld and jack.name: %ld\n",
    offsetof(struct person, age), offsetof(struct person, name));

  // array with 100 friends
  struct person friends[100];
  struct person author = jack;

  // initialiser with fieldnames
  struct person jack2 = {.age = 20, .name = "Jack"};
  // initializer, must obey the right order
  struct person jack3 = {20, "Jack"};

  return 0;
}
