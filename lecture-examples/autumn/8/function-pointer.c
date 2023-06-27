#include <stdio.h>
#include <stdint.h>

int main(){
  // declaration of a variable of a function type/pointer
  int (*funcP)(int, int);

  // call the function, it is clear that funcP is a function pointer
  // note that the program will crash if the funcP variable isn't set
  int ret = (*funcP)(4, 3);

  // the normal function call syntax can be used
  ret = funcP(4, 3);

	return 0;
}
