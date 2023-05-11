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

void spiral(node *root)
{
    stack<node *> stk1, stk2;
    stk1.push(root);

    while (stk1.size() || stk2.size())
    {
        while (stk1.size())
        {
            node *top = stk1.top();
            stk1.pop();
            cout << top->data << " ";

            if (top->right != NULL)
                stk2.push(top->right);
            if (top->left != NULL)
                stk2.push(top->left);
        }

        while (stk2.size())
        {
            node *top = stk2.top();
            stk2.pop();
            cout << top->data << " ";

            if (top->left != NULL)
                stk1.push(top->left);
            if (top->right != NULL)
                stk1.push(top->right);
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

    spiral(root);
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