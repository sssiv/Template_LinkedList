//
// Created by SamSS
//
#ifndef STACK_CPP_
#define STACK_CPP_
#include "stack.h"

// Default Constructor
T(T)
Stack<T>::Stack() : used(0) {}

// Deconstructor 
T(T)
Stack<T>::~Stack() {}

// Pop - Deletes Top
T(T)
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
T(T)
void Stack<T>::push(const T& item) 
{
    List.makeNewNode(item);
    ++used;
}

// Top - Returns whats at the end of the Linked List
T(T)
const T Stack<T>::top() const {return List.getTail()->getData();} 

// size - How many Lists are in the Stack
T(T)
int Stack<T>::size() const {return used;}

// isEmpty
T(T)
bool Stack<T>::isEmpty() const {return used == 0;}

// = Operator Overload, Assignment  
T(T)
Stack<T>& Stack<T>::operator=(T item) {}

// << Operator Overload, output
T(T)
std::ostream& operator<<(std::ostream& out, const Stack<T>& stack)
{
    out << stack.top() << std::endl;
    return out;
}

#endif    // STACK_CPP_