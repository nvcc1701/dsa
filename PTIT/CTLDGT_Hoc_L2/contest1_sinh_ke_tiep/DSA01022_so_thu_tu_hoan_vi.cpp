#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
string s1, s;
bool final;

void generate()
{
    // 1 2 3 6 9 8 7 5 4;
    int i = n - 1;
    while (i >= 1 && s[i] > s[i + 1])
        i--;

    if (i == 0)
    {
        final = true;
    }
    else
    {
        int j = n;
        while (s[i] > s[j])
            j--;
        swap(s[i], s[j]);
        reverse(s.begin() + 1 + i, s.end());
    }
}

void run_case()
{
    cin >> n;
    int x;
    s1 = "0";
    s = "0";
    final = false;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        s1 += to_string(x);
        s += to_string(i);
    }

    int cnt = 1;
    while (!final)
    {
        if (s == s1)
        {
            cout << cnt << endl;
            return;
        }
        generate();
        cnt++;
    }
}

int main()
{

    // #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    auto startT = chrono::system_clock::to_time_t(start);
    cout << "\n\n" << ctime(&startT) << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}