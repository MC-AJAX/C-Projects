//Nathan Jermann, CSC 145 A, assignment #6, 3-27-19
//function definitions of NRJJStackL.h class
#include <iostream>
#include "NRJJStackL.h"

NRJJStackL::NRJJStackL() :m_count(0), m_top(NULL) {
}

bool NRJJStackL::IsEmpty() const{
    return m_count == 0;//checks if stack is empty, returns true if empty
}

int NRJJStackL::Top() const{
    if(IsEmpty()){//if stack is empty, returns 0
        return 0;
    }
    return m_top->elem;//returns value of top node
}

void NRJJStackL::Push(int val){
    // Create a new Node
    NRJJNode* node = new NRJJNode(val);
    // The Next pointer of this new node
    // will point to current m_top node
    node->nextPtr = m_top;
    // The new Node now becomes the m_top node
    m_top = node;
    // One item is added
    m_count++;
}

void NRJJStackL::Pop(){
    // Do nothing if Stack throw exception
    if(IsEmpty()){
        std::cout << "cannot pop empty stack" << std::endl;
    }
    // Prepare the current m_top
    // to remove
    NRJJNode* node = m_top;
    // The new m_top node will be
    // the Next pointer of the current m_top node
    m_top = m_top->nextPtr;
    // Now it's safe to remove
    // the first element
    delete node;
    // One item is removed
    m_count--;
}
