#include <stdio.h>

// This program should sum up the square of the numbers of i=1 to i=10
// The result should be sum = 1^2 + 2^2 + 3^2 +...+ 10^2
int main(){
  int sum = 0;
  for(int i=1; i <= 10; i++){
    sum += i*i;
  }
  printf("sum = %d\n", sum);
  return 0;
}
