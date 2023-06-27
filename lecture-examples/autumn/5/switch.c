#include <stdio.h>

// This code should print the english representation of a number

int main(){
  int number = 2;
  if(number == 0){
    printf("zero\n");
  }else if(number == 1){
    printf("one\n");
  }else if(number == 2){
    printf("two\n");
  } // continue up to 10

  // using switch simplifies this process
  // need to insert the break statement, otherwise will execute the code of the next case
  switch(number){
    case(0): printf("zero\n"); break;
    case(1): printf("one\n"); break;
    case(2): printf("two\n"); break;
    case(3): printf("three\n"); break;
    default: printf("unknown number\n");
  }

  return 0;
}
