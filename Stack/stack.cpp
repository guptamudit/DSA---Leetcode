// LIFO use hota hai

#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    // properties
    int top;
    int *array;
    int size;
    // constructor
    Stack(int size)
    {
        this->size = size;
        array = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            array[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int peek()
    {
        if (top >= 0)
            return array[top];
        else
        {
            cout << "stack is empty" << endl;
        }
    }
};

int main()
{

    Stack st(5);

    st.push(22);
    st.push(23);
    st.push(24);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if (st.isEmpty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }

    // stack<string> s;
    // stack<int> st;

    // st.push(1);
    // st.push(2);
    // st.push(3);

    // st.pop();

    // cout << "top " << st.top() << endl;
    // cout << "Size of stack " << st.size() << endl;

    // s.push("Mudit");
    // s.push("Kumar");
    // s.push("Singh"); // sabse end mein dala

    // cout << "top element " << s.top() << endl;

    // s.pop(); // top wala nikal dia
    // cout << "top element " << s.top() << endl;

    // cout << s.size() << endl;
    // cout << s.empty();
}
