#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[9][9];
vector<string> v;
bool check = false;

void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
}

string s = "";
void Try(int i, int j)
{
    if (i == n && j == n)
    {
        check = true;
        v.push_back(s);
    }
    else
    {
        if (i + 1 <= n && a[i + 1][j])
        {
            s.push_back('D');
            a[i][j] = 0;
            Try(i + 1, j);
            s.pop_back();
            a[i][j] = 1;
        }

        if (j + 1 <= n && a[i][j + 1])
        {
            s.push_back('R');
            a[i][j] = 0;
            Try(i, j + 1);
            s.pop_back();
            a[i][j] = 1;
        }

        if (i - 1 >= 1 && a[i - 1][j])
        {
            s.push_back('U');
            a[i][j] = 0;
            Try(i - 1, j);
            s.pop_back();
            a[i][j] = 1;
        }

        if (j - 1 >= 1 && a[i][j - 1])
        {
            s.push_back('L');
            a[i][j] = 0;
            Try(i, j - 1);
            s.pop_back();
            a[i][j] = 1;
        }
    }
}

void run_case()
{

    init();
    Try(1, 1);
    if (check == false)
    {
        cout << -1;
        return;
    }

    for (auto x : v)
        cout << x << endl;
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
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