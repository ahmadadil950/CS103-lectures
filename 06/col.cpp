#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
  int num;
  while(cin>>num){
  int original;
  int count = 0;
  original = num;
  while(num != 1){
  if(num % 2 == 0) num /= 2;
  else num = num*3+1;
  count++;
  }
  cout<< count <<" steps for "<< original<<endl;
}
return 0;
}

