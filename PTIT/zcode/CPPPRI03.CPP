#include <iostream>
#include <math.h>
using namespace std;

#define ll long long;
int n;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n%i == 0) return false;
    }
    return true;
}

void printPrime() {
    for(int i = 2; i <= n; i++)
        if(isPrime(i)) cout << i << " ";
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        printPrime();
    }
}