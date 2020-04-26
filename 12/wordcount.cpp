#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;
#include <vector>
using std::vector;

/* TODO: finish writing this example from class.  Ideally, try to
 * write it from scratch using the ideas from lecture.  Also, try
 * to extend it to account for newlines (in addition to space and
 * tab characters for white space). */
size_t wordcount(const string& s)
{
	int count = 0;
	bool jrs = true; 
	bool JR;
	for(size_t i = 0; i<s.length(); i++){
		if(jrs){
			if(s[i] != ' ')
			jrs = false;
		}else{
			i;
		}
	}
	return 0;
}

/* TODO: write this modified version of wordcount, which stores the
 * words in a vector in addition to returning the count.  */
size_t wordcount(const string& s, vector<string>& l)
{
	return 0;
}

int main()
{
	/* TODO: test code for the above goes here. */
	return 0;
}

/* TODO: (this could be a little challenging...) Try to write
 * a program that reads C/C++ source and removes the comments.
 * Look at the last diagram from lecture for inspiration.
 * */
