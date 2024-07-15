// doubly ended queue dono side se delete and add karskte hai

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        /* code */
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();
    // d.pop_front();

    cout << "first index" << d.at(1); // front aur back bhi hoga use

    cout << d.empty();

    d.erase(d.begin(), d.begin() + 1); //(yha se start kar, aur yha tak delete kar)
}
