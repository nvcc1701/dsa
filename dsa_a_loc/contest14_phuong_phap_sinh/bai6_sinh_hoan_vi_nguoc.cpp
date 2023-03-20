#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[11];
bool final = false;

void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
}

void generate()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        i--;

    if (i == 0)
    {
        final = true;
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
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

    vector<string> v;

    while (!final)
    {
        string s = "";
        for (int i = 1; i <= n; i++)
            s += to_string(a[i]);
        v.push_back(s);
        generate();
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << endl;
    }

    return 0;
}