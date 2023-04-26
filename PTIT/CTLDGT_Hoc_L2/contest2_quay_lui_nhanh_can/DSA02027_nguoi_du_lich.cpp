#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;

int a[16][16];
bool visited[100];
int x[100]; // chon thanh pho j o lan thu i
int Min = INF;

ll res = INF;
ll sum = 0;

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!visited[j]) // chap nhan j
        {
            x[i] = j;
            visited[j] = true;
            sum += a[x[i - 1]][x[i]];

            if (i == n) // cap nhat ky luc
            {
                res = min(res, sum + a[x[i]][1]);
            }
            // neu ket qua tiep theo tot hon nhu ket qua truoc thi thuc hien quay lui
            else if ((sum + (n - i + 1) * Min) < res) // nhanh can
            {
                Try(i + 1);
            }

            visited[j] = false;       // backtrack
            sum -= a[x[i - 1]][x[i]]; // backtrack
        }
    }
}

void run_case()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            Min = min(Min, a[i][j]);
        }
    }

    memset(visited, false, sizeof(visited));
    memset(x, 0, sizeof(x));

    x[1] = 1;
    visited[1] = true;

    Try(2);
    cout << res << endl;
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}