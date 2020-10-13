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
Node_Iterator<T>::Node_Iterator(const Node_Iterator<T>& item) {current = item;}

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

template<class T>
Node_Iterator<T>& Node_Iterator<T>::operator+=(T item) 
{
    Node_Iterator<T>* next = current->getNext();
    current = next->getNext();
    return *this;
}

template<class T>
Node_Iterator<T> Node_Iterator<T>::operator+(T item) {}

template<class T>
Node_Iterator<T> Node_Iterator<T>::operator-(T item) {}

// = Assignment Operator
template<class T>
Node_Iterator<T>& Node_Iterator<T>::operator=(T item) {return current = current(item);}

// template<class T>
// const T& Node_Iterator<T>::operator[](T item) const 
// {return current(item)->getData();}

template<class T>
T& Node_Iterator<T>::operator[](T& item)
{
    return item; //find node
}

template<class T>
bool Node_Iterator<T>::operator!=(const Node_Iterator<T> *itr)
{
    return current != itr->current;
}

template<class T>
bool Node_Iterator<T>::operator==(const Node_Iterator<T> *itr)
{
    return current == itr;
}

//dereferencer
//template<class T>
//T& Node_Iterator<T>::operator*() {return current->getData();}

//dereferencer, Const
//template<class T>
//const T& Node_Iterator<T>::operator*() const {return current->getData();}

#endif    // ITERATOR_CPP_