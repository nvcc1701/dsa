#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;

bool check(string s)
{
    if (s.size() != n)
        return false;

    if (s[0] != '8')
        return false;

    if (s[s.size() - 1] != '6')
        return false;

    int cnt8 = 0, cnt6 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '8')
        {
            cnt8++;
            if (cnt8 >= 2)
                return false;
        }
        else
            cnt8 = 0;

        if (s[i] == '6')
        {
            cnt6++;
            if (cnt6 >= 4)
                return false;
        }
        else
            cnt6 = 0;
    }

    return true;
}

void run_case()
{
    cin >> n;
    queue<string> q;
    q.push("8"); //khoi tao
    q.push("6"); //khoi tao

    vector<string> res;
    while (q.size() > 0) //lap
    {
        string s = q.front();
        q.pop();

        if (s.size() > n) //dieu kien dung
            break;

        if (check(s))
            res.push_back(s);

        q.push(s + "6"); //sinh ra xau tiep theo
        q.push(s + "8"); //sinh ra xau tiep theo
    }

    for (auto x : res)
        cout << x << endl;
}

int main()
{

// #define LOCAL

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