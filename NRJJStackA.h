//Nathan Jermann, CSC 145 A, assignment #6, 3-27-19
//derived class that implements NRJJStack.h with arrays
#include <iostream>
#include "NRJJStack.h"

#ifndef NRJJSTACKA_H
#define NRJJSTACKA_H

class NRJJStackA :NRJJStack{
public:
    NRJJStackA(int newSize = 10);//constructor
    int Size() const;//returns size of stack
    bool IsEmpty() const;
    bool IsFull() const;
    int Top()const;
    void Push(int val);
    void Pop();

private:
    int* arrayPtr;//array of stack elements
    int topIndex;//index of top stack
    int arraySize;//stack capacity
};

#endif

/*

    |------------------------------------------------------------------|
    |                           NRJJStackA                             |
    |------------------------------------------------------------------|
    |   -topIndex :int                                                 |
    |   -arrayPtr :int*                                                |
    |   -arraySize :int                                                |
    |                                                                  |
    |------------------------------------------------------------------|
    |   <constructor>+NRJJStackA(newSize :int)                         |
    |   +IsFull :bool                                                  |
    |   +Size() :int                                                   |
    |   +IsEmpty():bool                                                |
    |   +Top():int                                                     |
    |   +Push(val :int):void                                           |
    |   +Pop() :void                                                   |
    |------------------------------------------------------------------|

*/
