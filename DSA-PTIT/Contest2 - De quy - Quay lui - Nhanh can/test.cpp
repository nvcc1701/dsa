#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i*i <= (n); i++) 
        if(n % i == 0) return false;
    return true;
}

int factorSum(int n)
{
    int sum = 0;
    for(int i = 2; i*i <= n; i++) {
        if(isPrime(i)) sum += i;
    }
    if(isPrime(sum)) return sum;
    return factorSum(sum);
}


int main() {
    cout << factorSum(35);
}


