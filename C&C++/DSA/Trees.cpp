/*
 a tree is a nonlinear data structure that consists of nodes connected by edges or branches. Each node in the tree can have zero or more child nodes. Trees can be used to represent hierarchical relationships, such as the organization of a company or the directory structure of a file system. The topmost node in a tree is called the root node, and nodes that have no child nodes are called leaf nodes. Some of the commonly used tree algorithms include binary search trees, AVL trees, and red-black trees.
*/

#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree
{
private:
    Node *root;

public:
    BinaryTree()
    {
        root = NULL;
    }

    Node *get_root()
    {
        return root;
    }

    Node *insert(Node *node, int value)
    {
        if (node == NULL)
        {
            node = new Node(value);
        }
        else if (value <= node->value)
        {
            node->left = insert(node->left, value);
        }
        else
        {
            node->right = insert(node->right, value);
        }

        return node;
    }

    bool search(Node *node, int value)
    {
        if (node == NULL)
        {
            return false;
        }
        else if (node->value == value)
        {
            return true;
        }
        else if (value < node->value)
        {
            return search(node->left, value);
        }
        else
        {
            return search(node->right, value);
        }
    }

    void inorder_traversal(Node *node)
    {
        if (node == NULL)
        {
            return;
        }

        inorder_traversal(node->left);
        cout << node->value << " ";
        inorder_traversal(node->right);
    }

    void preorder_traversal(Node *node)
    {
        if (node == NULL)
        {
            return;
        }

        cout << node->value << " ";
        preorder_traversal(node->left);
        preorder_traversal(node->right);
    }

    void postorder_traversal(Node *node)
    {
        if (node == NULL)
        {
            return;
        }

        postorder_traversal(node->left);
        postorder_traversal(node->right);
        cout << node->value << " ";
    }
};

int main()
{
    BinaryTree tree;

    tree.insert(tree.get_root(), 5);
    tree.insert(tree.get_root(), 3);
    tree.insert(tree.get_root(), 7);
    tree.insert(tree.get_root(), 1);
    tree.insert(tree.get_root(), 9);

    cout << "Inorder traversal: ";
    tree.inorder_traversal(tree.get_root()); // Output: 1 3 5 7 9

    cout << endl
         << "Preorder traversal: ";
    tree.preorder_traversal(tree.get_root()); // Output: 5 3 1 7 9

    cout << endl
         << "Postorder traversal: ";
    tree.postorder_traversal(tree.get_root()); // Output: 1 3 9 7 5

    cout << endl
         << "Searching for 7: " << (tree.search(tree.get_root(), 7) ? "Found" : "Not found") << endl; // Output: Searching for 7: Found

    cout << "Searching for 8: " << (tree.search(tree.get_root(), 8) ? "Found" : "Not found") << endl; // Output: Searching for 8: Not found

    return 0;
}
