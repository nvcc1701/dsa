#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(begin(s), end(s));
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    cout << endl;

    sort(begin(s), end(s), greater<int>());

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    return 0;
}