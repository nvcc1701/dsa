#include <iostream>
#include <vector>
using namespace std;

vector<bool> ok(1000000, true);
void sieve() {
    ok[0] = ok[1] = false;
    for(long long i = 2; i <= 1000000; i++)
        if(ok[i])
            for(long long j = i*i; j <= 1000000; j+= i)
                ok[j] = false;
}

int main() {
    sieve();
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        bool test = false;
        for(long long i = 2; i <= n; i++) {
            if(ok[i] && ok[n-i]) {
                cout << i << " " << n-i;
                test = true;
                break;  
            }
              
        }
        if(!test) cout << -1;
        cout << endl;
    }
}