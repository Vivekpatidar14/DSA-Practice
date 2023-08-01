#include <iostream>
using namespace std;

bool ispresent(int arr[3][3], int i, int j, int target)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
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

    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int target;
    cout << "enter your target"<<endl;
    cin >> target;

    if(ispresent(arr, 3, 3, target))
    {
        cout << "element found";
    }
    else
    {
        cout << "notr found";
    }

    return 0;
}