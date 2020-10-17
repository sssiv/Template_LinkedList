#ifndef QUEUE_CPP_
#define QUEUE_CPP_
#include "queue.h"

template<class T>
Queue<T>::Queue() : used(0) {}

template<class T>
Queue<T>::~Queue() {}

template<class T>
void Queue<T>::push(const T& item) 
{
    if (used >= SIZE)
        return;
    List[used].makeNewNode(item); 
    ++used;
}

template<class T>
bool Queue<T>::empty() {return used == 0;}

template<class T>
int Queue<T>::getSize() {return used;}

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
Queue<T>& Queue<T>::operator=(T item) 
{}

template<class T>
std::ostream& operator<<(std::ostream& out, const Queue<T>& Q)
{
    out << Q.List << "\t";
    return out;
}

#endif    // QUEUE_CPP_