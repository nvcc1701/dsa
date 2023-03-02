#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, string> mp;
    while (n--)
    {
        string s, ss;
        getline(cin, s);
        getline(cin, ss);
        mp[s] = ss;
    }

    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if (mp[s] != "")
            cout << mp[s] << endl;
        else
            cout << "NOT FOUND" << endl;
    }
    return 0;
}