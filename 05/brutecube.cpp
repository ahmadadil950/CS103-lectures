#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int n;
  cout<<"enter a number"<<endl;
  cin>>n;
  int number;
  for(int i = 0; i<n; i++){ // to increase i and check it against n
    if(i*i*i == n){         // if i^3 is equal to the given then i is the cube root
      number = i;
      break;
    }
    else if(i*i*i > n){    // if i^3 > given then its not a cubic root
      cout<< n <<" has no cubic root" <<endl;
      break;
      return 1; // doesn't run anything below it
  }
}
  cout << number;
  return 0;
}
