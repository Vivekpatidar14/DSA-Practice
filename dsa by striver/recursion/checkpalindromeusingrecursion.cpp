#include <iostream>
using namespace std;

bool check(string str, int n, int i)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (str[i] != str[n - i - 1])
    {
        return false;
    }
    return check(str, n, i+1);
}

int main()
{

    string str = "madam";
    int n = str.length();
     bool x= check(str, n, 0);
    if (x)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }
    return 0;
}