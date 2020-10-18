#ifndef STACK_H_
#define STACK_H_
#include "list.h"

template<class T>
class Stack
{
private:
    Node<T>* top;
    T data;
    unsigned int used;
public:
    Stack();
    void push(const T&);    // Adds to top
    void pop();             // Deletes top
    T top() const;          // Returns Top
    T seek();               // Returns item
    int size() const;       // Returns stack size
    bool isEmpty() const;   // Returns if stack is empty

    Stack<T>& operator=(T);
};
#include "stack.cpp"
#endif    // STACK_H_