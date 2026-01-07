#include <stdio.h>
void fun(int x)
{
    x=20;
    printf("fun x er add - %p\n",&x);
}
int main()
{
    int x=10;
    printf("main x er add - %p\n",&x);
    fun(x);
    printf("main x er value - %d\n",x);
    return 0;
}
