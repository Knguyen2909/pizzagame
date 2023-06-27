#include <stdio.h>
#include <math.h>

// for call by value, the data of an array can be stored in a struct

typedef struct{
  int n[10];
} numbers_t;

float computeMean(numbers_t numbers) {
  float mean = 0;
  for(int i=0; i < 10; i++){
    mean += numbers.n[i];
  }
  return mean / 10;
}

int main(void) {
    numbers_t mid = { .n = {1,2,3,4,5,6,7,8,9,10} };

    float mean = computeMean(mid);
    printf("The mean distance is: %f \n", mean);
    return 0;
}
