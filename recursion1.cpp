#include <iostream>
using namespace std;

void convertdigit( int digit,string str)
{
    if (digit == 0)
    {
        return;
    }

    int ans = digit % 10;
    digit = digit / 10;

    convertdigit(digit, str);
    cout << str[ans] << " ";
}

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        int digit = n % 10;
        n = n / 10;
        convertdigit(digit,arr);
    

    return 0;
}
