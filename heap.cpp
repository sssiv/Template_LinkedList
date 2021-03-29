#ifndef HEAD_CPP_
#define HEAD_CPP_
#include "heap.h"

// Default Constructor 
template<class T>
Heap<T>::Heap() : data(nullptr), _size(0)
{}

template<class T>
void Heap<T>::push(T item)
{
    // ++_size;
    // if (data == nullptr)
    // {
    //     data = new data[_size];
    //     data[0] = item;
    //     return;
    // }
    // T *temp = new data[_size + 1];
    // for (int i = 0; i < _size; ++i)
    //     temp[i] = data[i];
    // temp[_size] = item;
    // data = temp;
}

template<class T>
void Heap<T>::pop()
{}

template<class T>
int Heap<T>::getSize() {return _size;}

template<class T>
Heap<T>& Heap<T>::operator+=(const T& item) {return push(item);}

// Deconstructor
template<class T>
Heap<T>::~Heap() {delete [] data;}

#endif    // HEAD_CPP_