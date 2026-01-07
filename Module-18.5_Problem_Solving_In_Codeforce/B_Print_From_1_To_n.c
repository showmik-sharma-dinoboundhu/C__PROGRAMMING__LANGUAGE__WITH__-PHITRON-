#include <stdio.h>
void rec(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d \n",i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    rec(n);
    return 0;
}