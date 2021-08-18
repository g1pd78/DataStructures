#pragma once
#define STACK_SIZE 1000

class Stack {
	int* arr;
	int size;
	int capacity;
public:
	Stack() ;
	~Stack() ;

	int getSize() { return size; };
	bool isEmpty();
	int peek();
	int pop();
	void push(int );
};

Stack::Stack(){
	arr = new int[STACK_SIZE];
	size = 0;
	capacity = STACK_SIZE;
}

bool Stack::isEmpty() {
	if (size == 0)return true;
	else return false;
}

int Stack::peek() {
	int index = size - 1;
	if (size > 0) {
		return arr[index];
	}
	else {
		std::cout << "Stack is empty!\n";
		return 0;
	}
}

int Stack::pop() {
	int index = size - 1;
	if (size > 0) {
		size--;
		return arr[index];
	}
	else {
		std::cout << "Stack is empty!\n";
		return 0;
	}
}

void Stack::push(int inputNum) {
	if (size >= capacity) {
		std::cout << "Out of range!\n";
		return;
	}
	arr[size++] = inputNum;
}

Stack::~Stack() {
	delete[] arr;
}