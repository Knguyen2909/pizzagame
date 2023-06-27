#include <stdio.h>

int main(){
  int counter = 1;
  while (counter <= 3){
    printf("%d\n", counter);
    counter++;
  }
  printf("next statement after the loop\n");
  return 0;
}
