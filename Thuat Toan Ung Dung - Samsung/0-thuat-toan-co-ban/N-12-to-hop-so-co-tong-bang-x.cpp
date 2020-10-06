#include <iostream>
#include <vector>
using namespace std;

int n, x, a[105];
vector< vector<int> > res;

void Try(int i, int sum, vector<int> v) {
    for(int i = 1; i <= n; i++) {
        if(sum > x) return;
        if(sum == x) {
            res.push_back(v);
            return;
        } else {
            for(int j = i; j <= n;)
        }
    }

}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> x;
        for(int i = 1; i <= n; i++) cin >> a[i];

        }
    }
}