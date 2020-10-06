#include <iostream>
#include <algorithm>
using namespace std;

int a1[1000005], a2[1000005];

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        for(int i = 0; i < n; i++) cin >> a1[i];        
        for(int i = 0; i < m; i++) cin >> a2[i];        

        sort(a1, a1+n);
        sort(a2, a2+m);
        cout << a1[n-1]*a2[0] << endl;
    }
}