#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

map<int, node *> mp;
void insertNode(node *&root, int u, int v, char c)
{
    if (root == NULL)
    {
        mp[u] = new node(u);
        root = mp[u];
    }

    if (c == 'L')
    {
        mp[u]->left = new node(v);
        mp[v] = mp[u]->left;
    }
    else
    {
        mp[u]->right = new node(v);
        mp[v] = mp[u]->right;
    }
}

int res = 0;
void traversal(node *root, int direction) // 0 = left 1 = right
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL && direction == 1)
    {
        res += root->data;
    }

    traversal(root->left, 0);
    traversal(root->right, 1);
}

void run_case()
{
    int n;
    cin >> n;
    node *root = NULL;
    mp.clear();

    for (int i = 0; i < n; i++)
    {
        int u, v;
        char c;
        cin >> u >> v >> c;
        insertNode(root, u, v, c);
    }

    res = 0;
    traversal(root, -1);
    cout << res << endl;
}

int main()
{

    // #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}