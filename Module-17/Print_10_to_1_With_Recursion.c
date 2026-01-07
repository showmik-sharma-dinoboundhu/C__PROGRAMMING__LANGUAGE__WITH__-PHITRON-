#include<stdio.h>
void fun(int i)
{
    if(i==0) return; //<-Base case
    printf("%d\n",i);
    fun(i-1);
}
int main()
{
    fun(10);
    return 0;
}



