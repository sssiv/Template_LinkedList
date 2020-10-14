#ifndef ITERATOR_H_
#define ITERATOR_H_
#include <iterator>
#include "node.h"
#include "list.h"

template<class T>
class Node_Iterator : public std::iterator<std::forward_iterator_tag, T>
{
private:
    Node<T>* current;
public:
    Node_Iterator();
    Node_Iterator(Node_Iterator<T>*);
    Node_Iterator(const Node_Iterator<T>&);
    ~Node_Iterator();

    Node_Iterator<T>* iterateNext();       //next
    Node<T>* getCurrent();

    Node_Iterator<T> operator++(int);      //postfix
    Node_Iterator<T>& operator++();        //prefix  
    Node_Iterator<T> operator--(int);      //postfix
    Node_Iterator<T>& operator--();        //prefix
    
    Node_Iterator<T>& operator+=(unsigned int);        //do I need a reference?
    Node_Iterator<T>& operator-=(unsigned int);

    T& operator*();                         //dereferencer, modifiable
    const T& operator*() const;             //const dereferencer, not modifiable 
    T& operator[](unsigned int);
    //const T& operator[](T) const;

    Node_Iterator<T> operator+(const Node_Iterator<T>& itr);
    Node_Iterator<T> operator-(T);
    Node_Iterator<T>& operator=(T);
    
    bool operator!=(const Node_Iterator<T>&);
    bool operator==(const Node_Iterator<T>*);
};
#include "iterator.cpp"
#endif    // ITERATOR_H_