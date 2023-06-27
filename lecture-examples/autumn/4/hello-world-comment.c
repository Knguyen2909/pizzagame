#include <stdio.h>

// This little program prints hello world
int main(){
  /*
  This is a comment.
  It can be very long.
  */
  printf("Hello World\n");
  printf("My name is Julian\n");
  int hours;
  int hours_per_year;
  hours = 24;
  hours_per_year = hours * 365;
  printf("Number of hours in a year: %d\n", hours_per_year);
  return 0;
}
