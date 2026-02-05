#include "Stack.h"
#include <iostream>

Stack::Stack() {
	LinkedList linked_list;
}


void Stack::push(int val){
	linked_list.insert_back(val);
}


void Stack::pop() {
	linked_list.delete_back();
}


int Stack::peek() {
	return linked_list.return_top();
}


void Stack::display() {
	linked_list.display_as_stack();
}