#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int q;
    cin >> q;
    cin.ignore();
    stack<int> stk;
    while (q--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string s1, s2;
        ss >> s1;
        if (s1 == "PUSH")
        {
            ss >> s2;
            stk.push(stoi(s2));
        }
        else if (s1 == "POP")
        {
            if (!stk.empty())
                stk.pop();
        }
        else
        {
            if (stk.empty())
                cout << "NONE\n";
            else
                cout << stk.top() << endl;
        }
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}