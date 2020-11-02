//
// Created by SamSS
//
#ifndef STACK_H_
#define STACK_H_
#include "list.h"

template<class T>
class Stack
{
private:
    LinkedList<T> List;
    size_t used;
public:
    Stack();
    ~Stack();
    void push(const T&);    // Adds to top
    void pop();             // Deletes top
    const T top() const;    // Returns Top
    T seek();               // Returns item
    int size() const;       // Returns stack size
    bool isEmpty() const;   // Returns if stack is empty

    Stack<T>& operator=(T); // LinkedList Param?

template<class S>
friend std::ostream& operator<<(std::ostream&, const Stack<S>&);
};
#include "stack.cpp"
#endif    // STACK_H_