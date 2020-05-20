/* TODO: write down the polynomial evaluation function we did in lecture
 * and write a main function to test it out.  Below is a prototype:
 * */

#include <vector>
#include <iostream>
using std::cout;
using std::vector;

/* evaluate f(x) = a[0] + a[1]x + a[2]x^2 + ... */
int polyEval(const vector<int>& a, int x)
{
	int results = a[0];
	for(int i = 1; i<a.size(); i++){
		results = results * x + a[i];
	}
	return results;
	return 0;
}
int main()
{
	vector<int> V = {2, -6, 2, -1};
	int x = 3;
	cout << polyEval(V,x) << "\n";
	return 0;
}