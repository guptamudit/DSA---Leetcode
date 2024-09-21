// convert an array to heap either max or min heap.
// ek node to uski shi jgh par leke jayega

// in array to find leaf nodes we have -> (n/2+1)index to n index
// therefore i have to check from n/2 index to >=0th index

#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

int main()
{
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i >= 1; i--)
    {
        heapify(arr, n, i);
    }

    cout << "printing array" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}