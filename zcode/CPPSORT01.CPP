#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n, greater<int>());
        
        int res[n];
        int index = 0;
        for(int i = 0, j = n-1; i <= n/2 || j > n/2; i++, j--) {
            res[index] = a[i]; index++;
            res[index] = a[j]; index++;
        }
        for(int i = 0; i < n; i++) cout << res[i] << " ";
        cout << "\n";
    }
}