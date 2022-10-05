#include<stdio.h>
 
int main()
{
    long n,i,j;
    long m;
    long *a;
    long t;
    long long T=0,S=0;
    scanf("%ld%ld",&n,&m);
    a=new long [n+5];
    for(i=1;i<=n;i++)
            scanf("%ld",&a[i]);
    long *C=new long [n+5];
    for(j=1;j<=m;j++)C[j]=m+1;
    C[0]=0;
    for(i=1;i<=n;i++)
    for(j=a[i];j<=m;j++)
    if(C[j]>1+C[j-a[i]]) C[j]=1+C[j-a[i]];
     
    if(C[m]==m+1) printf("-1");
    else printf("%ld",C[m]);
     
}
