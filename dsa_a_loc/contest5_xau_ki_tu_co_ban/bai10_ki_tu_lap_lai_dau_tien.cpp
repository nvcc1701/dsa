#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt[256] = {0};

    int flag = 0;

    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i]]++;
        if (cnt[s[i]] == 2)
        {
            cout << s[i];
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "NONE";
    return 0;
}