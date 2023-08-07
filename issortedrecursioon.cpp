#include<iostream>
using namespace std;

bool issorted(int arr[],int size){
  
  if(size==0||size==1){
    return true  ;
  }
  if(arr[0]>arr[1]){
    return false;
  }

  return issorted(arr+1,size-1);

}


int main()
{  

    int arr[]={3,5,2,6};


bool ans =issorted(arr,4);
if(ans){
    cout<<"array is sorted";
}
else{
    cout<<"not sorted ";
}


    return 0;
}