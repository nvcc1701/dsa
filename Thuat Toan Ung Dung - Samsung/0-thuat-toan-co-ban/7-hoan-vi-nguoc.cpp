#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int n, a[100], chuaxet[100];
vector< vector<int> > res;

void Try(int i) {
    for(int j = 1; j <= n; j++) {
        if(chuaxet[j]) {
            a[i] = j;
            chuaxet[j] = 0;
            if(i == n) {
                vector<int> v;
                for(int i = 1; i <= n; i++) v.push_back(a[i]);
                res.push_back(v);
            } else Try(i+1);
            chuaxet[j] = 1;
        }
    }
}

void print() {
    for(int i = res.size()-1; i >= 0; i--) {
        for(int j = 0; j < res[i].size(); j++) cout << res[i][j];
        cout << " ";
    }
    cout << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        memset(chuaxet, 1, sizeof(chuaxet));
        res.clear();

        cin >> n;
        Try(1);
        print();
    }
}