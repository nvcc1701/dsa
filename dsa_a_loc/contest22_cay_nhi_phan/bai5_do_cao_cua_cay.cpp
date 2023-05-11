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

void makeRoot(node *root, int x, char c)
{
    if (c == 'L')
        root->left = new node(x);
    else
        root->right = new node(x);
}

void insertNode(node *root, int u, int v, char c)
{
    if (root == NULL)
        return;
    if (root->data == u)
        makeRoot(root, v, c);
    else
    {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

int res = 0;
void depth(node *root, int cnt)
{
    if (root != NULL)
    {
        depth(root->right, cnt + 1);
        depth(root->left, cnt + 1);
        res = max(res, cnt);
    }
}

void in(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        in(root->left);
        in(root->right);
    }
}

void run_case()
{
    int n;
    cin >> n;

    node *root = NULL;

    for (int i = 0; i < n; i++)
    {
        int u, v;
        char c;

        cin >> u >> v >> c;

        if (root == NULL)
            root = new node(u);
        insertNode(root, u, v, c);
    }

    // in(root);

    depth(root, 0);
    cout << res;
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