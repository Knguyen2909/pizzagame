int func(int a, int b, int c){
  if(a == 0) return b * c;
  return func(a - 1, b, c) + func(a - 1, b, c);
}
