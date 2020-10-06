#include <iostream>
#include <vector>
using namespace std;

int n; int s[10000];

void sieve() {
    vector<bool> prime(n, false);
    for(int i = 2; i <= n; i+= 2) s[i] = 2;

    for(int i = 3; i <= n; i+=2) {
        if(prime[i] == false) {
            s[i] = i;
            for(int j = i; j*i <= n; j+=2) {
                if(prime[i*j] == false) {
                    prime[i*j] = true;
                    s[i*j] = i;
                }
            }
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
    }
}