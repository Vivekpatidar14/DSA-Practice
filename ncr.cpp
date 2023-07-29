#include <iostream>
using namespace std;

// int fact(int n)
// {
//     int product = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         product *= i;
//     }
//     return product;
// }
// int ncr(int n, int r)
// {
//     int num = fact(n);
//     int den = fact(r) * fact(n - r);
//     return num / den;
// }
 
 bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%2==0){
            return 0;
        }
    }
    return 1;
 }


int main()
{
    // int n, r;
    // cin >> n >> r;

    // int x = ncr(n, r);
    // cout << x;
    int n;
   cout<<"enter N"<<endl;
   cin>>n;
    
    if(isprime(n)){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }




    return 0;
}