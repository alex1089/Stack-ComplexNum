// Stack.h Stack definition
// Aleksey Leshchuk CISP400 AD6

#ifndef STACK_H
#define STACK_H

template <class T>
class Stack {
    public:
	// templated Stack constructor, initalizes to SIZE 6
	explicit Stack();
	// push(T) pushes an element onto the stack
	void push( const T& );
	// pop() removes element off the stack without returning its value
	void pop();
	// top() returns the last element pushed onto the stack
	T& top() ;
	// size() returns the the number of elements on the stack
	int size() const ;
	// empty() returns true if Stack is empty
	bool empty() const;
	// Stack destructor
	~Stack();
    private:
	int stackSize;
	int stackTop;
	T* stackPtr[6];  // default template to SIZE=6
};

#include <iostream>
#include <exception>
using namespace std;

class empty_stack: exception { // is an exception inheritance
	const char* what() { return "\nThe stack is empty.";}
};

// templated Stack constructor
template <class T>
Stack<T>::Stack() :
stackSize(6),
stackTop(-1)
{
	for (int i = 0; i<6; i++)	// initalize stack array to nullptr
		stackPtr[i] = nullptr;
}
// push(T) pushes an element onto the stack
template <class T>
void Stack<T>::push(const T& elem) {
	if (stackTop + 1 == stackSize){	// if stack is full
		cerr << "\nStack is full, unable to push";
	}
	else {
		stackPtr[++stackTop] = new T;	    // initalize stackPtr array at index ++top with elem
		*stackPtr[stackTop] = elem;
	}
}

// pop() removes element off the stack without returning its value
template <class T>
void Stack<T>::pop(){
	if (empty()){    // if stack is empty
		cerr << "\nThe stack is empty. Nothing to pop.";
	}
	else {
		delete stackPtr[stackTop];
		stackPtr[stackTop] = nullptr;
		--stackTop;	    // deallocate and decrement stackTop 
	}
}
// top() returns the last element pushed onto the stack
template <class T>
T& Stack<T>::top() {
	if (!empty()) // verify that stack is not empty
	    return *stackPtr[stackTop];
	else
	    throw empty_stack();
}	
// size() returns the the number of elements on the stack
template <class T>
int Stack<T>::size() const {
	return stackTop + 1;
}
// empty() returns true if Stack is empty
template <class T>
bool Stack<T>::empty() const {
	return stackTop == -1 ? true : false;	// if stackTop is equal to -1, the stack is empty
}
// Stack destructor
template <class T>
Stack<T>::~Stack(){
	if (!empty()){	// if stack array is not empty
		for (int i = 0; i <= stackTop; i++){		// deallocate all stackPtr elements
			delete stackPtr[stackTop];
			stackPtr[stackTop] = nullptr;
		}
	}
}



#endif

	
