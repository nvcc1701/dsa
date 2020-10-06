#include <iostream>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

ll lcm(int n) {
    ll ans = 1;
    for(int i = 1; i <= n; i++)
        ans = (ans*i)/gcd(ans, i);
    return ans;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << lcm(n) << "\n";
    }
}