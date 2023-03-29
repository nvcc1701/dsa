#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

// 012345
//  sinh to hop chap k cua n
string a = "()[]{}";
int n;
bool ok = false;

bool check(string s)
{
    stack<char> stk;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stk.push(s[i]);
        }
        else
        {
            if (stk.size() == 0)
                return false;

            char c = stk.top();
            stk.pop();

            if (s[i] == ')' && c != '(')
            {
                return false;
            }
            else if (s[i] == ']' && c != '[')
            {
                return false;
            }
            else if (s[i] == '}' && c != '{')
            {
                return false;
            }
        }
    }

    return stk.size() == 0;
}

string tmp = "";
void Try()
{
    for (int j = 0; j <= 5; j++)
    {
        tmp.push_back(a[j]);
        if (tmp.size() == n)
        {
            if (check(tmp)){
                ok = true;
                cout << tmp << " ";
            }
        }
        else
        {
            Try();
        }
        tmp.pop_back();
    }
}

void run_case()
{
    cin >> n;
    Try();

    if(!ok) cout <<"NOT FOUND";
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    auto startT = chrono::system_clock::to_time_t(start);
    cout << "\n\n" << ctime(&startT) << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}