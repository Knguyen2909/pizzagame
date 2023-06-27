#include <stdio.h>
#include <inttypes.h>

int main(){
  int const numPlanets = 8+1;
  printf("%d\n", numPlanets);

  // this will produce an error:
  numPlanets = 10;

  return 0;
}
