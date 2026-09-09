#include<stdio.h>
int main()
{

    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int x,v;            ///x index mane 0.1.2.3.4 jehutu amare 1 input nite hobe
    scanf("%d %d",&x,&v);
    ar[x]=v;                ///x=1 v=100
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}



