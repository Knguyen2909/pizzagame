#include <stdio.h>

int main(){
  printf("Is 10 < 5: %d\n", (10 < 5));
  printf("Is 4 < 10: %d\n", (4 < 10));
  printf("Is (4 < 10) || (10 < 5): %d\n", (4 < 10) || (10 < 5));
  printf("Is (4 < 10) && (10 < 5): %d\n", (4 < 10) && (10 < 5));
  return 0;
}
