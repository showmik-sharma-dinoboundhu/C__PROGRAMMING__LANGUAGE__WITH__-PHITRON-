#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j] < a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    long long int sum = 0, count = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]> 0 && count < k)
        {
            sum=sum+a[i];
            count++;
        }
    }
    printf("%lld", sum);
    return 0;
}