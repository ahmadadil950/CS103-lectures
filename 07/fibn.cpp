#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int n = 1;        /*yellow note: n */
  int abefore = 1;  /* blue note: a_n-1*/
  int acurrent = 1; /* green note: a_n*/
  int aafter = 1;   /* red note: a_n+1*/
  int N;            /* orange note: input*/
  cin>>N;           /* read input (we will compute and output a_n)*/
  /*NOTE: at this point, our invariant is set!, All variables have values consistent with their messages*/
  while(n < N){
    n++;
    /*At this point, our invariant is broken, Let's fix it:*/
    abefore = acurrent; // figure 1 step 1
    acurrent = aafter;  // figure 1 step 2
    aafter = abefore + acurrent;  // figure 1 step 3
  }
  cout << acurrent <<"\n";
  /*Note: we are making use of the fact that a_0 = a_1, else the answer might be wrong for N = 0*/
  return 0;
}
