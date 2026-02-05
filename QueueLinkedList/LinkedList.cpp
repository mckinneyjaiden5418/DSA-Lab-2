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


void LinkedList::display_as_queue() {
	if (head == nullptr) {
		std::cout << "Queue is Empty." << std::endl;
		return;
	}

	Node* temp = head;
	std::cout << "DEQUEUE <- ";
	while (temp->next != nullptr) {
		std::cout << temp->val << " <- ";
		temp = temp->next;
	}

	std::cout << temp->val;
	std::cout << " <- ENQUEUE" << std::endl;
}