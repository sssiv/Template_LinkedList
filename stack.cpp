#ifndef STACK_CPP_
#define STACK_CPP_
#include "stack.h"

// Default Constructor
template<class T>
Stack<T>::Stack() : used(0) {}

// Deconstructor 
template<class T>
Stack<T>::~Stack() {}

// Pop - Deletes Top
template<class T>
void Stack<T>::pop() 
{
    if (List.isEmpty())
    {
        used = 0;
        return;
    }
    List.deleteNode(List.getTail());
}

// Push - Adds item to top
template<class T>
void Stack<T>::push(const T& item) 
{
    List.makeNewNode(item);
    ++used;
}

// Top - Returns whats at the end of the Linked List
template<class T>
const T Stack<T>::top() const {return List.getTail()->getData();} 

// size - How many Lists are in the Stack
template<class T>
int Stack<T>::size() const {return used;}

// isEmpty
template<class T>
bool Stack<T>::isEmpty() const {return used == 0;}

// = Operator Overload, Assignment  
template<class T>
Stack<T>& Stack<T>::operator=(T item) {}

// << Operator Overload, output
template<class T>
std::ostream& operator<<(std::ostream& out, const Stack<T>& stack)
{
    out << stack.top() << std::endl;
    return out;
}


#endif    // STACK_CPP_