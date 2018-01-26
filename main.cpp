#include <iostream>
int exp(int e, int k)
{
  int res = 1;
  for (int i = 0; i < k ++i)
  {
    res *= e; 
  }
  return e;
}

int plus (int a, int b)
{
  return a + b;
}
int fact2(n,i,val) {
  if(i==n) {
    return val*i; 
  }
  return fact2(n,i++,val*i); 
}
int fact(int n) {
  fact2(n,2,1);
}

int zero()
{
  return 0;
}

int main() {
  std::cout << "Hello world" << std::endl
  return 0;
}
