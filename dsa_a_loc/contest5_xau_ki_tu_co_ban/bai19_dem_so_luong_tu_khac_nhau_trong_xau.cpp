#include <iostream>
#include <sstream>
#include <map>
using namespace std;

string toNomarlize(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }

    return s;
}

int main()
{
    string s;
    getline(cin, s);
    map<string, int> m;

    stringstream ss(s);
    while (ss >> s)
    {
        m[toNomarlize(s)]++;
    }

    cout << m.size();
    return 0;
}