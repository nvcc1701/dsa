#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s;
vector<ll> v;
int n;
bool final = false;

void init()
{
    n = 19;
    s.resize(n, '0');
}

void generate()
{
    // 0 0 1 0
    // 1 1 1 1
    int i = n - 1;
    while (i >= 0 && s[i] == '8')
    {
        s[i] = '0';
        i--;
    }

    if (i == -1)
        final = true;
    else
    {
        s[i] = '8';
    }
}

void run_case()
{
    init();

    while (!final)
    {
        v.push_back(stoll(s));
        generate();
    }

    vector<ll> res(301);
    for (int i = 1; i <= 300; i++)
    {
        for (int j = 1; j < v.size(); j++)
        {
            if (v[j] % i == 0)
            {
                res[i] = v[j];
                break;
            }
        }
    }

    int x;
    cin >> x;
    cout << res[x] << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
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