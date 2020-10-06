#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[k];
        for(int i = 1; i <= k; i++) cin >> a[i];
        
        int i = k;
        while(a[i] == n-k+i)
        //1 2 6 7 8 9 -> 1 2 6 7 9 8
    }
}