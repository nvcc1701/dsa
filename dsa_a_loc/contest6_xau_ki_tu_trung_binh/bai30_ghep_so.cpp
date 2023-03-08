#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int Max = -INF;

    vector<string> v;

    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            string num = "";
            bool flag = false;
            while (isdigit(s[i]))
            {
                while (s[i] == '0' && !flag)
                {
                    i++;
                }
                flag = true;

                num += (string) "" + s[i];
                i++;
            }

            v.push_back(num);
        }
    }

    sort(v.begin(), v.end(), [](string a, string b) {

    });

    for (auto x : v)
        cout << x << " ";

    // for (auto it = v.rbegin(); it != v.rend(); it++)
    // {
    //     cout << *it;
    // }
    return 0;
}