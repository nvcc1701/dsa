#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int b[20];
vector<int> v;
bool ok;

void init()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(b, b + n);
    ok = false;
}

void check()
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i])
            sum += b[i];
    }

    if (sum == k)
    {
        ok = true;
        string s = "";
        s += "[";
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i])
            {
                s += to_string(b[i]) + " ";
            }
        }
        s.pop_back();
        s += "]";
        s += " ";

        cout << s;
    }
}

void Try()
{
    for (int j = 1; j >= 0; j--)
    {
        if (v.size() == n) // dieu kien dung
        {
            check();
            return;
        }
        else // khong phai dieu kien dung
        {
            v.push_back(j);
            Try();
            v.pop_back();
        }
    }
}

void run_case()
{
    init();
    Try();
    if (!ok)
        cout << -1;
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