#include <iostream>
using namespace std;

int n, k, a[1005];

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        for(int i = 1; i <= k; i++) cin >> a[i];

        int i = k;
        while(i > 0 && a[i] == n-k+i) i--;
        if(i > 0) {
            a[i]++;
            for(int j = i+1; j <= k; j++)   
                a[j] = a[i]+j-i;
            for(int i = 1; i <= k; i++) cout << a[i] << " ";
        } else {
            for(int i = 1; i <= k; i++) cout << i << " ";
        }
        cout << endl;
    }
}