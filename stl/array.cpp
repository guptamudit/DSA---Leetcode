#include <iostream>
#include <array>

using namespace std;

int main()
{
    int basic[3] = {1, 2, 3};

    array<int, 3> a = {1, 2, 3}; // array<datatype, length> name:{1,2,3...}

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl; // direct acces using square bracket
    }

    cout << "Element a index 2: " << a.at(2) << endl; // use at to find index

    cout << "Empty or not " << a.empty() << endl; // return boolean for array empty or  not

    // find first element
    cout << "First Element" << a.front() << endl;

    // last element
    cout << "Last" << a.back();
}