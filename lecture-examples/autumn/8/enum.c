#include <stdio.h>
#include <stdint.h>

enum boolean {
  FALSE,
  TRUE
};

enum months_t{JAN=1,FEB,MAR,APR,MAY,JUN, JUL,AUG,SEP,OCT,NOV,DEC};

// enum is a type that can be used as variable or arguments
int func(enum months_t var){
  printf("value is: %d\n", var);
  return 0;
}

int main(){
  printf("value of False is: %d\n", FALSE);
  printf("value of True is: %d\n", TRUE);

  printf("value of Feb is: %d\n", FEB);
  printf("value of Nov is: %d\n", NOV);
  // using the defined constant:
  func(FEB);

	return 0;
}
