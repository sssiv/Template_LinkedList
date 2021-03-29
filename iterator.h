//
// Created by SamSS
//
#ifndef ITERATOR_H_
#define ITERATOR_H_
#include "node.h"
#include <iterator>

T(T)
class Iterator : public std::iterator<std::forward_iterator_tag, T>
{
private:
    Node<T>* current;
    Iterator<T>* iterateNext();     
    Node<T>* getCurrent();
    
public:
    Iterator();
    Iterator(Node<T>*);
    Iterator(const Node<T>&);
    ~Iterator();

    Iterator<T>& operator++();        //prefix  
    Iterator<T> operator++(int);      //postfix
    Iterator<T>& operator--();        //prefix
    Iterator<T> operator--(int);      //postfix

    Iterator<T>& operator+=(unsigned int);   
    Iterator<T>& operator-=(unsigned int);

    const T operator*() const;    //Only seems to work w/o a &
    //const T& operator[](unsigned int);

    Iterator<T>& operator=(T);
    
    bool operator!=(const Iterator<T>&);
    bool operator==(const Iterator<T>*);
};

#include "iterator.cpp"
#endif    // ITERATOR_H