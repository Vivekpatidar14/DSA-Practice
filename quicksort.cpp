#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
      


}

int quickSort(int arr[], int s, int e)
{

    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{

    int arr[] = {23, 34, 45, 12, 23};
    int n = 5;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}