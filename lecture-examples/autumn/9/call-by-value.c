#include <stdio.h>

// code for the function call stack example

int worker4(int par4){
  int res4;
  int x4;
  // do sth.
  return res4;
}

int worker1(int par1){
  int res1;
  int x1 = 3;
  res1 = worker4(x1);
  // do sth. else
  return res1;
}

int main(){
  int result;
  int x = 5;
  result = worker1(x);
  return result;
}
