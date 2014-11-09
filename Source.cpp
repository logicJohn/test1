// Testing only file
// Do not submit

#include "pqueue.h"
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;


int main()
{
	PQItemType x;
	x="hello";
	PQPriorityType p;
	p=5;
	PriorityQueue origin;
	if(!isEmpty(origin))
	{
		insert(origin, x, p);
		cout << origin.next->item;
		remove(origin, x, p);
		cout << x;
		cout << p;

		
	}
	return 1;
}