#include <stdio.h>
#include <my_gcd_lib.h>

int main(){
  printf("%s\n", gcd(160, 8) == 8 ? "OK" : "wrong result! Arguments: 160, 8");
  return 0;
}
