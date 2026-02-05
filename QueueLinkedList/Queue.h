#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"

class Queue {
private:
	LinkedList linked_list;
public:
	void enqueue(int val);
	void dequeue();
	void display();
};

#endif