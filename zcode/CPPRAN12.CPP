#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int longestCommonSum(int a1[], int a2[], int n) {
    int a[n];
    for(int i = 0; i < n; i++) a[i] = a1[i] - a2[i];
    map<int, int> m;
    int sum = 0;
    int max_length = 0;
    
    for(int i = 0; i < n; i++) {
        sum += a[i];
        if(sum == 0) max_length = i+1;
        if(m.find(sum) != m.end()) max_length = max(max_length, i - m[sum]);
        else m[sum] = i;
    }
    return max_length;
}
// 0 1 01111
// 1 1 11101
//-1 0-1 0010 <- a[i]
//-1-1-2-2-2 <- sum
//0123456 <- map


int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a1[n], a2[n];
        for(int i = 0; i < n; i++) cin >> a1[i];
        for(int i = 0; i < n; i++) cin >> a2[i];
        cout <<longestCommonSum(a1, a2, n) << endl;
    }
}