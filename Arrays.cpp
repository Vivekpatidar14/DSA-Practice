#include <iostream>
#include <math.h>
#include <climits>

using namespace std;

int getMax(int arr[], int size)
{
    int maxnum = INT_MIN;
    for (int i = 0; i < size; i++)
    {

        maxnum = max(maxnum, arr[i]);

        // if (max < arr[i])
        // {
        //     max = arr[i];
        // }
    }
    return maxnum;
}

int getMin(int arr[], int size)
{
    int minnum = INT_MAX;
    for (int i = 0; i < size; i++)
    {

        minnum = min(minnum, arr[i]);

        // if (min > arr[i])
        // {
        //     min = arr[i];
        // }
    }
    return minnum;
}

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;

    int arr[50];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maximum = getMax(arr, n);
    int minimum = getMin(arr, n);

    cout << "maximum value in array is " << maximum << endl;
    cout << "maximum value in array is " << minimum << endl;

    return 0;
}