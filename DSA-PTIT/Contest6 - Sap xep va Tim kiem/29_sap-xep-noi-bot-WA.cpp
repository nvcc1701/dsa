#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0 ; i < n; i++) {
        cin >> a[i]; 
        b[i] = a[i];
    }

    sort(b, b+n);
    for(int i = 0; i < n; i++) {
        bool ok = false;
        for(int j = 0; j < n; j++) {
            if(a[i] != b[i]) {
                ok = true; 
                break;
            } 
        }
        if(!ok) break;

        for(int j = 0; j < n-1; j++) {
            if(a[j] > a[j+1]) swap(a[j], a[j+1]);
        }
        cout << "Buoc " << i+1 << ": ";
        for(int j = 0; j < n; j++) cout << a[j] << " ";
        cout << endl;
    }
}