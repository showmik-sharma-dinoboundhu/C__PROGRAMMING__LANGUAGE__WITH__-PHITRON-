#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n+1];
    int count[m+1];
    for(int i=0;i<=m;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        count[a[i]]++;
    }
    for(int i=1;i<=m;i++)
    {
        printf("%d\n",count[i]);
    }
    return 0;
}




