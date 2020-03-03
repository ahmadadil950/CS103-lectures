#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  signed int n; // only accepts positive integers
  int c; // counter variable
  cout << "enter a positive integer "<<endl; // to prompt user to enter positive integer
  cin>>n;
  for( c = 0; n > 1; c++){ // This is to increment the counter and state the n>1
    if (n%2 == 0) { // the condition for n if it is divisable by 2 and == 0
      n/=2;         // if condiiton is met divide by 2
    }
    else {          // if it does not then /* break */ the /* loop */
      break;
    }
  }
  cout<<"the greatest power of two for this number is "<<c<<endl;
  return 0;
}