#include <stdio.h>
void fun(int i)
{
    if(i==11) return; //<-Base case
    fun(i+1); //10 9 8 7 6 5 4 3 2 1 [recursion e recursion k last e call na kore first kore tahole eta reverse way te kaj kore]
    printf("%d\n",i);
}
int main()
{
    fun(1);
    return 0;
}
