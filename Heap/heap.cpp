// Heap is binary tree that comes with a heap order property.
// complete binnary tree: all levels are completely filled except the last level. Nodes always add from the left

// MAX HEAP: root nodes always have greater value than its childs

// MIN HEAP: root nodes always have lesser value than its childs

#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    // insertion in Heap.
    //  1. insert at end of the tree(array).
    //  2. take to correct position.
    //  3. Compare value with parent. (parent = i/2 index)
    //  4. swap value acc to type of heap.
    void insertInHeap(int val)
    {
        size = size + 1;
        int index = size; // 1. insert at end of the tree(array).
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;       //(parent = i/2 index)
            if (arr[parent] < arr[index]) // max heap
            {
                swap(arr[index], arr[parent]); // 4. swap value acc to type of heap.
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    // delete a node
    // 1. put last element to node from which to delete.
    // 2. remove the last node.
    // 3. place the node that was swapped in its original pos according to the heap structure
    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 + i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    heap h;
    h.insertInHeap(50);
    h.insertInHeap(55);
    h.insertInHeap(53);
    h.insertInHeap(54);
    h.insertInHeap(52);
    h.print();

    h.deleteFromHeap();
    h.print();

    return 0;
}
