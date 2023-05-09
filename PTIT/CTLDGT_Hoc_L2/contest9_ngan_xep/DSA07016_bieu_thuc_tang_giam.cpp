#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    string s;
    cin >> s;
    vector<int> v;

    int min, pos;
    if (s[0] == 'I')
    {
        v.push_back(1);
        v.push_back(2);
        min = 3;
        pos = 1;
    }
    else
    {
        v.push_back(2);
        v.push_back(1);
        min = 3;
        pos = 0;
    }

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == 'I')
        {
            v.push_back(min);
            min++;
            pos = i + 1;
        }
        else
        {
            v.push_back(v[i]);
            for (int k = pos; k <= i; k++)
                v[k]++;
            min++;
        }
    }

    for (auto x : v)
        cout << x;
    cout << endl;
}

int main()
{

#define LOCAL

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