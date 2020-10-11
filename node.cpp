#ifndef NODE_CPP_
#define NODE_CPP_
#include "node.h"

template<class T>
Node<T>::Node() : next(nullptr), prev(nullptr) {}

template<class T>
Node<T>::Node(T input) : next(nullptr), prev(nullptr), data(input) {}

template<class T>
void Node<T>::setData(T input) {data = input;}

template<class T>
T Node<T>::getData() {return data;}

template<class T>
void Node<T>::setNext(Node<T> *nextNode) {next = nextNode;}

template<class T>
void Node<T>::setPrev(Node<T> *prevNode) {prev = prevNode;}

template<class T>
Node<T>* Node<T>::getNext() {return next;}

template<class T>
Node<T>* Node<T>::getPrev() {return prev;}

#endif    // NODE_H_