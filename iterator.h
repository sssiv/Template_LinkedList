#ifndef ITERATOR_H_
#define ITERATOR_H_
#include <iterator>
#include "node.h"

template<class T>
class Node_Iterator : public std::iterator<std::forward_iterator_tag, T>
{
private:
    Node<T>* current;
public:
    Node_Iterator();
    Node_Iterator(Node_Iterator<T>*);
    Node_Iterator(const Node_Iterator<T>*);
    ~Node_Iterator();

    Node_Iterator<T>* iterateNext();       //next

    Node_Iterator<T> operator++(int);      //postfix
    Node_Iterator<T>& operator++();        //prefix  
    Node_Iterator<T> operator--(int);      //postfix
    Node_Iterator<T>& operator--();        //prefix
    
    Node_Iterator<T>& operator+=(T);        //do I need a reference?

    T& operator*();                         //dereferencer, modifiable
    const T& operator*() const;             //const dereferencer, not modifiable 
    T& operator[](T&);
    const T& operator[](T) const;

    Node_Iterator<T> operator+(T);
    Node_Iterator<T> operator-(T);
    Node_Iterator<T>& operator=(T);
    
    bool operator!=(const Node_Iterator<T>&);
    bool operator==(const Node_Iterator<T>*);
};
#include "iterator.cpp"
#endif    // ITERATOR_H_