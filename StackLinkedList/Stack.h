#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"

class Stack {
private:
	LinkedList linked_list;
public:
	void push(int val);
	void pop();
	int peek();
	void display();
};

#endif