#include <stdio.h>

int squareFunc(double val){
  return (int) (val*val);
}

int main(){
  // declaration of the variable f_ptr as a function pointer
  // expected prototype of the function is: int()(double)
  int (*f_ptr)(double);
  // assigning a function to a function pointer
  f_ptr = squareFunc;

  // calling a function in the function pointer
  int ret = (*f_ptr)(3.4);

  // print return value which is floor(3.4*3.4) ~= 11
  printf("Calling returns: %d\n", ret);
  return 0;
}
