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

node *insertNode(node *root, int x)
{
    if (root == NULL)
        return new node(x);

    if (x < root->data)
        root->left = insertNode(root->left, x);
    else if (x > root->data)
        root->right = insertNode(root->right, x);

    return root;
}

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void run_case()
{
    int n;
    cin >> n;

    node *root = NULL;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i == 0)
            root = new node(x);
        else
            insertNode(root, x);
    }

    inorder(root);
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