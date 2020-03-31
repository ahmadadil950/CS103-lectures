/* TODO: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 *
 * This might be a little challenging.  Ask questions if you get stuck.
 * */

#include <iostream>
#include<vector>
using std::vector;
using std::cout;
using std::cin;

/*Binary search takes in a vector, size of the vecetor and a target value*/
int binarysearch(vector<int>& V, int size, int T){
    for(size_t i = 0; i<V.size(); i++){             // iterating through the vector
        int L=0;                                    // Left bound
        int R = size - 1;                           // Right bound
        while(L <= R){
            int m = (L+R) / 2;
            if(V[m] < T){
                L = m+1;
            }   else if(V[m] > T){
                R = m-1;
            }   else{
            return m;
        }
        }
        /*This while loop checks the the conditions of both the left and right bounds. m is the middle value
        if the middle value of the vector is less than the target value, then the right is discarded and it checks 
        the left. This is vise versa for the right bounds as well.*/
    }
    return 1;
}

int main(){
    vector<int> V = {1,2,3,4,5,6,7,8,9,10,11,12,14};
    int T;
    cin>>T;
    cout<< T <<" was found in index "<< binarysearch(V,14,T);
    cout<<"\n";
    return 0;
}