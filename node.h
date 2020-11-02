//
// Created by SamSS
//
#ifndef NODE_H_
#define NODE_H_
#include <iostream>

template<class T>
class Node
{
private:
    Node<T> *next, *prev;
    T data;

public:
    Node();
    Node(T);
    
    void setData(T); 
    void setNext(Node<T>*);
    void setPrev(Node<T>*);
    
    T getData() const;
    Node<T>* getNext() const;
    Node<T>* getPrev() const;

    template<class S>
    friend std::ostream& operator<<(std::ostream&, const Node<S>&);
};

#include "node.cpp"
#endif    // NODE_H_

