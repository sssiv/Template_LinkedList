#ifndef QUEUE_CPP_
#define QUEUE_CPP_
#include "queue.h"

template<class T>
Queue<T>::Queue() : used(0) {}

template<class T>
void Queue<T>::push(const T& item) {List.makeNewNode(item);}

template<class T>
bool Queue<T>::empty() {return List.isEmpty();}

template<class T>
int Queue<T>::getSize() {return List.getSize();}

template<class T>
T Queue<T>::pop()
{
    T item;
    return item;
}

template<class T>
T Queue<T>::front()
{}



template<class T>
std::ostream& operator<<(std::ostream& out, const Queue<T>& Q)
{
    return out;
}

#endif    // QUEUE_CPP_