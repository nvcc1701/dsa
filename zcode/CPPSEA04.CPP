#include <iostream>
#include <vector>
using namespace std;

vector<int> a(10000005, -1);

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        int l;
        for(int i = 0; i < n; i++) {
            cin >> l;
            a[l] = i;
        }
        cout << a[x]+1 << "\n";
    }
}