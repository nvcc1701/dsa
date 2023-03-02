#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    vector<string> v;

    stringstream ss(s);
    while (ss >> s)
        v.push_back(s);

    sort(begin(v), end(v));
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    sort(begin(v), end(v), greater<string>());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}