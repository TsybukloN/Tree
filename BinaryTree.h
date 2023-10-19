#pragma once

using namespace std;

namespace binaryNode {

    struct Node {
        int data;
        Node* left;
        Node* right;

        Node(int value) {
            data = value;
            left = nullptr;
            right = nullptr;
        }
    };

}

class BinaryTree {
private:
    binaryNode::Node* root;

    binaryNode::Node* insertRecursively(binaryNode::Node* node, int value) {
        if (node == nullptr) {
            return new binaryNode::Node(value);
        }
        if (value < node->data) {
            node->left = insertRecursively(node->left, value);
        }
        else if (value > node->data) {
            node->right = insertRecursively(node->right, value);
        }
        return node;
    }

    void PreOrderTraversal(binaryNode::Node* node) {
        if (node != nullptr) {
            cout << node->data << " "; // V
            PreOrderTraversal(node->left); // L
            PreOrderTraversal(node->right); // R
        }
    }

    void inOrderTraversal(binaryNode::Node* node) {
        if (node != nullptr) {
            inOrderTraversal(node->left); // L
            cout << node->data << " "; // V
            inOrderTraversal(node->right); // R
        }
    }

    void PostOrderTraversal(binaryNode::Node* node) {
        if (node != nullptr) {
            PostOrderTraversal(node->left); // L
            PostOrderTraversal(node->right); // R
            cout << node->data << " "; // V
        }
    }

public:
    BinaryTree() {
        root = nullptr;
    }

    void insert(int value) {
        root = insertRecursively(root, value);
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

    bool binary_search(int val) {
        binaryNode::Node* actual = root;

        while (actual != nullptr) {
            if (actual->data > val) {
                actual = actual->left;
            }
            else if (actual->data < val) {
                actual = actual->right;
            }
            else {
                return true;
            }
        }

        return false;
    }
};