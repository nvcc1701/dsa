#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool check(string s1, string s2)
{
    if (s1.size() > s2.size())
        return true;
    else if (s1.size() == s2.size())
    {
        int cnt = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] >= s2[i])
                cnt++;
        }
        if (cnt == s1.size())
            return true;
    }
    return false;
}

void run_case()
{
    string n;
    cin >> n;

    queue<string> q;
    q.push("1");

    int cnt = 0;
    string s;
    while (q.size())
    {
        s = q.front();
        q.pop();
        if (check(s, n))
            break;

        cnt++;

        q.push(s + "0");
        q.push(s + "1");
    }

    cout << cnt << " " << s << endl;
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