#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, m;
char a[100][100];
int c[100][100];
string s;

// ULRD
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

bool ok = false;

string word = "";
void Try(int i, int j)
{
    if (word == s)
    {
        ok = 1;
        return;
    }
    if (ok)
        return;

    for (int k = 0; k < 4; k++)
    {
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && !c[i1][j1])
        {
            c[i1][j1] = 1;
            word += a[i1][j1];
            if (s.find(word) != string::npos)
                Try(i1, j1);
            word.pop_back();
            c[i1][j1] = 0;
        }
    }
}

void run_case()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[0] == a[i][j])
            {
                memset(c, 0, sizeof(c));
                c[i][j] = 1;
                word = "";
                word += a[i][j];
                Try(i, j);
            }
        }
    }

    if (ok)
        cout << "YES";
    else
        cout << "NO";
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