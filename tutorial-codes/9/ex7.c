int func(int a, int b, int b2){
  if(a == 0) return 1;
  if(b == 0) return func(a - 1, b2, b2);
  return func(a, b - 1, b2);
}
