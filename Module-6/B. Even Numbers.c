#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("-1");
    }
    for(i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }

    return 0;
}



