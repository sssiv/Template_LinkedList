
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
    T seek();
    int size() const;
    bool isEmpty() const;

    Stack<T>& operator=(T);
};