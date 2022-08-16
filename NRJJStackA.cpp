//Nathan Jermann, CSC 145 A, assignment #6, 3-27-19
//function definitions of NRJJStack.A class
#include <iostream>
#include "NRJJStackA.h"

NRJJStackA::NRJJStackA(int newSize): arrayPtr(new int[newSize]), arraySize(newSize), topIndex(-1){
}//constructor that determines size of stack array

int NRJJStackA::Size() const{
    return (topIndex + 1);
}

bool NRJJStackA::IsEmpty() const{
    return (topIndex < 0);
}

bool NRJJStackA::IsFull() const{
    return (arraySize == Size());
}

int NRJJStackA::Top() const{
    if (IsEmpty()){//checks to make sure stack is not empty
        return 0;
    }
    return arrayPtr[topIndex];
}

void NRJJStackA::Push(int val){
    if (arraySize== Size()){//checks to make sure stack is not at its limit
        return;
    }
    arrayPtr[++topIndex] = val;//inputs value at topIndex position
}

void NRJJStackA::Pop(){
    if (IsEmpty()){
        return;
    }
    --topIndex;
}
