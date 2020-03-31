#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;

bool search(vector<int>& V, int x){ // vector returning bool value, Takes in vector and integer
  V.push_back(x);                   // pushing the integer into vector
  for(int i = 0; i<V.size(); i++){   // iterating through vector
    if(V[i] == x){                    // if value is equal to x then return true else return false
      return true;
    }else{
      
    }
  }
  return false;
}

int main() {
  int input = 3;
  vector<int> x = {1,2,3,4,5,6};
  cout<<search(x,input)<<"\n";
  return 0;
}