#include "stack.h"

template<class T>
Stack<T>::Stack() : used(0) {}

template<class T>
void Stack<T>::pop() 
{
    if (List.isEmpty())
    {
        used = 0;
        return;
    }
    Node<T>* node = List.getTail();
    T value = node->getData();
    List.deleteNode(List.getTail());
    used != 0 ? --used : used = 0;  // That's sexy
}

template<class T>
void Stack<T>::push(const T& item) 
{
    Node<T>* temp = List.getTail();
    temp = List.makeNewNode(item);
    temp->setPrev(List.getTail());
    temp->setNext(nullptr);
    ++used;
}

template<class T>
T Stack<T>::top() const 
{
    Node<T>* node = List.getTail();
    return data = node->getData();
} 

template<class T>
int Stack<T>::size() const {return used;}

template<class T>
bool Stack<T>::isEmpty() const {return used == 0;}

template<class T>
Stack<T>& Stack<T>::operator=(T item)
{
    data = item;
}