#include <stdio.h>
#include <limits.h>
void max_min(int n)
{
    int a,max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if (a < min)
        {
            min = a;
        }
        else if (a > max)
        {
            max = a;
        }
    }
    printf("%d %d ",min,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    max_min(n);
    return 0;
}
