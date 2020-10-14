#ifndef QUEUE_H_
#define QUEUE_H_
#include "list.h"

template<class T>
class Queue 
{
private:
    LinkedList<T> List;
public:
    T pop();   //remove first in queue
    T front();  /// returns the first item
    void push(const T&);    //adds item to queue
    bool isEmpty(); 
    int getSize();      

    template<class S>
    friend std::ostream& operator<<(std::ostream&, const Queue<S>&); 
};

#include "queue.cpp"
#endif    // QUEUE_H_