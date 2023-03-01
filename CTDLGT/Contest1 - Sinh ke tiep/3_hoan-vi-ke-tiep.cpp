#include <iostream>
using namespace std;

int n, a[1005];

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];

        int j = n-1;
        while(j > 0 && a[j] > a[j+1]) j--;
        if(j > 0) {
            int k = n;
            while(a[j] > a[k]) k--;
            swap(a[j], a[k]);
            int r = j+1, s = n;
            while(r <= s) {
                swap(a[r],a[s]);
                r++; s--;
            }
            for(int i = 1; i <= n; i++) cout << a[i] << ' ';
        } else {
            for(int i = n; i >= 1; i--) cout << a[i] << ' ';
        }
        cout << endl;
    }
}