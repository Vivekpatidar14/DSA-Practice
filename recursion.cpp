#include <iostream>
using namespace std;
 void print(int n){
      
      if(n<1){
        return ;
      }
      else{
         cout<<n<<" ";
         print(n-1);
         cout<<n<<" ";
      
      }

 }




int main()
{

    int n;
    cout << "enter n";
    cin >> n;
    
    print(n);
    return 0;
}