#include <iostream>
using namespace std;

void solve(string s)
{
    int l = 0;
    int r = s.size() - 1;
    while (l <= r)
    {
        if (s[l] != s[r])
        {
            cout << "NO";
            return;
        }
        l++;
        r--;
    }
    cout << "YES";
}

int main()
{
    string s;
    cin >> s;
    solve(s);
    return 0;
}