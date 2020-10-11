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
    void push(const T&);    //adds item to queue
    bool isEmpty(); 
    int getSize();

//friend std::ostream& 
};

#include "queue.cpp"
#endif    // QUEUE_H_