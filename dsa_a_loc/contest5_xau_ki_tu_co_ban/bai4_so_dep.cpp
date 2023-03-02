#include <bits/stdc++.h>
using namespace std;

int isBeautyNumber(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        int n = (s[i] - '0') - (s[i + 1] - '0');
        if (abs(n) != 1)
            return 0;
    }
    return 1;
}

int main()
{
    string s;
    cin >> s;
    if (isBeautyNumber(s))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}