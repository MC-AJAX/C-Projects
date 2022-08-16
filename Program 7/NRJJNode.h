//Nathan Jermann, CSC 145 A, assignment #7, 4-30-19
// A node class used to create Binary Search Trees
#include <iostream>

#ifndef NRJJNODE_H
#define NRJJNODE_H

class NRJJNode {
public:
    NRJJNode(int tempKey, std::string tempName);
    void SetName(std::string tempName);
    std::string GetName() const;
    int key;
    NRJJNode* Left;
    NRJJNode* Right;
    NRJJNode* Parent;
    int Height;
    std::string name;
};

#endif

/*

    |------------------------------------------------------------------|
    |                           NRJJNode                               |
    |------------------------------------------------------------------|
    |   +name :string                                                  |
    |   +key :int                                                      |
    |   +Left :NRJJNode*                                               |
    |   +Right :NRJJNode*                                              |
    |   +Parent :NRJJNode*                                             |
    |   +Height :int                                                   |
    |------------------------------------------------------------------|
    |   <constructor>+NRJJStack(tempKey  :int, tempName :string)       |
    |   +SetName(tempName :string): void                               |
    |   +GetName():sting                                               |
    |------------------------------------------------------------------|

*/
