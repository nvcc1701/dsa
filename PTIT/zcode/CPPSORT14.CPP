#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int n, a[100005], a2[100005];

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        memset(a2, 0, sizeof(a2));
        memset(a, 0, sizeof(a));

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            a2[a[i]] = 1;
        }
        sort(a, a+n);

        int count = 0;
        int min = a[0], max = a[n-1];
        for(int i = min; i <= max; i++) if(a2[i]==0) count++;
        cout << count << endl;
    }
}