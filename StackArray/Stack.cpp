#include "Stack.h"
#include <iostream>

Stack::Stack(int cap) {
	if (cap < 0) {
		cap = 1;
	}

	capacity = cap;
	arr = new int[capacity];
	top_index = -1;
}


Stack::Stack() {
	capacity = 1;
	arr = new int[capacity];
	top_index = -1;
}


Stack::~Stack() {
	delete[] arr;
}


void Stack::resize() {
	capacity *= 2;
	int* new_arr = new int[capacity];
	for (int i = 0; i <= top_index; i++) {
		new_arr[i] = arr[i];
	}

	delete[] arr;
	arr = new_arr;
}


void Stack::push(int val) {
	if (top_index + 1 == capacity) {
		resize();
	}

	top_index++;
	arr[top_index] = val;
}


void Stack::pop() {
	if (top_index == -1) {
		return;
	}

	top_index--;
}


int Stack::peek() {
	if (top_index == -1) {
		return -1;
	}

	return arr[top_index];
}


void Stack::display() {
	if (top_index == -1) {
		std::cout << "Stack is Empty." << std::endl;
		return;
	}

	std::cout << "TOP OF STACK" << std::endl;
	for (int i = top_index; i > -1; i--) {
		std::cout << arr[i] << std::endl;
	}
	
	std::cout << "BOTTOM OF STACK" << std::endl;
}