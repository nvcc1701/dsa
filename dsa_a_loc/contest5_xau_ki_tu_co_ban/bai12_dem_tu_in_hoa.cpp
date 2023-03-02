#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

int isCapital(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (!isupper(s[i]))
            return 0;
    }
    return 1;
}

int main()
{
    string s;
    // input A LINE
    getline(cin, s);
    int cnt = 0;

    string tmp;
    stringstream ss(s);
    // loop through all words
    while (ss >> tmp)
    {
        if (isCapital(tmp))
            cnt++;
    }

    cout << cnt;
    return 0;
}