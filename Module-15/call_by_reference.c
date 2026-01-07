#include <stdio.h>
void fun(int * p)
{
    printf("P er add - %p\n",p);
    printf("main x er value - %d\n",* p);
    * p=500;
    printf("main x er value - %d\n",* p);
}
int main()
{
    int x=100;
    printf("x er add - %p\n",&x);
    fun(&x);
    printf("%d",x);
    return 0;
}
