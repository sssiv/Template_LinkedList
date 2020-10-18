#ifndef ITERATOR_CPP_
#define ITERATOR_CPP_
#include "iterator.h"

// Constructor, default
template<class T>
Node_Iterator<T>::Node_Iterator() : current(nullptr) {}

// Constructor, pointer argument
template<class T>
Node_Iterator<T>::Node_Iterator(Node<T>* node) {current = node;}

// Copy Constructor
template<class T>
Node_Iterator<T>::Node_Iterator(const Node<T>& node) {current = node;}

// Deconstructor
template<class T>
Node_Iterator<T>::~Node_Iterator() {current = nullptr;}

// Next Node
template<class T>
Node_Iterator<T>* Node_Iterator<T>::iterateNext() {return current->getNext();}

// Current Address-Pointer
template<class T>
Node<T>* Node_Iterator<T>::getCurrent() {return current;}

// ++ prefix
template<class T>
Node_Iterator<T>& Node_Iterator<T>::operator++() 
{
    if (current != nullptr)
    {
        current = current->getNext();  
    } 
    return *this;
}

// ++ postfix
template<class T>
Node_Iterator<T> Node_Iterator<T>::operator++(int i) 
{
    Node_Iterator<T>* previous(current);
    current = current->getNext(); 
    return *this;
}

// -- prefix
template<class T>
Node_Iterator<T>& Node_Iterator<T>::operator--() 
{
    current = current->getPrev();
    return *this;
}

// -- postfix
template<class T>
Node_Iterator<T> Node_Iterator<T>::operator--(int i) 
{
    Node_Iterator<T>* previous(current);
    current = current->getPrev(); 
    return previous;
}

// += Overload
template<class T>
Node_Iterator<T>& Node_Iterator<T>::operator+=(unsigned int index) 
{
    Node<T>* walker = current;
    int count = 0;
    while (walker->getNext() != nullptr && count < index)
    {
        walker = walker->getNext();
        ++count;
    }
    current = walker;
    return *this;
}

// -= Overload
template<class T>
Node_Iterator<T>& Node_Iterator<T>::operator-=(unsigned int index) 
{
    Node<T>* walker = current;
    int count = 0;
    while (walker->getPrev() != nullptr && count < index)
    {
        walker = walker->getNext();
        ++count;
    }
    current = walker;
    return *this;
}

// = Assignment Operator
template<class T>
Node_Iterator<T>& Node_Iterator<T>::operator=(T item) {return current = current(item);}

// Bracket overload
// template<class T>
// const T& Node_Iterator<T>::operator[](unsigned int item)
// {
//     Node<T>* node = current;
//     while (node != nullptr)
//     {
//         if (node->getData() == item)
//             return item;
//         else node = node->getNext();
//     }
//     item = node->getData();
//     return item; //find node
// }

// != Overload
template<class T>
bool Node_Iterator<T>::operator!=(const Node_Iterator<T> &itr)
{
    return current != itr.current;
}

// == Overload
template<class T>
bool Node_Iterator<T>::operator==(const Node_Iterator<T> *itr)
{
    return current == itr;
}

// dereferencer
template<class T>
const T Node_Iterator<T>::operator*() const {return current->getData();}

#endif    // ITERATOR_CPP_