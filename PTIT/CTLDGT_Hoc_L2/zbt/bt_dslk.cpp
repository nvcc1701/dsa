#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

#include <iostream>
using namespace std;

class Node
{
  public:
    int data;
    Node *next;
};

class Stack
{
  private:
    Node *topNode; // Con trỏ trỏ tới phần tử đầu (top) của ngăn xếp
    int count;     // Số phần tử trong ngăn xếp
  public:
    Stack()
    {
        topNode = NULL;
        count = 0;
    }

    // Kiểm tra xem ngăn xếp có rỗng không
    bool isEmpty()
    {
        return topNode == NULL;
    }

    // Lấy số phần tử hiện có trong ngăn xếp
    int size()
    {
        return count;
    }

    // Đưa một phần tử vào đầu ngăn xếp
    void push(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = topNode;
        topNode = newNode;
        count++;
    }

    // Lấy phần tử trên đầu ngăn xếp
    int top()
    {
        if (isEmpty())
        {
            cout << "Ngan xep rong!" << endl;
            return -1;
        }
        return topNode->data;
    }

    // Loại bỏ phần tử trên đầu ngăn xếp
    void pop()
    {
        if (isEmpty())
        {
            cout << "Ngan xep rong!" << endl;
            return;
        }
        Node *temp = topNode;
        topNode = topNode->next;
        delete temp;
        count--;
    }
};

void run_case()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // Lấy kích thước ngăn xếp và in ra phần tử trên đầu
    cout << "Kich thuoc cua ngan xep: " << s.size() << endl;
    cout << "Phan tu tren dau ngan xep: " << s.top() << endl;

    // Loại bỏ phần tử trên đầu và in ra kết quả
    s.pop();
    cout << "Phan tu tren dau ngan xep sau khi pop: " << s.top() << endl;
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