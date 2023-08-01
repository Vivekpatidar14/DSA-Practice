#include <iostream>
#include <cctype>
using namespace std;
//boolean funtion  
bool palindrome(string st)
{
    int s = 0;
    int e = st.size() - 1;

    while (s <= e)
    {
        int ch1 = st[s];
        int ch2 = st[e];

        if (!isalnum(ch1))
        {
            s++;
            continue;
        }
        if (!isalnum(ch2))
        {
            e--;
            continue;
        }

        if (ch1 == ch2)
        {

            s++;
            e--;
            return true;
        }

        return false;
    }
}
int main()
{

    string s = "noo";

    int x = palindrome(s);
    if (x)
    {
        cout << "it is palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }

    return 0;
}