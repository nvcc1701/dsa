#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[20];

    for (int i = 0; i < s.size(); i++)
    {
        a[i] = (s[i] - '0');
    }

    sort(a, a + s.size());

    string res;
    stringstream ss;
    for (int i = 0; i < s.size(); i++)
    {
        ss << a[i];
        res += ss.str() + "";
        ss.str("");
    }

    while (true)
    {
        if (res[0] == '0')
            res.erase(0, 1);
        else
            break;
    }
    if (res.size() == 0)
        cout << "0";
    cout << res;

    return 0;
}