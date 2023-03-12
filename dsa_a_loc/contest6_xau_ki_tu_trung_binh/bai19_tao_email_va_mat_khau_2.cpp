#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define fi first
#define se second

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

    int t;
    cin >> t;
    cin.ignore(1);
    map<string, int> mp;
    while (t--)
    {
        vector<string> v;
        string date;

        string s;
        getline(cin, s);

        stringstream ss(s);

        while (ss >> s)
        {
            if (isdigit(s[0]))
                date = s;
            else
            {
                for (auto &x : s)
                    x = tolower(x);
                v.push_back(s);
            }
        }

        string email = "";
        email += v[v.size() - 1];
        for (int i = 0; i < v.size() - 1; i++)
        {
            email += v[i][0];
        }
        mp[email]++;
        if (mp[email] == 1)
            email += "@xyz.edu.vn";
        else
            email = email + to_string(mp[email]) + "@xyz.edu.vn";

        string pass = "";
        for (int i = 0; i < date.size(); i++)
        {
            if (isdigit(s[i]))
            {
                if (i == 0 && s[i] == '0')
                    continue;
                if (i == 3 && s[i] == '0')
                    continue;
                pass += s[i];
            }
        }

        cout << email << endl;
        cout << pass << endl;
    }

    return 0;
}