#ifndef ITERATOR_CPP_
#define ITERATOR_CPP_
#include "iterator.h"

//Constructor, default
template<class T>
Node_Iterator<T>::Node_Iterator() {}

//Constructor, pointer argument
template<class T>
Node_Iterator<T>::Node_Iterator(Node_Iterator<T> *node) {}

//Next
template<class T>
Node_Iterator<T>* Node_Iterator<T>::iterateNext()
{return this;}

//++ prefix
template<class T>
Node_Iterator<T>& Node_Iterator<T>::operator++() 
{ return *this;}

//++ postfix
template<class T>
Node_Iterator<T> Node_Iterator<T>::operator++(int i) 
{ return *this;}

//-- prefix
template<class T>
Node_Iterator<T>& Node_Iterator<T>::operator--() 
{ return *this;}

//-- postfix
template<class T>
Node_Iterator<T> Node_Iterator<T>::operator--(int i) 
{ return *this;}


template<class T>
Node_Iterator<T>& Node_Iterator<T>::operator+=(T item) {}

template<class T>
const T& Node_Iterator<T>::operator[](T item) const {}

template<class T>
T& Node_Iterator<T>::operator[](T item) {}

template<class T>
bool Node_Iterator<T>::operator!=(const Node_Iterator<T> *itr)
{return true;}

template<class T>
bool Node_Iterator<T>::operator==(const Node_Iterator<T> *itr)
{ return false;}

//dereferencer
template<class T>
T& Node_Iterator<T>::operator*() 
{}

//dereferencer, Const
template<class T>
const T& Node_Iterator<T>::operator*() const
{}


#endif    // ITERATOR_CPP_