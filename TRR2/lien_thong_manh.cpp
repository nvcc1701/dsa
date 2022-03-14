#include <stdio.h>
#include <conio.h>
#include <iostream>
#define MAX 50
#define TRUE 1
#define FALSE 0

using namespace std;

int A[MAX][MAX], n, chuaxet[MAX], solt = 0;

void Read_Data()
{
    int i, j;
    FILE *fp;
    fp = fopen("lienthongmanh.in", "r");
    fscanf(fp, "%d", &n);
    cout << "so dinh cua do thi " << n;
    for (i = 1; i <= n; i++)
    {
        cout << endl;
        for (j = 1; j <= n; j++)
        {
            fscanf(fp, "%d", &A[i][j]);
            cout << A[i][j] << " ";
        }
    }
}

void BFS(int u)
{
    int queue[MAX], low = 1, high = 1, s, t;
    queue[low] = u;
    chuaxet[u] = FALSE;
    while (low <= high)
    {
        s = queue[low];
        ++low;

        for (t = 1; t <= n; t++)
        {
            if (A[s][t] && chuaxet[t])
            {
                ++high;
                queue[high] = t;
                chuaxet[t] = FALSE;
            }
        }
    }
}

void DFS(int u)
{
    int v;
    chuaxet[u] = FALSE;
    for (v = 1; v <= n; v++)
    {
        if (A[u][v] && chuaxet[v])
        {
            DFS(v);
        }
    }
}

void ReInit()
{
    for (int i = 1; i <= n; i++)
    {
        chuaxet[i] = TRUE;
    }
}

int Test_So_Lien_Thong()
{
    for (int u = 1; u <= n; u++)
    {
        if (chuaxet[u])
            return 1;
        return 0;
    }
}

int Strong_Connective()
{
    Read_Data();
    ReInit();
    for (int u = 1; u <= n; u++)
    {
        chuaxet[u] = FALSE;
        if (u == 1)
            DFS(2);
        else
            DFS(1);
        if (Test_So_Lien_Thong())
            return 0;
        ReInit();
    }
    return 1;
}

int main()
{
    if (Strong_Connective())
    {
        cout << "\n do thi co lien thong manh";
    }
    else
    {
        cout << "\n do thi khogn co lien thong manh";
    }
}