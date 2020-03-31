#include <iostream>
#include <vector>
using std::cin;
using std::vector;
using std::cout;

void uniquify(vector<int>& V){
    if (V.size() < 2) return;
    int green=1; /* green arrow; stores destination for next unique value */
    int blue=1; /* blue arrow; stores next place to look for something new */
    while(blue<V.size()){
        if(V[green-1] != V[blue])
        V[green++] = V[blue];
        blue++;
    }
    V.resize(green);
}

int main()
{
    vector<int> V;
    int x;
    while(cin>>x){ 
    V.push_back(x);
    }
    uniquify(V);
    for(size_t i = 0; i<V.size(); i++){
        cout<<V[i]<<" ";
    }
    cout<<"\n";
    return 0;
}