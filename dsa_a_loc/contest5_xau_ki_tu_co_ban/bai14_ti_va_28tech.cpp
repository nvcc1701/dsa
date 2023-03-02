#include <iostream>
#include <sstream>
using namespace std;

int is28Tech(string s)
{
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    if ("28tech" == s)
        return 1;
    return 0;
}

int main()
{
    string s;
    getline(cin, s);

    int cnt = 0;
    stringstream ss(s);
    while (ss >> s)
    {
        if (is28Tech(s))
            cnt++;
    }

    cout << cnt;
    return 0;
}