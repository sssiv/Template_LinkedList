#include "stack.h"

template<class T>
Stack<T>::Stack() : used(0) {}

template<class T>
void Stack<T>::pop() 
{
    
}

template<class T>
void push (const T& item) {}

template<class T>
T Stack<T>::top() const {} 

template<class T>
int Stack<T>::size() const {return used;}

template<class T>
bool Stack<T>::isEmpty() const {return used == 0;}