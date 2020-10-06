#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

vector<int> ke[1005];
bool ok[1005];
int truoc[1005];

void DFS(int u, int v) {
    if(ok[v]) return;
    ok[u] = true;
    for(int i = 0; i < ke[u].size(); i++) {
        if(!ok[ke[u][i]]) {
            truoc[ke[u][i]] = u;
            DFS(ke[u][i], v);
        }
    }
}

void Trace(int u, int v) {
    if(!ok[v]) {
        cout << -1;
        return;
    }
    vector<int> a;
    while(u != v) {
        if(u == 0) {
            cout << -1;
            return;
        }
        a.push_back(u);
        u = truoc[u];
    }
    a.push_back(v);
    reverse(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++) 
        cout << a[i] << ' ';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {
        for(int i = 0; i < 1001; i++)
            ke[i].clear();
        memset(ok, false, sizeof(ok));
        memset(truoc, 0, sizeof(truoc));
        int a, b, nguon, dich;
        cin >> a >> b >> nguon >> dich;

        for(int i = 0; i < b; i++) {
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            //ke[v].push_back(u);
        }
        DFS(nguon, dich);
        Trace(dich, nguon);
        cout << '\n';
    }
}