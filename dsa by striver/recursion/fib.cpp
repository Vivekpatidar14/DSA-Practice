#include<iostream>
using namespace std;
 int fib(int n){
    // if(n==0){
    //     return 0;
    // }
    // if(n==1){
    //     return 1;
    // }
    if(n<=1)
    {
        return n;
    }

    return fib(n-2)+fib(n-1);

 }

int main()
{   
   int n=8;
   int x=fib(n);
   cout<<x;
    return 0;
}