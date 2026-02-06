#ifndef QUEUE_H
#define QUEUE_H

class Queue {
private:
	int* arr;
	int capacity;
	int front_index;
	int rear_index;
	int count;

public:
	Queue(int cap);
	Queue();
	~Queue();
	void resize();
	void enqueue(int val);
	void dequeue();
	int peek();
	void display();
};

#endif