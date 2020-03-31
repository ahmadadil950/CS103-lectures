/* TODO: write a function called "push_front(V,x)" for a vector, which
 * adds parameter x to index 0 of vector V by moving all the other values
 * to higher indexes.  (This should show you why inserting elements is only
 * efficient at the *end* of a vector.) */

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

/*This function takes in a vector and a parameter x. The functions then reverses the vector by using 
bitwise operators.*/
void pfront(vector<int> &V, int &x)
{
    size_t n = V.size();
    for (size_t i = 0; i < n / 2; i++)
    {
        V[i] ^= V[n - i - 1];
        V[n - i - 1] ^= V[i];
        V[i] ^= V[n - i - 1];
    }
    
}
int main()
{
    vector<int> V = {1, 2, 3, 4};
    int x;
    cin>>x;
    V.push_back(x);
    pfront(V, x);
    /*This is a new vector that will contain the vector correctly indexed.*/
    vector<int> N = {V[0], V[4], V[3], V[2], V[1]};
    for (size_t i = 0; i < N.size(); i++)
    {
        cout<<N[i]<<" ";
    }
    cout<<endl;
    return 0;
}
