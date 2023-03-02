#include <iostream>
using namespace std;

int n, k, x[20];

void Try(int i) {
    for(int j = 0; j <= 1; j++) {
        x[i] = j;
        if(i == n) print();
        else Try(i+1);
    }
}

void print() {
    if(check()) {
        for(int i = 1; i <= n; i++) cout << x[i];
        cout << endl;
    }
}

bool check() {
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(x[i] == 1) count++;
    }
    if(count == 2) return true;
    else return false;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
    }
}