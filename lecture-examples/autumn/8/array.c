#include <stdio.h>
#include <string.h> // for memset

// if this doesn't compile directly, use the c99 standard
// e.g.:
// gcc -Wall -std=c99 array.c

// helper function to print the array
void print_array(int array[3]){
    // printing the array
    for(int i=0; i<3; i++){
      printf("%d = %d\n", i, array[i]);
    }
}

int main(){
  int temp[3];
  // iterating through an array
  for(int i=0; i<3; i++){
    temp[i]=i+1;
  }
  print_array(temp);

  // initalization in the declaration
  int t2[3] = {1, 2, 3};

  // Set the variable to 0
  memset(temp, 0, sizeof(temp));
  printf("Now all set to 0 using memset\n");
  print_array(temp);

  // Array magic!
  int const data[] = {1,2,3,4,5};

  return 0;
}
