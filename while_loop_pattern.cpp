#include <iostream>

using namespace std;

int main()
{

    cout << "enter N" << endl;
    int n;
    cin >> n;
    int i=1;
    while (i <= n)
    {
        int j=1;
        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }

     int i = 1;
     int count=1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count<<" ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";

            j++;
        }
        cout << endl;
        i++;
    }

      int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;

            j++;
        }
        cout << endl;
        i++;
    }

    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value;
            value++;
            j++;
        }
        cout << endl;
        i++;
    }

    int i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << i - j + 1<<" ";

            j++;
        }
        cout << endl;
        i++;
    }

      int i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            char value ='A'+j-1;
            cout << value;

            j++;
        }
        cout << endl;
        i++;
    }

    int i = 1;
    char start = 'A';
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {

            cout << start<<" ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    }

    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + i - 1;
             cout<<ch;
            j++;
        }

        cout << endl;
        i++;
    }

      int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {
           char ch='A'+i+j-2;
             cout<<ch<<" ";
            j++;
        }

        cout << endl;
        i++;
    }

    int i = 1;

    while (i <= n)
    {
        char ch = 'A' + n - i;
        int j = 1;
        while (j <= i)
        {

            cout << ch << " ";
            ch++;
            j++;
        }

        cout << endl;
        i++;
    }

    int i = 1;
    while (i <= n)
    {

        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j<= n)
        {

            cout << "*";
            j++;

        }
        cout << endl;
        i++;
    }

    int i = n;
    while (i >= 1)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
