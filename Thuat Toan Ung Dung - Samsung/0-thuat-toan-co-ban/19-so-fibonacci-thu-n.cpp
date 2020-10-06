#include <iostream>
#include <vector>
using namespace std;

long long mod = 10e9+7;

long long f[1000000005];

long long fi(long long n) {
    if(n == 0 || n == 1) return 1;
    
    if(f[n] != 0) return f[n];
    
    f[n] = fi(n-1)%mod + fi(n-2)%mod;
    return f[n];
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        cout << fi(n) << "\n";
    }
}