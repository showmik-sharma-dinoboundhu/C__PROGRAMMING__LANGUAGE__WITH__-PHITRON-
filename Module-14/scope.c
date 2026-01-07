#include <stdio.h>
int x=1000;
void fun(void)
{
   // int s=100;
    //printf("fun er add - %p\n",&s);
    printf("%d ",x);
}
int main()
{
    printf("%d ",x);
    fun();
    //int s;
    //printf("main er add - %p",&s);
    return 0;
}
