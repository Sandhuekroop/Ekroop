cpp
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
};

// Function to create a new Node in heap
Node* newNode(int data) {
    Node* temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to insert a new node with given key in BST
Node* insert(Node* node, int data) {
    // if the tree is empty
    if (node == NULL)
        return newNode(data);

    // else recur down the tree
    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    // return the (unchanged) node pointer
    return node;
}

// Function to print the tree
void printTree(Node* root, string indent, bool last) {
    if (root != NULL) {
        cout << indent;
        if (last) {
            cout << "R----";
            indent += "     ";
        } else {
            cout << "L----";
            indent += "|    ";
        }
        cout << root->data << endl;
        printTree(root->left, indent, false);
        printTree(root->right, indent, true);
    }
}

// Function to find the node with the maximum value in the BST.
Node* maxValueNode(Node* node) {
    Node* current = node;
    while (current && current->right != NULL)
        current = current->right;
    return current;
}

// Function to delete a node with given key from BST
Node* deleteNode(Node* root, int key) {
    if (root == NULL)
        return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {