#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[10];
bool final = false;
vector<string> v;

void init()
{
    a[n] = 1;
}

// 0 0 1 0
// 1 1 1 1
void generate()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }

    if (i == 0)
    {
        final = true;
    }
    else
    {
        a[i] = 1;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    init();
    while (!final)
    {
        string s = "";
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1)
            {
                s += to_string(i);
                s += " ";
            }
        }
        v.push_back(s);
        generate();
    }

    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x << endl;

    return 0;
}