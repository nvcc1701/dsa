#include <iostream>
using namespace std;


int firstMissingInt(int a[], int n) {
    bool present[n+1] = {false};
    for(int i = 0; i < n; i++) {
        if(a[i] > 0 && a[i] <= n)
            present[a[i]] = true;
    }

    for(int i = 1; i <= n; i++) {
        if(!present[i]) return i;
    }
    return n+1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << firstMissingInt(a, n) << endl;
    }
}