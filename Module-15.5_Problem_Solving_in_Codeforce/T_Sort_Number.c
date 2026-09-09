#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int min,mid,max;

    //MAX:
    if(a>=b && a>=c)
    {
        max=a;
    }
    else if(b>=a && b>=c)
    {
        max=b;
    }
    else
    {
        max=c;
    }

    //MIN:
    if(a<=b && a<=c)
    {
        min=a;
    }
    else if(b<=a && b<=c)
    {
        min=b;
    }
    else
    {
        min=c;
    }

    //MID:
    mid=a+b+c-min-max;

    printf("%d\n%d\n%d\n\n",min,mid,max);
    printf("%d\n%d\n%d\n",a,b,c);

    return 0;
}
