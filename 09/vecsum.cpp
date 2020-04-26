/* TODO: write a function that takes a vector V (of integers) and a single
 * integer x, and returns a boolean value indicating whether or not x can
 * be expressed as the sum of two elements of V.  (Let's say you can't use
 * the same index twice, so you must find i =/= j such that x = V[i]+V[j].) */

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

bool vecsum(vector<int> &V, int size, int x)
{
    for (size_t i = 0; i < V.size(); i++)
    {
        //size = V.size();
        int L = 0;
        int R = size - 1;
        while (L < R && L != R)
        {
            if (V[L] + V[R] == x)
            {
                return true;
            }
            else if (V[L] + V[R] < x)
            {
                L++;
            }
            else
            {
                R++;
            }
        }
    }
    return false;
}

int main()
{
    vector<int> V = {1, 2, 3, 4, 5};
    int x;
    while (cin >> x)
    {
        cout << vecsum(V, 5, x) << "\n";
    }
    return 0;
}