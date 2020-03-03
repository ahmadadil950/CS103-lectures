#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

  int sumcube(int n){
  int sum = 0;
    for(int i = 0; i < n; i++){
      sum += (2*n+1)*(2*n+1)*(2*n+1);
      return sum;
    }
  }
  int main()
    {
      int input;
      cin>>input;
     cout << sumcube(input) <<endl;
      return 0;
    }





