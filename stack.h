#ifndef STACK_H_
#define STACK_H_
#include "list.h"

template<class T>
class Stack
{
private:
    LinkedList<T> List;
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

    Stack<T>& operator=(T); // LinkedList Param?
};
#include "stack.cpp"
#endif    // STACK_H_