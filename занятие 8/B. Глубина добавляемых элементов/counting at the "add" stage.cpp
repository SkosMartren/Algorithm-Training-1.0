#include <iostream>
#include <algorithm>

using namespace std;

int NodeHeight = 1;

struct Node {
    int value;
    Node* left = nullptr;
    Node* right = nullptr;

    Node() = default;
    Node(int value) : value(value) {}
};

Node* add(Node* node, int value) {

    if (node == nullptr) { 
        cout << NodeHeight << ' '; 
        return new Node(value); 
    }

    ++NodeHeight;
    if (value < node->value) {
        node->left = add(node->left, value);
    }
    if (value > node->value) {
        node->right = add(node->right, value);
    }

    return node;
}


int main() {

    Node* tr = nullptr;
    while (true) {
        int x;
        cin >> x;

        if (x == 0) { break; }

        tr = add(tr, x);
        NodeHeight = 1;
    }

    return 0;
}
