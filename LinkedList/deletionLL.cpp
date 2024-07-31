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

// traverse
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

// head removal
Node *removeHead(Node *head)
{
    if (head == NULL)
        return head;

    Node *temp = head;
    head = head->next;
    free(temp);

    return head;
}

// remove from tail
Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;

    return head;
}

// delete kth element from LL
Node *deletek(Node *head, int k)
{
    if (head == NULL)
        return head;

    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *temp = head;
    int cnt = 0;
    Node *prev = NULL;

    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

// remove element from the list;
Node *removeElement(Node *head, int element)
{
    if (head == NULL)
        return head;

    if (head->data == element)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *temp = head;

    Node *prev = NULL;

    while (temp != NULL)
    {

        if (temp->data == element)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

// insert in a linked list
Node *insertatheadLL(Node *head, int val)
{
    // Node *temp = new Node(val, head);
    // return temp;

    return new Node(val, head);
}

// insert at last of linked list;
Node *insertatlastLL(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(val);
    temp->next = newNode;

    return head;
}

// insert at kth element in linked list
Node *insertat_kth_elementLL(Node *head, int k, int val)
{

    if (head == NULL)
    {
        if (k == 1)
        {
            Node *newNode = new Node(val);
        }
        else
        {
            cout << "Nopes" << endl;
        }
    }
    if (k == 1)
    {
        Node *temp = new Node(val, head);
        return temp;
    }

    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            Node *n = new Node(val);
            n->next = temp->next;
            temp->next = n;
            break;
        }
        temp = temp->next;
    }
    return head;
}

// insert an element before the value x
Node *insert_before_element_value(Node *head, int x, int val)
{

    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == x)
    {
        Node *temp = new Node(val, head);
        return temp;
    }

    Node *temp = head;

    while (temp != NULL)
    {

        if (temp->next->data == x)
        {
            Node *n = new Node(val);
            n->next = temp->next;
            temp->next = n;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head = convertTOLL(arr);
    // head = removeHead(head);
    // head = removeTail(head);
    // head = deletek(head, 3);
    // head = removeElement(head, 5);
    // head = insertatheadLL(head, 100);
    // head = insertatlastLL(head, 100);
    // head = insertat_kth_elementLL(head, 2, 100);
    insert_before_element_value(head, 8, 100);

    print(head);
}