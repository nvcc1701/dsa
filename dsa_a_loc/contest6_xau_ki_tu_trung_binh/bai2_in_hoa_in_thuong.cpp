#include <iostream>
#include <sstream>
using namespace std;

string toUpper(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }

    return s;
}

string toLower(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }

    return s;
}

int main()
{
    string s;
    getline(cin, s);

    cout << toUpper(s) << endl;
    cout << toLower(s);
    return 0;
}