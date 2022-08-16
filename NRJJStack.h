//Nathan Jermann, CSC 145 A, assignment #6, 3-27-19
//base class for a stack which provides virtual functions and a constructor
#include <iostream>

#ifndef NRJJSTACK_H
#define NRJJSTACK_H

class NRJJStack {

public:
    NRJJStack(){};
    virtual bool IsEmpty() const{};
    virtual int Top()const{};
    virtual void Push(int val){};
    virtual void Pop(){};

protected:
    int m_count;//size of stack
};

#endif

/*

    |------------------------------------------------------------------|
    |                           NRJJStack                              |
    |------------------------------------------------------------------|
    |   -m_count :int                                                  |
    |------------------------------------------------------------------|
    |   <constructor>+NRJJStack()                                      |
    |   +IsEmpty():virtual bool                                        |
    |   +Top():virtual int                                             |
    |   +Push(val :int):virtual void                                   |
    |   +Pop() :virtual void                                           |
    |------------------------------------------------------------------|

*/
