#include <iostream>
#include <vector>
using namespace std;

struct dataa {
    long long pos;
};


int main() {
    int t; cin >> t;
    while(t--) {
        long long n, x; cin >> n >> x;
        long long a; vector<dataa> dataa(10000000);
        for(long long i = 1; i <= n; i++) {
            cin >> a;
            dataa[a].pos = i;
        }
        cout << dataa[x].pos << endl;
    }
}