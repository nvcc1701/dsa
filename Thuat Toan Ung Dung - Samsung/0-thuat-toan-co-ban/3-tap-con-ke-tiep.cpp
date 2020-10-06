#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >>t;
    while(t--) {
        //nhap
        int n; cin >> n;
        int a[n];
        for(int i = 1; i <= n; i++) cin >> a[i];

        int i = n-1;
        while(i>0 && a[i] > a[i+1]) i--;
        if(i == 0) for(int i = n; i >= 1; i--) cout << a[i] << " ";
        else {
            int k = n;
            while(a[i] > a[k]) k--;
            swap(a[k], a[i]);
            int r = i+1, c = n;
            while(r < c) {
                swap(a[c], a[r]);
                r++; c--;
            }
            for(int j = 1; j <= n; j++) cout << a[j] << " ";
        }
        cout << "\n";
    }
}