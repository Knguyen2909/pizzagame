#include <stdio.h>

int main(){
  int grade = 60;
  if(grade >= 60){
    printf("Passed\n");
  }else {
    printf("Failed\n");
    printf("You must take this exam again\n");
  }

  printf("If we don't use blocks:\n");
  // if we don't use blocks, only the first statement belongs to the condition, this is a typical mistake! Always use blocks!
  if(grade >= 60)
    printf("Passed\n");
  else
    printf("Failed\n");
    printf("You must take this exam again\n");

  return 0;
}
