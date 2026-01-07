#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min=INT_MAX,pos;
    for(i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            pos=i+1;
        }
    }
    printf("%d %d",min,pos);
    return 0;
}




