#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int input;
  int product = 1;
  while(cin>>input)
  {
    product = product * input;
  }
  cout<<"product so far "<< product <<endl;
  return 0;
}