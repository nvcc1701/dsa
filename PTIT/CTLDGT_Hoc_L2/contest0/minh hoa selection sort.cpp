#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;

vector<int> adj[N];
vector<int> radj[N];
bool vis[N];

void dfs(int u) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

void rdfs(int u) {
    vis[u] = true;
    for (int v : radj[u]) {
        if (!vis[v]) {
            rdfs(v);
        }
    }
}

bool isStronglyConnected(int n) {
    memset(vis, false, sizeof(vis));
    dfs(1);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            return false;
        }
    }
    memset(vis, false, sizeof(vis));
    rdfs(1);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            return false;
        }
    }
    return true;
}

bool isWeaklyConnected(int n) {
    memset(vis, false, sizeof(vis));
    dfs(1);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    // đọc dữ liệu đồ thị
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        radj[v].push_back(u);
    }

    if (isStronglyConnected(n)) {
        cout << "The graph is strongly connected." << endl;
    } else if (isWeaklyConnected(n)) {
        cout << "The graph is weakly connected." << endl;
    } else {
        cout << "The graph is not connected." << endl;
    }

    return 0;
}