#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

vector<int> ke[1005];
bool ok[1005];

void DFS(int u) {
    ok[u] = true;
    cout << u << ' ';
    for(int i = 0; i < ke[u].size(); i++) 
        if(!ok[ke[u][i]])
            DFS(ke[u][i]);
}

int main() {
    int t; cin >> t;
    while(t--) {
        for(int i = 0; i < 1001; i++) {
            ke[i].clear();
        }
        memset(ok, false, sizeof(ok));
        int a, b, nguon;
        cin >> a >> b >> nguon;
        for(int i = 0; i < b; i++) {
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        DFS(nguon);
        cout << '\n';
    }
}