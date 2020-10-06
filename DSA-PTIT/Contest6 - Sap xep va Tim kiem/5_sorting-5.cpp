#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, n, m; cin >> n >> m;
        int d[100005] = {0};
        for(int i = 0; i < n+m; i++) {
            cin >> a;
            d[a] ++;
        }

        for(int i = 0; i < 100000; i++) 
            if(d[i] > 0) cout << i << " ";
        cout << '\n';
        for(int i = 0; i < 100000; i++)
            if(d[i] > 1) cout << i << " ";
        cout << '\n';
    }
}