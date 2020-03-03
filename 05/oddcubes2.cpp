#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
  /*This following functions follows the mathematical formula of n^2(2n^2-1) which is composed of the of the first even cubes ==
  (2n)^3 with odd being (2n-1)^3. The sum of the odd n numbers is n^2(2n^2-1)*/
  int sumcubes(int n){
    return n*n*(2*n*n-1);
  }
  /*This main function is where the input from the user would come in and be evaulated*/
  int main()
  {
    int input;
    cin>>input;
    cout<<sumcubes(input)<<endl;
    return 0;
  }

  /*Check proof by induction*/