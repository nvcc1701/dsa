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
    Node *next;

    Node(int val)
    {
        value = val;
        next = NULL;
    }
};

class LinkedList
{
  public:
    Node *head;
    Node *tail;
    int size;

  public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void add(int value)
    {
        Node *node = new Node(value);
        if (head == NULL)
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
        size++;
    }

    int remove()
    {
        if (head == NULL)
        {
            throw "LinkedList is empty";
        }
        Node *node = head;
        int value = node->value;
        head = head->next;
        delete node;
        size--;
        return value;
    }

    int getSize()
    {
        return size;
    }
};

class Queue
{
  private:
    LinkedList list;

  public:
    int front()
    {
        if (list.getSize() == 0)
        {
            throw "Queue is empty";
        }
        return list.head->value;
    }

    int size()
    {
        return list.getSize();
    }

    void push(int value)
    {
        list.add(value);
    }

    int pop()
    {
        return list.remove();
    }
};

void run_case()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.front() << endl; // Output: 1
    cout << q.size() << endl;  // Output: 3
    cout << q.pop() << endl;   // Output: 1
    cout << q.pop() << endl;   // Output: 2
    cout << q.pop() << endl;   // Output: 3
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