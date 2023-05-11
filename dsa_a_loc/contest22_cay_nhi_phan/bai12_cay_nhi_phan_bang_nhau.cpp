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

void makeRoot(node *root, int u, int v, char c)
{
    if (c == 'L')
        root->left = new node(v);
    else
        root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c)
{
    if (root == NULL)
        return;
    if (root->data == u)
        makeRoot(root, u, v, c);
    else
    {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

vector<int> v1, v2;
void inorder(node *root, vector<int> &v)
{
    if (root != NULL)
    {
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
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

    int m;
    cin >> m;

    if (n != m)
    {
        cout << "NO";
        return;
    }

    node *root2 = NULL;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        char c;
        cin >> u >> v >> c;
        if (root2 == NULL)
            root2 = new node(u);
        insertNode(root2, u, v, c);
    }

    inorder(root, v1);
    inorder(root2, v2);

    for (int i = 0; i < n; i++)
    {
        if (v1[i] != v2[i])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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