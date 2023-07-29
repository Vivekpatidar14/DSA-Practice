#include<iostream>
using namespace std; 
  
  int firstoccu(int arr[],int n,int key){
    int start=0;
    int end=n-1;
   
    int ans=-1;

    while(start<=end){
       int mid=start+((end-start)/2);
       if(arr[mid]==key){
          ans=mid;
          end=mid-1;
       }
       else if(key>arr[mid]){
          start=mid+1;
       }
       else if(key<arr[mid]){
          end=mid-1;
       }

    } 
    return ans;
  }  
   
  int lastoccu(int arr[],int n,int key){
    int start=0;
    int end=n-1;
   
    int ans=-1;

    while(start<=end){
       int mid=start+((end-start)/2);
       if(arr[mid]==key){
          ans=mid;
          start=mid+1;
       }
       else if(key>arr[mid]){
          start=mid+1;
       }
       else if(key<arr[mid]){
          end=mid-1;
       }

    }
    return ans;
  }

int main()
{   
     int arr[]={1,1,2,3,3,4,5};

     int x= firstoccu(arr,7,3);
     int y= lastoccu(arr,7,3);
     cout<<"the value of first and last occurence index is"<<x<<" "<<y;
     

    return 0;
}