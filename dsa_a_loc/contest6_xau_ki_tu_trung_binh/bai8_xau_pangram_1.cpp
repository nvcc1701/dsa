#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int a[256] = {0};
    for (int i = 0; i < s.size(); i++)
        a[toupper(s[i])]++;

    int flag = 1;

    for (int i = 65; i <= 90; i++)
    {
        if (a[i] == 0)
        {
            cout << "NO";
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << "YES";
    return 0;
}