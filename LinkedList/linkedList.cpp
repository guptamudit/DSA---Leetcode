#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int value, Node *next1)
    {
        data = value;
        next = next1;
    }
};

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node *y = new Node{arr[3], nullptr};
    cout << y->data;
}