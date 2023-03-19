#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
bool final = false;
int a[11];
vector<string> v;

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
        final = true;
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;

        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

// 1 2 3 6 9 8 7 5 4
// 1 2 3 7 4 5 6 8 9

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    cin.ignore();
    string s;
    while (cin >> s)
        v.push_back(s);

    sort(v.begin(), v.end());

    init();

    while (!final)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << v[a[i] - 1] << " ";
        }
        cout << endl;
        generate();
    }

    return 0;
}