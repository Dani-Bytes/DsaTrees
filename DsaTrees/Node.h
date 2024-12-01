#pragma once
#include <iostream>
using namespace std;
class Node {
public:
    int value;
    Node* left;
    Node* right;
    Node* parent;

    Node(int value) {
        this->value = value;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
    }
};
