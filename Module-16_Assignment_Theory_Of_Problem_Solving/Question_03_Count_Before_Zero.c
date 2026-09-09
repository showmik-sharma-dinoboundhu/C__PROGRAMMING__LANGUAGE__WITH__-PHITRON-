#include <stdio.h>
void count(int n, int a[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    printf("%d", count);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    count(n, a);
    return 0;
}
