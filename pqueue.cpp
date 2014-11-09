/*Aurthor: Johnnie Hernandez
 *File: pqueue.cpp
 *Tab 4 spaces
*/

#include "pqueue.h"
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>


/*
 *These 4 commands will create the structure and variables to 
 *  use the following list node structure PQCell
 *  Each of the following variables hold thier own commands
*/


struct PQCell
{
	PQItemType item;          //Data held in PQCell
	PQPriorityType position;  //Position in priority Que
	PQCell *next;               //pointer to next item in linked list

	PQCell()                    //This will set all values in PQCell() to 0
	{
		item=0;  
		position=0;
		next=NULL;
	}
};

struct PriorityQueue
{
	PQCell *next;			//pointer to the linked list items
	PriorityQueue()
	{
		next=NULL;
	}
};

//This function will return true when q is empty
bool isEmpty(const PriorityQueue& q)
{
	if( q.next == NULL)
	{
		return true;
	}
	return false;
}

//==============================================================
//                      remove
//==============================================================
// this will remove the first PQCell of q and return item and
// priority using, q will then be pointed at the second PQCell 
//==============================================================
void insertCell(PQCell*& q, const PQItemType& x, PQPriorityType& p)
{
	PriorityQueue temp;
	temp.next=q->next;
	q->next=new PQCell;
	q->next->item=x;
	q->next->position=p;
	q->next->next=temp.next;
}

//This function will create a new node using x, and p,
// Then will insert the node into list q based off of p
void insert(PriorityQueue& q, const PQItemType& x, PQPriorityType& p)
{
	if(isEmpty(q) || p < q.next->position )
	{
		return insertCell(q.next , x ,p);
	}
	else
	{
		PriorityQueue temp;
		temp.next = q.next->next;
		return insert(temp, x, p);
	}
}



//==============================================================
//                      remove
//==============================================================
// this will remove the first PQCell of q and return item and
// priority using, q will then be pointed at the second PQCell 
//==============================================================
void remove(PriorityQueue& q, PQItemType& x, PQPriorityType& p)
{
	PriorityQueue temp;
	temp.next=q.next->next;

	x=q.next->item;
	p=q.next->position;

	delete q.next;

	q.next=temp.next;

}

/*
int main()
{
	PQItemType x="hello";
	PQPriorityType p=5;
	PriorityQueue q;

	int choice, item, priority;
	do
    {
        std::cout <<"1.Insert\n";
        std::cout <<"2.Delete\n";
        std::cout  <<"3.Display\n";
        std::cout  <<"4.Quit\n";
        std::cout  <<"Enter your choice : "; 
        std::cin >>choice;
        switch(choice)
        {
        case 1:
            //std::cout <<"Input the item value to be added in the queue : ";
            //std::cin >>x;
            //std::cout <<"Enter its priority : ";
            //std::cin >>p;
            //insert(q,x,p);
            break;
        case 2:
            remove(q,x,p);
            break;
        case 3:
			PriorityQueue temp;
			temp.next=q.next;
           	while( !isEmpty(temp) )
			{
				temp.next=temp.next->next;
				std::cout << temp.next->item;
			}
			temp= q;
        case 4:
            break;
        default :
           std:: cout<<"Wrong choice\n";
		}
	}
	while(choice !=4);
	return 1;
}
*/