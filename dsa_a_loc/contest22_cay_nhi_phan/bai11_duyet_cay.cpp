#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int in[100];
int pre[100];
int n;

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

void makeNode(node *root, int x, char c)
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
        makeNode(root, v, c);
    else
    {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

node *buildTree(int start, int end)
{
    // cout << start << " " << end << endl;

    if (start > end)
        return NULL;

    if (start == end)
        return new node(in[start]);

    int m = (start + end) / 2;
    node *root = new node(in[m]);

    root->left = buildTree(start, m - 1);
    root->right = buildTree(m + 1, end);

    return root;
}

void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void run_case()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> pre[i];
    for (int i = 1; i <= n; i++)
        cin >> in[i];

    node *root = buildTree(1, n);
    postorder(root);
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