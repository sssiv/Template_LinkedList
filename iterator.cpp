#ifndef ITERATOR_CPP_
#define ITERATOR_CPP_
#include "iterator.h"

// Constructor, default
template<class T>
Node_Iterator<T>::Node_Iterator() : current(nullptr) {}

// Constructor, pointer argument
template<class T>
Node_Iterator<T>::Node_Iterator(Node_Iterator<T>* node) {current = node;}

// Copy Constructor
template<class T>
Node_Iterator<T>::Node_Iterator(const Node_Iterator<T>& node) {current = node;}

// Deconstructor
template<class T>
Node_Iterator<T>::~Node_Iterator() {current = nullptr;}

// Next Node
template<class T>
Node_Iterator<T>* Node_Iterator<T>::iterateNext() {return current->getNext();}

// ++ prefix
template<class T>
Node_Iterator<T>& Node_Iterator<T>::operator++() 
{
    current = current->getNext();
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
Node_Iterator<T>& Node_Iterator<T>::operator+=(T item) 
{
    Node_Iterator<T>* next = current->getNext();
    current = next->getNext();
    return *this;
}

// + Overload
template<class T>
Node_Iterator<T> Node_Iterator<T>::operator+(T item) {}

// - Overload
template<class T>
Node_Iterator<T> Node_Iterator<T>::operator-(T item) {}

// = Assignment Operator
template<class T>
Node_Iterator<T>& Node_Iterator<T>::operator=(T item) {return current = current(item);}

// Const Bracket Overload 
// template<class T>
// const T& Node_Iterator<T>::operator[](T item) const 
// {
//     return current(item)->getData();
// }

// Bracket overload
template<class T>
T& Node_Iterator<T>::operator[](T& item)
{
    Node<T>* node = current;
    while (node != nullptr)
    {
        node->getData() == item ? item : node = node->getNext();
    }

    item = node->getData();
    return item; //find node
}

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
//template<class T>
//T& Node_Iterator<T>::operator*() {return current->getData();}

// Const dereferencer
//template<class T>
//const T& Node_Iterator<T>::operator*() const {return current->getData();}

#endif    // ITERATOR_CPP_