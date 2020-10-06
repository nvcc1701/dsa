#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, a[100][100]; 
vector<string> str;

void init() {
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    str.clear();
}

void Try(int i, int j, string s) {
    if(i == n && j == n) {
        str.push_back(s);
    }
    if(i < n && a[i+1][j]) Try(i+1, j, s+"D");
    if(j < n && a[i][j+1]) Try(i, j+1, s+"R");
    if(a[i+1][j] == 0 || a[i][j+1] == 0) return;
};

int main() {
    int t; cin >> t;
    while(t--) {
        init();

        if(a[1][1] == 0) cout << -1;
        else Try(1, 1, "");        

        sort(str.begin(), str.end());
        for(int i = 0; i < str.size(); i++) cout << str[i] << " ";
        cout << "\n";
    }
}