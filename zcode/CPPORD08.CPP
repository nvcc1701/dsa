#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int x, maxx = -1;
        for(int i = 0; i < n; i++) {
            cin >> x;
            maxx = max(maxx, x);
        }
        cout << maxx << endl;
    }
}