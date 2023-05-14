#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};

int n;
int a[9][9];

bool isValid(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < n && a[x][y])
        return true;
    return false;
}

string print(int k)
{
    if (k == 0)
        return "D";
    if (k == 1)
        return "R";
    if (k == 2)
        return "L";
    if (k == 3)
        return "U";
}

vector<string> v;
void Try(int i, int j, string s)
{
    if (i == n - 1 && j == n - 1)
    {
        v.push_back(s);
        return;
    }
    a[i][j] = 0;
    for (int k = 0; k < 4; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if (isValid(x, y))
        {
            Try(x, y, s + print(k));
        }
    }
    a[i][j] = 1;
}

void run_case()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    v.clear();
    Try(0, 0, "");
    if (v.size() == 0)
        cout << -1;
    else
    {
        sort(v.begin(), v.end());
        for (auto x : v)
            cout << x << " ";
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