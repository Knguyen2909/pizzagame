#include <stdio.h>
#include <inttypes.h>

int main(){
  int a = 5;
  float b = a * 0.5;
  printf("%f\n", b);

  int c = (int) b;
  printf("%d\n", c);

  printf("Invalid pointers typically lead to a crash:\n");
  FILE *p = (FILE*) 4712;
  fgetc(p);

  return 0;
}
