#include <iostream>
using namespace std;

int binarysearch(int arr1[], int n, int key)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + (end - start)) / 2;
        if (arr1[mid] == key)
        {
            return mid;
        }

        if (key > mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {1, 2, 3, 4, 5};

    int x = binarysearch(arr2, 8, 3);

    cout << "the index of key  is " << x;

    return 0;
}