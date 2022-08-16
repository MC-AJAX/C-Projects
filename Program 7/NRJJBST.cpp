//Nathan Jermann, CSC 145 A, assignment #7, 4-30-19
//Implementation of NRJJBST functions
#include <iostream>
#include "NRJJBST.h"
using namespace std;

NRJJBST::NRJJBST() : root(NULL)
{
}

NRJJNode* NRJJBST::Insert(NRJJNode* node, int tempKey, string tempName){
    // If BST doesn't exist
    // create a new node as root
    // or it's reached when
    // there's no any child node
    // so we can insert a new node here
    if(node == NULL)
    {
        node = new NRJJNode(tempKey, tempName);
        node->Left = NULL;
        node->Right = NULL;
        node->Parent = NULL;
    }
    // If the given key is greater than
    // node's tempKey then go to right subtree
    else if(node->key < tempKey)
    {
        node->Right = Insert(node->Right, tempKey, tempName);
        node->Right->Parent = node;
    }
    // If the given key is smaller than
    // node's key then go to left subtree
    else
    {
        node->Left = Insert(node->Left, tempKey, tempName);
        node->Left->Parent = node;
    }

    return node;
}

void NRJJBST::Insert(int tempKey, string tempName)
{
    // Invoking Insert() function
    // and passing root node and given key
    root = Insert(root, tempKey, tempName);
}

void NRJJBST::PrintTreeInOrder(NRJJNode* node)
{
    // Stop printing if no node found
    if(node == NULL)
        return;

    // Get the smallest key first
    // which is in the left subtree
    PrintTreeInOrder(node->Left);

    // Print the key
    cout << node->key << " " << node->name << "\n";

    // Continue to the greatest key
    // which is in the right subtree
    PrintTreeInOrder(node->Right);
}

void NRJJBST::PrintTreeInOrder()
{
    // Traverse the BST
    // from root node
    // then print all keys
    PrintTreeInOrder(root);
    cout << endl;
}

void NRJJBST::PrintTreePreOrder(NRJJNode* node){
    if(node == NULL){
        return;
    }
    cout  << node->key << " " << node->name << "\n";

    PrintTreePreOrder(node->Left);
    PrintTreePreOrder(node->Right);
}

void NRJJBST::PrintTreePreOrder(){

    PrintTreePreOrder(root);
    cout << endl;
}

void NRJJBST::PrintTreePostOrder(NRJJNode* node) {
    if(node == NULL){
        return;
    }
    PrintTreePostOrder(node->Left);
    PrintTreePostOrder(node->Right);

    cout  << node->key << " " << node->name << "\n";
}

void NRJJBST::PrintTreePostOrder(){

    PrintTreePostOrder(root);
    cout << endl;
}

NRJJNode* NRJJBST::Search(NRJJNode* node, int tempKey)
{
    // The given key is
    // not found in BST
    if (node == NULL)
        return NULL;
    // The given key is found
    else if(node->key == tempKey)
        return node;
    // The given is greater than
    // current node's key
    else if(node->key < tempKey)
        return Search(node->Right, tempKey);
    // The given is smaller than
    // current node's key
    else
        return Search(node->Left, tempKey);
}

bool NRJJBST::Search(int tempKey)
{
    // Invoking Search() operation
    // and passing root node
    NRJJNode* result = Search(root, tempKey);

    // If key is found, returns TRUE
    // otherwise returns FALSE
    return result == NULL ?
        false :
        true;
}

string NRJJBST::SearchForName(NRJJNode* node, int tempKey){
    if (node == NULL){
        string error = "This key does not exist";
        return error;
    }
    // The given key is found
    else if(node->key == tempKey)
        return node->name;
    // The given is greater than
    // current node's key
    else if(node->key < tempKey)
        return SearchForName(node->Right, tempKey);
    // The given is smaller than
    // current node's key
    else
        return SearchForName(node->Left, tempKey);
}

string NRJJBST::SearchForName(int tempKey){
    string tempName = SearchForName(root, tempKey);
    return tempName;
}

int NRJJBST::FindMin(NRJJNode* node)
{
    if(node == NULL)
        return -1;
    else if(node->Left == NULL)
        return node->key;
    else
        return FindMin(node->Left);
}

int NRJJBST::FindMin()
{
    return FindMin(root);
}

int NRJJBST::FindMax(NRJJNode* node)
{
    if(node == NULL)
        return -1;
    else if(node->Right == NULL)
        return node->key;
    else
        return FindMax(node->Right);
}

int NRJJBST::FindMax()
{
    return FindMax(root);
}

int NRJJBST::Successor(NRJJNode* node)
{
    // The successor is the minimum key value
    // of right subtree
    if (node->Right != NULL)
    {
        return FindMin(node->Right);
    }
    // If no any right subtree
    else
    {
        NRJJNode* parentNode = node->Parent;
        NRJJNode* currentNode = node;

        // If currentNode is not root and
        // currentNode is its right children
        // continue moving up
        while ((parentNode != NULL) &&
            (currentNode == parentNode->Right))
        {
            currentNode = parentNode;
            parentNode = currentNode->Parent;
        }

        // If parentNode is not NULL
        // then the key of parentNode is
        // the successor of node
        return parentNode == NULL ?
            -1 :
            parentNode->key;
    }
}

int NRJJBST::Successor(int tempKey)
{
    // Search the key's node first
    NRJJNode* keyNode = Search(root, tempKey);

    // Return the key.
    // If the key is not found or
    // successor is not found,
    // return -1
    return keyNode == NULL ?
        -1 :
        Successor(keyNode);
}

int NRJJBST::Predecessor(NRJJNode* node)
{
    // The predecessor is the maximum key value
    // of left subtree
    if (node->Left != NULL)
    {
        return FindMax(node->Left);
    }
    // If no any left subtree
    else
    {
        NRJJNode* parentNode = node->Parent;
        NRJJNode* currentNode = node;

        // If currentNode is not root and
        // currentNode is its left children
        // continue moving up
        while ((parentNode != NULL) &&
            (currentNode == parentNode->Left))
        {
            currentNode = parentNode;
            parentNode = currentNode->Parent;
        }

        // If parentNode is not NULL
        // then the key of parentNode is
        // the predecessor of node
        return parentNode == NULL ?
            -1 :
            parentNode->key;
    }
}

int NRJJBST::Predecessor(int tempKey)
{
    // Search the key's node first
    NRJJNode* keyNode = Search(root, tempKey);

    // Return the key.
    // If the key is not found or
    // predecessor is not found,
    // return -1
    return keyNode == NULL ?
        -1 :
        Predecessor(keyNode);
}

NRJJNode* NRJJBST::Remove(NRJJNode* node, int tempKey)
{
    // The given node is
    // not found in BST
    if (node == NULL)
        return NULL;

    // Target node is found
    if (node->key == tempKey)
    {
        // If the node is a leaf node
        // The node can be safely removed
        if (node->Left == NULL && node->Right == NULL)
            node = NULL;
        // The node have only one child at right
        else if (node->Left == NULL && node->Right != NULL)
        {
            // The only child will be connected to
            // the parent's of node directly
            node->Right->Parent = node->Parent;

            // Bypass node
            node = node->Right;
        }
        // The node have only one child at left
        else if (node->Left != NULL && node->Right == NULL)
        {
            // The only child will be connected to
            // the parent's of node directly
            node->Left->Parent = node->Parent;

            // Bypass node
            node = node->Left;
        }
        // The node have two children (left and right)
        else
        {
            // Find successor or predecessor to avoid quarrel
            int successorKey = Successor(tempKey);

            // Replace node's key with successor's key
            node->key = successorKey;

            // Delete the old successor's key
            node->Right = Remove(node->Right, successorKey);
        }
    }
    // Target node's key is smaller than
    // the given key then search to right
    else if (node->key < tempKey)
        node->Right = Remove(node->Right, tempKey);
    // Target node's key is greater than
    // the given key then search to left
    else
        node->Left = Remove(node->Left, tempKey);

    // Return the updated BST
    return node;
}

void NRJJBST::Remove(int tempKey)
{
    root = Remove(root, tempKey);
}

/*
pseudocode

NRJJNode* NRJJBST::Insert(NRJJNode* node, int tempKey, string tempName){

    if the the BST doesnt exist or reached bottom of tree
        create a new node
        set the name value of node equal to tempName
        set the key value of node equal to tempKey
        set the left, right, and parent values of node equal to NULL

    else if the nods key is smaller than tempKey
        set the right value of node equal to Insert(node->Right, tempKey, tempName)
        set the parent value of the right value of node equal to node.

    else
        set the left value of node equal to Insert(node->Left, tempKey, tempName)
        set the parent value of the left value of node equal to node.

    return node
}

void NRJJBST::PrintTreePreOrder(NRJJNode* node){
    if the node is at the end of the tree
        return

    print the nodes key and name

    call PrintTreePreOrder with nodes left value
    call PrintTreePreOrder with nodes right value
}

void NRJJBST::PrintTreePostOrder(NRJJNode* node) {
    if the node is at the end of the tree
        return

    call PrintTreePreOrder with nodes left value
    call PrintTreePreOrder with nodes right value

   print the nodes key and name
}

string NRJJBST::SearchForName(NRJJNode* node, int tempKey){
    if the node doesnt exist
        print "This key does not exist

    else if nodes key value equals tempKey
        return nodes name value

    else if nodes key value is less than tempKey
        return a call of SearchForName with nodes right value and tempKey

    else
        return a call of SearchForName with nodes left value and tempKey
}

*/
