#include<stdio.h>
void rec(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("I love Recursion\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    rec(n);
    return 0;
}