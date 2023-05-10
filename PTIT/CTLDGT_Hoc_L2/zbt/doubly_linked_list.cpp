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
    int data;
    Node *prev;
    Node *next;
};

Node *head = NULL; // Con trỏ trỏ tới đầu danh sách liên kết kép

// Tạo nút mới trong danh sách liên kết kép
Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Thêm phần tử vào đầu danh sách liên kết kép
void insertAtBeginning(int data)
{
    Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

// Thêm phần tử vào cuối danh sách liên kết kép
void insertAtEnd(int data)
{
    Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Duyệt danh sách liên kết kép từ đầu đến cuối
void forwardTraverse()
{
    Node *temp = head;
    cout << "Danh sach lien ket kep: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Duyệt danh sách liên kết kép từ cuối đến đầu
void backwardTraverse()
{
    Node *temp = head;
    if (temp == NULL)
        return; // Nếu danh sách rỗng thì không duyệt
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    cout << "Danh sach lien ket kep: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void run_case()
{
    insertAtBeginning(10);
    insertAtBeginning(5);
    insertAtEnd(20);
    insertAtEnd(25);
    forwardTraverse(); // Output
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