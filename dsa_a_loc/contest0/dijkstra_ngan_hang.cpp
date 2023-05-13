#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int a[1005][1005];
int minDist(int dist[], bool sptSet[], int n)
{
    int min = INT_MAX, min_index;
    for (int v = 1; v <= n; v++)
    {
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
    }

    return min_index;
}

void dijkstra(int n, int src)
{
    int dist[100];
    int truoc[100];
    bool sptSet[100];

    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    dist[src] = 0;
    truoc[src] = 0;
    for (int i = 1; i < n; i++)
    {
        int u = minDist(dist, sptSet, n);
        sptSet[u] = true;

        cout << "Diem co dinh: " << u << endl;
        for (int j = 1; j <= n; j++)
        {
            if (!sptSet[j] && a[i][j] && dist[u] != INT_MAX && dist[u] + a[u][j] < dist[j])
            {
                dist[j] = dist[u] + a[u][j];
                truoc[j] = u;
            }
            cout << "(" << dist[j] << ":" << truoc[j] << ")";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
        cout << truoc[i] << " ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "khoang cach tu diem 1 den " << i << " la " << dist[i] << endl;
}

void run_case()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    dijkstra(n, 1);
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}