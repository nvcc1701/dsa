#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[101];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> duong;
        vector<int> am;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
                duong.push_back(a[i]);
            else
                am.push_back(a[i]);
        }

        sort(duong.begin(), duong.end());
        sort(am.begin(), am.end());
		
    }

    return 0;
}