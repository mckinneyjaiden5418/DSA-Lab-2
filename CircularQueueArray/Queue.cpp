#include "Queue.h"
#include <iostream>

Queue::Queue(int cap) {
	if (cap < 0) {
		cap = 1;
	}

	capacity = cap;
	arr = new int[capacity];
	front_index = 0;
	rear_index = capacity - 1;
	count = 0;
}


Queue::Queue() {
	capacity = 1;
	arr = new int[capacity];
	front_index = 0;
	rear_index = capacity - 1;
	count = 0;
}


Queue::~Queue() {
	delete[] arr;
}


void Queue::resize() {
	int new_capacity = capacity * 2;
	int* new_arr = new int[new_capacity];
	for (int i = 0; i < count; i++) {
		new_arr[i] = arr[(front_index + i) % capacity];
	}

	front_index = 0;
	rear_index = count - 1;
	capacity = new_capacity;
	delete[] arr;
	arr = new_arr;
}


void Queue::enqueue(int val) {
	if (count == capacity) {
		resize();
	}

	rear_index = (rear_index + 1) % capacity;
	arr[rear_index] = val;
	count++;
}


void Queue::dequeue() {
	if (count == 0) {
		return;
	}

	front_index = (front_index + 1) % capacity;
	count--;
}


int Queue::peek() {
	if (count == 0) {
		return -1; // Indicate circular queue is empty.
	}

	return arr[front_index];
}


void Queue::display() {
	if (count == 0) {
		std::cout << "Queue is Empty." << std::endl;
		return;
	}

	std::cout << "FRONT <- ";
	for (int i = 0; i < count; i++) {
		std::cout << arr[(front_index + i) % capacity] << " <- ";
	}
	std::cout << "REAR" << std::endl;
}