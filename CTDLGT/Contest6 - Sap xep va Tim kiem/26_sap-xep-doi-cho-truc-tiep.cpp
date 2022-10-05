#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n-1; i++) {
        for(int j = i+1; j <= n; j++) 
            if(a[i] > a[j]) swap(a[i], a[j]);
            
        cout << "Buoc " << i << ": ";
        for(int i = 1; i <= n; i++) cout << a[i] << " ";
        cout << endl;
    }
}