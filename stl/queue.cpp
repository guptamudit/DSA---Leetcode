// FIFO use hota hai

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;

    q.push("a");
    q.push("b");
    q.push("c");

    cout << "top " << q.front() << endl;
    q.pop();
    cout << "top " << q.front() << endl;

    cout << "size" << q.size();
}