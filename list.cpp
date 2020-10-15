#ifndef LIST_CPP_
#define LIST_CPP_
#include "list.h"

// // Iterator 
// template<class T>
// typename LinkedList<T>::iterator LinkedList<T>::begin() 
// {
//     iterator temp;
//     return temp;
// }

//  // Iterator
// template<class T>
// typename LinkedList<T>::iterator LinkedList<T>::end() 
// {
//     iterator temp;
//     return temp;
// }

// Default Constructor
template<class T>
LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr) {}

// T Constructor
template<class T>
LinkedList<T>::LinkedList(T input) {}

// Deconstructor
template<class T>
LinkedList<T>::~LinkedList() 
{
    Node<T> *node = head;
    Node<T> *temp = new Node<T>;

    while (node)
    {
        temp = node;
        node = node->getNext();
        delete temp;
    }
}

// Copy Constructor
template<class T>
LinkedList<T>::LinkedList(const LinkedList<T>& List)
{
    Node<T> copy;
    for (Node<T> *temp = List.head, *node = &copy; temp; temp = temp->getNext())
    {
        node->setNext(new Node<T>(temp->getData()));
        node = node->getNext();
    }
    this->head = copy.getNext();
} 

// += Operator Overload
template<class T>
LinkedList<T>& LinkedList<T>::operator+=(T data)
{
    makeNewNode(data);
    return *this;
}
 
// << Operator Overload
template<class T>
std::ostream& operator<<(std::ostream &out, const LinkedList<T> &List)
{  
    for (Node<T>* I = List.head; I != nullptr; I = I->getNext())
    {
        out << I->getData() << "\t"; 
    }
    return out;
}

// List Size
template<class T>
int LinkedList<T>::listSize() const
{
    if (head == nullptr) return 0;
    Node<T> *temp = head;
    if (temp == nullptr) return 0;
    int count = 1;
    while (temp->getNext() != nullptr)
    {
        ++count;
        temp = temp->getNext();
    }
    return count;
}

// Is or not Empty
template<class T>
bool LinkedList<T>::isEmpty() const {return head == nullptr;}

// Make New Node
template<class T>
void LinkedList<T>::makeNewNode(T Type)
{
    Node<T> *temp = new Node<T>;
    temp->setData(Type);
    temp->setNext(nullptr);
    temp->setPrev(tail);

    if (tail == nullptr)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->setNext(temp);
        tail = temp;
    }
}

// Public - Insert at head
template<class T>
void LinkedList<T>::insertFirst(T Type)
{
    Node<T> *temp = new Node<T>; 
    temp->setData(Type);
    temp->setNext(head);
    temp->setPrev(nullptr);
    head = temp;  
}

// Search for Node Function
template<class T>
Node<T>* LinkedList<T>::findItem(const T& item)
{
    Node<T> *walker = head;
    for (walker; (walker != nullptr) && (walker->getData() != item); walker = walker->getNext());
    return walker;
}

// Getter - Head*
template<class T>
LinkedList<T>* LinkedList<T>::getHead() const {return head;}

// Getter - Tail*
template<class T>
LinkedList<T>* LinkedList<T>::getTail() const {return tail;}

// Private - Delete Node
template<class T>
void LinkedList<T>::deleteNode(Node<T> *node)
{
    if (node == head)
    {
        deleteHead();
        return;
    }
    if (node == tail)
    {
        deleteTail();
        return;
    }
    if (node == nullptr)
    {
        return;
    }
    Node<T> *next = node->getNext();
    Node<T> *prev = node->getPrev();
    if (head == tail)
    {
        head = tail = nullptr;
    }
    else if (node != tail && node != head)
    {
        next->setPrev(prev);
        prev->setNext(next);
    }
    delete node;
}

// Private - Delete Head
template<class T>
void LinkedList<T>::deleteHead()
{
    if (head == tail)
    {
        delete head;
        head = nullptr;
        tail = nullptr;
    }
    head = head->getNext();
    delete head->getPrev();
    head->setPrev(nullptr);
}

// Private - Delete Tail 
template<class T>
void LinkedList<T>::deleteTail() 
{
    if (tail == head && tail != nullptr)
    {
        delete tail;
        tail = nullptr;
        head = nullptr;
    }
    else
    {
        tail = tail->getPrev();
        delete tail->getNext();
        tail->setNext(nullptr);
    }
}

// Public - Delete Node
template<class T>
void LinkedList<T>::deleteNode(T item) 
{
    Node<T> *temp = findItem(item);
    if (temp != nullptr) 
        deleteNode(temp);
}

// Public - Clear List
template<class T>
void LinkedList<T>::clearList() 
{
    Node<T> *temp = head;
    while (temp->getNext())
    {
        temp = head->getNext();
        delete head;
        head = temp;
        head->setPrev(nullptr);
    }
    head = tail = nullptr;
}

// Private - Insert Before Node
template<class T>
void LinkedList<T>::insertBefore(Node<T>* node, T item) 
{
    Node<T> *newNode = new Node<T>(item);
    Node<T> *prev = node->getPrev();
    if (head == nullptr)
    {
        head = tail = newNode;
        return;
    }
    else if (node == head)
    {
        insertFirst(item);
        return;
    }
    else if (node != nullptr)
    {
        newNode->setNext(node);
        node->setPrev(newNode);
        newNode->setPrev(prev);
        prev->setNext(newNode);
    }
}

// Public - Before After Node
template<class T>
void LinkedList<T>::insertBefore(T search, T item) 
{
    Node<T>* ptrNode = findItem(search);
    insertBefore(ptrNode, item);
}

// Private - Insert After Node
template<class T>
void LinkedList<T>::insertAfter(Node<T>* node, T item) 
{
    Node<T> *newNode = new Node<T>(item);
    if (head == nullptr)
    {
        head = tail = newNode;
        return;
    }
    if (node == tail)
    {
        makeNewNode(item);
        return;
    }
    if (node->getNext() == tail)
    {
        newNode->setNext(tail);
        node->setNext(newNode);
        node = newNode;
    }
    else if (node->getNext() != nullptr)
    {
        newNode->setNext(node->getNext());
        newNode->setPrev(node);
        node->setNext(newNode);
        node->setPrev(newNode->getPrev());
    }
}

// Public - Insert After Node
template<class T>
void LinkedList<T>::insertAfter(T search, T item) 
{
    Node<T>* ptrNode = findItem(search);
    insertAfter(ptrNode, item);
}

#endif    // LIST_CPP_