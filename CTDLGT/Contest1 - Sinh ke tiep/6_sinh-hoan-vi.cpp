#include <iostream>
using namespace std;

int n, x[15], ok;

void init() {
    for(int i = 1; i <= n; i++) x[i] = i;
}

void print() {
    for(int i = 1; i <= n; i++) cout << x[i];
    cout << " ";
}

void next_permutation() {
    int j = n-1;
    while(j > 0 && x[j] > x[j+1]) j--;
    if(j > 0) {
        int k = n;
        while(x[j] > x[k]) k--;
        swap(x[j], x[k]);
        int r = j+1, s = n;
        while(r <= s) {
            swap(x[r], x[s]);
            r++; s--;
        }
    } else ok = 0;
}

int main() {
    int t; cin >> t;
    while(t--) {
        ok = 1;
        cin >> n;
        init();
        while(ok) {
            print();
            next_permutation();
        }
        cout << endl;
    }
}