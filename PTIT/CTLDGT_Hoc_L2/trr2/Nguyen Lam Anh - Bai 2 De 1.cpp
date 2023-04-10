#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int n;
int visited[100];

void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
}

// void dfs(int u) // dfs su dung stack
// {
//     stack<int> stk;
//     visited[u] = 1;
//     stk.push(u);
//     cout << u << " ";

//     while (!stk.empty())
//     {
//         int v = stk.top();
//         stk.pop();

//         for (int i = 1; i <= n; i++)
//         {
//             if (a[v][i] && !visited[i])
//             {
//                 cout << i << " ";
//                 visited[i] = 1;
//                 stk.push(v);
//                 stk.push(i);
//                 break;
//             }
//         }
//     }
// }

void dfs(int u) // dfs dung de quy
{
    cout << u << " ";
    visited[u] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (a[u][i] && !visited[i])
        {
            dfs(i);
        }
    }
}

void run_case()
{
}

int main()
{
    init();
    for (int i = 1; i <= n; i++)
    {
        memset(visited, 0, sizeof(visited));
        dfs(i);
        cout << endl;
    }

    return 0;
}

// input:
// 10
// 0 1 0 0 1 0 0 1 0 1
// 0 0 1 0 1 1 0 0 0 0
// 0 0 0 1 0 1 0 0 0 0
// 0 2 0 0 0 1 0 0 0 0
// 0 0 0 1 0 1 1 0 0 0
// 1 0 0 0 0 0 1 0 1 0
// 0 0 0 0 0 0 0 1 1 0
// 1 0 0 0 0 0 0 0 0 1
// 0 1 0 0 0 1 0 0 0 0

// cau b)
// kiem tra line thong:
// dinh 1:1 2 3 4 6 7 8 9 10 5
// dinh 2:2 3 4 6 1 5 7 8 9 10
// dinh 3:3 4 2 5 6 1 8 9 10 7
// dinh 4:4 2 3 6 1 5 7 8 9 10
// dinh 5:5 4 2 3 6 1 8 9 10 7
// dinh 6:6 1 2 3 4 5 7 8 9 10
// dinh 7:7 8 9 1 2 3 4 6 5 10
// dinh 8:8 9 1 2 3 4 6 7 5 10
// dinh 9:9 1 2 3 4 6 7 8 10 5
// dinh 10:10 2 3 4 6 1 5 7 8 9
// cac dinh deu co the duyet qua het do thi nen day la do thi lien thong manh