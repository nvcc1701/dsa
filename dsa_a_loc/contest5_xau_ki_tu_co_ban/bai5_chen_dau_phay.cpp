#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cnt++;
        if (cnt == 3 && i != 0)
        {
            s.insert(i, ",");
            cnt = 0;
        }
    }
    cout << s;
    return 0;
}