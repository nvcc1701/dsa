#include <bits/stdc++.h>

using namespace std;

int n, k;
set<string> se;
string kytu[30];

vector<int> tmp;
// 123
// 124

void print()
{
    for (auto x : tmp)
    {
        cout << kytu[x] << " ";
        // cout << x << " ";
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = i; j <= n; j++)
    {
        tmp.push_back(j);
        if (tmp.size() == k)
        {
            print();
        }
        else
        {
            Try(j + 1);
        }
        tmp.pop_back(); // backtrack
    }
}

int main()
{
    // #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        se.insert(s); // loai bo cac string giong nhau
    }

    n = se.size(); // cap nhat lai n de sinh to hop

    int i = 1;
    for (auto x : se)
    {
        kytu[i] = x;
        i++;
    }

    Try(1);
}