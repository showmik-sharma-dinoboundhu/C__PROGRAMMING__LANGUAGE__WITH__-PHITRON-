#include <stdio.h>
void fun(int i)
{
    if(i==11) return; //<-Base case
    printf("%d\n",i);
    fun(i+1);
}
int main()
{
    fun(1);
    return 0;
}
