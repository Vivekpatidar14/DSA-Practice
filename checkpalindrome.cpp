#include <iostream>
using namespace std;

bool checkpalindrome(string str, int i, int j)
{

    if (i > j)
    {
        return true;
    }

    if (str[i] == str[j])
    {
        return true;
    }else{
        return false;
    }
    checkpalindrome(str, i++, j--);
}

int main()
{
    string str = "abccba";
    int i = 0;
    int j = str.length() - 1;

    bool x = checkpalindrome(str, i, j);
    if (x)
    {
        cout << "it is palindrme" << endl;
    }
    else
    {
        cout << "it is not palindrome" << endl;
    }
    return 0;
}