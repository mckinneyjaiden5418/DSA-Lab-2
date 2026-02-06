#include <iostream>
#include "Queue.h"

int main() {
	Queue queue;
	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.display();
	std::cout << "Peeking: " << queue.peek() << std::endl;

	queue.dequeue();
	queue.display();
	std::cout << "Peeking: " << queue.peek() << std::endl;

	queue.dequeue();
	queue.dequeue();
	queue.display();
	std::cout << "Peeking: " << queue.peek() << std::endl;
	return 0;
}