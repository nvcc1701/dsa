#include <iostream>
#include <algorithm>
using namespace std;

int k, maxx, n = 8, a[100], b[10][10];

bool check(int i2, int j2) {
    for(int i = 1; i < i2; i++) 
        if(a[i] == j2 || abs(i-i2) == abs(a[i]-j2)) return false;
    return true;
}

void process() {
    int sum = 0;
    for(int i = 1; i <= n; i++) sum += b[i][a[i]];
    if(maxx < sum) maxx = sum; 
}

void Try(int i) {
    for(int j = 1; j <= n; j++) {
        if(check(i, j)) {
            a[i] = j;
            if(i == n) process();
            Try(i+1);
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++) cin >> b[i][j];
        } 
        k = maxx = 0;
        Try(1);
        cout << maxx << endl;
    }
}