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

    Node(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
    }
};

class BST
{
  private:
    Node *root;

    Node *insertNode(Node *node, int value)
    {
        if (node == NULL)
        {
            return new Node(value);
        }
        if (value < node->value)
        {
            node->left = insertNode(node->left, value);
        }
        else
        {
            node->right = insertNode(node->right, value);
        }
        return node;
    }

    Node *removeNode(Node *node, int value)
    {
        if (node == NULL)
        {
            return NULL;
        }
        if (value < node->value)
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
                Node *temp = findMin(node->right);
                node->value = temp->value;
                node->right = removeNode(node->right, temp->value);
            }
        }
        return node;
    }

    Node *findNode(Node *node, int value)
    {
        if (node == NULL)
        {
            return NULL;
        }
        else if (value < node->value)
        {
            return findNode(node->left, value);
        }
        else if (value > node->value)
        {
            return findNode(node->right, value);
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

    Node *rotateLeft(Node *node)
    {
        Node *newRoot = node->right;
        node->right = newRoot->left;
        newRoot->left = node;
        return newRoot;
    }

    Node *rotateRight(Node *node)
    {
        Node *newRoot = node->left;
        node->left = newRoot->right;
        newRoot->right = node;
        return newRoot;
    }

    void preOrderTraversal(Node *node)
    {
        if (node != NULL)
        {
            cout << node->value << " ";
            preOrderTraversal(node->left);
            preOrderTraversal(node->right);
        }
    }

    void inOrderTraversal(Node *node)
    {
        if (node != NULL)
        {
            inOrderTraversal(node->left);
            cout << node->value << " ";
            inOrderTraversal(node->right);
        }
    }

    void postOrderTraversal(Node *node)
    {
        if (node != NULL)
        {
            postOrderTraversal(node->left);
            postOrderTraversal(node->right);
            cout << node->value << " ";
        }
    }

  public:
    BST()
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

    Node *find(int value)
    {
        return findNode(root, value);
    }

    void rotateLeft()
    {
        root = rotateLeft(root);
    }

    void rotateRight()
    {
        root = rotateRight(root);
    }

    void preOrder()
    {
        preOrderTraversal(root);
    }

    void inOrder()
    {
        inOrderTraversal(root);
    }

    void postOrder()
    {
        postOrderTraversal(root);
    }
};

void run_case()
{
    BST tree;

    // Thêm các nút vào cây
    tree.insert(8);
    tree.insert(3);
    tree.insert(6);
    tree.insert(1);
    tree.insert(10);
    tree.insert(14);
    tree.insert(13);

    // Duyệt cây theo thứ tự trước
    cout << "Pre-order traversal: ";
    tree.preOrder();
    cout << endl;

    // Duyệt cây theo thứ tự giữa
    cout << "In-order traversal: ";
    tree.inOrder();
    cout << endl;

    // Duyệt cây theo thứ tự sau
    cout << "Post-order traversal: ";
    tree.postOrder();
    cout << endl;

    // Tìm kiếm một nút trên cây
    Node *node = tree.find(6);
    if (node != NULL)
    {
        cout << "Found node with value " << node->value << endl;
    }
    else
    {
        cout << "Node not found" << endl;
    }

    // Xoay trái cây tìm kiếm
    tree.rotateLeft();

    // Loại bỏ một nút khỏi cây
    tree.remove(10);

    // Duyệt cây theo thứ tự giữa sau khi xoay trái và loại bỏ nút
    cout << "In-order traversal after rotate left and remove node: ";
    tree.inOrder();
    cout << endl;
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