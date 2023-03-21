#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[16];
vector<int> tmp;
vector<vector<int>> v;

bool check1(vector<int> v)
{
    int cnt = 0;
    for (auto x : v)
    {
        cnt += x;
    }

    return cnt == k;
}

bool check2(vector<int> v)
{
    int res = 0;
    int curr_cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
            curr_cnt++;
        else
            curr_cnt = 0;

        if (curr_cnt >= k)
        {
            res++;
        }
    }
    return res == 1;
}

void print()
{
    for (auto x : tmp)
        cout << x;
    cout << " ";
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        tmp[i - 1] = j;
        if (i == n)
        {
            if (check1(tmp))
                print();
            if (check2(tmp))
                v.push_back(tmp);
        }
        else
        {
            Try(i + 1);
        }
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

    cin >> n >> k;
    tmp.resize(n);
    Try(1);

    cout << endl;
    for (auto x : v)
    {
        for (auto y : x)
            cout << y;
        cout << " ";
    }

    return 0;
}