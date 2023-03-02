#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string.h>
using namespace std;

vector<int> ke[1005];
bool ok[1005];
int truoc[1005];

void BFS(int u, int v) {
    queue<int> q;
    q.push(u);
    while(q.size() > 0) {
        int top = q.front(); q.pop();
        ok[top] = true;
        if(top == v) return;
        for(int i = 0; i < ke[top].size(); i++) {
            if(!ok[ke[top][i]]) {
                ok[ke[top][i]] = true;
                truoc[ke[top][i]] = top;
                q.push(ke[top][i]);
            }
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
        for(int i = 0; i < 1005; i++)
            ke[i].clear();
        memset(ok, false, sizeof(ok));
        memset(truoc, 1, sizeof(truoc));

        int a, b, dau, cuoi;
        cin >> a >> b >> dau >> cuoi;
        for(int i = 0; i < b; i++) {
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }

        BFS(dau, cuoi);
        Trace(cuoi, dau);
        cout << '\n';
    }
}