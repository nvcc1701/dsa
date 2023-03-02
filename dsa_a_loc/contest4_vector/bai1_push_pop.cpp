#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    vector<int> v;

    cin >> n;
    getline(cin, s);
    while (n--)
    {
        getline(cin, s);
        istringstream ss(s);
        int a, b;
        ss >> a;
        if (a == 1)
        {
            ss >> b;
            v.push_back(b);
        }
        else if (a == 2 && !v.empty())
        {
            v.pop_back();
        }
    }

    if (v.empty())
        cout << "EMPTY";
    else
    {
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
    }
}