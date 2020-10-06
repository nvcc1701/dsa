#include <iostream>
#include <math.h>
using namespace std;
int k = 0, a[100];

bool check(int i2, int j2) {
    for(int i = 1; i < i2; i++) 
        if(a[i] == j2 || abs(i-i2) == abs(a[i] - j2)) return false;
    return true;
}

void Try(int i, int n) {
    for(int j = 1; j <= n; j++) {
        if(check(i, j)) {
            a[i] = j;
            if(i == n) k++;
            Try(i+1, n);
        }
    }
}

int main() {
    int n; cin >> n;
    Try(1, n);
    cout << k;
}