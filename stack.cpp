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
    List.deleteNode(List.getTail());
}

// Push - Adds item to top
template<class T>
void Stack<T>::push(const T& item) 
{
    List.makeNewNode(item);
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