#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

int n, a[100][100];
int check[100][100];
vector<string> str;

void init() {
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    str.clear();
    memset(check, 0, sizeof(check));
};

void Try(int i, int j, string s) {
    if(i == n && j == n) {
        str.push_back(s);
        return;    
    }
    if(i < n && i > 0 && a[i+1][j] && !check[i+1][j]) {
        check[i+1][j] = 1;
        Try(i+1, j, s+"D");
        check[i+1][j] = 0;
    }
    if(j < n && j > 0 && a[i][j+1] && !check[i][j+1]) {
        check[i][j+1] = 1;
        Try(i, j+1, s+"R");
        check[i][j+1] = 0;
    }
    if(j < n && j > 0 && a[i][j-1] && !check[i][j-1]) {
        check[i][j-1] = 1;
        Try(i, j-1, s+"L");
        check[i][j-1] = 0;
    }
    if(i < n && i > 0 && a[i-1][j] && !check[i-1][j]) {
        check[i-1][j] = 1;
        Try(i-1, j, s+"U");
        check[i-1][j] = 0;
    }
    if(a[i+1][j] == 0 || a[i][j+1] == 0 || a[i-1][j] == 0 || a[i][j-1] == 0) return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        init();

        if(a[n][n] == 0) cout << -1;
        else Try(1, 1, "");
        
        sort(str.begin(), str.end());
        for(int i = 0; i < str.size(); i++) cout << str[i] << " ";
        cout << "\n";
    }
}