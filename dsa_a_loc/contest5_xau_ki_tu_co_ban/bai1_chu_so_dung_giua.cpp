#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if (n % 2 == 0)
        cout << "NOT FOUND";
    else
    {
        n = n / 2;
        cout << s[n];
    }
    return 0;
}