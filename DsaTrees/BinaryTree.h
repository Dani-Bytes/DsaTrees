#pragma once
#include"Node.h"
class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = nullptr;
    }

    
    void insert(int value) {
        if (root == nullptr) {
            root = new Node(value);
        }
        else {
            insertNode(root, value);
        }
    }

    void insertNode(Node* node, int value) {
        if (value < node->value) {
            if (node->left == nullptr) {
                node->left = new Node(value);
                node->left->parent = node;
            }
            else {
                insertNode(node->left, value);
            }
        }
        else {
            if (node->right == nullptr) {
                node->right = new Node(value);
                node->right->parent = node;
            }
            else {
                insertNode(node->right, value);
            }
        }
    }

    Node* search(int value) {
        return searchNode(root, value);
    }

    Node* searchNode(Node* node, int value) {
        if (node == nullptr || node->value == value) {
            return node;
        }
        if (value < node->value) {
            return searchNode(node->left, value);
        }
        else {
            return searchNode(node->right, value);
        }
    }

    bool hasAncestors(Node* node) {
        return node->parent != nullptr;
    }

    bool hasChildren(Node* node) {
        return node->left != nullptr || node->right != nullptr;
    }

    bool hasSiblings(Node* node) {
        if (node->parent == nullptr) {
            return false;
        }
        if (node->parent->left != nullptr && node->parent->right != nullptr) {
            return true; 
        }
        return false;
    }

    void printAncestors(Node* node) {
        if (node == nullptr || node->parent == nullptr) {
            cout << "No ancestors found." << endl;
            return;
        }
        cout << "Ancestors: ";
        Node* current = node->parent;
        while (current != nullptr) {
            cout << current->value << " ";
            current = current->parent;
        }
        cout << endl;
    }

    void printChildren(Node* node) {
        if (node == nullptr) {
            return;
        }
        cout << "Children: ";
        if (node->left != nullptr) {
            cout << node->left->value << " ";
        }
        if (node->right != nullptr) {
            cout << node->right->value << " ";
        }
        cout << endl;
    }

    void printSiblings(Node* node) {
        if (node == nullptr || node->parent == nullptr) {
            cout << "No siblings found." << endl;
            return;
        }
        Node* parent = node->parent;
        cout << "Siblings: ";
        if (node != parent->left && parent->left != nullptr) {
            cout << parent->left->value << " ";
        }
        if (node != parent->right && parent->right != nullptr) {
            cout << parent->right->value << " ";
        }
        cout << endl;
    }
};

