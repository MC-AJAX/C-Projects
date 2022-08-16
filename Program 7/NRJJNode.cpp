//Nathan Jermann, CSC 145 A, assignment #7, 4-30-19
//Implementation of NRJJNode class functions
#include <iostream>
#include "NRJJNode.h"
using namespace std;

NRJJNode::NRJJNode(int tempKey, string tempName)
    : key(tempKey), name(tempName), Left(NULL), Right(NULL), Parent(NULL){}

void NRJJNode::SetName(string tempName){
    name = tempName;
}

string NRJJNode::GetName() const{
    return name;
}

