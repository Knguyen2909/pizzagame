#include <stdio.h>

int main(){
  int error = 0;
  for(int counter = 1; counter <= 3 ; counter++){
    printf("%d\n", counter);
    if(counter == 2){
      //break;
      continue;
    }
    printf("End of the iteration\n");
  }
  printf("next statement after the loop\n");
  return 0;
}
