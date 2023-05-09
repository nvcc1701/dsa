#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int n;
    cin >> n;

    queue<int> q;

    int x, y;
    while (n--)
    {
        cin >> x;
        if (x == 1)
        {
            cout << q.size();
        }
        else if (x == 2)
        {
            if (q.size() == 0)
            {
                cout << "YES";
            }
            else
                cout << "NO";
        }
        else if (x == 3)
        {
            cin >> y;
            q.push(y);
        }
        else if (x == 4)
        {
            if (q.size() > 0)
                q.pop();
        }
        else if (x == 5)
        {
            if (q.size() > 0)
            {
                cout << q.front();
            }
            else
                cout << -1;
        }
        else
        {
            if (q.size() > 0)
                cout << q.back();
            else
                cout << -1;
        }

        if (x == 1 || x == 2 || x == 5 || x == 6)
            cout << endl;
    }
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}