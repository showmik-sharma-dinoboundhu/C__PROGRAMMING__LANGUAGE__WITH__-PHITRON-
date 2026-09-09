#include <stdio.h>
void fun(int n)
{
    //base case
    if(n==0) return;
    int x = n % 10; // vagsesh 6 (123456)
    fun(n / 10);
    printf("%d ", x);
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        int n;
        scanf("%d ", &n);
        if(n==0)
        {
            printf("0");
        }
        fun(n);
        printf("\n");
    }
    return 0;
}

