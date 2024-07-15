// key value pairs mein hoga
// ek kwy ek hi value ko pint karegi

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "mudit"; // m[key] = "value"
    m[2] = "gupta";
    m[15] = "xuv";

    m.insert({5, "xyz"});

    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "after erase" << endl;

    m.erase(15);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 15 " << m.count(13) << endl;

    auto it = m.find(2);
    for (auto i = it; i != m.end(); i++)
    {
        /* code */
        cout << (*i).first << endl;
    }
}