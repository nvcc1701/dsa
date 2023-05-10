#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

const int MAX_SIZE = 100;

class Queue
{
  private:
    int *arr;
    int capacity;
    int front;
    int rear;

  public:
    Queue(int size)
    {
        arr = new int[size];
        capacity = size;
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        return (rear == capacity - 1);
    }

    bool isEmpty()
    {
        return (front == -1 || front > rear);
    }

    void push(int value)
    {
        if (isFull())
        {
            throw "Queue is full";
        }
        else
        {
            rear++;
            arr[rear] = value;
            if (front == -1)
            {
                front = 0;
            }
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            throw "Queue is empty";
        }
        else
        {
            int value = arr[front];
            front++;
            if (front > rear)
            {
                front = rear = -1;
            }
            return value;
        }
    }

    int getSize()
    {
        if (isEmpty())
        {
            return 0;
        }
        else
        {
            return rear - front + 1;
        }
    }

    int getFront()
    {
        if (isEmpty())
        {
            throw "Queue is empty";
        }
        else
        {
            return arr[front];
        }
    }
};

void run_case()
{
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.getFront() << endl; // Output: 1
    cout << q.getSize() << endl;  // Output: 3
    q.pop();
    cout << q.getFront() << endl; // Output: 2
    cout << q.getSize() << endl;  // Output: 2
    q.push(4);
    q.push(5);
    cout << q.getSize() << endl; // Output: 4
    cout << q.isFull() << endl;  // Output: 1
    cout << q.isEmpty() << endl; // Output: 0
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