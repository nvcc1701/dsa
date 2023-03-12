#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool isPrime(ll n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isDigitPrime(string s)
{
    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7')
        {
            return false;
        }

        sum += (s[i] - '0');
    }

    if (isPrime(sum))
        return true;
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    if (isDigitPrime(s))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}