#include<iostream>
using namespace std;  


void swapalternate(int arr[],int n){
    for (int i = 0; i < n; i+=2)
    {
        // int temp=arr[i];
        // arr[i]=arr[i+1];
        // arr[i+1]=temp;
      swap(arr[i],arr[i+1]);
      

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
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    swapalternate(arr,10);

   printarray(arr,10);

 
    return 0;
}