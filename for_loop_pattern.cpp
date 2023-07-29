#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i;
         cout << endl;

    }

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum=" << sum;

    int a = 0;
    int b = 1;
    cout << a << endl;
    cout << b << endl;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int nextnumber = a + b;
        a = b;
        b = nextnumber;
        cout << nextnumber << endl;
        sum += nextnumber;
    }
    cout << sum << endl;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << " not prime" << endl;
            break;
        }
         else{
            cout<<" prime"<<endl;
            break;
         }
       
    }

    return 0;
}