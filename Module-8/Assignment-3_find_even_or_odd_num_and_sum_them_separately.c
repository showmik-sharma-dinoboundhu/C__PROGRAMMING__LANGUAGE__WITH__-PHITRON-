#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%2==0)
        {
            sum=sum+i;
            printf("%d",sum);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(n%2==1)
        {
            sum=sum+i;
            printf("%d",sum);
        }
    }


    return 0;
}




