#include <iostream>
#include "BinaryTree.h"

using namespace std;

/*struct Node {
    int data;
    Node* father;
    Node* left;
    Node* right;

    Node(Node* father, int value) {
        data = value;
        this->father = father;
        left = nullptr;
        right = nullptr;
    }
};

class Heap {
private:
    Node* root;
    bool root_init = true;

    Node* insertRecursively(Node* node, Node* father,  int value) {
        if (node == nullptr || root_init) {
            root_init = false;
            return new Node(father, value);
        }
        if (node->left == nullptr) {
            node->left = insertRecursively(node->left, node, value);
            sortingHeapLine(node->left);
        }
        else if (node->right == nullptr) {
            node->right = insertRecursively(node->right, node, value);
            sortingHeapLine(node->right);
        }
        return node;
    }

    void sortingHeapLine(Node* actual) {
        while (actual -> father != root) {
            if (actual->data > (actual->father)->data) {
                swap(actual, actual->father);
            }
            else return;

            actual = actual->father;
        }
    }

    void PreOrderTraversal(Node* root) {
        if (root != nullptr) {
            cout << root->data << " "; // V
            PreOrderTraversal(root->left); // L
            PreOrderTraversal(root->right); // R
        }
    }

    void inOrderTraversal(Node* root) {
        if (root != nullptr) {
            inOrderTraversal(root->left); // L
            cout << root->data << " "; // V
            inOrderTraversal(root->right); // R
        }
    }

    void PostOrderTraversal(Node* root) {
        if (root != nullptr) {
            PostOrderTraversal(root->left); // L
            PostOrderTraversal(root->right); // R
            cout << root->data << " "; // V
        }
    }

public:
    Heap() {
        root = new Node(nullptr, 0);
    }

    void insert(int value) {
        root = insertRecursively(root, root->father, value);
    }

    void printPreOrder() {
        PreOrderTraversal(root);
        cout << endl;
    }

    void printInOrder() {
        inOrderTraversal(root);
        cout << endl;
    }

    void printPostOrder() {
        PostOrderTraversal(root);
        cout << endl;
    }
};*/

int main() {
    BinaryTree tree;

    int doner = 0;

    while (cin >> doner) {
        cin >> doner;
        tree.insert(doner);
    }

    tree.printInOrder();
    tree.printPreOrder();
    tree.printPostOrder();

    return 0;
}

/*
666
1448
1000000
1
13
966
1410
13
87
33
2
4
1
*/