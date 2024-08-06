#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// preorder traversal
void preorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    cout << node->data << endl;
    preorder(node->left);
    preorder(node->right);
}

// inorder traversal
void inorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    inorder(node->left);
    cout << node->data << endl;
    inorder(node->right);
}

// postorder traversal
void postorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    postorder(node->left);
    postorder(node->right);
    cout << node->data << endl;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);

    cout << "preorder" << endl;
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
}