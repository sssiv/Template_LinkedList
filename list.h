//
// Created by SamSS
//
#ifndef LIST_H_
#define LIST_H_

#include "iterator.h"

T(T)
class LinkedList 
{
private:
    typedef Iterator<T> itr;

    Node<T>* head;
    Node<T>* tail;

    Node<T>* findItem(const T&);
    const Node<T>* getHead() const;
    const Node<T>* getTail() const;

    void insertAfter(Node<T>*, T);
    void insertBefore(Node<T>*, T);
    void deleteNode(Node<T>*);
    void deleteHead();
    void deleteTail();

public:
    itr begin();
    itr end();
    LinkedList();
    LinkedList(T);
    LinkedList(const LinkedList<T>&);
    ~LinkedList();

    LinkedList<T>& operator+=(T);

    T(S)
    friend std::ostream& operator<<(std::ostream&, const LinkedList<S>&);

    int listSize() const;
    bool isEmpty() const;
    void makeNewNode(T);
    void insertFirst(T);
    void insertBefore(T, T);
    void insertAfter(T, T);
    void deleteNode(T);
    void clearList();
};

#include "list.cpp"
#endif    // LIST_H_