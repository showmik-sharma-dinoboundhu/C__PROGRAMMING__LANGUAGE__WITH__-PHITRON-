#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i] < min)
        {
            min=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
       if(a[i]==min)
       {
        count++;
       }
    }
    if(count % 2 == 1)
    {
        printf("Lucky");
    }
    else 
    {
        printf("Unlucky");
    }
    return 0;
}