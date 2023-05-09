#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;

void run_case()
{
    cin >> n;
    queue<string> q;
    q.push("9");

    while (q.size() > 0)
    {
        string top = q.front();
        q.pop();

        int m = stoi(top);
        if (m % n == 0)
        {
            cout << top << endl;
            return;
        }

        q.push(top + "0");
        q.push(top + "9");
    }
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