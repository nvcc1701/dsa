#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long a, b; cin >> a >> b;
        long long Gcd = gcd(a, b);
        long long Lcm = (a*b)/Gcd;

        cout << Lcm << " " << Gcd << "\n";
    }
}