//
// Created by SamSS
//
#ifndef LIST_H_
#define LIST_H_
#include <iostream>
#include <string>
#include "node.h"
#include "iterator.h"
#define NEW_LINE std::cout << std::endl
#define PAUSE system("pause")
#define CLEAR system("clear")

template<class T>
class LinkedList 
{
private:
    Node<T>* head;
    Node<T>* tail;
    Node<T>* findItem(const T&);
    void insertAfter(Node<T>*, T);
    void insertBefore(Node<T>*, T);
    void deleteNode(Node<T>*);
    void deleteHead();
    void deleteTail();

public:
    typedef Node_Iterator<T> iterator;
    iterator begin();
    iterator end();
    LinkedList();
    LinkedList(T);
    LinkedList(const LinkedList<T>&);
    ~LinkedList();
    Node<T>* getHead() const;
    Node<T>* getTail() const;

    LinkedList<T>& operator+=(T);
    template<class S>
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