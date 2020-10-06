#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int a, n, m; cin >> n >> m;
        long long min = 10e8+1, max = -10e8-1;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a > max) max = a;
        }
        for(int i = 0; i < m; i++) {
            cin >> a;
            if(a < min) min = a;
        }

        cout << max*min << endl;
    }
}