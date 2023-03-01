#include <stdio.h>
#include <conio.h>
#include <iostream>
#define MAX 50
#define TRUE 1
#define FALSE 0
int A[MAX][MAX], n, chuaxet[MAX], solt = 0;

void Read_Data()
{
    int i, j;
    FILE *fp;
    fp = fopen("matrix2.in", "r");
    fscanf(fp, "%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = 1; j <= n; j++)
        {
            fscanf(fp, "%d", &A[i][j]);
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
        low = low + 1;
        // printf("%3d", s);
        for (t = 1; t <= n; t++)
        {
            if (A[s][t] && chuaxet[t])
            {
                high = high + 1;
                queue[high] = t;
                chuaxet[t] = FALSE;
            }
        }
    }
}

void ReInit()
{
    for (int i = 1; i <= n; i++)
        chuaxet[i] = TRUE;
}

int Test_So_Lien_Thong()
{
    for (int u = 1; u <= n; u++)
        if (chuaxet[u])
            return (1);
    return (0);
}

int main()
{
    Read_Data();
    ReInit();
    for (int u = 1; u < n; u++)
    {
        for (int v = u + 1; v <= n; v++)
        {
            if (A[u][v])
            { // Neu (u,v) la mot canh
                A[u][v] = 0;
                A[v][u] = 0; // Loai canh
                BFS(1);
                if (Test_So_Lien_Thong())
                    printf("\n Canh %d %d ", u, v);
                A[u][v] = 1;
                A[v][u] = 1;
                ReInit(); // Khoi tao lai mang chuaxet
            }
        }
    }
}