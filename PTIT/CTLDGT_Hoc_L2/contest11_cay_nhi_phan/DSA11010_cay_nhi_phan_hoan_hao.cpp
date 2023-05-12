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

void insertNode(node *root, int u, int v, char c)
{
    if (root == NULL)
        return;
    if (root->data == u)
    {
        if (c == 'L')
            root->left = new node(v);
        else
            root->right = new node(v);
    }
    else
    {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

int level_max = -1;
bool ok = true;
void traversal(node *root, int level)
{
    if (root == NULL)
        return;

    if (!ok)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        if (level_max == -1)
            level_max = level;
        else if (level_max != level)
        {
            ok = false;
            return;
        }
    }
    else
    {
        if (level != 0 && (root->left == NULL || root->right == NULL))
        {
            ok = false;
            return;
        }
        else
        {
            traversal(root->left, level + 1);
            traversal(root->right, level + 1);
        }
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

    ok = true;
    level_max = -1;

    traversal(root, 0);
    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
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