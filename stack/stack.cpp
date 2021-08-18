#include <iostream>
#include "stack.h"

int main()
{
	Stack stack;
	stack.push(5);
	stack.push(1);
	std::cout << stack.pop() << '\n';
	std::cout << stack.peek() << '\n';
	std::cout << stack.pop() << '\n';
	std::cout << stack.pop() << '\n';//error test
	std::cout << "isEmpty : " << stack.isEmpty() << '\n';
	stack.push(11);
	std::cout << "Size = " << stack.getSize() << '\n';
	std::cout << "isEmpty : " << stack.isEmpty() << '\n';
	stack.push(1);
	std::cout << "Size = " << stack.getSize() << '\n';
}