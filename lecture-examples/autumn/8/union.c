#include <stdio.h>
#include <stdint.h>


// only one value can be stored in a union!
union myu {
  int16_t x;
  float y;
};


int main(){
  union myu var;

  var.x = 16;
  var.y = 154.5; // potentially overwrite data in var.x

  printf("var.x: %d\n", (int) var.x);

  return 0;
}
