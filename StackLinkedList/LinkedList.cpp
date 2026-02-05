#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
	head = nullptr;
	tail = nullptr;
}


void LinkedList::insert_front(int val) {
	Node* temp = new Node();
	temp->val = val;
	temp->next = head;
	temp->prev = nullptr;

	if (head != nullptr) {
		head->prev = temp;
	}

	head = temp;

	if (tail == nullptr) {
		tail = head;
	}
}


void LinkedList::insert_back(int val) {
	Node* temp = new Node();
	temp->val = val;
	temp->next = nullptr;
	temp->prev = tail;

	if (tail == nullptr) {
		head = temp;
		tail = temp;
	}
	else {
		tail->next = temp;
		tail = temp;
	}
}


void LinkedList::delete_front() {
	if (head == nullptr) {
		return;
	}

	Node* temp = head;
	if (head->next == nullptr) {
		head = nullptr;
		tail = nullptr;
		delete temp;
		return;
	}

	head = head->next;
	head->prev = nullptr;
	delete temp;
}


void LinkedList::delete_back() {
	if (tail == nullptr) {
		return;
	}

	Node* temp = tail;
	if (head->next == nullptr) {
		head = nullptr;
		tail = nullptr;
		delete temp;
		return;
	}

	temp = tail->prev;
	delete tail;
	tail = temp;
	tail->next = nullptr;
}


void LinkedList::display() {
	if (head == nullptr) {
		std::cout << "Linked List is Empty." << std::endl;
		return;
	}

	Node* temp = head;
	while (temp->next != nullptr) {
		std::cout << temp->val << " <-> ";
		temp = temp->next;
	}

	std::cout << temp->val;
	std::cout << " -> NULL" << std::endl;
}


int LinkedList::return_top() {
	if (tail == nullptr) {
		return -1; // Indicating stack is empty.
	}
	return tail->val;
}


void LinkedList::display_as_stack() {
	if (head == nullptr) {
		std::cout << "Stack is Empty." << std::endl;
		return;
	}

	Node* temp = tail;
	std::cout << "TOP OF STACK" << std::endl;
	while (temp->prev != nullptr) {
		std::cout << temp->val << std::endl;
		temp = temp->prev;
	}

	std::cout << temp->val << std::endl;
	std::cout << "BOTTOM OF STACK" << std::endl;
}