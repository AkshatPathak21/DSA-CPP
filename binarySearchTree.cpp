#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    char data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
public:
    TreeNode* root;

    BST() : root(nullptr) {}

    void insertNode(char val) {
        root = insertNodeHelper(root, val);
    }

    TreeNode* insertNodeHelper(TreeNode* node, char val) {
        if (node == nullptr) {
            node = new TreeNode(val);
        } else if (val < node->data) {
            node->left = insertNodeHelper(node->left, val);
        } else if (val > node->data) {
            node->right = insertNodeHelper(node->right, val);
        }
        return node;
    }

    void preorderTraversal(TreeNode* node) {
        if (node) {
            cout << node->data << " ";
            preorderTraversal(node->left);
            preorderTraversal(node->right);
        }
    }
};

int main() {
    int N;
    cin >> N;

    vector<char> data(N);
    for (int i = 0; i < N; ++i) {
        cin >> data[i];
    }

    BST bst;
    for (char ch : data) {
        bst.insertNode(ch);
    }

    bst.preorderTraversal(bst.root);

    return 0;
}
