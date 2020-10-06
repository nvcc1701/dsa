#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        while(q--) {
            int l, r; cin >> l >> r;
            int sum = 0;
            for(int i = l-1; i < r; i++) sum += a[i];
            cout << sum << "\n";
        }
    }
}