#include <stdio.h>

int main(){
  int thisYear = 2017;
  printf("1 %d\n", ++thisYear);  // will print 2017
  printf("2 %d\n", ++thisYear);// will print 2018
  printf("3 %d\n", --thisYear);// will print 2017
  printf("4 %d\n", thisYear++);// will print 2017, thisYear = 2018
  { // start block
    printf("5 %d\n", thisYear); // will print 2018
  } // end block
  return 0;
}
