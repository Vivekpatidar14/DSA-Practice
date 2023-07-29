#include <iostream>
using namespace std;

void calculatemoney(int denominator, int &amount)
{
    int notes = amount / denominator;
    amount = amount % denominator;
    cout << denominator << "rs notes are " << notes << endl;
}

int main()
{
    int n;
    cout << "enter  amount" << endl;
    cin >> n;

    // int rs100, rs50, rs20, rs1;
    // switch (1)
    // {
    // case 1:
    //     rs100 = n / 100;
    //     n = n % 100;
    //     cout << "100 rs notes are " << rs100<<endl;

    // case 2:
    //     rs50 = n / 50;
    //     n = n % 50;
    //     cout << "50 rs notes are " << rs50<<endl;

    // case 3:
    //     rs20 = n / 20;
    //     n = n % 20;
    //     cout << "20 rs notes are " << rs20<<endl;

    // case 4:
    //     rs1 = n / 1;
    //     n = n % 1;
    //     cout << "1 rs notes are " << rs1<<endl;
    // }
    calculatemoney(100, n);
    calculatemoney(50, n);
    calculatemoney(20, n);
    calculatemoney(1, n);

    return 0;
}