#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        vector<long long> a(10000000); 
        vector<long long> d(10000000, 0);
        long long maxx;
        for(long long i = 0; i < n-1; i++) {
            cin >> a[i];
            if(i == 0) maxx = a[i];
            maxx = max(maxx, a[i]);
            d[a[i]]++;
        }

        for(int i = 1; i <= maxx; i++) {
            if(d[i] == 0) cout << i << " ";
        }
        cout << endl;
    }
}