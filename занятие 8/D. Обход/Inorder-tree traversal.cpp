#include <iostream>
#include <set>

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

set<int> NodesTree;

void Inorder(Node* root) {
    if (root == nullptr) { return; }

    // preorder
    //

    Inorder(root->left);

    // inorder
    NodesTree.insert(root->value);

    Inorder(root->right);

    // postorder
    //
}

int main() {

    Node* tr = nullptr;

    while (true) {

        int data;
        cin >> data;
        if (data == 0) { break; }

        tr = add(tr, data);
    }

    Inorder(tr);

    for (int node : NodesTree) {
        cout << node << '\n';
    }
    return 0;
}
