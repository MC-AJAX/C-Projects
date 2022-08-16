//Nathan Jermann, CSC 145 A, assignment #7, 4-30-19
//Binary Search Tree Class
#include <iostream>
#include "NRJJNode.h"

#ifndef NRJJBST_H
#define NRJJBST_H

class NRJJBST {
private:
    NRJJNode* root;

protected:
    NRJJNode* Insert(NRJJNode* node, int tempKey, std::string tempName);
    void PrintTreeInOrder(NRJJNode* node);
    void PrintTreePreOrder(NRJJNode* node);
    void PrintTreePostOrder(NRJJNode* node);
    NRJJNode * Search(NRJJNode* node, int tempKey);
    std::string SearchForName(NRJJNode* node, int tempKey);
    int FindMin(NRJJNode* node);
    int FindMax(NRJJNode* node);
    int Successor(NRJJNode* node);
    int Predecessor(NRJJNode* node);
    NRJJNode* Remove(NRJJNode* node, int v);

public:
    NRJJBST();
    void Insert(int tempKey, std::string tempName);
    void PrintTreeInOrder();
    void PrintTreePreOrder();
    void PrintTreePostOrder();
    bool Search(int tempKey);
    std::string SearchForName(int tempKey);
    int FindMin();
    int FindMax();
    int Successor(int tempKey);
    int Predecessor(int tempKey);
    void Remove(int v);
};


#endif

/*

    |------------------------------------------------------------------|
    |                           NRJJBST                                |
    |------------------------------------------------------------------|
    |   -root :NRJJNode*                                               |
    |------------------------------------------------------------------|
    |   <constructor>+NRJJBST()                                        |
    |   +Insert(tempKey :int, tempName :string):void                   |
    |   +PrintTreeInOrder():void                                       |
    |   +PrintTreePreOrder():void                                      |
    |   +PrintTreeInOrder():void                                       |
    |   +Search(tempKey :int) :bool                                    |
    |   +SearchForName(tempKey :int) :string                           |
    |   +FindMin() :int                                                |
    |   +FindMax() :int                                                |
    |   +Successor(tempKey :int) :int                                  |
    |   +Predeccessor(tempKey :int) :int                               |
    |   +Remove(v :int) :void                                          |
    |------------------------------------------------------------------|

*/
