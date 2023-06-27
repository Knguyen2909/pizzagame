#include <stdio.h>

int main(){
  char mood[4]={'f', 'u', 'n', '\0'};

  char mod2[] ={'f', 'u', 'n', '\0'}; // equivalent according to array notation

  char data[] = "fun"; // equivalent, for better readability!
  printf("This is %s == %s\n", mood, data);
  return 0;
}
