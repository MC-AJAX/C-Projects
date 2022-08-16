//Nathan Jermann, CSC 145 A, assignment #5, 3-20-19
//int and double list that tests NRJJLinkedList.h
#include <iostream>
#include "NRJJLinkedList.h"
#include "NRJJNode.h"
using namespace std;

int main() {

    LinkedList<int> list1 = LinkedList<int>();

    list1.InsertHead(13);

    list1.InsertHead(15);

    list1.Insert(2,43);

    list1.InsertTail(76);

    cout << "List1 after first print:" << endl;
    list1.PrintList();
    cout << endl;

    cout << "Value of second index:" << endl;
    Node<int> * getPtr = list1.Get(1);
    if(getPtr != NULL) {
        cout << getPtr->Value;
    }
    else{
        cout << "Not found";
    }
    cout << "\n" << endl;

    cout << "Position of element 76:" << endl;
    int temp = list1.Search(76);
    cout << temp << "\n" << endl;

    list1.Remove(0);

    cout << "List1 after first element removed:" << endl;
    list1.PrintList();
    cout << endl;

    cout << "list1 after removing 5th element:" << endl;
    list1. Remove(5);
    list1.PrintList();
    cout << endl;

    cout << "list1 after removing tail:" << endl;
    list1.RemoveTail();
    list1.PrintList();
    cout << endl;



    LinkedList<double> list2 = LinkedList<double>();

    list2.InsertHead(13.5);

    list2.InsertHead(15.4);

    list2.Insert(2,43.3);

    list2.InsertTail(76.2);

    cout << "List2 after first print:" << endl;
    list2.PrintList();
    cout << endl;

    cout << "Value of second index:" << endl;
    Node<double> * get2Ptr = list2.Get(1);
    if(get2Ptr != NULL) {
        cout << get2Ptr->Value;
    }
    else{
        cout << "Not found";
    }
    cout << "\n" << endl;

    cout << "Position of element 76:" << endl;
    int temp2 = list2.Search(76.2);
    cout << temp2 << "\n" << endl;

    list2.Remove(0);

    cout << "List2 after first element removed:" << endl;
    list2.PrintList();
    cout << endl;

    cout << "list2 after removing 5th element:" << endl;
    list2.Remove(5);
    list2.PrintList();
    cout << endl;

    cout << "list2 after removing tail:" << endl;
    list2.RemoveTail();
    list2.PrintList();
    cout << endl;
}

