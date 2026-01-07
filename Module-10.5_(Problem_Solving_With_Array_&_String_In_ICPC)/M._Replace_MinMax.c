#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=INT_MAX,max=INT_MIN;
    int minIndex,maxIndex;
    for(int i=0;i<n;i++)
    {
        if(a[i] < min)
        {
            min=a[i];
            minIndex=i;
        }
        if(a[i] > max)
        {
            max=a[i];
            maxIndex=i;
        }
    }
    int temp=a[minIndex];
    a[minIndex]=a[maxIndex];
    a[maxIndex]=temp;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}




