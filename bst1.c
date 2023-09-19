#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left = nullptr, *right = nullptr;
 
    Node() {}
    Node(int data): data(data) {}
};
 

Node* insert(Node* root, int key)
{
    
    if (root == nullptr) {
        return new Node(key);
    }
    
    if (key < root->data) {
        root->left = insert(root->left, key);
    }
 
    
    else {
        root->right = insert(root->right, key);
    }
 
    return root;
}
 

Node* findMinimum(Node* root)
{
    while (root->left) {
        root = root->left;
    }
 
    return root;
}
 

Node* findSuccessor(Node* root, Node* succ, int key)
{
    // base case
    if (root == nullptr) {
        return succ;
    }
 
    
    if (root->data == key)
    {
        if (root->right != nullptr) {
            return findMinimum(root->right);
        }
    }
    
    else if (key < root->data)
    {
        
        succ = root;
        return findSuccessor(root->left, succ, key);
    }
 
    else {
        return findSuccessor(root->right, succ, key);
    }
 
    return succ;
}
 
int main()
{
    int keys[] = { 15, 10, 20, 8, 12, 16, 25 };
 
 
    Node* root = nullptr;
    for (int key: keys) {
        root = insert(root, key);
    }
 
   
    for (int key: keys)
    {
        Node* succ = findSuccessor(root, nullptr, key);
 
        if (succ != nullptr) {
            cout << "The successor of node " << key << " is " << succ->data;
        }
        else {
            cout << "No Successor exists for node " << key;
        }
 
        cout << endl;
    }
 
    return 0;
}
