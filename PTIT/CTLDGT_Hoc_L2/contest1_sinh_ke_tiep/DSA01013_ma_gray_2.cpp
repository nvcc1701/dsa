#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

// 01011
void run_case()
{
    string s;
    cin >> s;

    char back;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
        {
            cout << s[i];
            back = s[i];
        }
        else
        {
            if (s[i] != back)
            {
                cout << 1;
                back = '1';
            }
            else
            {
                cout << 0;
                back = '0';
            }
        }
    }

    cout << endl;
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