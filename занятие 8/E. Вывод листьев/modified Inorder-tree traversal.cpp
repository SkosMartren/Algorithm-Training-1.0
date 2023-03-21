#include<iostream>

using namespace std;

struct Node {
	int value;
	Node* left = nullptr;
	Node* right = nullptr;

	Node() = default;
	Node(int value) : value(value) {}
};


Node* add(Node* tr, int data) {

	if (tr == nullptr) { return new Node(data); }

	if (data > tr->value) {
		tr->right = add(tr->right, data);
	}

	if (data < tr->value) {
		tr->left = add(tr->left, data);
	}

	return tr;
}


void Inorder(Node* tr) {

	if (tr == nullptr) { return; }
	Inorder(tr->left);
	Inorder(tr->right);

	if (tr->left == nullptr && nullptr == tr->right) {
		cout << tr->value << '\n';
	}
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
}
