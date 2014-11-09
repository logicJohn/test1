/*
 * Author: Johnnie Hernandez
 * File: pqueue.h
 * Tab 4 spaces
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

typedef char* PQItemType;

typedef double PQPriorityType;

struct PQCell;

struct PriorityQueue;


//isEmpty(x) is true if s is an empty set
bool isEmpty(const PriorityQueue& q);

//This function will create a new node using x, and p,
// Then will insert the node into list q based off of p
void insert(PriorityQueue& q, const PQItemType& x, PQPriorityType& p);


//This will search the function for a node with priority p
// Then it will get the priority and item to p and x and
//  delete the node from q
void remove(PriorityQueue& q, PQItemType& x, PQPriorityType& p);




