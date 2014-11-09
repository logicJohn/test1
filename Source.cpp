
#include "pqueue.h"
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "pqueue.cpp"

int main()
{
	PQItemType x="hello";
	PQPriorityType p=5;
	PriorityQueue q;
	PriorityQueue temp;

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
