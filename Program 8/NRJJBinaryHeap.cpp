//Nathan Jermann, CSC 145 A, assignment #8, 5-1-19
//Function implementation of NRJJBinaryHeap class
#include <iostream>
#include "NRJJBinaryHeap.h"

using namespace std;

NRJJBinaryHeap::NRJJBinaryHeap(int hCap, int hSize){//basic constructor for empty heap
    heapSize = hSize;
    capacity = hCap;
    heapPtr = new int[hCap];
}

NRJJBinaryHeap::NRJJBinaryHeap(int arr[],int hSize)//constructor for passing NRJJBinaryHeap a pre-made array
    : capacity(hSize), heapPtr(new int [capacity]), heapSize(0){
    HeapSort(arr, capacity);
}


void NRJJBinaryHeap::HeapSort(int arr[], int hSize){//turns array into a heap, and returns it into an array in ascending order
    for(int i=0; i<hSize; i++){//plug elements of array into heap
        InsertKey(arr[i]);
    }
    int x = 0;

    for(int i = heapSize - 1; i == heapSize - 1; i--){//plug heap elements back into array
        int temp = ExtractMin();
        arr[x] = temp;
        x++;
    }
    PrintArray(arr, hSize);//print new sorted array
}

void NRJJBinaryHeap::InsertKey(int key){//insets a new key at end of heap
    if (heapSize == capacity){
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }

    heapSize++;//insert new key at end
    int i = heapSize - 1;
    heapPtr[i] = key;

    while (i != 0 && heapPtr[Parent(i)] > heapPtr[i])//make sure values are in right order
    {
        int temp = heapPtr[i];//switch elements if top is larger
        heapPtr[i] = heapPtr[Parent(i)];
        heapPtr[Parent(i)] = temp;
        i = Parent(i);
    }
}

int NRJJBinaryHeap::ExtractMin(){//returns the minimum value (always the root) of the heap
    if (heapSize <= 0)//if heap doesn't exist, throw exception
        return INT_MAX;
    if (heapSize == 1)//if heap is only root, return root
    {
        heapSize--;
        return heapPtr[0];
    }

    int root = heapPtr[0];   //store minimum element and remove it from tree
    heapPtr[0] = heapPtr[heapSize-1];
    heapSize--;
    SortHeapAux(0);//sort remainder of heap

    return root;
}

void NRJJBinaryHeap::PrintArray(int arr[], int hSize){//print array
    for(int i=0; i < hSize; i++){
        cout << arr[i] << ", ";
    }
}

void NRJJBinaryHeap::SortHeapAux(int i) {//start with node(normally root first) and recursively orders the tree in heap fashion
    int l = Left(i);//left value of i
    int r = Right(i);//right value of i
    int smallest = i;//set i as smallest
    if (l < heapSize && heapPtr[l] < heapPtr[i])//if left value of i is smaller than heapSize smaller than i
        smallest = l;//set left value to smallest
    if (r < heapSize && heapPtr[r] < heapPtr[smallest])//if right value of i is smaller than heapSize smaller than smallest
        smallest = r;//set right value to smallest
    if (smallest != i)//if i is no longer smallest
    {
        int temp = heapPtr[i];//switch elements so i is bellow smallest
        heapPtr[i] = heapPtr[smallest];
        heapPtr[smallest] = temp;
        SortHeapAux(smallest);//run on next set of values
    }
}

//pseudocode for functions with more than three lines written as comments
