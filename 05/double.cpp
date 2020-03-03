#include <iostream>
using std::cout;
using std::endl;

int main(){
  int sum = 0;
  for (int i = 0; i*i<=100; i++){
    sum += i*i;
}
  cout<<sum<<endl;
  return 0;
}
