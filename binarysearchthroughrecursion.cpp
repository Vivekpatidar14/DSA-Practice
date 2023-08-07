#include <iostream>
using namespace std;

void print(int arr[], int start, int end)
{
    for (int i = start; i <=end; i++)
    {
        cout << arr[i] << " ";
    }cout<<endl;
}

bool binarysearch(int arr[], int start, int end, int key)
{
    print(arr, start, end);
    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    cout<<"mid is "<<arr[mid]<<endl;
    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] < key)
    {
        return binarysearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarysearch(arr, start, mid - 1, key);
    }
}

int main()
{

    int arr[] = {3, 4, 5, 6, 8, 12, 13, 15, 22, 36};
    int size = 10;
    int k = 22;
    bool x = binarysearch(arr, 0, size - 1, k);

    if (x)
    {
        cout << " present ";
    }
    else
    {
        cout << "not present";
    }

    return 0;
}