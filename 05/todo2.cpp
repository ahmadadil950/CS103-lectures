#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int a,b;  // declare two variables
  cout<<"Enter two integers: "<<endl;
  cin>> a >>b; // getting the inputs

  int min; // our min post it to check with
  min = a; // by setting min = to a, we just need to check for one condition
  if(a>b){
    min = b;
    cout<< min <<endl;
  }

  while (a%min!=0 && b%min!=0)    // this is make sure min cannot equal zero
  {
    min--; // this allows us to test each value going down from the two inputs
  }
    cout << min << " is the gcd of "<< a << " and " <<b<<endl;

    return 0;
  }

