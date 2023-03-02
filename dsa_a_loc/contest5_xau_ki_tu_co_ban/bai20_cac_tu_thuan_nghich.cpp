#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int isReversable(string s)
{
    string tmp = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        tmp += s[i];
    }

    if (s == tmp)
        return 1;
    return 0;
}

int main()
{
    string s;
    getline(cin, s);

    vector<string> v;
    stringstream ss(s);
    while (ss >> s)
    {
        if (isReversable(s))
            v.push_back(s);
    }

    sort(begin(v), end(v));
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}