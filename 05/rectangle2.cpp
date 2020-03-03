#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int n , m;
  cin>>n>>m;
  int w,h;
  for(w = 0; w<n; w++)
  {
    cout<<"*";
  }
  for(h = 0; h<m; h++)
  {
    cout<<"\n";
    cout<<"*"<<"\n";
  }
  return 0;
}
