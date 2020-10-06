#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

#define ll long long

ll n;

ll largestPrime(ll n) {
    ll res = -1;
    while(n % 2 == 0) {
        res = 2;
        n/=2;
    }
    for(int i = 3; i <= sqrt(n); i += 2) {
        while(n % i == 0) {
            res = i;
            n = n / i;
        }
    }
    if(n > 2) res = n;
    return res;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        cout << largestPrime(n) << "\n";
    }
}