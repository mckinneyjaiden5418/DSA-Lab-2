#ifndef STACK_H
#define STACK_H

class Stack {
private:
	int* arr;
	int capacity;
	int top_index;
	void resize();

public:
	Stack();
	Stack(int cap);
	~Stack();
	void push(int val);
	void pop();
	int peek();
	void display();
};

#endif