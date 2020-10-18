#include "stack.h"

template<class T>
Stack<T>::Stack() : used(0), top(nullptr) {}

template<class T>
void Stack<T>::pop() 
{
    --used;
}

template<class T>
void push (const T& item) 
{
    Node<T>* temp = new Node<T>;
    temp->setData(item);
    if (top->getPrev() == nullptr)
    {
        temp->setPrev(top);
    }
    top = temp->setNext(top);
    temp->setPrev(top->getPrev());
    top = temp;
    ++used;
}

template<class T>
T Stack<T>::top() const {} 

template<class T>
int Stack<T>::size() const {return used;}

template<class T>
bool Stack<T>::isEmpty() const {return used == 0;}