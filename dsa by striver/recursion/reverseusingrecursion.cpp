#include<iostream>
using namespace std;


void reverse(int arr[],int n,int l){
     if(l>n-l-1){
        return;
     }
     swap(arr[l++],arr[n-l-1]);
     reverse(arr,n,l);
}


int main()
{   
    int arr[]={1,2,3,4,5};
   int n=5;

   reverse(arr,n,0);
  for (int i = 0; i < n; i++)
  {
     cout<<arr[i]<<" ";
  }cout<<endl;
  

  


    return 0;
}