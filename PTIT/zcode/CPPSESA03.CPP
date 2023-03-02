#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n;
        vector<int> a(10000005, 0);

        for(int i = 1; i <= n-1; i++) {
            cin >> x;
            a[x] = 1;
        }
        for(int i = 1; i <= n-1; i++) {
            if(a[i] == 0) cout << i << "\n";
        }
    }
}