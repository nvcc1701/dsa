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

void insertNode(node *&root, int x)
{
    if (root == NULL)
        root = new node(x);
    else
    {
        if (x < root->data)
            insertNode(root->left, x);
        else
            insertNode(root->right, x);
    }
}

int cnt = 0;
void traversal(node *root, int level)
{
    if (root == NULL)
        return;

    if (level != 0 && !(!root->left && !root->right))
        ++cnt;
    traversal(root->left, level + 1);
    traversal(root->right, level + 1);
}

void run_case()
{
    int n;
    cin >> n;
    int x;
    node *root = NULL;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        insertNode(root, x);
    }

    cnt = 0;
    traversal(root, 0);
    cout << cnt + 1 << endl;
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