#include <iostream>
using namespace std;

int printsum(int n)
{
    if (n == 0)
    {   
     return 0;
    }
    return n+printsum(n-1);
}

int main()
{
    int n;

   int x= printsum(100);
    cout<<x;

    return 0;
}