#include <iostream>
using namespace std;

int getpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = s + ((e - s) / 2);
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
//

int main()
{
    int arr[] = {5, 6, 7, 8, 9, 10,11, 3};
    int x = getpivot(arr, 8);

    cout << "the pivot element index is " << x;
    return 0;
}