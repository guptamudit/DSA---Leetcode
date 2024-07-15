// LIFO use hota hai

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Mudit");
    s.push("Kumar");
    s.push("Singh"); // sabse end mein dala

    cout << "top element " << s.top() << endl;

    s.pop(); // top wala nikal dia
    cout << "top element " << s.top() << endl;

    cout << s.size() << endl;
    cout << s.empty();
}