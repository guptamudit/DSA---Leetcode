// saare unique elements store hote hai
// use binary search tree
// element sorted way mein aate hai
// UNORDERED mein random ate hai

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(3); // sirf ek baar print hoga
    s.insert(0);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // this line declares an iterator it of type set<int>::iterator
    set<int>::iterator it = s.begin();
    it++;
    it++;

    s.erase(it);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << s.count(5) << endl; // btata hai element hai ya nhi

    set<int>::iterator itr = s.find(5);                    // us element ka iterator nikalne ke lie
    cout << "vale present at iterator-> " << *itr << endl; // 5
}