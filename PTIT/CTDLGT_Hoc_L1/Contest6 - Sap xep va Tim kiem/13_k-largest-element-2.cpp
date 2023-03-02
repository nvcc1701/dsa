#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int a, n, x; cin >> n >> x;
        int count = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a == x) count++;
        }

        if(count == 0) cout << -1;
        else cout << count;
        cout << endl;
    }
}