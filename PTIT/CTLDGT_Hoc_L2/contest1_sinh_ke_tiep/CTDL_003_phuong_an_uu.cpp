#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int n, w;
int c[101];
int a[101];

vector<int> tmp;
vector<int> xopt;
int fopt = -INF;

void caculate()
{
    int W = 0;
    int C = 0;
    for (int i = 0; i < tmp.size(); i++)
    {
        if (tmp[i])
        {
            W += a[i + 1];
            C += c[i + 1];
        }
    }

    if (W <= w)
    {
        if (C > fopt)
        {
            fopt = C;
            xopt = tmp;
        }
    }
}

void Try()
{
    for (int j = 0; j <= 1; j++)
    {
        tmp.push_back(j);
        if (tmp.size() <= n)
        {
            if (tmp.size() == n)
            {
                caculate();
            }
            Try();
        }
        tmp.pop_back();
    }
}

void runcase()
{
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    Try();
    cout << fopt << endl;
    for (auto x : xopt)
        cout << x << " ";
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int Test = 1;
    // cin >> Test;
    for (int test = 0; test < Test; test++)
    {
        runcase();
    }
}