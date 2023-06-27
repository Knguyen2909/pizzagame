#include <stdio.h>
#include <stdint.h>

union data_t{
  int32_t var;
  uint8_t b[4];
};

typedef union data_t data_t;

int main(){
  data_t v;
  v.var = 1024+64+32+4; // here we store into the union

	for(int i=0; i < sizeof(v.var); i++){
		printf("%d ", v.b[i]);
 	}
  printf("\n");
	return 0;
}
