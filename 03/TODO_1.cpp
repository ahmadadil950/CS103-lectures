#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
  double d , e ,f;
  f = 2;
  d = 0;
  e = -4;
  if ( d+f == e+f){
    cout<<"Violated the law"<<endl;
  } else{
    cout<<"failed"<<endl;
  }
  return 0;
}