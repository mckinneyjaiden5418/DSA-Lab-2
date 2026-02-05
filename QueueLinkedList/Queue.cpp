#include "Queue.h"

void Queue::enqueue(int val) {
	linked_list.insert_back(val);
}


void Queue::dequeue() {
	linked_list.delete_front();
}


void Queue::display() {
	linked_list.display_as_queue();
}