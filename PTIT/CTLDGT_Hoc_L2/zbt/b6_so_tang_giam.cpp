#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s;
void run_case() 
{
    cin >> s;
    int tang = 0, giam = 0;
    for (int i = 1; i < s.size(); i++) //O(N)
    {
        if (s[i] >= s[i - 1])
            tang++;

        if (s[i] <= s[i - 1])
            giam++;
    }

    if (tang == s.size() - 1 || giam == s.size() - 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}