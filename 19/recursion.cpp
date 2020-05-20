#include <cstdio>
#include <iostream>
using std::cout;
using std::cin;

int power(int n);
/* nonsense function to explore recursion... */
void f(int n)
{
	printf("calling f(%i)...\n",n);
	if (n == 0) {
		printf("stopped @ 0\n");
		return;
	}
	f(n-1);
	printf("leaving f(%i)...\n",n);
}

/* TODO: write the recursive factorial function from memory
 * and test it out. */

int fact(int n){
	if(n==1){		// base case
		return 1;
	}
	else{
		return n*fact(n-1); // recursion
	}
}

/* TODO: write a recursive function for the fibonacci terms
 * and make sure you realize why it is so inefficient that even
 * your fancy gaming battlestation struggles with n>50. */
int fib(int n){
	if(n<2) return 1;
	return fib(n-1)+fib(n-2);
}


int main(void)
{
	int n;
	cin>>n;
	cout<<" printing out factorial " <<fact(n) << "\n";
	cout <<" printing out fib " <<fib(n) << "\n";
	cout <<" printing out power "<< power(n) <<"\n";
	f(5);  /* what will happen? */
	return 0;
}

/* TODO: write a recursive function to compute x^n (x to the n power)
 * where n is an integer. */
int power(int n){
	int x = 2;

	if(n == 0) return 1;

	power(n-1);
	return power(n-1)*x;
}
/* TODO: read lecture 5 (l5.pdf) and come to class with questions (or
 * a thorough understanding of the content!). */
