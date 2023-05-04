#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

struct Stack
{
    int data;
    Stack *next;
} *TOS = NULL;

void Push(int value)
{
    Stack *new_node = new Stack();
    new_node->data = value;
    new_node->next = TOS;
    TOS = new_node;
}

void Pop()
{
    if (TOS == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        Stack *temp;
        temp = TOS;
        TOS = TOS->next;
        temp->next = NULL;
        delete temp;
    }
}

void Print_Stack()
{
    if (TOS == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Top of stack is " << TOS->data << endl;

        if (TOS->next != NULL)
        {
            cout << "Other Elements are : ";
            Stack *current = TOS->next;

            while (current)
            {
                cout << current->data << " ";
                current = current->next;
            }

            cout << endl;
        }
    }
}

void run_case()
{
    for (int i = 0; i < 5; i++)
        Push(i);

    Print_Stack();

    for (int i = 0; i < 6; i++)
        Pop();

    Print_Stack();

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