#include <iostream>
int fact2(n,i,val) {
  if(i==n) {
    return val*i; 
  }
  return fact2(n,i++,val*i); 
}
int fact(int n) {
  fact2(n,2,1);
}
int main() {
  std::cout << "Hello world" << std::endl
  return 0;
}
