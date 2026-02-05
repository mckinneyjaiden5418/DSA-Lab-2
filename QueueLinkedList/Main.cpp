#include <iostream>
#include "Queue.h"

int main() {
	Queue queue;
	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.display();

	queue.dequeue();
	queue.display();

	queue.dequeue();
	queue.dequeue();
	queue.display();
	return 0;
}