#ifndef QUEUE_H_
#define QUEUE_H_
#include "list.h"

template<class T>
class Queue 
{
private:
    LinkedList<T> List;
    size_t used;
public:
    Queue();
    ~Queue();
    T seek(int);
    void pop(T);            // remove first in queue
    T front() const;        // returns the first item
    void push(const T&);    // adds item to queue
    bool empty(); 
    int getSize() const;

    Queue<T>& operator=(const Queue<T>&);      

    template<class S>
    friend std::ostream& operator<<(std::ostream&, const Queue<S>&); 
};

#include "queue.cpp"
#endif    // QUEUE_H_