//Nathan Jermann, CSC 145 A, assignment #6, 3-27-19
//A more secure version of the original Node file.

#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename T>
class Node
{
public:
    T Value;
    Node<T> * NextPtr;

    Node(T value);
};

template <typename T>
Node<T>::Node(T value) : Value(value), NextPtr(NULL) {}

#endif // NODE_H

