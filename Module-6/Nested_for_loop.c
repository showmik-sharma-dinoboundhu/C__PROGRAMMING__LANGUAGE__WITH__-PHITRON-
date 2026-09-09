///Next level way:
#include<stdio.h>
int main()
{
    int i,j,m,n;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

///simple way:



#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
