#include <iostream>
#include <algorithm>

using namespace std;

struct Node {
    int value;
    Node* left = nullptr;
    Node* right = nullptr;

    Node() = default;
    Node(int value) : value(value) {}
};


Node* add(Node* node, int value) {
    if (node == nullptr) { return new Node(value); }

    if (value < node->value) {
        node->left = add(node->left, value);
    }
    if (value > node->value) {
        node->right = add(node->right, value);
    }

    return node;
}

int  Node_Height(const Node* root) {
    if (root == nullptr) { return 0; }
    int max_height_left = Node_Height(root->left);
    int max_height_right = Node_Height(root->right);
    return  max(max_height_left, max_height_right) + 1;

}

int main() {

    Node* tr = nullptr;
    while (true) {
        int x;
        cin >> x;

        if (x == 0) break;

        tr = add(tr, x);
    }

    cout << Node_Height(tr);

    return 0;

}
