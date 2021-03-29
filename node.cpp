//
// Created by SamSS
//
#ifndef NODE_CPP_
#define NODE_CPP_
#include "node.h"

// Default Constructor
T(T)
Node<T>::Node() : next(nullptr), prev(nullptr) {}

// T Constructor
T(T)
Node<T>::Node(T input) : next(nullptr), prev(nullptr), data(input) {}

// Setter - Data
T(T)
void Node<T>::setData(T input) {data = input;}

// Getter - Data
T(T)
const T& Node<T>::getData() const {return this->data;}

// Setter - Next*
T(T)
void Node<T>::setNext(Node<T> *nextNode) {next = nextNode;}

// Setter - Prev*
T(T)
void Node<T>::setPrev(Node<T> *prevNode) {prev = prevNode;}

// Getter - Next*
T(T)
Node<T>* Node<T>::getNext() const {return next;}

// Getter - Prev*
T(T)
Node<T>* Node<T>::getPrev() const {return prev;}

#endif    // NODE_CPP_