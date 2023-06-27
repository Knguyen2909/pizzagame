#include <stdio.h>
#include <stdint.h>

struct Example {
   unsigned a : 5; // 5 bits used, what is the biggest number we store?
   unsigned   : 3; // padding
   unsigned b : 4;
};

int main(){
  struct Example b;
  b.a = 21;
  b.b = 9;

  printf("%d %d\n", b.a, b.b);
	return 0;
}
