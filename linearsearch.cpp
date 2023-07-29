#include <iostream>
using namespace std;

bool findelement(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return true;
        }
    }
    return false;
}
int main()

{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[50];
    for (int i = 0; i < n; i++)
    {
        ;
        cin >> arr[i];
    }  



    int key;
    cout << "enter element you want to found" << endl;
    cin >> key;

    if (findelement(arr, n, key))
    {
        cout << "your element is present" << endl;
    }
    else
    {
        cout << "your element is not present" << endl;
    }

    return 0;
}