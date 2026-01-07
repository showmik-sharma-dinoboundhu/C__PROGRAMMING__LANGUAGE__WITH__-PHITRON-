#include<stdio.h>
int main()
{
    long long int i,n,sum=0;
    scanf("%lld",&n);
    long long int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(i=0;i<n;i++)
        {
            sum=sum+ar[i];
        }
        if (sum<0)
            {
                sum=sum*(-1);
            }
    printf("%lld",sum);

    return 0;
}




