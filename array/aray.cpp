#include <iostream>

using namespace std;

bool targetFound(int arr[][4], int target, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "enter target" << endl;
    int target;
    cin >> target;

    if (targetFound(arr, target, 3, 4))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}
