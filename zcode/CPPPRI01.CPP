#include <iostream>
#include <math.h>
using namespace std;

#define ll long long

ll n; 

void primeFactor(ll n) {
    while(n%2 == 0) {
        cout << 2 << " ";
        n/=2;
    }
    for(int i = 3; i <= sqrt(n); i+=2) {
        while(n%i == 0) {
            cout << i << " ";
            n/= i;
        }
    }
    if(n > 2) cout << n << " ";
    cout << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        primeFactor(n);
    }
}