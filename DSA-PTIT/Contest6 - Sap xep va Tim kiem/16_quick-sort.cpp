#include <iostream>
#include <algorithm>
using namespace std;

int n, a[1000005];


int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
}