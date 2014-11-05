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
#endif
	
