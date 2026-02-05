#include <iostream>
#include "Stack.h"

int main() {
	Stack stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.pop();

	int should_be_two = stack.peek();
	std::cout << "Using Peek Method: " << should_be_two << std::endl;

	stack.push(3);

	int should_be_three = stack.peek();
	std::cout << "Using Peek Method: " << should_be_three << std::endl << std::endl;

	std::cout << "Now Displaying Stack: " << std::endl;
	stack.display();

	return 0;
}