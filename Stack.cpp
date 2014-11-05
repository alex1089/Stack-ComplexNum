// Stack.cpp definition
// Aleksey Leshchuk CISP400

#include <iostream>
using namespace std;

// templated Stack constructor
template <class T>
Stack<T>::Stack():
    stackSize(6),
    stackTop(-1)
{
    for (int i=0;i<6;i++)	// initalize stack array to nullptr
	stackPtr[i]=nullptr;
}
// push(T) pushes an element onto the stack
template <class T>
void Stack<T>::push( const T& elem) {
    if (stackTop+1 == stackSize){	// if stack is full
	cerr<<"\nStack is full, unable to push";
    } else {
	stackPtr[++stackTop]= new T;	    // initalize stackPtr array at index ++top with elem
	*stackPtr[stackTop]=elem;
	cout<<endl<<*stackPtr[stackTop]<<" is pushed into the stack.";
    }
}
	
// pop() removes element off the stack without returning its value
template <class T>
void Stack<T>::pop(){
    if (stackTop == -1){    // if stack is empty
	cerr<<"\nThe stack is empty. Nothing to pop.";
    } else {
	delete stackPtr[stackTop];
	stackPtr[stackTop]= nullptr;
	--stackTop;	    // deallocate and decrement stackTop 
    }
}
// top() returns the last element pushed onto the stack
template <class T>
T& Stack<T>::top() {
    return *stackPtr[stackTop];
}
// size() returns the the number of elements on the stack
template <class T>
int Stack<T>::size() const {
    return stackTop+1;
}
// empty() returns true if Stack is empty
template <class T>
bool Stack<T>::empty() const {
    return stackTop==-1?true:false;	// if stackTop is equal to -1, the stack is empty
}
// Stack destructor
template <class T>
Stack<T>::~Stack(){
    if (!empty()){	// if stack array is not empty
	for (int i=0;i<=stackTop;i++){		// deallocate all stackPtr elements
	    delete stackPtr[stackTop];
	    stackPtr[stackTop]=nullptr;
	}
    }
}

