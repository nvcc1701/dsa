#include <bits/stdc++.h>
using namespace std;

void run_case()
{
    string s;
    cin >> s;
    stack<char> stk;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ']')
        {
            string tmp;
            while (stk.top() != '[')
            {
                tmp = stk.top() + tmp;
                stk.pop();
            }
            stk.pop();

            string num_s;
            while (stk.size() && isdigit(stk.top()))
            {
                num_s = stk.top() + num_s;
                stk.pop();
            }

            int num = 1;
            if (num_s.size())
                num = stoi(num_s);

            string tmp1;
            while (num--)
                tmp1 += tmp;

            for (auto x : tmp1)
                stk.push(x);
        }
        else
        {
            stk.push(s[i]);
        }
    }
    string res = "";
    while (stk.size())
    {
        res = stk.top() + res;
        stk.pop();
    }
    cout << res << endl;
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        run_case();
    }
    return 0;
}