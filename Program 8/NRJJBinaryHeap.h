//Nathan Jermann, CSC 145 A, assignment #8, 5-1-19
//Array based binary heap class

#ifndef NRJJBINARYHEAP_H
#define NRJJBINARYHEAP_H
#include <iostream>
#include <array>

class NRJJBinaryHeap{
private:
    int* heapPtr;
    int heapSize;
    int capacity;

    // helper function
    int Parent(int i) { return (i-1)/2; } // i/2
    int Left(int i) { return (2*i+1); } // i*2+1
    int Right(int i) { return (2*i+2); } // i*2+2

public:
    NRJJBinaryHeap(int hCap, int hSize);//basic constructor for empty heap
    NRJJBinaryHeap(int arr[], int hSize);//constructor for passing NRJJBinaryHeap a pre-made array
    void HeapSort(int arr[], int hSize);//turns array into a heap, and returns it into an array in ascending order
    void InsertKey(int key);//insets a new key at end of heap
    int ExtractMin();//returns the minimum value (always the root) of the heap
    void PrintArray(int arr[], int hSize);//prints an array
    void SortHeapAux(int i);//start with root and recursively orders the tree in heap fashion
};

#endif

/*

    |------------------------------------------------------------------|
    |                           NRJJBinaryHeap                         |
    |------------------------------------------------------------------|
    |   -capacity :int                                                 |
    |   -heapSize :int                                                 |
    |   -heapPtr :int*                                                 |
    |------------------------------------------------------------------|
    |   <constructor>+NRJJBinaryHeap(hCap :int, hSize :int)            |
    |   <constructor>+NRJJBinaryHeap(arr[] :int, hSize :int)           |
    |   +Parent(i :int):int                                            |
    |   +Left(i :int):int                                              |
    |   +Right(i :int):int                                             |
    |   +HeapSort(arr[] :int, hSize :int):void                         |
    |   +InsertKey(key :int):void                                      |
    |   +ExtractMin() :int                                             |
    |   +PrintArray(arr[] :int, hSize :int):void                       |
    |   +SortHeapAux(i :int):void                                      |
    |------------------------------------------------------------------|

*/
