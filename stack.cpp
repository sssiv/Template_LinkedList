#include "stack.h"

// Default Constructor
template<class T>
Stack<T>::Stack() : used(0) {}

// Pop - Deletes Top
template<class T>
void Stack<T>::pop() 
{
    if (List.isEmpty())
    {
        used = 0;
        return;
    }
    Node<T>* node = List.getTail();
    T value = node->getData();
    List.deleteNode(node);
    used != 0 ? --used : used = 0;  // That looks sexy
}

// Push - Adds item to top
template<class T>
void Stack<T>::push(const T& item) 
{
    Node<T>* temp = List.getTail();
    List.makeNewNode(item);
    temp->setPrev(List.getTail());
    temp->setNext(nullptr);
    ++used;
}

// Top - Returns whats at the end of the Linked List
template<class T>
T Stack<T>::top() const {return List.getTail()->getData();} 

// size - How many Lists are in the Stack
template<class T>
int Stack<T>::size() const {return used;}

// isEmpty
template<class T>
bool Stack<T>::isEmpty() const {return used == 0;}

// = Operator Overload, Assignment  
template<class T>
Stack<T>& Stack<T>::operator=(T item) {data = item;}

// << Operator Overload, output
template<class T>
std::ostream& operator<<(std::ostream& out, const Stack<T>& stack)
{
    out << stack.top() << "\t";
    out << std::endl;
    return out;
}