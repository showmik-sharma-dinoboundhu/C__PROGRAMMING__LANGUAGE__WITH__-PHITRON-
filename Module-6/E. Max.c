#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i,max=INT_MIN,min=INT_MAX,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(max<a)
        {
            max=a;
        }
        else if(min>a)
        {
            min=a;
        }
    }
    printf("%d\n",max);
    printf("%d\n",min);
    return 0;
}




