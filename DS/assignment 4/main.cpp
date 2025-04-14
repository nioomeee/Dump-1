// Write a C/C++ program to perform the following operations on a binary tree:

// Create a binary tree by inserting n nodes, where the user manually decides the position (left or right) of each node.

// Perform and display the tree traversals:
//      Preorder Traversal
//      Inorder Traversal
//      Postorder Traversal

// Search for a specific element in the tree and display whether it exists or not.

// Calculate and print the sum of all node values in the tree.

// Find and display the maximum value present in the tree.
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Tree {
public: 
    Node* root;

    Tree() {
        root = NULL;
    }

    void insert(Node*& root, int val) {
        if(root == NULL) {
            root = new Node(val);
            return;
        }

        if(val < root->data) {
            insert(root->left, val);
        } else {
            insert(root->right, val);
        }
    }

    void preOrder(Node* root) {
        if(root == NULL) return;

        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

    void inOrder(Node* root) {
        if(root == NULL) return;

        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    void postOrder(Node* root) {
        if(root == NULL) return;

        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }

    int findMax(Node* root) {
        if(root == NULL) return 0;

        int leftMax = findMax(root->left);
        int rightMax = findMax(root->right);

        return max(root->data, max(leftMax, rightMax));
    }

    bool search(Node* root, int target) {
        if (root == NULL) return false;

        if(root->data == target) return true;

        if(target < root->data) {
            return search(root->left, target);
        } else {
            return search(root->right, target);
        }
    }

    int sumTree(Node* root) {
        if(root == NULL) return 0;

        return root->data + sumTree(root->left) + sumTree(root->right);
    }
};

int main(){
    
    Tree t;
    t.insert(t.root, 10);
    t.insert(t.root, 20);
    t.insert(t.root, 5);
    t.insert(t.root, 30);
    t.insert(t.root, 25);
    t.insert(t.root, 8);

    cout << "\nPreOrder: ";
    t.preOrder(t.root);

    cout << "\nInOrder: ";
    t.inOrder(t.root);

    cout << "\nPostOrder: ";
    t.postOrder(t.root);

    cout << "\nThe maximum = "<<t.findMax(t.root);

    cout<<endl;
    return 0;
}