#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare(const map<string, int> &a, const map<string, int> &b)
{
    if (a.begin()->second == b.begin()->second)
    {
        return a.begin()->first < b.begin()->first;
    }
    return a.begin()->second < b.begin()->second;
}

int main()
{
    string s;
    getline(cin, s);

    vector<map<string, int>> v;

    stringstream ss(s);
    while (ss >> s)
    {
        map<string, int> m;
        m[s] = s.size();
        v.push_back(m);
    }

    sort(begin(v), end(v), compare);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].begin()->first << " ";
    }

    return 0;
}