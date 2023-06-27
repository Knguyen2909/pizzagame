#include <stdio.h>
#include <stddef.h> // for offsetof
#include <string.h> // for strcpy

// declaration of our person struct
struct person{
  int age;
  char name[32];
};

// typedef creates an alias for a type
typedef struct person  person_t;

// could be done in one statement:
typedef struct {
  float population;
  char name[16];
} country_t; // new datatype: country_t which is a struct

// typedef also works on other types:
typedef unsigned char   uchar;

int main(){
  person_t jack = {.age = 20, .name = "Jack"};
  // compare to:
  // struct person jack = {.age = 20, .name = "Jack"};

  country_t uk = {55*1024*1024, "UK"};

  return 0;
}
