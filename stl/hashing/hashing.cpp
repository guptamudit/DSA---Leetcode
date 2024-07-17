#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        /* code */
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    //     /* code */
    // }

    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        /* code */
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}