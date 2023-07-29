#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        // swap(arr[start],arr[end]);
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[6] = {6, 5, 4, 3, 2, 1};

    reverse(a, 5);
    reverse(b, 6);

    printarray(a, 5);
    printarray(b, 6);

    return 0;
}