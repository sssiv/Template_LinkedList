#ifndef NODE_CPP_
#define NODE_CPP_
#include "node.h"

// Default Constructor
template<class T>
Node<T>::Node() : next(nullptr), prev(nullptr) {}

// T Constructor
template<class T>
Node<T>::Node(T input) : next(nullptr), prev(nullptr), data(input) {}

// Setter - Data
template<class T>
void Node<T>::setData(T input) {data = input;}

// Getter - Data
template<class T>
T Node<T>::getData() {return data;}

// Setter - Next*
template<class T>
void Node<T>::setNext(Node<T> *nextNode) {next = nextNode;}

// Setter - Prev*
template<class T>
void Node<T>::setPrev(Node<T> *prevNode) {prev = prevNode;}

// Getter - Next*
template<class T>
Node<T>* Node<T>::getNext() const {return next;}

// Getter - Prev*
template<class T>
Node<T>* Node<T>::getPrev() const {return prev;}

#endif    // NODE_H_