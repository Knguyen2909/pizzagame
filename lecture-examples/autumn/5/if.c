#include <stdio.h>

/*
   Try to compare a value and print some text if the condition is met
   using all different conditional constructs
 */
int main(){
  int x = 25;

  printf("x > 10: %d\n", (x > 10));

  // variants
  printf("if\n");
  if(x > 10){
    printf("x is bigger than 10\n");
  }

  printf("hook colon\n");
  printf("%s\n", (x > 10) ? "x is bigger than 10" : "x < 10");


  printf("if-else\n");

  if(x > 10){
    printf("x is bigger than 10\n");
  }else{
    printf("x < 10\n");
  }

  printf("mimic if-else using two if conditions\n");
  // create an if/else replicating two if conditions  
  if(x > 10){
    printf("x is bigger than 10\n");
  }
  if( ! (x > 10) ){
    printf("x < 10\n");
  }


  // now we want to print as well if the value is bigger than 20.
  printf("if-if-else\n");
  if(x > 20){
    printf("x is bigger than 20\n");
  }else if(x > 10){
    printf("x is bigger than 10\n");
  }else{
    printf("x < 10\n");
  }

  printf("hook colon for if-if-else\n");
  // if else is better readable than nesting the hook colon!
  printf("%s\n", (x > 20) ? "x is bigger than 20" :
                ((x > 10) ? "x is bigger than 10" : "x < 10"));


  printf("if-if-else (wrong order)\n");
  if(x > 10){
    printf("x is bigger than 10\n");
  }else if(x > 20){
    printf("x is bigger than 20\n");
  }else{
    printf("x < 10\n");
  }

  return 0;
}
