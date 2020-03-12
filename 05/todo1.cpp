#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int a,b;
  cout<<"Enter two integers: "<<endl;
  cin>> a >>b;

  int min;
  min = a;
  if(a>b){
    min = b;
  }
    cout<< min <<endl;
    return 0;
  }

