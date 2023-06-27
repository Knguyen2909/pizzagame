#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(){
  int32_t var = 1024 + 64 + 32 + 4; // = 1124
  uint8_t b[4];
  // The following function copies data (here 4
  // bytes) from one memory "location" (var) to b.
  memcpy(b, &var, sizeof(var));
  for(int i=0; i < sizeof(i); i++){
    printf("%d ", b[i]);
  }
  printf("\n");
  return 0;
}
