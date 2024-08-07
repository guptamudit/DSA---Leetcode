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

// level order traversal
vector<vector<int>> levelorder(Node *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "preorder" << endl;
    preorder(root);
    cout << endl;

    cout << "inorder" << endl;
    inorder(root);
    cout << endl;

    cout << "postorder" << endl;
    postorder(root);
    cout << endl;

    cout << "levelorder" << endl;
    vector<vector<int>> levelOrderResult = levelorder(root);
    for (const auto &level : levelOrderResult)
    {
        for (int val : level)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << endl;
}