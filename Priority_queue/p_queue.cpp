#include <bits/stdc++.h>
using namespace std;

int main()
{

    // max heap
    priority_queue<int> q1;

    // min heap
    priority_queue<int, vector<int>, greater<int>> q2;

    q1.push(1);
    q1.push(5);
    q1.push(3);
    q1.push(4);
    q1.push(10);

    q2.push(1);
    q2.push(5);
    q2.push(3);
    q2.push(4);
    q2.push(10);

    cout << "top element max heap " << q1.top() << endl;
    cout << "top element min heap " << q2.top() << endl;

    return 0;
}