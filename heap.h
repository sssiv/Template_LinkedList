#ifndef HEAP_H_
#define HEAP_H_

template<class T>
class Heap
{
private:
    T* data;
    T left(T);
    T right(T);
    T parent(T);
    int _size;
public:
    Heap();
    void push(T);
    void pop();
    int getSize();
    Heap<T>& operator+=(const T&);
    ~Heap();
};

#include "heap.cpp"
#endif    // HEAP_H_