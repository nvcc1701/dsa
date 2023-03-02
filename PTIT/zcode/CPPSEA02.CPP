#include <iostream>
#include <string.h>
using namespace std;

int n, a[1000005];

int main() {
    int t; cin >> t;
    while(t--) {
        int x; cin >> n >> x;
        memset(a, 0, sizeof(a));
        int k;
        for(int i = 0; i < n; i++) {
            cin >> k;
            a[k] = 1;
        }      
        if(a[x] == 1) cout << 1;
        else cout << -1;
        cout << "\n";
    }
}