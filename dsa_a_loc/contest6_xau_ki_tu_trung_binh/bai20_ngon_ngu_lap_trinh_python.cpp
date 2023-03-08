#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define fi first
#define se second

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    string tmp = "python";
       
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'p' || s[i] == 'y' || s[i] == 't' || s[i] == 'h' || s[i] == 'o' || s[i] == 'n')
        {
            if (s[i] == tmp[j])
            {
                j++;
                if (j == tmp.size())
                {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }

    cout << "NO";

    return 0;
}