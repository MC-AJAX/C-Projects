//Nathan Jermann, CSC 145 A, assignment #5, 3-20-19
//A more secure version of the original LinkedList file.

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "NRJJNodeOld.h"

template <typename T>
class LinkedList
{
private:
    int m_count;

public:
    // The first node in the list
    // or null if empty
    Node<T> * HeadPtr;

    // The last node in the list
    // or null if empty
    Node<T> * TailPtr;

    // Constructor
    LinkedList();

    // Get() operation
    Node<T> * Get(int index);

    // Insert() operation
    void InsertHead(T val);
    void InsertTail(T val);
    void Insert(int index, T val);

    // Search() operation
    int Search(T val);

    // Remove() operation
    void RemoveHead();
    void RemoveTail();
    void Remove(int index);

    // Additional operation
    int Count();
    void PrintList();
};

template <typename T>
LinkedList<T>::LinkedList() : m_count(0), HeadPtr(NULL), TailPtr(NULL) {}

template <typename T>
Node<T> * LinkedList<T>::Get(int index)
{
    // Check if the index is out of bound
    if(index < 0 || index > m_count)
        return NULL;

    // Start from the Head
    Node<T> * node = HeadPtr;

    // Iterate through the linked list elements
    // until it finds the selected index
    for(int i = 0; i < index; ++i)
    {
        node = node->NextPtr;
    }

    // Simply return the node result
    return node;
    node = NULL;
}

template <typename T>
void LinkedList<T>::InsertHead(T val)
{
    // Create a new Node
    Node<T> * node = new Node<T>(val);

    // The current Head will no longer become a Head
    // so the Next pointer of the new Node will
    // point to the current Head
    node->NextPtr = HeadPtr;

    // The new Node now become the Head
    HeadPtr = node;

    // If the linked list is empty
    // The Tail is also the Head
    if(m_count == 0)
        TailPtr = HeadPtr;

    // One element is added
    m_count++;
}

template <typename T>
void LinkedList<T>::InsertTail(T val)
{
    // If the linked list is empty,
    // just simply invoke InsertHead()
    if(m_count == 0)
    {
        InsertHead(val);
        return;
    }

    // Create a new Node
    Node<T> * node = new Node<T>(val);

    // The current Tail will no longer become a Tail
    // so the Next pointer of the current Tail will
    // point to the new node
    TailPtr->NextPtr = node;

    // The new Node now become the Tail
    TailPtr = node;

    // One element is added
    m_count++;
}

template <typename T>
void LinkedList<T>::Insert(int index, T val)
{
    // Check if the index is out of bound
    if(index < 0 || index > m_count)
        return;

    // If inserting a new Head
    if(index == 0)
    {
        InsertHead(val);
        return;
    }
    // If inserting a new Tail
    else if(index == m_count)
    {
        InsertTail(val);
        return;
    }

    // Start to find previous node
    // from the Head
    Node<T> * prevNode = HeadPtr;

    // Traverse the elements until
    // the selected index is found
    for(int i = 0; i < index - 1; ++i)
    {
        prevNode = prevNode->NextPtr;
    }

    // Create the next node which is
    // the element after previous node
    Node<T> * nextNode = prevNode->NextPtr;

    // Create a new node
    Node<T> * node = new Node<T>(val);

    // Insert this new node between
    // the previous node and the next node
    node->NextPtr = nextNode;
    prevNode->NextPtr = node;

    // One element is added
    m_count++;
}

template <typename T>
int LinkedList<T>::Search(T val)
{
    // If LinkedList is empty,
    // just return NOT_FOUND
    if(m_count == 0)
        return -1;

    // Need to count the index
    int index = 0;

    // Traverse from the Head node
    Node<T> * node = HeadPtr;

    // Traverse until the selected value
    // is matched with the value
    // of the current position,
    while(node->Value != val)
    {
        index++;
        node = node->NextPtr;

        // This will happen
        // if the selected value
        // is not found
        if(node == NULL)
        {
            return -1;
        }
    }

    return index;
}

template <typename T>
void LinkedList<T>::RemoveHead()
{
    // Do nothing if list is empty
    if(m_count == 0)
        return;

    // Save the current Head
    // to a new node
    Node<T> * node = HeadPtr;

    // Point the Head Pointer
    // to the element next to the current Head
    HeadPtr = HeadPtr->NextPtr;

    // Now it's safe to remove
    // the first element
    delete node;

    // One element is removed
    m_count--;
}

template <typename T>
void LinkedList<T>::RemoveTail()
{
    // Do nothing if list is empty
    if(m_count == 0)
        return;

    // If List element is only one
    // just simply call RemoveHead()
    if(m_count == 1)
    {
        RemoveHead();
        return;
    }

    // Start to find previous node
    // from the Head
    Node<T> * prevNode = HeadPtr;

    // This is the candidate of
    // removed items which is
    // the element next to the prevNode
    Node<T> * node = HeadPtr->NextPtr;

    // Traverse the elements until
    // the last element
    while(node->NextPtr != NULL)
    {
        prevNode = prevNode->NextPtr;
        node = node->NextPtr;
    }

    // the prevNode now becomes the Tail
    // so the Next pointer of the prevNode
    // point to NULL
    prevNode->NextPtr = NULL;
    TailPtr = prevNode;

    // Now it's safe to remove
    // the last element
    delete node;

    // One element is removed
    m_count--;
}

template <typename T>
void LinkedList<T>::Remove(int index)
{
    // Do nothing if list is empty
    if(m_count == 0)
        return;

    // Do nothing if index is out of bound
    if(index < 0 || index >= m_count)
        return;

    // If removing the current Head
    if(index == 0)
    {
        RemoveHead();
        return;
    }
    // If removing the current Tail
    else if(index == m_count - 1)
    {
        RemoveTail();
        return;
    }

    // Start to traverse the list
    // from the Head
    Node<T> * prevNode = HeadPtr;

    // Find the element before
    // the selected index
    for(int i = 0; i < index - 1; ++i)
    {
        prevNode = prevNode->NextPtr;
    }

    // The removed element is after
    // the prevNode
    Node<T> * node = prevNode->NextPtr;

    // The nextNode will be the neighbor of
    // prevNode if the node is removed
    Node<T> * nextNode = node->NextPtr;

    // Link the prevNode to nextNode
    prevNode->NextPtr = nextNode;

    // It's now safe to remove
    // the selected index element
    delete node;

    // One element is removed
    m_count--;
}

template <typename T>
int LinkedList<T>::Count()
{
    return m_count;
}

template <typename T>
void LinkedList<T>::PrintList()
{
    Node<T> * node = HeadPtr;

    while(node != NULL)
    {
        std::cout << node->Value << " -> ";
        node = node->NextPtr;
    }

    std::cout << "NULL" << std::endl;
}


#endif // LINKEDLIST_H

