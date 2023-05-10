#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;


struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertAtEnd(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

void insertAtPosition(int value, int position)
{
    Node *newNode = new Node();
    newNode->data = value;
    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *current = head;
        for (int i = 1; i < position - 1 && current != NULL; i++)
        {
            current = current->next;
        }
        if (current != NULL)
        {
            newNode->next = current->next;
            current->next = newNode;
        }
        else
        {
            cout << "Position out of range" << endl;
        }
    }
}

void deleteAtPosition(int position)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    if (position == 1)
    {
        head = temp->next;
        delete temp;
        return;
    }
    for (int i = 1; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        cout << "Position out of range" << endl;
        return;
    }
    Node *nextNode = temp->next->next;
    delete temp->next;
    temp->next = nextNode;
}

void updateValueAtPosition(int value, int position)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    for (int i = 1; temp != NULL && i < position; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Position out of range" << endl;
        return;
    }
    temp->data = value;
}

void printList()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void run_case()
{
    // Tạo danh sách liên kết đơn
    insertAtEnd(5);
    insertAtEnd(10);
    insertAtEnd(15);
    insertAtEnd(20);
    cout << "Danh sach lien ket don ban dau: ";
    printList(); // Output: Danh sach lien ket don ban dau: 5 10 15 20

    // Thêm phần tử vào danh sách liên kết đơn tại vị trí x
    insertAtPosition(25, 3);
    cout << "Danh sach lien ket don sau khi them phan tu: ";
    printList(); // Output: Danh sach lien ket don sau khi them phan tu: 5 10 25 15 20

    // Xóa phần tử từ danh sách liên kết đơn tại vị trí x
    deleteAtPosition(2);
    cout << "Danh sach lien ket don sau khi xoa phan tu: ";
    printList(); // Output: Danh sach lien ket don sau khi xoa phan tu: 5 25 15 20

    // Sửa giá trị cho phần tử tại vị trí x trong danh sách liên kết đơn
    updateValueAtPosition(30, 2);
    cout << "Danh sach lien ket don sau khi sua gia tri phan tu: ";
    printList(); // Output: Danh sach lien ket don sau khi sua gia tri phan tu: 5 30 15 20
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