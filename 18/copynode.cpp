/* TODO: write a function that *copies* a list.  It should allocate
 * a new set of nodes with the same values in the same order, and
 * return a pointer to the start of the new list.  Here's a prototype: */

#include <iostream>
using std::cin;
using std::cout;

struct node {
	int data;
	node* next;
};

node* copy(node* L);

int main(void)
{
	/* read stdin into list (forward order), with NO special case
	 * for the first node */
	int y; /* for input */
	node* L = NULL; /* pointer to beginning of list */
	node** x; /* pointer to final arrow where next node would
	             be attached. */
	x = &L;
	while (cin >> y) {
		*x = new node;
		(*x)->data = y;
		x = &(*x)->next;
	}
	*x = NULL;
	copy(L);
	/* print everything back out to make sure it worked: */
	for (node* i = L; i != NULL ; i = i->next) {
		cout << i->data << " ";
	}
	cout << "\n";
	return 0;
}

/*This is the function that copies the node*/
node* copy(node* L)
{
	node* first = NULL; // node first
	node* end = NULL;	// node end
	while(first != end){
		*L = *first;
		++L;
		++first;
	}
	*first = *L;
	return NULL; /* just so it compiles... */
}
