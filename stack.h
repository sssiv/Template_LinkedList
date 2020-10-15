
#include "list.h"
#include <stack>

template<class T>
class Stack
{
private:
    T data;
    unsigned int used;
public:
    Stack();
    void push(const T&);
    void pop();
    T top() const;
    int size() const;
    bool isEmpty() const;
};