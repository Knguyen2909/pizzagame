#include <stdlib.h>
#include <stdio.h>

/*
Algorithm: Monte-Carlo Simulation for Pi

Input: D (Number of darts to throw)
Output: pi (estimate)

for (i = 0; i < D; i++):
  (x,y) = throw dart on the board my_randomly between 0 and 1
  if (x,y) is inside the circle (x^2 + y^2 <= r^2):
    count_circle++
print "Pi ~= ", 4* count_circle / D
*/

int seed = 0;

// our own pseudo-random function
// @return a number between 0 and RAND_MAX
int my_rand(){
  seed = seed * 1103515245 + 12345;
  return ((unsigned)seed % RAND_MAX);
}

void printPi(int D){
  int count_circle = 0;
  for (int i = 0; i < D; i++){
    double x = ((double) my_rand()) / RAND_MAX; // must be between 0 and 1
    // convert 0 - RAND_MAX to 0-1
    double y = ((double) my_rand()) / RAND_MAX;
    if (x*x+y*y <= 1){
      count_circle++;
    }
  }
  double pi = 4.0 * count_circle / D;
  printf("%f\n", pi);
}

int main(int argc, char ** argv){
  if(argc != 2){
    printf("Synopsis: %s <DARTS>\n", argv[0]);
    exit(1);
  }
  int darts = atoi(argv[1]);
  printPi(darts);
  for(int i=0; i< 10; i++){
    //printf("%d\n", my_rand());
  };
  return 0;
}
