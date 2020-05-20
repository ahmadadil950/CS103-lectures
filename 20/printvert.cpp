

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

void printVertically(int n);


/*This function prints numbers vertially*/
void printVertically(int n){
	if(n % 10 == 0)		// base case to check if numbers are only digits
	return;

	printVertically(n/10);	// takes from stdin and divides by 10 to check if divisable
	/*Prints out the numbers ex: "234" -> 
	*	2
	*	3
	*	4
	*/
	cout << (n%10) << "\n";	
	return;
}

int main()
{   
    int n;
	cin>>n;
	cout << "\n";
    printVertically(n);
	return 0;
}