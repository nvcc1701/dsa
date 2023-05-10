#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

class Node
{
  public:
    int value;
    Node *left;
    Node *right;
    int height;

    Node(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
        height = 1;
    }
};

class AVLTree
{
  private:
    Node *root;

    int getHeight(Node *node)
    {
        if (node == NULL)
        {
            return 0;
        }
        else
        {
            return node->height;
        }
    }

    int getBalanceFactor(Node *node)
    {
        if (node == NULL)
        {
            return 0;
        }
        else
        {
            return getHeight(node->left) - getHeight(node->right);
        }
    }

    Node *rotateLeft(Node *node)
    {
        Node *newRoot = node->right;
        node->right = newRoot->left;
        newRoot->left = node;
        node->height = max(getHeight(node->left), getHeight(node->right)) + 1;
        newRoot->height = max(getHeight(newRoot->left), getHeight(newRoot->right)) + 1;
        return newRoot;
    }

    Node *rotateRight(Node *node)
    {
        Node *newRoot = node->left;
        node->left = newRoot->right;
        newRoot->right = node;
        node->height = max(getHeight(node->left), getHeight(node->right)) + 1;
        newRoot->height = max(getHeight(newRoot->left), getHeight(newRoot->right)) + 1;
        return newRoot;
    }

    Node *insertNode(Node *node, int value)
    {
        if (node == NULL)
        {
            return new Node(value);
        }
        else if (value < node->value)
        {
            node->left = insertNode(node->left, value);
        }
        else
        {
            node->right = insertNode(node->right, value);
        }
        node->height = max(getHeight(node->left), getHeight(node->right)) + 1;
        int balanceFactor = getBalanceFactor(node);
        if (balanceFactor > 1 && value < node->left->value)
        {
            return rotateRight(node);
        }
        else if (balanceFactor > 1 && value > node->left->value)
        {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }
        else if (balanceFactor < -1 && value > node->right->value)
        {
            return rotateLeft(node);
        }
        else if (balanceFactor < -1 && value < node->right->value)
        {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }
        else
        {
            return node;
        }
    }

    Node *findMin(Node *node)
    {
        while (node->left != NULL)
        {
            node = node->left;
        }
        return node;
    }

    Node *removeNode(Node *node, int value)
    {
        if (node == NULL)
        {
            return NULL;
        }
        else if (value < node->value)
        {
            node->left = removeNode(node->left, value);
        }
        else if (value > node->value)
        {
            node->right = removeNode(node->right, value);
        }
        else
        {
            if (node->left == NULL && node->right == NULL)
            {
                delete node;
                node = NULL;
            }
            else if (node->left == NULL)
            {
                Node *temp = node;
                node = node->right;
                delete temp;
            }
            else if (node->right == NULL)
            {
                Node *temp = node;
                node = node->left;
                delete temp;
            }
            else
            {
                Node *minNode = findMin(node->right);
                node->value = minNode->value;
                node->right = removeNode(node->right, minNode->value);
            }
        }
        if (node == NULL)
        {
            return NULL;
        }
        node->height = max(getHeight(node->left), getHeight(node->right)) + 1;
        int balanceFactor = getBalanceFactor(node);
        if (balanceFactor > 1 && getBalanceFactor(node->left) >= 0)
        {
            return rotateRight(node);
        }
        else if (balanceFactor > 1 && getBalanceFactor(node->left) < 0)
        {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }
        else if (balanceFactor < -1 && getBalanceFactor(node->right) <= 0)
        {
            return rotateLeft(node);
        }
        else if (balanceFactor < -1 && getBalanceFactor(node->right) > 0)
        {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }
        else
        {
            return node;
        }
    }

  public:
    AVLTree()
    {
        root = NULL;
    }

    void insert(int value)
    {
        root = insertNode(root, value);
    }

    void remove(int value)
    {
        root = removeNode(root, value);
    }
};

void run_case()
{
    AVLTree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);
    tree.remove(3);
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