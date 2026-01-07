#include <stdio.h>
int main()
{
    int x=100;
    int * ptr=&x;
    x=200;
    //x ar *ptr same .. mane x er jei value *ptr er o same value
    

    printf("x er address - %p\n",&x);
    printf("ptr er address - %p\n",ptr);
    printf("ptr er value - %p\n",&ptr);
    printf("x er value - %d\n",x);
    printf("x er value - %d\n",*ptr);
    printf("ptr er memory size - %d\n",sizeof(ptr));
    return 0;
}
