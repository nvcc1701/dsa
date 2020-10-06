#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        //nhap
        int n, k; cin >> n >> k;
        int a[k];
        for(int i = 1; i <= k; i++) cin >> a[i];

        // tim phan tu gioi han
        int i = k;
        while(a[i] == n-k+i) i--;
        
        // thay doi va in
        if(i == 0) for(int j = 1; j <= k; j++) cout << j << " ";
        else {
            a[i]++;
            int p = a[i];
            while(i <= k) a[i++] = p++;
            for(int j = 1; j <= k; j++) cout << a[j] << " ";
        } 
        
        cout << "\n";
    }
}