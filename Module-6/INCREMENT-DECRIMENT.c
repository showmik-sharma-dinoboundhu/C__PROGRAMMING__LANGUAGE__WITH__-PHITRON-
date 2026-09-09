
#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&i);
    x=i++;
    printf("x=%d i=%d\n",x,i);

    x=++i;
    printf("x=%d i=%d\n",x,i);

    x=--i;
    printf("x=%d i=%d\n",x,i);

    x=i--;
    printf("x=%d i=%d\n",x,i);

    return 0;
}



