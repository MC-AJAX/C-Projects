//Nathan Jermann, CSC 145 A, assignment #6, 3-27-19
//A more secure version of the original Node file.

#ifndef NODE_H
#define NODE_H

#include <iostream>

class NRJJNode {
public:

    NRJJNode(int value):elem(value), nextPtr(NULL){};//constructor

    int elem;
    NRJJNode* nextPtr;//pointer to next node
};

#endif // NODE_H

/*

    |------------------------------------------------------------------|
    |                           NRJJNode                               |
    |------------------------------------------------------------------|
    |   +elem :int                                                     |
    |   +nextPtr :NRJJNode*                                            |
    |                                                                  |
    |------------------------------------------------------------------|
    |   <constructor>+NRJJNode(value :int)                             |
    |------------------------------------------------------------------|

*/
