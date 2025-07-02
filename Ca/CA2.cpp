#include<iostream>
#include <iostream>
using namespace std;

// Define a node structure for the BST
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// BST insertion function
Node* insertBST(Node* root, int value) {
    // If tree is empty, create a new node
    if (root == nullptr) {
        return createNode(value);
    }
    // If value is smaller, go to left subtree
    if (value < root->data) {
        root->left = insertBST(root->left, value);
    }
    // If value is larger, go to right subtree
    else if (value > root->data) {
        root->right = insertBST(root->right, value);
    }
    // If value is equal, choose a convention (ignore or insert in right subtree)
    // Here, we can ignore duplicates or handle them in a specific manner as needed

    return root;
}

// Preorder traversal (Root, Left, Right)
void preorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main() {
    // Level 1: Storing Roll Numbers (BST Insertion)
    // Scenario: We have the roll numbers 31, 20, 40, 15, 25
    int rollNumbers[] = {31, 20, 40, 15, 25};
    int n = sizeof(rollNumbers) / sizeof(rollNumbers[0]);
    
    Node* root = nullptr;
    
    // Insert roll numbers into the BST
    for (int i = 0; i < n; i++) {
        root = insertBST(root, rollNumbers[i]);
    }

    // Level 2: Print Admission Form Order (Preorder Traversal)
    cout << "Preorder traversal of the BST: ";
    preorderTraversal(root);
    cout << endl;

    return 0;
}
