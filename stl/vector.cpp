// when vector fill up it automatically doubles it size
// purana wala copy hojayega naye mein aur purana wala dead hojayega

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5, 1); // capacity 5 aur saare element will be one
    cout << "print a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity " << v.capacity(); // capacity tell kitne element ke lie space hai

    v.push_back(1);                      // to add in vector at end
    v.push_back(2);                      // to add in vector at end
    v.push_back(3);                      // to add in vector at end
    cout << "Capacity " << v.capacity(); // capacity tell kitne element ke lie space hai
    cout << "size  " << v.size();        // size tells kitne element hai uske andar

    cout << "second index" << v.at(2); // front aur back bhi use use hai yha

    cout << "before pop" << endl;
    for (int i : v) // range based loop
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back(); // end mein pop karna

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // clear vector (size 0 hojayega lekin capapcity nhi)
    v.clear();
    cout << "after clear" << v.size() << v.capacity() << endl;
}