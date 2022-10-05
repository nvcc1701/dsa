#include <iostream>
using namespace std;

int n, k, a[20];
int ok;

void init() {
    for(int i = 1; i <= k; i++) a[i] = i;
}

void print() {
    for(int i = 1; i <= k; i++) cout << a[i];
    cout << " ";
}

void next_combination() {
    int i = k;
    while(i > 0 && a[i] == n-k+i) i--;
    if(i > 0) {
        a[i] = a[i] +1;
        for(int j = i+1; j <= k; j++) a[j] = a[i]+j-i;
    } else ok = 0;
}

int main() {
    int t; cin >> t;
    while(t--) {
        ok = 1;
        cin >> n >> k;
        init();
        while(ok) {
            print();
            next_combination();
        }
        cout << endl;
    }

    return 0;
}