#include<iostream>
using namespace std;

 void printname(int n){
    if(n==0){
        return ;
    }
    cout<<"hello i am vivek "<<n<<"thtimes"<<endl;
      n--;
    printname(n);
     
 }

int main()
{  
   int n;
    printname(5);
    return 0;
}