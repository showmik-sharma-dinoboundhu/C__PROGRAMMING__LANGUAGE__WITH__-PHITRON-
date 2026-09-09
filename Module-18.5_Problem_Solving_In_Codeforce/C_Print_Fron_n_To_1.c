#include <stdio.h>
void rec(int n)
{
    if (n == 0) return;
    printf("%d",n);
    if(n>1)
    {
        printf(" ");
    }
    rec(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    rec(n);
    return 0;
}