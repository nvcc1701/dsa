#include <stdio.h>
#include <conio.h>
#include <iostream>
#define MAX 50
#define TRUE 1
#define FALSE 0

int A[MAX][MAX], n, chuaxet[MAX], truoc[MAX], s, t;

void Init()
{
    int i, j;
    FILE *fp;
    fp = fopen("tim_duong_di.in", "r");
    fscanf(fp, "%d", &n);
    printf("\n so dinh do thi: %d", n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        chuaxet[i] = TRUE;
        truoc[i] = 0;
        for (j = 1; j <= n; j++)
        {
            fscanf(fp, "%d", &A[i][j]);
            printf("%3d", A[i][j]);
        }
    }
}

void DFS(int u)
{
    int v;
    printf("%3d", u);
    chuaxet[u] = FALSE;
    for (v = 1; v <= n; v++)
    {
        if (A[u][v] && chuaxet[v])
        {
            truoc[v] = u;
            DFS(v);
        }
    }
}

void BFS(int i)
{
    int queue[MAX], low = 1, high = 1, u, v;
    queue[low] = i;
    chuaxet[i] = FALSE;
    while (low <= high)
    {
        u = queue[low];
        ++low;
        for (v = 1; v <= n; v++)
        {
            if (A[u][v] && chuaxet[v])
            {
                ++high;
                queue[high] = v;
                truoc[v] = u;
                chuaxet[v] = FALSE;
            }
        }
    }
}

void Duongdi()
{
    if (truoc[t] == 0)
    {
        printf("\n khogn ton tai duong di");
        getch();
        return;
    }

    printf("\n duong di:");
    int j = t;
    printf("%3d<=", j);
    while (truoc[j] != s)
    {
        printf("%3d<=", truoc[j]);
        j = truoc[j];
    }
    printf("%3d", s);
    getch();
}

int main()
{
    Init();
    printf("\n dinh dau: ");
    scanf("%d", &s);
    printf("\n dinh cuoi: ");
    scanf("%d", &t);
    // DFS(s);
    BFS(s);
    Duongdi();
}