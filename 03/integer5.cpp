#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int avg = 0;
  int i;
  int c;
  for(c = 0; c<5; c++){
    cin>>i;
    avg += i;
    }
  cout<<avg/5<<endl;
  return 0;
}