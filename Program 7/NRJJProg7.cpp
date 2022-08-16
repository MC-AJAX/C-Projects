//Nathan Jermann, CSC 145 A, assignment #7, 4-30-19
//Program to test functions of NRJJBST class.
#include <iostream>
#include "NRJJBST.h"

using namespace std;

int main(){

    cout << "Binary Search Tree" << endl;
    NRJJBST* tree = new NRJJBST;

    tree->Insert(12, "node1");//add nodes to tree
    tree->Insert(34, "node2");
    tree->Insert(1, "node3");
    tree->Insert(18, "node4");
    tree->Insert(23, "node5");
    tree->Insert(67, "node6");
    tree->Insert(56, "node7");
    tree->Insert(35, "node8");
    tree->Insert(8, "node9");

    cout << "Print Tree in Pre-Order" << endl;
    tree->PrintTreePreOrder();

    cout << "Print Tree in Post-Order" << endl;
    tree->PrintTreePostOrder();

    cout << "Search Tree by name" << endl;
    string tempName = tree->SearchForName(18);
    cout << tempName << "\n" << endl;

    cout << "Search Tree by name" << endl;
    string tempName2 = tree->SearchForName(76);
    cout << tempName2 << "\n" << endl;

    cout << "Tree keys: ";
    tree->PrintTreeInOrder();

    cout << "Search key 31: ";
    bool b = tree->Search(31);
    if(b)
        cout << "found";
    else
        cout << "NOT found";
    cout << endl;

    cout << "Search key 18: ";
    b = tree->Search(18);
    if(b)
        cout << "found";
    else
        cout << "NOT found";
    cout << endl;

    // Retrieving minimum and maximum key
    cout << "Min. Key : " << tree->FindMin();
    cout << endl;
    cout << "Max. Key : " << tree->FindMax();
    cout << endl;

    // Finding successor
    // Successor(31) should be 53
    // Successor(15) should be 23
    // Successor(88) should be -1 or NULL
    cout << "Successor(31) = ";
    cout << tree->Successor(31) << endl;
    cout << "Successor(15) = ";
    cout << tree->Successor(15) << endl;
    cout << "Successor(88) = ";
    cout << tree->Successor(88) << endl;

    // Finding predecessor
    // Predecessor(12) should be 7
    // Predecessor(29) should be 23
    // Predecessor(3) should be -1 or NULL
    cout << "Predecessor(12) = ";
    cout << tree->Predecessor(12) << endl;
    cout << "Predecessor(29) = ";
    cout << tree->Predecessor(29) << endl;
    cout << "Predecessor(3) = ";
    cout << tree->Predecessor(3) << endl;

    // Removing a key
    cout << "Removing key 15" << endl;
    tree->Remove(15);
    cout << "Removing key 53" << endl;
    tree->Remove(53);

    // Printing all keys again
    // Key 15 and 53 should be disappeared
    cout << "Tree keys: ";
    tree->PrintTreeInOrder();

    return 0;
}
