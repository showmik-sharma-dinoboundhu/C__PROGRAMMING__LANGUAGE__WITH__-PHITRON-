#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==25)
        {
            continue;
        }printf("%d\n",i);


    }
    return 0;
}
