#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp1(pair<string, int> a, pair<string, int> b)
{
    return a.first < b.first;
}

bool cmp2(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    string s;
    getline(cin, s);

    vector<pair<string, int>> v;

    stringstream ss(s);
    int i = 0;
    while (ss >> s)
    {
        pair<string, int> p;
        p.first = s;
        p.second = s.size();
        v.push_back(p);
    }

    sort(begin(v), end(v), cmp1);
    for (auto it : v)
        cout << it.first << " ";
    cout << endl;

    sort(begin(v), end(v), cmp2);
    for (auto it : v)
        cout << it.first << " ";
    return 0;
}