//
// Created by SamSS
//
#ifndef ITERATOR_H_
#define ITERATOR_H_
#include "node.h"
#include <iterator>

T(T)
class Node_Iterator : public std::iterator<std::forward_iterator_tag, T>
{
private:
    Node<T>* current;
    Node_Iterator<T>* iterateNext();     
    Node<T>* getCurrent();
    
public:
    Node_Iterator();
    Node_Iterator(Node<T>*);
    Node_Iterator(const Node<T>&);
    ~Node_Iterator();

    Node_Iterator<T> operator++(int);      //postfix
    Node_Iterator<T>& operator++();        //prefix  
    Node_Iterator<T> operator--(int);      //postfix
    Node_Iterator<T>& operator--();        //prefix
    
    Node_Iterator<T>& operator+=(unsigned int);   
    Node_Iterator<T>& operator-=(unsigned int);

    const T operator*() const;    //Only seems to work w/o a &
    //const T& operator[](unsigned int);

    Node_Iterator<T>& operator=(T);
    
    bool operator!=(const Node_Iterator<T>&);
    bool operator==(const Node_Iterator<T>*);
};

#include "iterator.cpp"
#endif    // ITERATOR_H