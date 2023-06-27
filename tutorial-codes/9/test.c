
int c = 0;

int func(int a, int b, int b2){
  c++;
	if( a == 0) return 1;
	if( b == 0) return func(a - 1, b2, b2);
	return func(a, b - 1, b2);
}

int main(){
  for(int a = 0; a < 10; a++){
    for(int b = 0; b < 10; b++){
      for(int b2 = 0; b2 < 10; b2++){
        c = 0;
        func(a, b, b2);
        printf("%d,%d,%d = %d\n", a, b, b2, c);
      }
    }
  }
}
