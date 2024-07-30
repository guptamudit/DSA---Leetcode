#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertTOLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
};
int lengthofLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {

        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head = convertTOLL(arr);

    cout << "length of linked list: " << lengthofLL(head) << endl;
}