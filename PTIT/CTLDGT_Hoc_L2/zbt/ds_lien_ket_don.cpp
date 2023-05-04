#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;

void insert_front(struct Node **head, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;

    new_node->next = *head;
    new_node->prev = NULL;

    if ((*head) != NULL)
        (*head)->prev = new_node;
    (*head) = new_node;
}

void display(struct Node *node)
{
    struct Node *last;
    while (node != NULL)
    {
        cout << node->data << "<==>";
        last = node;
        node = node->next;
    }
    if (node == NULL)
    {
        cout << "NULL";
    }
}

void run_case()
{
    struct Node *head = NULL;

    insert_front(&head, 1);
    insert_front(&head, 1);
    insert_front(&head, 1);
    insert_front(&head, 1);
    display(head);
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