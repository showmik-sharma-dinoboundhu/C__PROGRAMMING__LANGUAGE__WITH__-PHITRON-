#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for(int i=1;i<=(2*n);i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        if(i<=n-1)
        {
            s--,k=k+2;
        }
        else if(i==n)
        {
        
        }
        // else if(i==n+1)
        // {

        // }
        else
        {
            s++,k=k-2;
        }
    printf("\n");
    }


    return 0;
}