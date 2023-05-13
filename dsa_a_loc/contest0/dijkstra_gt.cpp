#include <conio.h>
#include <dos.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define TRUE 1
#define FALSE 0
int n, s, t;
char chon;
int truoc[MAX], d[MAX], CP[MAX][MAX];
int final[MAX];

void Init(void)
{
    FILE *fp;
    int i, j;
    fp = fopen("ijk1.in", "r");
    fscanf(fp, "% d", &n);
    printf("\n So dinh : % d", n);
    printf("\n Ma tran khoang cach :");
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = 1; j <= n; j++)
        {
            fscanf(fp, "% d", &CP[i][j]);
            printf("% 3d", CP[i][j]);
            if (CP[i][j] == 0)
                CP[i][j] = 32000;
        }
    }
    fclose(fp);
}
void Result(void)
{
    int i, j;
    printf("\n Duong di ngan nhat tu % d den % d la\n", s, t);
    printf("% d <=", t);
    i = truoc[t];
    while (i != s)
    {
        printf("% d <=", i);
        i = truoc[i];
    }
    printf("% d", s);
    printf("\n Do dai duong di la : % d", d[t]);
    getch();
}
void Dijkstra(void)
{
    int v, u, minp;
    printf("\n Tim duong di tu s =");
    scanf("% d", &s);
    printf(" den ");
    scanf("% d", &t);
    for (v = 1; v <= n; v++)
    {
        d[v] = CP[s][v];
        truoc[v] = s;
        final[v] = FALSE;
    }
    truoc[s] = 0;
    d[s] = 0;
    final[s] = TRUE;
    while (!final[t])
    {
        minp = 2000;
        for (v = 1; v <= n; v++)
        {
            if ((!final[v]) && (minp > d[v]))
            {
                u = v;
                minp = d[v];
            }
        }
        final[u] = TRUE; // u- la dinh co nhan tam thoi nho nhat
        if (!final[t])
        {
            for (v = 1; v <= n; v++)
            {
                if ((!final[v]) && (d[u] + CP[u][v] < d[v]))
                {
                    d[v] = d[u] + CP[u][v];
                    truoc[v] = u;
                }
            }
        }
    }
}
void main(void)
{
    Init();
    Dijkstra();
    Result();
    getch();
}