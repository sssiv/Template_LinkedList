#ifndef QUEUE_CPP_
#define QUEUE_CPP_
#include "queue.h"
#include "list.h"

template<class T>
Queue<T>::Queue() : used(0) {}

template<class T>
Queue<T>::~Queue() {}

// Re-Learn How to use your own iterator...
template<class T>
T Queue<T>::seek(int index) 
{
    T find;
    Node<T>* node = List.getHead();
    int i = 0;
    for (node, i; node != nullptr && node != List.getTail() && i < index; ++i, node = node->getNext())
        find = node->getData();
    return find;
    //typename LinkedList<T>::iterator itr = List.begin();
    //for (itr, i; itr != List.end() && i < index && itr != nullptr; ++i, ++itr)
}

template<class T>
void Queue<T>::push(const T& item) 
{
    List.makeNewNode(item); 
    ++used;
}

template<class T>
bool Queue<T>::empty() {return used == 0;}

template<class T>
int Queue<T>::getSize() const {return used;}

template<class T>
void Queue<T>::pop(T item)
{
    if (List.isEmpty())
    {
        used = 0;
        return; 
    }
    List.deleteNode(item);
    --used;
}

template<class T>
T Queue<T>::front() const {return List.getHead()->getData();}

template<class T>
Queue<T>& Queue<T>::operator=(const Queue<T>& Q) 
{
    List = Q.List;
    return *this;
}

template<class T>
std::ostream& operator<<(std::ostream& out, const Queue<T>& Q)
{
    out << Q.List << "\t";
    return out;
}

#endif    // QUEUE_CPP_