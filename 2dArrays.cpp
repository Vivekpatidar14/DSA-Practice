#include <iostream>
#include<limits.h>
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

void sumofrow(int arr[3][3],int i,int j){
  
    for (int i = 0; i < 3; i++)
    { 
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    
}

int findlargest(int arr[3][3],int i,int j){
   
    int maxi=INT_MIN;
    int rowindex=-1;
    for (int i = 0; i < 3; i++)
    { 
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum+=arr[i][j];
             if(maxi<sum){
            maxi=sum;
            rowindex=i;
        }
       
        }  
    }
    return rowindex;
}

int main()
{

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};


    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // int target;
    // cout << "enter your target"<<endl;
    // cin >> target;

    // if(ispresent(arr, 3, 3, target))
    // {
    //     cout << "element found";
    // }
    // else
    // {
    //     cout << "not found";
    // }
    
    sumofrow(arr,3,3);
   int x= findlargest(arr,3,3);
 cout<<"largest is present at index"<<x;

    return 0;
}