#include<stdio.h>
int main()
{
    int t,test;
    scanf("%d",&test);
    for(t=1;t<=test;t++)
    {

    int a,ans=1;
    scanf("%d",&a);
   do
    {
        printf("%d ",a%10);
        a=a/10;
    }
     while(a!=0);
    }
    printf("\n");
    return 0;
}
