#include <iostream>
using namespace std;

int s, p, n, k, sum, a[100], snt[100]; 

void sieve() {
    bool prime[200];
    for(int i = 2; i <= 200; i++) prime[i] = true;
    for(int i = 2; i <= 200; i++) {
        if(prime[i] == true) {
            for(int j = 2*i; j <= 200; j += i)
                prime[j] = false;
        }
    }
    int k = 1;
    for(int i = 2; i <= 200; i++) {
        if(prime[i] == true) {
            snt[k] = i; k++;
        }
    }
}

void proccess() {
    sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += snt[a[i]];
    }
    if(sum == s) {
        for(int i = 1; i <= n; i++) cout << snt[a[i]] << " ";
        cout << endl;
    }
    
}

// void Try(int i) {
//     for(int j = a[i-1] + 1; j <= k-n+i; j++) {
//         a[i] = j;
//         if(i == k) {
//             if(sum == s) break;
//             proccess();
//         }
//         else Try(i+1);
//     }   
// }

void gen() {
    for(int i = 1; i <= n; i++) {
        a[i] = 1;
    }
    proccess();

    int j = n;
    while(a[1] < k) {
        if(a[j] == k) j--;
        a[j]++;
        proccess();
    }
 
}

int main() {
    int t; cin >> t; sieve();
    while(t--) {
        cin >> n >> p >> s; int start = k = 0;
        for(int i = 1; snt[i] <= p; i++) start++; for(int i = start+1; snt[i] <= s; i++) k++;

        gen(); cout << endl;
    }
}