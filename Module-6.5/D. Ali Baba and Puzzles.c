#include<stdio.h>
int main()
{
    int a,b,c,d,YES,Nao;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (d==a+b+c)
    {
        printf("YES");
    }
    else if (d==a+b*c)
    {
       printf("YES");
    }
    else if (d==a+b-c)
    {
        printf("YES");
    }
    else if (d==a-b+c)
    {
       printf("YES");
    }
    else if (d==a-b*c)
    {
        printf("YES");
    }
    else if (d==(a-b)-c)
    {
        printf("YES");
    }
    else if (d==(a*b)+c)
    {
       printf("YES");
    }
    else if (d==(a*b)*c)
    {
        printf("YES");
    }
    else if (d==(a*b)-c)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
 ///34688642 -851839419 395784949 490743112
