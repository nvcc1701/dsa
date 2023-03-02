#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

// sort by value
bool cmp(pair<char, int> a, pair<char, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

bool cmp2(pair<char, int> a, pair<char, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

void sort(map<char, int> m)
{
    vector<pair<char, int>> v;
    for (auto it : m)
        v.push_back(it);

    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << endl;

    sort(v.begin(), v.end(), cmp2);
    for (auto it : v)
    {
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{
    string s;
    getline(cin, s);

    map<char, int> m;

    for (int i = 0; i < s.size(); i++)
        m[s[i]]++;

    sort(m);
    return 0;
}