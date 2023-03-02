#include <iostream>
using namespace std;

void sol(string s, string in)
{
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == in[0] && (i + in.size() <= s.size()))
        {
            for (int j = 1; j < in.size(); j++)
            {
                if (s[i + j] == in[j])
                {
                    if (j == in.size() - 1)
                        flag = 1;
                }
            }
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    string s, in;
    cin >> s >> in;
    sol(s, in);
    return 0;
}