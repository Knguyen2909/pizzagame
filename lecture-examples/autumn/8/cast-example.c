#include <stdio.h>
int main(){
  int i=3;
  char j='1';
  float my_pi=3.1415;
  printf("int i is:%d \n" , i);
  printf("char j is: %c \n", j);
  i=(int)(j); // cast j to an int
  printf("j casted to int is:%d \n", i);
  i=(int)(my_pi);
  // cast my pi to an int
  printf("my_pi casted to int is:%d \n", i);
  return 0;
}
