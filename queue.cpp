#ifndef QUEUE_CPP_
#define QUEUE_CPP_
#include "queue.h"
template<class T>
void Queue<T>::push(const T& item) {List.makeNewNode(item);}

template<class T>
bool Queue<T>::isEmpty() {return List.isEmpty();}

template<class T>
int Queue<T>::getSize() {return List.getSize();}

template<class T>
T Queue<T>::pop()
{
    T item = List.getHead()->data;
    List.deleteHead();
    return item;
}

#endif    // QUEUE_CPP_