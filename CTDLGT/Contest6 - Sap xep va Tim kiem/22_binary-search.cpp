#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int a, n, x; cin >> n >> x;
        vector<int> d(1000005);
        for(int i = 0; i < n; i++) {
            cin >> a;
            d[a]++;
        }
        if(d[x] == 0) cout << -1;
        else cout << 1;
        cout << endl;
    }
}