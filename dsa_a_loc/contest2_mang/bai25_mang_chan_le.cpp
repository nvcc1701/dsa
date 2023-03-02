#include <iostream>
using namespace std;

int main()
{
    int n, even = 0, odd = 0;
    while (cin >> n)
        if (n % 2 == 0)
            even++;
        else
            odd++;

    if (even > odd)
        cout << "CHAN";
    else if (even < odd)
        cout << "LE";
    else
        cout << "CHANLE";
    return 0;
}