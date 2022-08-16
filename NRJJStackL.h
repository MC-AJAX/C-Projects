//Nathan Jermann, CSC 145 A, assignment #6, 3-27-19
//derived class that implements stack.h with LinkedLists
#include <iostream>
#include "NRJJStack.h"
#include "NRJJNode.h"

#ifndef NRJJSTACKL_H
#define NRJJSTACKL_H

class NRJJStackL :NRJJStack {
public:
    NRJJStackL();
    bool IsEmpty() const;
    int Top()const;
    void Push(int val);
    void Pop();

private:
    int m_count;
    NRJJNode* m_top;
};

#endif

/*

    |------------------------------------------------------------------|
    |                           NRJJStackL                             |
    |------------------------------------------------------------------|
    |   -m_count :int                                                  |
    |   -m_top :NRJJNode*                                              |
    |                                                                  |
    |------------------------------------------------------------------|
    |   <constructor>+NRJJStackL()                                     |
    |   +IsEmpty():bool                                                |
    |   +Top():int                                                     |
    |   +Push(val :int):void                                           |
    |   +Pop() :void                                                   |
    |------------------------------------------------------------------|

*/
