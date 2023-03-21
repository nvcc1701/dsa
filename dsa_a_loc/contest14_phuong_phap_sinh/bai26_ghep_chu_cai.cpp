#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

char c;
string s = "";
int n;
bool final = false;
vector<string> v;

void generate()
{
    int i = n - 1;
    while (i >= 0 && s[i] > s[i + 1])
        i--;
    if (i == -1)
    {
        final = true;
    }
    else
    {
        int j = n;
        while (s[i] > s[j])
            j--;
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
    }
}

bool check(string s)
{

    bool A = 1, E = 1;

    // neu tim thay a || e o vi tri 0 hoac n.size()-1
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            if ((i != 0) && (i != s.size() - 1))
                A = 0;
        }

        if (s[i] == 'E')
        {
            if (i != 0 && i != s.size() - 1)
                E = 0;
        }
    }

    bool AE = 0;
    if (s.find("AE") != string::npos)
        AE = 1;
    if (s.find("EA") != string::npos)
        AE = 1;
    return ((A && E) || AE);
}

void run_case()
{
    cin >> c;
    c = toupper(c);
    for (char i = 'A'; i <= c; i++)
    {
        s += i;
    }
    n = s.size() - 1;

    while (!final)
    {
        v.push_back(s);
        generate();
    }

    for (auto x : v)
    {
        if (check(x))
            cout << x << endl;
    }
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