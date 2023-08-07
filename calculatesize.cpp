#include<iostream>
using namespace std;
  
  int calculatesum(int arr[],int n){
        
    if(n==1){
        return arr[0];
    }
    else{
        return arr[n-1]+calculatesum(arr,n-1);
    }



  }



int main()
{  


    int arr[]={1,2,3,4,5};

    int x=calculatesum(arr,5);
   cout<<x;
    return 0;
}