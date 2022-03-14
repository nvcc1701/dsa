#include <stdio.h>
#include <conio.h>
#define MAX 50
#define TRUE 1
#define FALSE 0

int A[MAX][MAX], n, chuaxet[MAX], solt = 0;

void Init()
{
    int i, j;
    FILE *fp;
    fp = fopen("tplt.in", "r");
    fscanf(fp, "%d", &n);
    printf("\n so dinh do thi: %d", n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        chuaxet[i] = TRUE;
        for (j = 1; j <= n; j++)
        {
            fscanf(fp, "%d", &A[i][j]);
            printf("%3d", A[i][j]);
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
        low++;
        printf("%3d", s);
        for (t = 1; t <= n; t++)
        {
            if (A[s][t] && chuaxet[t])
            {
                high++;
                queue[high] = t;
                chuaxet[t] = FALSE;
            }
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
            DFS(v);
    }
}

int main() {
    int u;
    Init();
    for(u = 1; u <= n; u++) {
        if(chuaxet[u]) {
            solt++;
            printf("\n tp lien thong %d:", solt);
            BFS(u);
            //DFS(u);
        }
    }
}